#include<iostream>

using namespace std;

//variabel global
float a = 6;

//fungsi /function dengan parameter formal
int pembagian (float x, float y){
    return (x/y);
}

//prosedur
void perkalian (){
    int c;
    a = 10;
    c = a * 5;
    cout<< "Hasil Perkalian 5x" <<a<<" = "<<c<<endl;
}

//program utama / main program
int main(){
    //variabel lokal
    float b=4;

    //pemanggilan serta menampilkan fungsi
    cout<<pembagian (a,b)<<endl;
    
    //pemanggilan sub program
    perkalian();
    cout<<"a = "<<a<<endl;





}