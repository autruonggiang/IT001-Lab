#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	// Khai bao nam sinh kieu nguyen
	int Ns;
	
	// Nhap gia tri Ns tu ban phim
	cout << "Nhap vao nam sinh: ";
	cin >> Ns;
	
	// Khai bao nam hien tai, tuoi kieu nguyen
	int Nht, Tuoi;
	
	// Nhap gia tri Nht;
	cout << "Nhap nam hien tai: ";
	cin >> Nht;
	
	// Tinh so tuoi
	Tuoi = Nht - Ns;
	
	// Xuat gia tri tuoi ra man hinh
	cout << "So tuoi: " << Tuoi;
	return 0;
}

