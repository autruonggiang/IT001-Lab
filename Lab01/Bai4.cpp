#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	// Khai bao N kieu nguyen
	int N;
	
	// Nhap gia tri so N co hai chu so tu ban phim
	cout << "Nhap gia tri N: ";
	cin >> N;
	
	// Khai bao Chuc, Dv, Tonh kieu nguyen
	int Chuc, Dv, Tong;
	
	// Tinh gia tri hang chuc, hang don vi roi gan vao bien
	Chuc = N / 10;
	Dv = N % 10;
	
	// Tinh gia tri tong cua hai chu so
	Tong = Chuc + Dv;
	
	// Xuat gia tri tong ra man hinh
	cout << "Tong hai chu so cua N: " << Tong;
	return 0;
}


