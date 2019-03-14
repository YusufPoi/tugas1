#include<iostream>
using namespace std;

int main(){

float a,b;
int pilih;
int sembarang;
cout<< " Pilihlah menu kalkulator yang anda inginkan : "<<endl;
cout<<"1. Penambahan "<<endl;
cout<<"2. Pengurangan "<<endl;
cout<<"3. Perkalian "<<endl;
cout<<"4. Pembagian "<<endl;

cout<<"Inputkan nomer yang anda ingkan [1-4] : " ;
cin>> pilih;
if (pilih==1){
	cout<< "Inputkan nilai a = "; 
	cin>>a;
	cout<< "Inputkan nilai b = "; 
	cin>>b;
	cout<< "Hasil Pertambahannya "<<a<<"+"<<b<< "="<<a+b<<endl;
}
else if (pilih==2){
	cout<< "Inputkan nilai a = "; 
	cin>>a;
	cout<< "Inputkan nilai b = "; 
	cin>>b;
	cout<< "Hasil Pertambahannya "<<a<<"-"<<b<< "="<<a-b<<endl;
}
else if (pilih==3){
	cout<< "Inputkan nilai a = "; 
	cin>>a;
	cout<< "Inputkan nilai b = "; 
	cin>>b;
cout<< "Hasil Pertambahannya "<<a<<"x"<<b<< "="<<a*b<<endl;}
else if (pilih==4){
	cout<< "Inputkan nilai a = "; 
	cin>>a;
	cout<< "Inputkan nilai b = "; 
	cin>>b;
	cout<< "Hasil Pertambahannya "<<a<<":"<<b<< "="<<a/b<<endl;
}
else{
cout<< "MAAF, NOMER YANG ANDA INPUTKAN TIDAK TERDETEKSI"<<endl;
}
cout<< "TEKAN SEMBARANG TOMBOL UNTUK KELUAR"<<endl;
return 0;
}
	





	