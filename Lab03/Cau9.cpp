#include <iostream>

using namespace std;

int main ()
{
	int n;
	long gt = 1;
	cout << "Nhap so n: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		gt *= i;
	}
	
	cout << "Tong cua 1! + 2! + ... + " << n << "! la " << gt;
	return 0;
}
