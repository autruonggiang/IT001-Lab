#include<iostream>

using namespace std;

void Nhap (int &n)
{
	cout << "Nhap n: ";
    cin >> n;
}

unsigned long long int Tong1 (int n)
{
	unsigned long long int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

unsigned long long int Tong2 (int n)
{
	unsigned long long int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += 10*i + 2;
	}
	return sum;
}

unsigned long long int Tong3 (int n)
{
	unsigned long long int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}
	return sum;
}

//double TinhGiaiThua (int n) //** Cach tinh cu
//{
//	for (int i = 1; i <= n; i++)
//	{
//		n *= i;
//	}
//	return n;
//}

unsigned long long int TinhGiaiThua (int n)
{
    if (n == 1)
    	return n;
	else
		return n * TinhGiaiThua (n - 1);
}

unsigned long long int TongGiaiThua (int n)
{
	unsigned long long int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += TinhGiaiThua (i);
	}
    
    return sum;
}

int main() 
{
    int n;
    Nhap (n);
    cout << "a. Tong cua day so S = 1 + 2 +...+ " << n << " la: " << Tong1 (n) << endl; 
    cout << "b. Tong cua day so S = 12 + 22 +...+ " << n << "2 la: " << Tong2 (n) << endl;
    cout << "c. Tong cua day so S = 1 + 1/2 +...+ 1/" << n << " la: " << Tong3 (n) << endl; 
    cout << "d. Tong cua day so S = 1 * 2 *...*" << n << " la: " << TinhGiaiThua (n) << endl;
    cout << "e. Tong cua day so S = 1! + 2! +...+ " << n << "! la: " << TongGiaiThua (n) << endl;
    return 0;
}
