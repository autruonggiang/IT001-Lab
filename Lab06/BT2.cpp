#include <iostream>

using namespace std;

typedef struct PhanSo
{
	int tu;
	int mau;
}

PhanSo;

void NhapX (PhanSo &x)
{
	cout << "PHAN SO THU NHAT" << endl;
	
	cout << "Nhap tu so: " << endl;
	cin >> x.tu;
	cout << "\n";
	
	cout << "Nhap mau so: " << endl;
	cin >> x.mau;
	cout << "\n";
}

void NhapY (PhanSo &y)
{
	cout << "PHAN SO THU HAI" << endl;
	
	cout << "Nhap tu so: " << endl;
	cin >> y.tu;
	cout << "\n";
	
	cout << "Nhap mau so: " << endl;
	cin >> y.mau;
	cout << "\n";
}

void Xuat (PhanSo x)
{
	cout << "Phan so thu duoc: " << endl;
	cout << x.tu << "/" << x.mau;
}
 
int UCLN (int x, int y) 
{
    if (x < 0) 
	{
        x *= -1;
    }
    
    if (y < 0) 
	{
        y *= -1;
    }
    
    while (x != y) 
	{
        if (x > y) 
		{
            x = x - y;
        } 
		
		else 
		{
            y = y - x;
        }
    }
    
    return x;
}

PhanSo RutGon (PhanSo &x) 
{
	PhanSo t;
    int ucln = UCLN (x.tu, x.mau);
    
    t.tu = x.tu / ucln;
    t.mau = x.mau / ucln;
    
    cout << "\nPhan so duoc rut gon: " << t.tu << "/" << t.mau << endl;
}

int QuyDong (PhanSo x, PhanSo y, int& a, int& b, int &MauChung)
{
	a = x.tu * y.mau;
	b = y.tu * x.mau;
	
	MauChung = x.mau * y.mau;
	
	return MauChung;
}

PhanSo Cong (PhanSo x, PhanSo y, PhanSo z)
{
	int a, b, MauChung;
	int mauchung = QuyDong (x, y, a, b, MauChung);
	
	z.tu = x.tu * y.mau + x.mau * y.tu;
	z.mau = mauchung;
	
	cout << "\nTong hai phan so la: " << z.tu << "/" << z.mau << endl;
	
	return RutGon (z);
}

PhanSo Tru (PhanSo x, PhanSo y, PhanSo z)
{
	int a, b, MauChung;
	int mauchung = QuyDong (x, y, a, b, MauChung);
	
	z.tu = x.tu * y.mau - x.mau * y.tu;
	z.mau = mauchung;
	
	cout << "\nHieu hai phan so la: " << z.tu << "/" << z.mau << endl;
	
	return RutGon (z);
}

PhanSo Nhan (PhanSo x, PhanSo y, PhanSo z)
{
	int a, b;
	
	z.tu = x.tu * y.tu;
	z.mau = x.mau * y.mau;
	
	cout << "\nTich hai phan so la: " << z.tu << "/" << z.mau << endl;
	
	return RutGon (z);
}

PhanSo Chia (PhanSo x, PhanSo y, PhanSo z)
{
	int a, b;
	
	z.tu = x.tu * y.mau;
	z.mau = x.mau * y.tu;
	
	cout << "\nThuong hai phan so la: " << z.tu << "/" << z.mau << endl;
	
	return RutGon (z);
}

PhanSo SoSanhPhanSo (PhanSo x, PhanSo y, PhanSo z)
{
	int a, b;
	
	int tu1 = x.tu * y.mau;
	int tu2 = x.mau * y.tu;
	
	if (tu1 < tu2)
	{
		cout << "\nPhan so thu nhat nho hon phan so thu hai !" << endl;
	}
	
	else if (tu1 > tu2)
	{
		cout << "\nPhan so thu nhat lon hon phan so thu hai !" << endl;
	}
	
	else
	{
		cout << "\nHai phan so bang nhau !" << endl;
	}
}

int main ()
{
	PhanSo x, y, z;
	
	NhapX (x);
	NhapY (y);
	
	Xuat (x);
	cout << "\n";
	
	RutGon (x);
	Cong (x, y, z);
	Tru (x, y, z);
	Nhan (x, y, z);
	Chia (x, y, x);
	SoSanhPhanSo (x, y, z);
	
	return 0;
}
