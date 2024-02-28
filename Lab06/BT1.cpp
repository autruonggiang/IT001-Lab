#include <iostream>

using namespace std;

void Nhap (int *&a, int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	a = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> *(a + i);
	}
}

void Xuat (int *a, int n)
{
	cout << "\nMang thu duoc: " << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << " ";
	}
	
	cout << endl;
}

void TinhTong (int *a, int n)
{
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += *(a + i);
	}
	
	cout << "\nTong cac phan tu trong mang la: " << sum << endl;
}


void HoanVi (int &a, int &b) 
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}

void SapXepGiamDan (int *a, int n)
{
	cout << "\nMang sau khi sap xep giam dan la: " << endl;
	
	bool stop = false;
	
	while (!stop) 
	{
		
		stop = true;
		
		for (int i = 0; i < n - 1; ++i) 
		{
			if (*(a + i) < *(a + i + 1)) 
			{
				HoanVi (*(a + i), *(a + i + 1));
				stop = false;
			}
		}
	}
	
	return Xuat (a, n);
}

int main ()
{
	int *a;
	int n;
	
	Nhap (a, n);
	Xuat (a, n);
	
	TinhTong (a, n);
	SapXepGiamDan (a, n);
	
	return 0;
}
