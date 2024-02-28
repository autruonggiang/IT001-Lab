#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100

using namespace std;

void Nhap (int a[], int &n)
{
	cout << "\na. Nhap vao so luong phan tu can phat sinh: ";
	cin >> n;
		
	srand(time(NULL));
	
	for (int i = 0; i < n; i++)
		a[i] = rand() % 11 + 10;
}

void Xuat (int a[], int n)
{
	cout << "\nb. Mang thu duoc: " << endl;
	
    for (int i = 0; i < n; i++)
    {
    	cout << a[i] << " ";
    }
    
    cout << "\n";
}

int GTLN (int a[], int n) 
{
	int max = a[0];
	
	for (int i = 1; i < n; ++i) 
	{
		if (a[i] > max) 
		{
			max = a[i];
		}
	}
	
	return max;
}

int VTNN (int a[], int n)
{
	int min = a[0], vt = 0;
	
	for (int i = 1; i < n; ++i) 
	{
		if (a[i] < min) 
		{
			min = a[i];
			vt = i + 1;
		}
	}
	
	return vt;
}

bool KTTangDan (int a[], int n) 
{	
	for (int i = 0; i < n-1; ++i) 
	{
		if (a[i] > a[i+1])
		{
			return false;
		}
	}
	
	return true;
}

bool KTSNT (int num) 
{
	if (num <= 0)
		return false;
	
	for (int i = 2; i < num; ++i) 
	{
		if (num % i == 0)
			return false;
	}
	
	return true;
}

int SNTCuoiCung (int a[], int n) 
{
	
	int num = -1;
	
	for (int i = 0; i < n; ++i) 
	{
		if (KTSNT (a[i])) 
		{
			num = a[i];
		}
	}
	
	return num;
}

int main ()
{
	int a[MAX];
	int n;
	
	Nhap (a, n);
	Xuat (a, n);
	
	cout << "\nc. Gia tri lon nhat cua mang la: " << GTLN (a, n) << endl;
	cout << "\nd. Vi tri nho nhat cua mang la: " << VTNN (a, n) << endl;
	
	if (KTTangDan (a, n)) 
		cout << "\ne. Mang tang dan !" << endl;
		
	else
		cout << "\ne. Mang khong tang dan !" << endl;
		
	cout << "\nf. So nguyen to cuoi cung cua day la: " << SNTCuoiCung (a, n) << endl;

	return 0;
}
