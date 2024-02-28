#include <iostream>
#include <math.h>

using namespace std;

typedef struct SoPhuc
{
	float thuc;
	float ao;
}

SoPhuc;

void NhapX (SoPhuc &x)
{
	cout << "SO PHUC THU NHAT" << endl;
	
	cout << "Nhap phan thuc: " << endl;
	cin >> x.thuc;
	cout << "\n";
	
	cout << "Nhap phan ao: " << endl;
	cin >> x.ao;
	cout << "\n";
}

void NhapY (SoPhuc &y)
{
	cout << "SO PHUC THU HAI" << endl;
	
	cout << "Nhap phan thuc: " << endl;
	cin >> y.thuc;
	cout << "\n";
	
	cout << "Nhap phan ao: " << endl;
	cin >> y.ao;
	cout << "\n";
}

void Xuat (SoPhuc x)
{
	cout << "So phuc thu duoc: " << endl;
	cout << x.thuc << " + " << x.ao << "i";
}

SoPhuc Cong (SoPhuc x, SoPhuc y, SoPhuc z)
{
	int a, b;
	
	z.thuc = x.thuc + y.thuc;
	z.ao = x.ao + y.ao;
	
	cout << "\nTong hai so phuc la: " << z.thuc << " + " << z.ao << "i" << endl;
}

SoPhuc Tru (SoPhuc x, SoPhuc y, SoPhuc z)
{
	int a, b;
	
	z.thuc = x.thuc - y.thuc;
	z.ao = x.ao - y.ao;
	
	cout << "\nHieu hai so phuc la: " << z.thuc << " + " << z.ao << "i" << endl;
}

SoPhuc Nhan (SoPhuc x, SoPhuc y, SoPhuc z)
{
	int a, b;
	
	z.thuc = x.thuc * y.thuc - x.ao * y.ao;
	z.ao = x.thuc * y.ao + x.ao * y.thuc;
	
	cout << "\nTich hai so phuc la: " << z.thuc << " + " << z.ao << "i" << endl;
}

SoPhuc Chia (SoPhuc x, SoPhuc y, SoPhuc z)
{
	float TongBP;
	
	TongBP = pow (y.thuc, 2) + pow (y.ao, 2);
	
	z.thuc = (x.thuc  * y.thuc + x.ao * y.ao) / TongBP;
	z.ao = (x.ao * y.thuc - x.thuc * y.ao) / TongBP;
	
	cout << "\nThuong hai so phuc la: " << z.thuc << " + " << z.ao << "i" << endl;
}

SoPhuc Argument (SoPhuc x)
{
	float arg, arg2;
	double PI = 2 * acos (0);
	
	arg =  atan (x.ao / x.thuc);
	arg2 = arg * (180 / PI);
	
	cout << "\nArugument cua so phuc la: " << arg << " (radian)" << endl;
	cout << "(" << arg2 << " do)" << endl;
}

float Module (SoPhuc x)
{
	float mol;
	mol = sqrt(pow (x.thuc, 2) + pow (x.ao, 2));
	
	cout << "\nModule cua so phuc la: " << mol << endl;
}

int main ()
{
	SoPhuc x, y, z;
	NhapX (x);
	NhapY (y);
	
	Xuat (x);
	cout << "\n";
	
	Cong (x, y, z);
	Tru (x, y, z);
	Nhan (x, y, z);
	Chia (x, y, z);
	Argument (x);
	Module (x);
	
	return 0;
}
