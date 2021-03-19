#include <iostream>
using namespace std;
int tinhTong (int a[10][15], int h, int b)
{
	int tong = 0;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < b; j++)
		tong += a[i][j];
	return tong;
}
int main()
{
	int h,b;
	const int r = 10;
	const int c = 15;
	int a[r][c];
	do{
	cout << "Ban muon bao nhieu hang, bao nhieu cot: ";
	cin >> h >> b;
	if (h < 0 || b < 0 || h > 10 || b > 15)
		cout << "Nhap sai nhap lai.\n";
	}while (h < 0 || b < 0 || h > 10 || b > 15);
	for (int i = 0; i < h; i++)
		for (int j = 0; j < b; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Tong cac phan tu trong mang la: " << tinhTong(a,h,b) << endl;
}