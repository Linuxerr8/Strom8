#include<iostream>
#include<string>
using namespace std;

main(){
	//membuat program dengan percabangan if
	int nilai; //deklarasikan variabel
	string nama;
	
	cout<<"Masukan Nama Anda\t:";
	cin>>nama;
	cout<<"Masukan Nilai\t\t= ";
	cin>>nilai;
	
	//percabangan
	if(nilai>70&&nilai<100){
		cout<<"Selamat "<< nama <<" Anda Lulus..!!!, dengan nilai "<<nilai;
	}else if(nilai<70&&nilai>0){
		cout<<"Mohon Maaf "<< nama <<" Anda Tidak Lulus karna Nilai Anda "<<nilai;
	}else{
		cout<<"Salah Input Bro..????????????";
	}
	
	return 0;
}
