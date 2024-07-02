#include <iostream>
using namespace std;

int main(){

int num1, num2;
char op;
string fitur;
char bentuk;


while(true){

cout << "pilih fitur (calc atau luas)";
cin >> fitur;

if(fitur == "calc"){

cout << "masukan angka pertama: ";
cin >> num1;
cout << "masukan operator (+, -, *, /, ^, _): ";
cin >> op;
if(op!= '_'){
cout << "masukan angka kedua: ";
cin >> num2;
}


switch(op){
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
    case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
    case '^':
    cout << num1 << " ^ " << num2 << " = " << pow(num1,num2) << endl;
    break;
    case '_':
    cout << num1 << " _ "  << " = " << sqrt(num1) << endl; 
    break;
    
    default:
    cout << "error";
}
} else {
    cout << "pilih bentuk (persegi = A, p_panjang = B, segitiga = C): ";
    cin >> bentuk;
    if(bentuk == 'C'){
        cout << "masukan sisi dan tinggi: ";
        cin >> num1; 
        cout << " dan ";
        cin >> num2;
    } else if (bentuk == 'B'){
        cout << "masukan kedua sisi: ";
        cin >> num1;
        cout << " dan ";
        cin >> num2;
    } else if('A'){
        cout << "masukan sisi: ";
        cin >> num1;
    } else {
        cout << "error";
    }

    switch (bentuk){
        case 'A':
        cout << "luas = " << pow(num1,2) << endl;
        break;
        case 'B':
        cout << "luas = " << num1*num2 << endl;
        break;
        case 'C':
        cout << "luas = " << (num1*num2)/2 << endl;
        break;
        default:
        cout << "error";
    }
    } 

}
}

