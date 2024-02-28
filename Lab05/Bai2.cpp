#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

using namespace std;

void NhapMang(float a[][MAX], int &m, int &n)
{
    do
    {
        cout << "\nNhap vao so dong: ";
        cin >> m;

        if (m < 1 || m > MAX)
        {
            cout << "\nSo dong khong hop le. Xin kiem tra lai !";
        }

    } while (m < 1 || m > MAX);

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
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            float temp;
            cout << "\nNhap a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> temp;
            a[i][j] = temp;
        }
    }
    cout << "\n";
}

void XuatMang(float a[][MAX], int m, int n)
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

int TimMax(float a[][MAX], int m, int n)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
		
	return max;
}

int TimMin(float a[][MAX], int m, int n)
{
	int min = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}
	
	return min;

int PTTrenDCChinh(float a[][MAX], int m, int n)
{
	cout << "\nd. Cac phan tu nam nua tren duong cheo chinh: " << endl;
	int min = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = i + 1; j < n; j++)
			cout << a[i][j] << " ";
}

int MinDong(float a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
    {
    	int min = a[i][0];
    	
    	for (int j = 0; j < n; j++)
    	if (min > a[i][j])
    		min = a[i][j];
    	
    cout << "\ne. Gia tri nho nhat cua dong " << i + 1 << " = " << min << endl;
	}
}

int MaxCot(float a[][MAX], int m, int n)
{

	for (int j = 0; j < n; j++)
	{
		int max = a[0][j];
	
		for (int i = 0; i < m; i++)
    	if (max < a[i][j])
    		max = a[i][j];
    	
	cout << "\nf. Gia tri lon nhat cua cot " << j + 1 << " = " << max << endl;
	}
}

int Tong2MaTran(float c[][MAX], float a[][MAX], float b[][MAX], int m, int n)
{	
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];  
}

int main()
{
    float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int m, n;
    
    NhapMang(a, m, n);
    cout << "\na. Ma tran A: " << endl;
    
	XuatMang(a, m, n);
    cout << "\nc. Gia tri nho nhat la: " << TimMin(a, m, n) << endl;
    
	PTTrenDCChinh(a, m, n);
	MinDong(a, m, n);
	MaxCot(a, m, n);
	cout << "\nMa tran B: " << endl;
	
	NhapMang(b, m, n);
	XuatMang(b, m, n);
   	cout << "\ng. Ma tran C = A + B" << endl;   
   	
	Tong2MaTran(c, a, b, m, n);
	XuatMang(c, m, n);
	
    return 0;
}
