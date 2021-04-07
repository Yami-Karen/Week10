#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	double x, y;
};

int main()
{
	Point first;
	cout << &first << " " << &first.x << " " << &first.y;
	//Địa chỉ của first trùng với địa chỉ của trường đầu tiên được khai báo trong struct.
	return 0;
}