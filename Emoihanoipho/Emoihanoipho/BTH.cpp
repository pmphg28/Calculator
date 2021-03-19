#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string ten,soao,vitri;
	string a = "Tien ve";
	ofstream outf;
	ifstream inf;
	outf.open("C:/Users/Admin/Desktop/TuyenVietNam.txt");
	if(outf.is_open())
	{
		while(!inf.eof)
			getline("inf,tienve")
			getline("inf,soao")
	}
	else
		cout <<"Khong mo duoc file"<<endl;
	outf.close();
	return 0;
}

