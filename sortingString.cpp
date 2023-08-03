#include <iostream>
#include <string>

using namespace std;

struct namaAlamat{
    string nama;
    string alamat;
};

void bubbleSort(namaAlamat arr[], int n){
    bool reposisi;

    for (int i=0; i<n-1; i++){
        reposisi = false;

        for (int j=0; j<n-i-1; j++){
            if (arr[j].nama > arr[j+1].nama){
                
                namaAlamat temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                reposisi = true;
            }
        }
        
        if(!reposisi){
            break;
        }
    
    }
}

void selectionSort(namaAlamat arr[], int n){
    for (int i=0; i<n-1; i++){
        int indexBawah = i;
        
        for (int j=i+1; j<n; j++){
            if (arr[j].nama < arr[indexBawah].nama){
                indexBawah = j;
            }
        }
        
        if (indexBawah !=i){
            namaAlamat temp = arr[i];
            arr[i] = arr[indexBawah];
            arr[indexBawah] = temp;
        }
    }
}

int main() {
    
    namaAlamat listTabel[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };
    
    int n = sizeof(listTabel)/sizeof(listTabel[0]);
    
    cout << "Hasil Sorting Bubble Sort: " << endl << endl;
    cout << "|------ Nama ------ Alamat ------|" << endl << endl; 
    bubbleSort(listTabel, n);
    
    for (int i=0; i<n; i++){
        cout << "|      " << listTabel[i].nama << "      "  << listTabel[i].alamat << endl;
    }
    
    cout << endl << endl;
    
    cout << "Hasil Sorting Selection Sort: " << endl;
    cout << "|------ Nama ------ Alamat ------|" << endl << endl;
    selectionSort(listTabel, n);
    
    for (int i=0; i<n; i++){
        cout << "|      " << listTabel[i].nama << "      "  << listTabel[i].alamat << endl;
    }
    
    return 0;
}
