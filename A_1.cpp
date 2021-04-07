#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout << x << " " << y << endl;
	}
};
int main()
{
	Point first;
	cin >> first.x >> first.y;
	first.print(first);
	return 0;
}