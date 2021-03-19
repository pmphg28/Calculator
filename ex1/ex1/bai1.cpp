#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream file;
	ofstream notfile;
	string chuoi,hoten,vitri;
	int soao,count=0;
	file.open("D:/TuyenVietNam.txt",ios::in);
	if(file.is_open())
	{
		cout<<"Mo file thanh cong"<<endl;
		while(!file.eof())
		{
		 getline(file,chuoi);
		 cout << chuoi;
		} 
	}
	else cout <<"khong mo duoc file ghi du lieu";
	getline(file,hoten,',');
	file >> soao;
	file.ignore(2);
	getline(file,vitri);
	if(vitri=="Tien Ve")
	{
		cout << hoten<<endl;
		count ++;
	}
	cout <<"so cau thu da o vi tri tien ve: "<< count;
}