#include <iostream>
using namespace std;
int main(){
    int i, j, k, m, n, jumlah = 0;
    int matrik1[10][10], matrik2[10][10], matrikjml[10][10];

    cout << "=== Perkalian Dua Buah Matriks ===" << endl;
    //Perkaliam dua buah matriks bisa dilakukan apabila kolom matriks pertama sama dengan baris matriks kedua

    cout << "Masukkan jumlah baris: ";
    cin >> m;
    cout << "Masukkan jumlah kolom: ";
    cin >> n;

    cout << "Masukkan elemen matriks pertama \n";
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matrik1[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua \n";
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matrik2[i][j];
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            for (k=0; k<m; k++){
                jumlah = jumlah + (matrik1[i][k]*matrik2[k][j]);
            }
            matrikjml[i][j] = jumlah;
            jumlah = 0;
        }
    }

    cout << "Hasil perkalian kedua matriks tersebut adalah: \n";
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << matrikjml[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
