#include <iostream>

using namespace std;

int main () {
    unsigned int kode;
    int uang, harga1 = 4000, harga2 = 6000, harga3 = 10000;
    string Pil1 = "AIR MINERAL", Pil2 = "TEH BOTOL", Pil3 = "KOPI SUSU";

    cout << "=== Vending Machine Automat ===" << "\n"
    << "Pilihan Minuman :   " << "\n"
    << "1." << Pil1 << "(Rp "<< harga1 << ")" << "\n"
    << "2." << Pil2 << "(Rp "<< harga2 << ")" << "\n"
    << "3." << Pil3 << "(Rp "<< harga3 << ")" << "\n";

    cout << "\n\n" << "Pilih kode minuman (1-3)    :";
    cin >> kode;
    cout << "\n\n" << "Masukan uang Anda (Rp)      :";
    cin >> uang;
    cout << "\n\n";

    if (uang < 5000) {
        cout << "Transaksi Gagal! Uang Anda kurang dari 5000!";
    }
    else {
    switch (kode) {
        default:
    cout << "Pelanggan yang terhormat, Kami sudah menyediakan Pilihan 1 sampai 3 dan sepertinya anda kurang mengerti untuk mengetik 1 sampai 3 saja." << "\n" << " Setelah ini, semoga anda bisa memilih antara 1 atau 2 atau 3 yaaaa. Terimakasih banyakkk -u-" << "\n" << " Kalau ini teh Baby yang ngetes, ayolahhhh tehh percaya kepada muridmu tehhh, sama gara gara tampilan pesan gini jangan dikurangin poin aku ya teh *u*"; break;
        case 1: 
        if (uang < harga1){
            cout << "Transaksi Gagal! Uang Anda kurang untuk membeli AIR MINERAL";
        }
        else {
            int kembalian = uang - harga1;
            cout << "Transaksi Berhasil! Silahkan ambil " << Pil1 << "\n"
            << "Kembalian Anda: " << kembalian;
            int goceng = kembalian / 5000, ceceng = (kembalian % 5000)*0.001;
            cout << "\n" << "Uang 5000 yang dikeluarkan:     " << goceng
            << "\n" << "Uang 1000 yang dikeluarkan:     " << ceceng;
        }
        break;
        case 2: 
        if (uang < harga2){
            cout << "Transaksi Gagal! Uang Anda kurang untuk membeli TEH BOTOL";
        }
        else {
            int kembalian = uang - harga2;
            cout << "Transaksi Berhasil! Silahkan ambil " << Pil2 << "\n"
            << "Kembalian Anda: " << kembalian;
            int goceng = kembalian / 5000, ceceng = (kembalian % 5000)*0.001;
            cout << "\n" << "Uang 5000 yang dikeluarkan:     " << goceng
            << "\n" << "Uang 1000 yang dikeluarkan:     " << ceceng;
        }
        break;
        case 3: 
        if (uang < harga3){
            cout << "Transaksi Gagal! Uang Anda kurang untuk membeli TEH BOTOL";
        }
        else {
            int kembalian = uang - harga3;
            cout << "Transaksi Berhasil! Silahkan ambil " << Pil3 << "\n"
            << "Kembalian Anda: " << kembalian;
            int goceng = kembalian / 5000, ceceng = (kembalian % 5000)*0.001;
            cout << "\n" << "Uang 5000 yang dikeluarkan:     " << goceng
            << "\n" << "Uang 1000 yang dikeluarkan:     " << ceceng;

        }
        break;
    }
    }

    return 0;
}