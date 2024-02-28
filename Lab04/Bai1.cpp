#include <iostream>
#include <cmath>

using namespace std;

void Nhap (int &n)
{
	cout << "Nhap vao so n: ";
	cin >> n;
}

unsigned long long int SoDao (int n)
{
	unsigned long long int dao = 0;
	while (n > 0)
	{
		dao = dao*10 + n%10;
		n /= 10;
	}
	return dao;
}

unsigned long long int TimSCP (int n)
{
   
    int flag = 0;

    int i = 0;
    while (i <= n)
	{
        if (pow(i, 2) == n ) 
		{
		   
            flag = 1;
            break; 
        }
        i++;
    }

    return flag;
}

unsigned long long int TimSNT (int n)
{
    
    int flag = 1;

    if (n < 2)
	return flag = 0; 
    
    int i = 2;
    while (i < n)
	{
        if (n%i == 0)
		{
            flag = 0;
            break; 
        }
        i++;
    }

    return flag;
}

int XetChanLe (int n)
{
	int t = n % 10;
	if (t % 2 == 1)
		return 1;
	return 0;
}

unsigned long long int TongSoLe (int n)
{
    unsigned long long int S = 0;
    while (n > 0)
    {
    	int t = n % 10;
        if (XetChanLe (n) == 1)
            S += t;

        n = n / 10;
    }
    return S;
}

bool KTSNT (int n)
{
    int i;
    if (n < 2)
	return 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return 0;
    return 1;
}
 
unsigned long long int Tinh (int n)
{
    unsigned long long int i, s = 0;
    for (i = 2; i < n; i++)
        if (KTSNT(i) == 1)
            s = s+i;
    return s;
}

unsigned long long int TongSCP (int n)
{
	unsigned long long int sum = 0;
	int check;
	for (int i = 0; i < n; i++) 
	{
        check = TimSCP(i);
		if (check == 1) 
		{
			sum += i;
        }
    }
	return sum;
}

unsigned long long int TongUocSo (int n)
{
    unsigned long long int S = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            S = S + i;
    }
	return S;
}

int main ()
{
	int n;
	
	Nhap (n);
	int kq1 = SoDao (n);
	cout << "a. So dao nguoc cua n la: " << kq1 << endl;
	
	int check2 = TimSCP (n);
    if (check2 == 1)
		cout << "b. " << n << " la chinh phuong." << endl;
    else 
		cout << "b. " << n << " khong phai la so chinh phuong." << endl;
		
	int check3 = TimSNT (n);
    if (check3 == 1)
		cout << "c. " << n << " la so nguyen to." << endl;
    else
		cout << "c. " << n << " khong phai la so nguyen to." << endl;
		
	int result4 = TongSoLe (n);
    cout << "d. Tong cac chu so le cua n la: " << result4 << endl;
    
    int result5 = Tinh (n);
    cout << "e. Tong cac so nguyen to nho hon n la: " << result5 << endl;
    
    int result6 = TongSCP (n);
    cout << "f. Tong cac so chinh phuong nho hon n la: " << result6 << endl;
    
    int result7 = TongUocSo (n);
    cout << "g. Tong cac uoc so cua n: " << result7 << endl;
    
	return 0;
}
