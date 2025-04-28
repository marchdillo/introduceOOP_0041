#include <iostream>
using namespace std;

class Persegi_Panjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void inputdata()
    {
        cout << "Masukkan panjang = ";
        cin >> panjang;
        cout << "Masukkan lebar = ";
        cin >> lebar;
    }
    void output_data()
    {
        cout << "Tampilkan luas = " << luas << endl;
    }
    void hitung_luas()
    {
        luas = panjang * lebar;
    }
};