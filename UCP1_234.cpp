//1. 3 Contoh deklarasi variabel:
// int panjang; (tipe data int)
// float nilai; (tipe data float)
// string nama; (tipe data string)

//2. a. Contoh implementasi dari prosedur:
// void inputData() {
//	cout << "Masukkan panjang persegi: ";
//	cin >> panjang;
// }
//   b. Contoh implementasi dari fungsi:
// int penjumlahan(int a, int b) {
//	return a + b;
// }

//3. Contoh implementasi dari looping:
//for (i = 0; i <= 5; i++) {
//    cout << "Mahasiswa TI";
//}


//4. Contoh implementasi dari conditional statement:
//if (nilai >= 60)
//    {
//        cout << "LULUS";
//    }
//    else
//    {
//        cout << "GAGAl";
//    }

//5. Contoh implementasi dari struct:
//struct Mahasiswa {
//    string nim;
//    string nama;
//    int umur;
//};

//6.

#include <iostream>
using namespace std;

struct NilaiSensor {
    float nilaiSensor1;
    float nilaiSensor2;
    float nilaiSensor3;
};
struct DetailKota {
    string namaKota;
    int indeksUdara;
    NilaiSensor sensor;
    string kualitasUdara;
};

void inputData() {
   DetailKota kota[2];
    for (int i = 0; i < 3; i++) {
        cout << "Data ke-" << (i+1) << ":" << endl;
        cout << "Nama Kota: ";
        cin >> kota.namaKota;
        cout << "Indeks Kualitas Udara: ";
        cin >> kota.indeksUdara;

        cout << "Masukkan nilai dari sensor ke-" << (i + 1) << " : ";
        cin >> kota[i].sensor.nilaiSensor1;
        cout << "Masukkan nilai dari sensor ke-" << (i + 1) << " : ";
        cin >> kota[i].sensor.nilaiSensor2;
        cout << "Masukkan nilai dari sensor ke-" << (i + 1) << " : ";
        cin >> kota[i].sensor.nilaiSensor3;
    }
}

void kualitasUdara() {
   DetailKota kota[2];
   if (kota.indeksUdara >= 75 || NilaiSensor() >= 45) {
    kota.kualitasUdara = Tidak Sehat
   }
   else {
    kota.kualitasUdara = Sehat
   }
}

void display() {
    DetailKota kota[2];
    cout << endl;
    cout << "Nama Kota    Status" << endl;
    cout << kota.namaKota << ": " << kota.kualitasUdara;
}

int main() {
    int ch;
    do {
        inputData();
        display();
        cout << "Apakah anda ingin mengulang program? (y/n)";
        cin >> ch;

    } while ((ch == 'Y' || ch == 'y'));
}




