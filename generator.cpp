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

void rightTriangleLeftBot(int row){
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void rightTriangleRightBot(int row){
    int col = row;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= row; j++){
            if (j < col){
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
        col--;
    }
}

void rightTriangleLeftTop(int row){
    for (int i = 1; i <= row; i++){
        for (int j = row; j >=i; j--){
            cout << "*";
        }
        cout << "\n";
    }
}

void rightTriangle(int row){
    int typeTriangle;
    cout << "Jenis segitiga siku siku" << endl;
    cout << "1. Kiri bawah" << endl;
    cout << "2. Kanan bawah" << endl;
    cout << "3. Kiri atas" << endl;
    cout << "4. Kanan atas" << endl;
    cout << "\n" << "Pilih jenis: ";
    cin >> typeTriangle;
    switch (typeTriangle)
    {
    case 1:
        rightTriangleLeftBot(row);
        break;
    case 2:
        rightTriangleRightBot(row);
        break;
    case 3:
        rightTriangleLeftTop(row);
        break;
    
    default:
    cout << "Jenis ini tidak tersedia!" << endl;
        break;
    }
}

void triangle(int row){
    int row2=row;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= row2 - 1; j++){
            cout << " ";
        }
        for (int k = 1; k < i + i; k++){
            cout << "*";
        }
        cout << "\n";
        row2--;
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
        case 3:
            cout << "Masukkan jumlah baris: ";
            cin >> row;
            triangle(row);  
            break;
        case 99:
        cout << "Program dihentikan" << endl;
            break;
        
        default:
        cout << "Bentuk tidak tersedia!" << endl;
            break;
        }
    } while (pattern != 99);
    
    
    
}