#include <iostream>
using namespace std;

void rectangle(int row, int column){
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= column; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void rightTriangle(int row){
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int pattern, row, column;
    do
    {
        cout << "===== Pattern Generator =====" << endl;
        cout << "Bentuk yang tersedia" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Segitiga Siku-siku" << endl;
        cout << "3. Segitiga Sama Kaki" << endl;
        cout << "4. Belah Ketupat" << endl;
        cout << "99. Keluar dari Program" << endl;
        cout << "Pilih bentuk yang anda inginkan: ";
        cin >> pattern;
        switch (pattern)
        {
        case 1:
        int row, column;
            cout << "Masukkan jumlah baris: ";
            cin >> row;
            cout << "Masukkan jumlah kolom: ";
            cin >> column;
            rectangle(row, column);  
            break;
        case 2:
            cout << "Masukkan jumlah baris: ";
            cin >> row;
            rightTriangle(row);  
            break;
        case 99:
        cout << "Program dihentikan" << endl;
            break;
        
        default:
            break;
        }
    } while (pattern != 99);
    
    
    
}