#include <iostream>
using namespace std;
int main(){
	
	/* Nama  : Nabillah Aisyah
	   Kelas : D
	   NPM   : 2117051036
	*/
	
	// Deklarasi Variabel//
	int jumlah_n;
	int jumlah_a;
	int jumlah_b;
	int Un;
	
	cout <<"-----Menentukan Jumlah Nilai Suku ke-n Dalam Sistem Deret Aritmatika-----"<<endl;
	
	//input//
	cout <<"Masukkan Jumlah Suku yang ingin diketahui   :";
	cin >> jumlah_n;
	cout <<"Masukkan Jumlah Suku Awal                   :";
	cin >> jumlah_a;
	cout <<"Masukkan Beda Antara Setiap Bilangan        :";
	cin >> jumlah_b;
	
	//output//
	
	cout <<endl;
	cout <<"Jumlah Nilai Suku ke-" <<jumlah_n;
	Un = jumlah_a+(jumlah_n-1)*jumlah_b;
	cout << " dalam sistem aritmatika ini adalah :" << Un <<endl;
	
	return 0;
		
}	

