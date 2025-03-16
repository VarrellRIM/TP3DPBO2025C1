#pragma once
#include <iostream>
#include <string>
using namespace std;

// Kelas dasar untuk semua komponen
class Komponen {
protected:
    string merk;
    string nama;
    int harga;

public:
    Komponen() {
        this->merk = "";
        this->nama = "";
        this->harga = 0;
    }

    Komponen(string merk, string nama, int harga) {
        this->merk = merk;
        this->nama = nama;
        this->harga = harga;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setHarga(int harga) {
        this->harga = harga;
    }

    string getMerk() const {
        return merk;
    }

    string getNama() const {
        return nama;
    }

    int getHarga() const {
        return harga;
    }

    virtual void displayInfo() const {
        cout << "Merk: " << this->merk << endl;
        cout << "Nama: " << this->nama << endl;
        cout << "Harga: Rp " << this->harga << endl;
    }

    ~Komponen() {}
};
