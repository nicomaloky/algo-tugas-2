#include<iostream>

using namespace std;

int main() {
    //deklarasi
    //double untuk bilangan desimal 16bit
    double celcius, fahrenheit, kelvin, reamur, rankine, sisi, panjang, tinggi, lebar, alas, luas;
    //char untuk satu buah karakter
    char pilihan, pilih_suhu, pilih_bangun, y;
    const int phi = 3.14;
    //awal untuk mengulang program
    awal:
    cout<< "\t=============================================="<<endl;
    cout<< "\t                 TUGAS AKHIR                  "<<endl;
    cout<< "\t KONVERSI SUHU & MENGHITUNG LUAS BANGUN RUANG "<<endl;
    cout<< "\t=============================================="<<endl;
    //pilih program yang mau dijalankan
    cout<<"1. Konversi Suhu\n";
    cout<<"2. Menghitung Luas Bangun Ruang\n";
    cout<< "Pilih Program : ";
    cin>> pilihan;
    //switch case untuh memilih jenis program
    switch (pilihan)
    {
    case ('1'):
    //Program Konversi Suhu
        cout<<"\t=================\n";
        cout<<"\t  Konversi Suhu\n  ";
        cout<<"\t=================\n";
    //pilih suhu yang mau di jalankan
	    cout<< "1. celcius\n";
	    cout<< "2. fahrenheit\n";
	    cout<< "3. kelvin\n";
	    cout<< "4. reamur\n";
	    cout<< "5. rankine\n";
	    cout<< "pilih suhu awal : ";
        cin >>pilih_suhu;
    //If else untuk memilih jenis suhu
    if ( pilih_suhu == ('1'))
    {
        cout<<"\t=================\n";
        cout<<"\t Konversi Celcius\n  ";
        cout<<"\t=================\n";
        cout<< "Masukan suhu celcius : ";
		cin>> celcius;	
		
			fahrenheit = (1.8 * celcius) + 32;
      		kelvin = celcius + 273.15;
     		reamur = celcius * (0.8);
			rankine= (celcius + 273.15) * 1.8;	 	
	    	cout << celcius << " C = " << fahrenheit << " F\n";
     		cout << celcius << " C = " << kelvin 	 << " K\n";
    		cout << celcius << " C = " << reamur 	 << " R\n";
    		cout << celcius << " C = " << rankine 	 <<	" Ra\n";
           //untuk mengulang program atau tidak
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
            //untuk clear program supaya rapih
                system("cls");
                goto awal;
            }
            else{

            }
            
    }
    

    else if(pilih_suhu == ('2'))
    {
        cout<< "masukan suhu fahrenheit : ";
		cin>> fahrenheit;

            celcius = (fahrenheit-32) * 0.5555;
            kelvin = (fahrenheit + 459.67) * 0.5555;
            reamur =(fahrenheit-32) * 0.4444;
            rankine = fahrenheit + 459.67;

            cout << fahrenheit << " F = " << celcius << " C\n";
     		cout << fahrenheit << " F = " << kelvin  << " K\n";
    		cout << fahrenheit << " F = " << reamur  << " R\n";
    		cout << fahrenheit << " F = " << rankine <<	"Ra\n"; 
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }
    
    else if (pilih_suhu == ('3'))
    {
        cout<< "masukan suhu kelvin : ";
		cin>> kelvin;

            celcius = kelvin - 273.15;
            fahrenheit = (kelvin * 1.8) - 459.67;
            reamur = 0.8 * (kelvin-273);
            rankine = kelvin * 1.8;

            cout << kelvin << " K = " << celcius     << " C\n";
     		cout << kelvin << " K = " << fahrenheit  << " F\n";
    		cout << kelvin << " K = " << reamur 	 << " R\n";
    		cout << kelvin << " K = " << rankine 	 <<	"Ra\n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }

    else if (pilih_suhu == ('4'))
    {
        cout<< "masukan suhu reamur : ";
	    cin>> reamur;

            celcius = reamur / 0.8;
            fahrenheit = (reamur * 2.25) + 32;
            kelvin = (reamur / 0.8) + 273.15;
            rankine = (reamur * 2.25) + 491.67;

            cout << reamur << " R = " << celcius     << " C\n";
     		cout << reamur << " R = " << fahrenheit  << " F\n";
    		cout << reamur << " R = " << kelvin 	 << " K\n";
    		cout << reamur << " R = " << rankine 	 <<	"Ra\n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }

    else if (pilih_suhu ==('5'))
    {
        cout<< "masukan suhu rankine : ";
		cin>> rankine;

            celcius = (rankine - 491.67) * 0.5555 ;
            fahrenheit = rankine - 459.67;
            kelvin = rankine * 0.5555;
            reamur = (rankine / 1.8)  + 273.15 * 0.8;

            cout << rankine << " Ra = " << celcius      << " C\n";
     		cout << rankine << " Ra = " << fahrenheit   << " F\n";
    		cout << rankine << " Ra = " << kelvin 	 	<< " K\n";
    		cout << rankine << " Ra = " << reamur 		<< "R\n";   
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }
    break;
    
    
    case ('2') :
    //Program Menghitung Luas Bangun Ruang
        cout<<"============================\n";
        cout<<"Menghitung Luas Bangun Ruang\n";
        cout<<"============================\n";
    //pilihan bangun ruang yang akan di jalan kan 
        cout<<"1. Segitiga\n";
        cout<<"2. Persegi\n";
        cout<<"3. Persegi Panjang\n";
        cout<<"4. LIngkaran\n";
        cout<<"Pilih Bangun Ruang : ";
        cin>> pilih_bangun;
    //if else untuk memilih jenis bangun ruang
    if (pilih_bangun ==('1'))
    {
        //memasukan variabel
        cout<<"Masukan Alas : ";
        cin>> alas;
        cout<<"Masukan Tinggi : ";
        cin>> tinggi;
        //rumus menghitung luas bangun ruang
        luas = (alas*tinggi)*0.5;
        cout<<"Luas segitiga adalah : "<<luas<<endl;
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
         }
         else{
                
            }
        
    }
        
    else if (pilih_bangun == ('2'))
    {
        cout<<"Masukan Panjang Sisi : ";
        cin>> sisi;

        luas = sisi*sisi;
        cout<<"Luas persegi adalah : "<<luas<<endl;
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }   
        
        
        
        
        
        
        
        
        
        
    break;

    default:cout<<"Pilihan Tidak Ada \n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    break;
    }


    






























}