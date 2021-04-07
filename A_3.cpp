#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	double x, y;
};
double distance(struct Point f, struct Point s)
{
	return sqrt((f.x - s.x) * (f.x - s.x) + (f.y - s.y) * (f.y - s.y));
}
int main()
{
	Point first,second;
	cin >> first.x >> first.y;
	cin >> second.x >> second.y;
	cout << distance(first, second);
	return 0;
}