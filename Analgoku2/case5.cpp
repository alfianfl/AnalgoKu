/*
Nama	: Alfian fadhil L
NPM		: 140810180055
Kelas	: A
Deskripsi	: Peogam Selection Sort
*/

#include<iostream>
using namespace std;

main(){
	int x[5] = { 12,41,23,15,53};
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i, j, imaks, temp;
	
	//algoritma
	for ( i=2 ; i<n; i++){
		imaks = 1;
		for( j=2; j<i; j++){
			if ( x[j] > x[imaks]){
				imaks = j;
			}
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp; 
	}
	for (int i=0; i<n; i++){
		cout<<x[i]<<",";
	}
} 
