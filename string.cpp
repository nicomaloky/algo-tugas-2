#include<iostream>
#include<string.h>

using namespace std;
int main (){
        //copy string
        char nama[10];
        cout<< strcpy(nama,"kelassss") << endl;

        //menggabungkan string
        char nama1[]= "Nico Maloky";
        char gelar[]= " S.SR, S.Kom";
        cout << strcat(nama1, gelar)<< endl;

        //menghitung panjang kata
        char kata[] = "semoga panjang umur, dan diterima di sisinya";
        int panjang = strlen(kata);
        cout<<panjang<<endl;


        //bandingin stirng
        char kata1[]= "gas";
        char kata2[]= "Aaowaowk";
        int hasil = strcmp(kata1, kata2);
        cout<< hasil << endl;

        //mengubah huruf
        char kata3[]= "meledak";
        cout<< strupr(kata3)<<endl;
        char kata4[]= "MELEDAK";
        cout << strlwr(kata4)<<endl;
        
        










}