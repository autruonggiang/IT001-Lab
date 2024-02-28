#include <iostream>

using namespace std;

int main ()
{
	int n;
	float S;
	S = 0;
	
	do
	{
		cout << "Nhap vao so n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "So phai lon hon hoac bang 1. Vui long nhap lai !" << endl;
		}
	} 
	
	while (n < 1);
	{
		for (int i = 1; i <= n; i++)
		S = S + 1.0 / i;
	}
	
	cout << "Tong cua 1 + 1/2 + ... + 1/" << n << " la " << S;
	return 0;
}
