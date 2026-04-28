#include <iostream>
using namespace std;

class layangLayang{
    private:
    int diagSatu, diagDua, sisiPendek, sisiPanjang, hasilLuas, hasilKeliling;

    public:
    void luas(){
        hasilLuas = 0.5 * diagSatu * diagDua;
    }

    void keliling(){
        hasilKeliling = sisiPendek * sisiPendek * sisiPanjang * sisiPanjang;
    }

    void input(){
        cout << "Masukan diagonal ke-1: ";
        cin >> diagSatu;
        cout << "Masukan diagonal ke-2: ";
        cin >> diagDua;

        cout << "Masukan sisi pendek: ";
        cin >> sisiPendek;
        cout << "Masukan sisi panjang: ";
        cin >> sisiPanjang;
    }
    void output(){
        cout << "hasil luas: " << hasilLuas << endl;
        cout << "hasil keliling: " << hasilKeliling << endl;
    }

    friend class belahKetupat;
};

class belahKetupat{


    private:
    int diagSatu, diagDua, sisi, hasilLuas, hasilKeliling;

    public:
    void luas(){
        hasilLuas = 0.5 * diagSatu * diagDua;
    }

    void keliling(){
        hasilKeliling = sisi * sisi * sisi * sisi;
    }

    void input(){
        cout << "Masukan diagonal ke-1: ";
        cin >> diagSatu;
        cout << "Masukan diagonal ke-2: ";
        cin >> diagDua;

        cout << "Masukan sisi: ";
        cin >> sisi;
    }
    void output(){
        cout << "hasil luas: " << hasilLuas << endl;
        cout << "hasil keliling: " << hasilKeliling << endl;
    }
};

int main (){
    layangLayang LayangSatu;
    belahKetupat KetupatSatu;

    cout << "masukan empat variable untuk kalkulasi luas dan keliling layang2 " << endl;
    LayangSatu.input();
    LayangSatu.luas();
    LayangSatu.keliling();
    LayangSatu.output();

    cout << endl;

    cout << "Masukan tiga variable untuk kalkulasi luas dan keliling Belah Ketupat" << endl;
    KetupatSatu.input();
    KetupatSatu.luas();
    KetupatSatu.keliling();
    KetupatSatu.output();

    cout << endl;

    
}