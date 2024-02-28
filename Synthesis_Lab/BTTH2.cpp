#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 100

using namespace std;

void Nhap (int a[][MAX], int &m, int &n)
{
	cout << "\na. Phat sinh ma tran: " << endl;
	srand(time(NULL));
	
    do
    {
        cout << "\nNhap vao so dong: ";
        cin >> m;

        if (m < 1 || m > MAX)
        {
            cout << "\nSo dong khong hop le. Xin kiem tra lai !";
        }

    } 
	
	while (m < 1 || m > MAX);

    do
    {
        cout << "\nNhap vao so cot: ";
        cin >> n;

        if (n < 1 || n > MAX)
        {
            cout << "\nSo cot khong hop le. Xin kiem tra lai !";

        }

    } 
	
	while (n < 1 || n > MAX);
    
    cout << "\nb. Ma tran thu duoc: ";
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
			a[i][j] = rand() % 11 + 10;
        }
    }
    
    cout << "\n";
}

void Xuat (int a[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
            cout << "\n\n";
    }
}

void TongDCC (int a[][MAX], int m, int n)
{
	if (m != n)
		cout << "\nc. Ma tran khong vuong !" << endl;
		
	else 
	{
		int sum = 0;
		for (int i = 0; i < m; ++i) 
		{
			sum += a[i][i];
		}
		
		cout << "\nc. Tong phan tu tren duong cheo chinh la: " << sum << endl;
	}
}

void TongNuaTrenDCC (int a[][MAX], int m, int n) 
{
	if (m != n)
		cout << "\nd. Ma tran khong vuong !" << endl;
		
	else 
	{
		int sum = 0;
		
		for (int i = 0; i < m; ++i) 
		{
			for (int j = i + 1; j < n; ++j) 
			{
				sum += a[i][j];
			}
		}
		
		cout << "\nd. Tong phan tu nua tren duong cheo chinh la: " << sum << endl;
	}
}

int main ()
{
	int a[MAX][MAX];
	int m, n;
	
	Nhap (a, m, n);
	Xuat (a, m, n);
	
	TongDCC (a, m, n);
	TongNuaTrenDCC (a, m, n);
	
	return 0;
}
