#include <iostream>

using namespace std;

void Nhap (int &n)
{
	cout << "Nhap n phan tu cua day Fibonacci: ";
	cin >> n;
}

double Fibonacci (int n) 
{
	if (n < 0)
	{
		return -1;
	}
	
	else if (n == 0 || n == 1)
	{
		return n;
	}
	
	else
	{
		return Fibonacci (n - 1) + Fibonacci (n - 2);
	}
}

int main ()
{
	int n;
	int i;
	Nhap (n);
	cout << "Vay, " << n << " so Fibonacci dau tien la: ";
	
	for (i = 0; i < n; i++)
		cout << Fibonacci (i) << " ";
		
	return 0;
}
