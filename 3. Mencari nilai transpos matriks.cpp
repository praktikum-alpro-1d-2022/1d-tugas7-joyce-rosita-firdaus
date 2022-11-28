#include <iostream>
using namespace std;
int main(){
    int i, j, m, n;
    int matrik[10][10], transpose[10][10];

    cout << "=== Transpose Matriks ===" << endl;

    cout << "Masukkan jumlah baris: ";
    cin >> m;
    cout << "Masukkan jumlah kolom: ";
    cin >> n;

    cout << "Masukkan elemen matriks \n";
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matrik[i][j];
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            transpose[j][i] = matrik[i][j];
        }
    }

    cout << "Hasil transpose matriks tersebut adalah: \n";
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
