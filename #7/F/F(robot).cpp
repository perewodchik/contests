#include <iostream>
using namespace std;

bool a[2100][2100];

struct Robot {
	int x;
	int y;
	char look;
	Robot(int a, int b)
	{
		this->x = a;
		this->y = b;
		this->look = 'D';
	}
};

/*����� ����� ��������
	W = ������
	D = ������
	S = ����
	A = �����
*/

int main()
{
	freopen("robot.in", "r", stdin);
	freopen("robot.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	Robot* robot = new Robot(1050,1050);
	a[robot->x][robot->y] = true;
	
	int N, count;
	char s[1000], ch;
	cin >> N;
	count = 1;
	cin >> s;
	for(int i = 0; i < N; i++)
	{
		ch = s[i];
		switch (ch)
		{
			//����� ������
			case 'E':
				cout << count << " ";
				break;
			//������� ������ �������
			case 'L':
				switch (robot->look)
				{
					case 'W':
						robot->look = 'A';
						break;
					case 'A':
						robot->look = 'S';
						break;
					case 'S':
						robot->look = 'D';
						break;
					case 'D':
						robot->look = 'W';
						break;
				}
				break;
			//������� �� �������
			case 'R':
				switch (robot->look)
				{
					case 'W':
						robot->look = 'D';
						break;
					case 'D':
						robot->look = 'S';
						break;
					case 'S':
						robot->look = 'A';
						break;
					case 'A':
						robot->look = 'W';
						break;
				}
				break;
			//�������� ������
			case 'F':
				switch (robot->look)
				{
					case 'W':
						robot->y++;
						break;
					case 'S':
						robot->y--;
						break;
					case 'A':
						robot->x--;
						break;
					case 'D':
						robot->x++;
						break;
				}
				//���� ����� ��� �� ��� �� ������
				if(!a[robot->x][robot->y])
					count++;
				a[robot->x][robot->y] = true;
				break;
		}
	}
	return 0;
}
