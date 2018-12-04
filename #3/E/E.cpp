#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;



int main()
{
	freopen("box.in", "r", stdin);
	freopen("box.out", "w", stdout);
	vector<int> box1(3);
	vector<int> box2(3);
	vector<int> difference(3);
	int sum=0;
	bool can_fit = true;
	
	cin >> box1[0] >> box1[1] >> box1[2] >> box2[0] >> box2[1] >> box2[2];
	
	sort(box1.begin(), box1.end());
	sort(box2.begin(), box2.end());
	
	//Первый помещается во второй
	if(box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2])
	{
		sum = box2[0] + box2[1] + box2[2];
	}
	//Второй помещается в первый
	else if(box1[0] > box2[0] && box1[1] > box2[1] && box1[2] > box2[2])
	{
		sum = box1[0] + box1[1] + box1[2];
	}
	else
	{
		sum = box1[0] + box1[1] + box1[2] + box2[0] + box2[1] + box2[2];
	}
	
	cout << sum;
	return 0;
}


