#include <iostream>
using namespace std;

/*
На плоскости заданы несколько прямоугольников со сторонами, параллельными осям координат. 
Требуется найти площадь пересечения прямоугольников.
Вход
	В первой строке входного файла записано четыре целых числа x1, y1, x2, y2 – координаты двух противоположных вершин первого прямоугольника. 
	Во второй строке в том же порядке записаны координаты противоположных вершин второго прямоугольника. 
	Все координаты по абсолютной величине не превышают 10^9.
Выход
	Запишите в выходной файл площадь пересечения прямоугольников. 
*/

struct rect {
	int x1,y1,x2,y2;
	rect(int a,int b, int c, int d)
	:x1(a), y1(b), x2(c), y2(d)
	{
		if(this->x1 > this->x2)
			swap(this->x1, this->x2);
		if(this->y1 > this->y2)
			swap(this->y1, this->y2);
	}
};

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long surface = 0,together;
	int a,b,c,d,x_intersec,y_intersec;
	cin >> a >> b >> c >> d;
	rect *rect1 = new rect(a,b,c,d);
	cin >> a >> b >> c >> d;
	rect *rect2 = new rect(a,b,c,d);
	
	x_intersec = min(rect1->x2, rect2->x2) - max(rect1->x1, rect2->x1);
	y_intersec = min(rect1->y2, rect2->y2) - max(rect1->y1, rect2->y1);
	
	if(x_intersec > 0 && y_intersec > 0)
		surface = x_intersec * y_intersec;
		
	together = (rect1->x2 - rect1->x1)*(rect1->y2 - rect1->y1) + (rect2->x2 - rect2->x1)*(rect2->y2 - rect2->y1);
	
	cout << together-surface;
	
	return 0;
}



