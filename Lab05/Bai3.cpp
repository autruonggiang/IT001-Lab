#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

void NhapChuoi(char c[])
{
	cin.getline(c, MAX);
}

void XuatChuoi(char c[])
{
	for (int i = 0; c[i] != '\0'; ++i) 
	{
		cout << c[i];
	}
	cout << endl;
}

int DoDaiChuoi(char c[MAX])
{
	int dem = 0;
	
	for (int i = 0; c[i] != '\0'; ++i) 
	{
		dem++;
	}
	
	return dem;
}

int KTKyTu (char a) 
{
	
	int num = (int) a;
	
	if (97 <= num && num <= 122) 
	{
		return 1;
	} 
	
	else if (65 <= num && num <= 90) 
	{
		return 2;
	} 
	
	else 
	{
		return 0;
	}
}

int XuatChuHoa(char c[])
{
	for (int i = 0; c[i] != '\0'; ++i) {
		if (KTKyTu(c[i]) == 2) {
			cout << c[i] << " ";
		}
	}
	
	cout << endl;
}

void DaoChuoi(char c[MAX])
{
	cout << "Chuoi dao nguoc la: " << endl;
	
	for (int i = DoDaiChuoi(c) - 1; i >= 0; --i) {
		cout << c[i];
	}
	
	cout << endl;
}

char Hoa(char a) 
{
	return (char)((int)a - 32);
}

char Thuong(char a) 
{
	return (char)((int)a + 32);
}

void InChanLe (char c[])
{	
	char c1[MAX];
	
	for (int i = 0; c[i] != '\0'; ++i) 
	{
		if (i % 2 == 0) 
		{
			if (KTKyTu(c[i]) == 1) 
			{
				c1[i] = Hoa(c[i]);
			} 
			
			else 
			{
				c1[i] = c[i];
			}
		} 
		
		else 
		{
			if (KTKyTu(c[i]) == 2) 
			{
				c1[i] = Thuong(c[i]);
			} 
			
			else 
			{
				c1[i] = c[i];
			}
		}
	}
	
	XuatChuoi(c1);
}


int main ()
{
	char c[MAX];
	
	NhapChuoi(c);
	cout << "\na. Chuoi ket qua: " << endl;
	
	XuatChuoi(c);
	cout << "\nDo dai chuoi: " << DoDaiChuoi(c) << endl;
	cout << "\nb. Chuoi ky tu in hoa: " << endl;
	
	XuatChuHoa(c);
	cout << "\nc. Chuoi dao nguoc: " << endl;
	
	DaoChuoi(c);
	cout << "\nd. Chuoi vi tri chan in hoa, le in thuong la: " << endl;
	
	InChanLe(c);
	
	return 0;
}
