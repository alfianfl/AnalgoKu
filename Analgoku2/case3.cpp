/*
Nama	: Alfian fadhil L
NPM		: 140810180055
Kelas	: A
Deskripsi	: Progam Binary Search
*/

#include<iostream>
using namespace std;

main(){
	int x[5]={5,3,9,13,41};//input
	int index; //output
	int y = 3;//angka yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i, j, mid;
	bool found;
	
	//algoritma
	i = 1;
	j = n;
	found = false;
	while(!found && i<= j){
		mid = (i + j)/2;
		if (x[mid] == y){
			found = true;
		}
		else if(x[mid] < y){//menacri bagian kanan
			i = mid+1;
		}
		else{
			j = mid - 1; //mencari bagian kiri
		}
		
		
	}
	if(found == true){
		index=mid;
	}else
	index= 0;
	
	cout<<"Index Hasil Pencarian : "<<index;

}
