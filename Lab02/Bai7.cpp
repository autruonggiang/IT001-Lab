#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char c;
	cout << "Nhap chu cai can doi: ";
	cin >> c;

    int GtChu = (int) c;
	if (65 <= GtChu && GtChu <= 90) {
		c = c + 32;
		cout << "Chu hoa doi thanh chu thuong: " << (char) c;
	} 
	
	else if (97 <= GtChu && GtChu <= 122) {
		c = c - 32;
		cout << "Chu thuong doi thanh chu hoa: " << (char) c;
	} 
	
	else {
		cout << "Khong doi duoc !";
	}

	return 0;
}
