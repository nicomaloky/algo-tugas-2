#include<iostream>
using namespace std;
int main(){
	double celcius, fahrenheit, kelvin, reamur, rankine;
	  
	char pilihan;
	cout<< "pilih suhu awal : "<<endl;
	cout<< "====================\n";
	cout<< "1. celcius\n";
	cout<< "2. fahrenheit\n";
	cout<< "3. kelvin\n";
	cout<< "4. reamur\n";
	cout<< "5. rankine\n";
	cout<< "====================\n";
	cout<< "pilih suhu awal : ";
	cin>> pilihan;	
	switch (pilihan) {	
	case ('1') :				
			cout<< "masukan suhu celcius : ";
			cin>> celcius;	
		
			fahrenheit = (1.8 * celcius) + 32;
      		kelvin = celcius + 273.15;
     		reamur = celcius * (0.8);
			rankine= (celcius + 273.15) * 1.8;	 	
	    	cout << celcius << " C = " << fahrenheit << " F\n";
     		cout << celcius << " C = " << kelvin 	 << " K\n";
    		cout << celcius << " C = " << reamur 	 << " R\n";
    		cout << celcius << " C = " << rankine 	 <<	" Ra\n";
    break;
    
    case ('2') :
		    cout<< "masukan suhu fahrenheit : ";
		    cin>> fahrenheit;

            celcius = (fahrenheit-32) * 0.5555;
            kelvin = (fahrenheit + 459.67) * 0.5555;
            reamur =(fahrenheit-32) * 0.4444;
            rankine = fahrenheit + 459.67;

            cout << fahrenheit << " F = " << celcius     << " C\n";
     		cout << fahrenheit << " F = " << kelvin 	 << " K\n";
    		cout << fahrenheit << " F = " << reamur 	 << " R\n";
    		cout << fahrenheit << " F = " << rankine 	 <<	"Ra\n"; 

    break;
   
    case ('3') :
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
	break;

	case ('4') :
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
	break;

	case ('5') :
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
	break;
	default : cout<< "isi yang bener kontol\n";
				cout<< "===================\n";
	return (0);
}
}