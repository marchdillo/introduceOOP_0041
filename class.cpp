#include <iostream>
using namespace std;

class Mobil
{
public:
    string nama_mobil;
    string type_mobil;

private:
    int harga_mobil;

public:
    void input_data()
    {
        cout << "masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "masukkan type mobil: ";
        cin >> type_mobil;
        cout << "masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void ouput_data()
    {
        cout << "harga mobil = " << harga_mobil << endl;
    }
};