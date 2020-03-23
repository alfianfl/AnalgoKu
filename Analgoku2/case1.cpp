/*
Nama	: Alfian fadhil L
NPM		: 140810180055
Kelas	: A
Deskripsi	:Progam Mencari Nilai Maksimum
*/

#include<iostream>
using namespace std;

main(){
	int x[5]={20,21,80,23,24};
	int n= sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int maks = x[0];
	int i= 2;
	
	//algoritma
	while (i<= n){
		if(x[i] > maks){
			maks = x[i];
		}
		i=i+1;
	}
	
	cout<<"Nilai maksimum adalah : "<<maks;
	
}
