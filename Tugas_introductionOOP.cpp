#include <iostream>
using namespace std;

class Barang {
    public :
        int jumlah;
        string nama;
        string kategori;
        string tanggalProduksi;

        void Spesifikasi(){
            cout << " Nama : " << nama << endl;
            cout << " Jumlah : " << jumlah << endl;
            cout << " Kategori : " << kategori << endl;
            cout << " Tanggal Produksi : " << tanggalProduksi << endl;
        }
};

int main(){
    Barang elektronik;
    elektronik.nama = " Xiaomi ";
    elektronik.jumlah = 10;
    elektronik.kategori = " Elektronik (Handphone) ";
    elektronik.tanggalProduksi = " 2026-04-20 ";

    Barang nonElektronik;
    nonElektronik.nama = " Genteng ";
    nonElektronik.jumlah = 100;
    nonElektronik.kategori = " NonElektronik (BahanBangunan) ";
    nonElektronik.tanggalProduksi = " 2026-04-20 ";

    elektronik.Spesifikasi();
    nonElektronik.Spesifikasi();
}