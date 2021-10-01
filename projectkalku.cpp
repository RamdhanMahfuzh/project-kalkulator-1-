#include <iostream>
#include <string>

using namespace std;

int main (){
     float a,b,hasil;
    char aritmatika;

    
    cout << "------- Kalkulator --------" << endl;
    cout << "masukan angka pertama  :     ";
    cin >> a;
    cout << "                             " << endl;
    cout << "     (+, -, /, *,)           " << endl;
    cout << "masukan operasi hitung :     ";
    cin >> aritmatika;
    cout << "                              " << endl;
    cout << "masukan angka kedua    :     ";
    cin >> b;

     switch (aritmatika){
            case '+':
        hasil = a + b;
                break;
            case '-':
        hasil = a - b;
                break;
            case '*':
        hasil = a * b;
                break;
            case '/':
        hasil = a / b;
                break;
        default:
            cout << "operator not found";
            break;
    }
    cout << "----------------------------" << endl;
    cout << "hasil dari " << a << "" << aritmatika << "" << b << "       :     " << hasil << endl;
    cout << "----------------------------" << endl;
    cout << "       akhir program          " << endl;
    cout <<"-----------------------------" << endl;
    cout << "tekan apa saja untuk keluar   ";


   

    cin.get();
    return 0;
}