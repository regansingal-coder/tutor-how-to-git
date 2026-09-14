#include <iostream>
using namespace std;

int main (){
    int uang, total;
    cout << "=== Kalkulator Kasir Toko Buku ===" << "\n" 
    << "Masukan total belanja:  ";
    cin >> total;
    cout << "\n" << "Masukan uang pembayaran:   ";
    cin >> uang;

    int akhir = total;
    if (uang < total) {
        cout << "\n" << "Mohon Maaf Uang Anda Tidak Cukup";
        return 0;
    }
    if (total < 100000) {
        cout << "\n" << "Diskon (0%)        : --";
        cout << "\n" << "Total Bayar        : " << akhir;
        cout << "\n" << "Uang kembalian     : " << uang - akhir;
    }
    else if (100000 <= total <300000){
        int diskon = total*0.1;
        int akhir = total - diskon;
        cout << "\n" << "Diskon (10%)       : " << diskon;
        cout << "\n" << "Total Bayar        : " << akhir;
        cout << "\n" << "Uang kembalian     : " << uang - akhir;
    }
    else {
        int diskon = total*0.2;
        int akhir = total - diskon;
        cout << "\n" << "Diskon (20%)       : " << diskon;
        cout << "\n" << "Total Bayar        : " << akhir;
        cout << "\n" << "Uang kembalian     : " << uang - akhir;
    }

    return 0;
}