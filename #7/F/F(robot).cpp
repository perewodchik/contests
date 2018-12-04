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

/*Робот может смотреть
	W = наверх
	D = вправо
	S = вниз
	A = влево
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
			//вывод клеток
			case 'E':
				cout << count << " ";
				break;
			//поворот против часовой
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
			//поворот по часовой
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
			//движение вперед
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
				//Если робот еще не был на клетке
				if(!a[robot->x][robot->y])
					count++;
				a[robot->x][robot->y] = true;
				break;
		}
	}
	return 0;
}
