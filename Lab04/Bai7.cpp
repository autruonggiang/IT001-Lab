#include<iostream>

using namespace std;

void Nhap (int &n)
{
	cout << "Nhap n: ";
    cin >> n;
}

unsigned long long int TinhGiaiThua (int n)
{
    if (n == 1)
    	return n;
    	
	else
		return n * TinhGiaiThua (n - 1);
}

int main() 
{
    int n;
    Nhap (n);

    cout << "Tong cua day so S = 1 * 2 *...*" << n << " la: " << TinhGiaiThua (n) << endl;

    return 0;
}
