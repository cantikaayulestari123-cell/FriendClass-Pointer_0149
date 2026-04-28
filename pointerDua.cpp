#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "no induk = " << nim << endl;
    }
};
int main()
{
    mahasiswa *mhs = new mahasiswa {1};