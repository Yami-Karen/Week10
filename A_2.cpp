#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout << &x << " " << &y << endl;
	}
};
void check(struct Point c)
{
	cout << &c.x << " " << &c.y << endl;
}
void check(struct Point* c)
{
	cout << &c->x << " " << &c->y << endl;
}
int main()
{
	Point first;
	cin >> first.x >> first.y;
	check(first);
	cout << &first.x << " " << &first.y << endl;
	check(&first);
	return 0;
}