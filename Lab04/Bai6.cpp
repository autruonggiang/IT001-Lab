#include <iostream>

using namespace std;

void Nhap (int &a, int &b)
{
	cout << "Nhap so thu nhat: ";
	cin >> a;
	
	cout << "Nhap so thu hai: ";
	cin >> b;
}

unsigned long long int NhanHaiSo (int a, int b)
{
	if (a < b)
		return NhanHaiSo (b, a);
	
	if (b == 0)
		return 0;
		
	return a + NhanHaiSo (a, b - 1);
}

int main ()
{
	int a, b;
	Nhap (a, b);
	cout << "Ket qua tich hai so la: " << NhanHaiSo (a, b) << endl;
	
	return 0;
}
