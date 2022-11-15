#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int max_compute(int x, int y)
{
	return (x > y ? x: y);
}
int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int max = max_compute(a, b);
	cout << "max = " << max;
	return 0;

}