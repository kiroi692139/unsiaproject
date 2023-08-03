#include <iostream>

using namespace std;

void cariLinear(int L[], int N, int X){
    bool found = false;
    
    for (int i = 0; i < N; i++){
        if (L[i] == X) {
            cout << "Angka " << X << " ditemukan pada indeks ke " << i << endl;
            found = true;
        }
    }

    if (!found){
        cout << "Angka " << X << " tidak ditemukan dalam array" << endl;
    }
}

int main(){
    int array[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int input;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> input;

    cariLinear(array, size, input);

    return 0;
}
