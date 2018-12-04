#include <iostream>
using namespace std;

int p[20];
int places[20];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	int N, K, M, votes=0, input, leftovers=0, count_all=0, best_spot, amount_best_parties, extra_points;
	scanf("%d %d %d", &N, &K, &M);
	for(int i = 1; i <= N; i++)
	{
		scanf("%d", &input);
		p[ input ]++;
	}
	for(int i = 1; i <= M; i++)
	{
		places[i] = (K*p[i]) / N;
		//count_all ����� ������ ���� ����� ����� K, �.�. ���� ���������� � ������� �������
		count_all += places[i];
	}
	
	best_spot = places[1];
	amount_best_parties = 1;
	
	for(int i = 2; i <= M; i++)
	{
		if(places[i] == best_spot)
			amount_best_parties++;
		
		if(places[i] > best_spot)
		{
			best_spot = places[i];
			amount_best_parties = 1;
		}	
	}
	leftovers = K - count_all;
	
	//���� �������� ������
	if(leftovers)
	{
		//���� ������ ������ ����, �� ������ ��� ������ ��
		if(amount_best_parties == 1)
		{
			for(int i = 1; i<= M; i++)
			{
				if(places[i] == best_spot)
				{
					places[i]+= leftovers;
					leftovers = 0;
					for(int i = 1; i <= M; i++)
					{
						cout << places[i] << " ";
					}
					return 0;
				}
			}
		}
		
		//������� ������ ������ ��������
		extra_points = leftovers / amount_best_parties;
		//���� ����� �������� �� ����������
		//���� ������ ������� ������ ������
		if(extra_points)
		{
			for(int i = 1; i <= M; i++)
			{
				if(places[i] == best_spot)
					places[i] += extra_points;
			}
		}
		//���� �������� ������, ������ �� 1 ������ � ������� ����������� �������� ������
		if(leftovers % amount_best_parties > 0)
		{
			for(int i = 1; i <= M && leftovers % amount_best_parties > 0; i++)
			{
				places[i]++;
				leftovers--;
			}
		}
	}
	
	for(int i = 1; i <= M; i++)
	{
		cout << places[i] << " ";
	}
	
	/*
	cout << "\n Left: " << leftovers;
	cout << "\n extra points: " << extra_points;
	cout << "\n amount: " << amount_best_parties;
	cout << "\n best_spot: " << best_spot;
	*/
	
	return 0;
}
