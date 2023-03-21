#include<iostream>
#include<fstream>
using namespace std;
int main(){
//--menulis ke file
cout<< ">>> Menulis ke File"<<endl;
ofstream file_keluaran;
int data = 5;
file_keluaran.open("z.txt");

cout<< "sedang merekam.." << endl;
file_keluaran << " haloo "<< endl;
file_keluaran << " ini adalah saya "<< endl;
file_keluaran << " niko "<< endl;
file_keluaran << data << endl;
file_keluaran.close();

//--membaca file
cout<< ">>> membaca dari file" <<endl; 

string line;
ifstream file_input;
file_input.open("z.txt");
cout<< "membaca file latihan .txt"<< endl;
while (file_input)
{
    getline(file_input, line);
    cout<< line << endl;
}

}
