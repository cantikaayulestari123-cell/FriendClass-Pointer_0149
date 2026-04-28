#include <iostream>
using namespace std;

class Produk {
private:
    double harga;
    int jumlah;

public:
    void input() {
        cout << "Masukkan harga: ";
        cin >> harga;
        cout << "Masukkan jumlah: ";
        cin >> jumlah;
    }

    void output() {
        cout << "Total harga: " << harga * jumlah << endl;
    }

    friend double hitungTotal(Produk p);
};

double hitungTotal(Produk p) {
    return p.harga * p.jumlah;
}

class Diskon {
private:
    double persen;

public:
    void input() {
        cout << "Masukkan diskon (%): ";
        cin >> persen;
    }

    void output(double total) {
        double potongan = total * persen / 100;
        cout << "Harga setelah diskon: " << total - potongan << endl;
    }

    void tampilTotal(Produk p) {
        cout << "Total dari produk: " << hitungTotal(p) << endl;
    }
};

int main() {
    Produk p;
    Diskon d;

    p.input();
    d.input();

    double total = hitungTotal(p);

    p.output();
    d.output(total);

    d.tampilTotal(p);

    return 0;
}