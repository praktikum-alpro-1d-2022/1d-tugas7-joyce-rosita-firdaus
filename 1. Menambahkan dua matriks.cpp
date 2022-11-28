#include <iostream>
using namespace std;
int main(){
    int i, j, k, l;
    int matrik1[10][10], matriks2[10][10], matrikjml[10][10];

    cout << "=== Penjumlahan Dua Buah Matriks ===" << endl;

    cout << "Masukkan jumlah baris: ";
    cin >> k;
    cout << "Masukkan jumlah kolom: ";
    cin >> l;

    cout << "Masukkan elemen matriks pertama \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matrik1[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil penjumlahan kedua matriks tersebut adalah: \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            matrikjml[i][j] = matrik1[i][j] + matriks2[i][j];
            cout << matrikjml[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
