#include<bits/stdc++.h>
using namespace std;
	float tien,tien2,laisuat;
	main(){
	cout<<"Nhap so tien ban dau: ";
	cin>>tien;
	cout<<"Nhap lai suat ngan hang hang nam: ";
	cin>>laisuat;
	cout<<"Nhap so tien ky vong: ";
	cin>>tien2;
	for(int i=1;i<=1000000;i++)
	if(tien2<=tien*pow((1+laisuat),i))
	{
		cout<<"So nam can thiet de dat duoc ket qua ky vong: "<<i;
		break;
	}
	return 0;
}
