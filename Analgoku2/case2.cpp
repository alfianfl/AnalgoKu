/*
Nama	: Alfian fadhil L
NPM		: 140810180055
Kelas	: A
Deskripsi	: Progam Sequential Search
*/

#include<iostream>
using namespace std;

main(){
	int x[5] = {21,3,1,22,10};//daftar list 
	int y = 10;//yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklrasi
	int i = 1;
	int index;//output
	bool found = false;
	
	//algoritma
	while(i<=n && !found){
		if(x[i] == y){
			found = true;
		}else
		i = i+1;
	}
	if(found == true){
		index = i;
	}else
	index = 0;
	cout<<"Index Hasil Pencarian : "<<index;
}
