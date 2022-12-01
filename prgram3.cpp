#include<iostream>

using namespace std;
int main () {

    int a1, a2, a3;

    cout<<"masukan nilai pertama : ";
    cin>> a1;

    cout<<"masukan nilai kedua : ";
    cin>> a2;

    cout<< "\nHasil aritmatika" << endl;
    cout<<"======================"<<endl;
    cout<< "pertambahan " << a1 << "+"<< a2<< "-->"<<a1+a2<< endl;
    cout<< "pengurangan " << a1 << "-"<< a2<< "-->"<<a1-a2<< endl;
    cout<< "perkalian " << a1 << "X"<< a2<< "-->"<<a1*a2<< endl;
    cout<< "pembagian " << a1 << "/"<< a2<< "-->"<<a1/a2<< endl;
    cout<< "modulo " << a1 << "%"<< a2<< "-->"<<a1%a2<< endl;
    cout<<"======================"<<endl;
    if (a1 < a2){
        cout<< a1 << " lebih kecil dari "<< a2 <<endl;
    }

     if (a1 > a2){
        cout<< a1 << " lebih besar dari "<< a2 <<endl;
    }

     if (a1 == a2){
        cout<< a1 << " sama dengan "<< a2 <<endl;
    }

     if (a1 != a2){
        cout<< a1 << " tidak sama dengan "<< a2 <<endl;
    }

    cout<< "masukan angka ganjil/genap : ";
    cin >> a3;

     if (a3 % 2){
        cout<< a3 << " merupakan bilangan ganjil : "<< endl;
    }
else{
    cout << a3 << "merupakan bilangan genap "<<endl;
    }}