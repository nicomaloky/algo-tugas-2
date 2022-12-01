#include<iostream>

using namespace std;

int main() {
    double ayam_geprek, indomie, teh, kopi;

    char paket;

    cout<< " MENU WARBEL \n ";
    cout<< "=================\n";
    cout<< " ayam geprek : 10000 \n";
    cout<< " indomie : 5000\n";
    cout<< " teh : 3000\n";
    cout<< " kopi : 3000\n";
    cout<< "=================\n";
    cout<< " Paket 1  ayam geprek + teh\n ";
    cout<< " Paket 2  indomie + kopi\n " ;
    cout<< "=================\n";
    cout<< " pilih paket\n ";
    cin>> paket;
switch (paket)
{
case ('1') :
    cout<< "ayam geprek + teh : 13000\n ";

    break;
case('2'):
    cout<< "indomie + kopi : 8000";
    break;

default : cout << "ga ada cok";
    break;
}

}