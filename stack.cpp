#include <iostream>
#include <conio.h>

using namespace std;

int isi = -1, stack[5];

void push(){

    if (isi == 4){
        cout << "Stack Is Full !\n";
    }else
    {
        isi++;
        cout << "Masukan Data : ";
        cin >> stack[isi];
        cout << "\nPada Stack indeks ke-" << isi << endl;
        cout << stack[isi] << " Telah ditambahkan !\n";
    }
    
}

void pop(){
    if (isi == -1)
    {
        cout << "Stack Is Empty !\n";
    }else
    {
        cout <<"\nPada Stack indeks ke-" << isi << endl;
        cout << stack[isi] << " Telah diambil !\n";
        stack[isi--];
    }
}

int bersihkan(){
    return isi = -1;
}

void print(){
    if (isi == -1)
    {
        cout << "Stack Is Empty !\n";
    }else
    {
        cout << "\t\tStack\n";
        cout << "======================================\n";
        for (int i = isi; i >=0; i--)
        {
            cout << "\t\t[ " << stack[i] << " ]\n";
        }
         cout << "=====================================\n"; 
    }
}  

int main()
{
    int choose;
    do {
        print();
        cout << "\n1. Push"
             << "\n2. Pop"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\nPergerakan ( Isi ) : " << isi + 1
             << "\n\n>> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                push();
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                bersihkan();
                getch();
                cout << "\nClear Succes" << endl;
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                break;
        }
        system("cls");
    }while(choose!=4);
}