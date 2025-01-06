#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                // Tukar elemen
                swap(data[j], data[j + 1]);
            }
        }

        // Cetak proses setiap langkah
        cout << "Proses langkah ke-" << i + 1 << ": ";
        for (int val : data) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
	cout<<"====================="<<endl;
	cout<<"Rival Adistia Nugraha"<<endl;
	cout<<"     231011401067    "<<endl;
	cout<<"====================="<<endl;
    vector<int> data = {10, 35, 28, 15, 40, 5, 8};

    cout << "Data awal: ";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    bubbleSort(data);

    cout << "Hasil akhir: ";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

