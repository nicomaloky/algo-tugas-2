#include <iostream>
#include <conio.h>

using namespace std;

int isi = -1, tail = 4, queue[5];

void enqueue(){

    if (isi == 4){
        cout << "Queue Is Full !\n";
    }else
    {
        isi++;
        cout << "Masukan Data : ";
        cin >> queue[isi];
        cout << "\nPada Queue indeks ke-" << isi << endl;
        cout << queue[isi] << " Telah ditambahkan !\n";
    }
    
}

void dequeue(){
    if (isi == -1)
    {
        cout << "Queue Is Empty !\n";
    }else
    {
        cout << queue[0] << " Telah diambil !\n";
        for (int i = 0; i < isi; i++)
        {
            queue[i] = queue[i+1];
        }
        isi--;
    }
}

int bersihkan(){
    return isi = -1;
}

void print(){
    if (isi == -1)
    {
        cout << "Queue Is Empty !\n";
    }else
    {
        cout << "\t\tQueue\n";
        cout << "======================================\n";
        for (int i = isi; i >=0; i--)
        {
            cout << "\t\t[ " << queue[i] << " ]\n";
        }
         cout << "=====================================\n"; 
    }
}  

int main()
{
    int choose;
    do {
        print();
        cout << "\n1. Enqueue"
             << "\n2. Dequeue"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\nPergerakan ( Isi ) : " << isi + 1
             << "\n\n>> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                enqueue();
                getch();
                break;
            case 2:
                dequeue();
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