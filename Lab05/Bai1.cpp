#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100

using namespace std;

void NhapMang(int a[], int &n)
{
	cout << "Nhap vao so luong phan tu: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void PhatSinh(int a[], int &n, int &x)
{
	cout << "Nhap vao so luong phan tu: ";
	cin >> n;
	cout << "Nhap gia tri x: ";
	cin >> x;
	
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 50 + 1;
}

void XuatMang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
		cout << "\n\n";
}

int TinhTong(int a[], int &n)
{
	int temp = 0;
	
	for (int i = 0; i < n; i++)
	{
		temp += a[i];
	}
	return temp;
}

void DemX (int a[], int n, int x)
{
	int DemPtX = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			DemPtX = DemPtX + 1;
			
	cout << "\nb. So phan tu "<< x <<" xuat hien trong mang la: "<< DemPtX << endl;
}

void XuatPTChan(int a[], int n)
{
	int PTChan;
	cout << "\nc. Cac phan tu chan nho hon 20 la: " << endl;
	int c = 0;
	
	for (int i = 0; i < n; i++)
		if ((a[i] % 2 == 0) && (a[i] < 20))
		{
			cout << a[i] << " ";
		}
}

void DayNguoc(int a[], int n)
{
	cout << "\ne. Day dao nguoc la: " << endl;
	
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
}

int TimVTMin(int a[],int n)
{
	int i,vtmin = 0;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			vtmin = i;
		}
		return vtmin;
}


int main ()
{
	int a[MAX];
	int n, x;

	PhatSinh (a, n, x);
	XuatMang (a, n);
	
	cout << "\na. Tong cac phan tu trong mang la: " << TinhTong(a, n) << endl;
	DemX (a, n, x);	
	XuatPTChan (a, n);
	
	cout << "\nd. Vi tri cua phan tu nho nhat trong mang la: " << TimVTMin (a,n) + 1 << endl;
	DayNguoc (a, n);
	
	return 0;
}
