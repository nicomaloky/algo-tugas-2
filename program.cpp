#include <iostream>
#include <string>

using namespace std;

int main (){
	string Nama,NPM,Alamat,Prodi,TTL,Hobi;
	
	cout<<"Masukan Data Berikut : "<<endl;
	cout<<"Nama				: ";
	getline (cin, Nama); 
	 
	cout<<"NPM				: ";
	getline (cin, NPM); 

	cout<<"Alamat				: ";
	getline (cin, Alamat); 
	 
	cout<<"Prodi				: ";
	getline (cin, Prodi);
	
	cout<<"Tempat, Tanggal Lahir		: "; 
	getline (cin, TTL);
	
	cout<<"Hobi				: ";
	getline (cin, Hobi);
	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama					: "<<Nama<<endl;
	cout<<"NPM					: "<<NPM<<endl;
	cout<<"Alamat					: "<<Alamat<<endl;
	cout<<"Prodi					: "<<Prodi<<endl;
	cout<<"Tempat, Tanggal Lahir 			: "<<TTL<<endl;
	cout<<"Hobi					: "<<Hobi<<endl;
}