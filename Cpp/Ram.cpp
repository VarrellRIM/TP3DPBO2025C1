#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Ram : public Komponen {
private:
    int kapasitasGB;
    string tipe;     // DDR4, DDR5, etc
    int frekuensiMHz; // tambahan atribut

public:
    Ram() : Komponen() {
        this->kapasitasGB = 0;
        this->tipe = "";
        this->frekuensiMHz = 0;
    }

    Ram(int kapasitasGB, string tipe, int frekuensiMHz, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->kapasitasGB = kapasitasGB;
        this->tipe = tipe;
        this->frekuensiMHz = frekuensiMHz;
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    void setTipe(string tipe) {
        this->tipe = tipe;
    }

    void setFrekuensiMHz(int frekuensiMHz) {
        this->frekuensiMHz = frekuensiMHz;
    }

    int getKapasitasGB() const {
        return this->kapasitasGB;
    }

    string getTipe() const {
        return this->tipe;
    }

    int getFrekuensiMHz() const {
        return this->frekuensiMHz;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Kapasitas: " << this->kapasitasGB << " GB" << endl;
        cout << "Tipe: " << this->tipe << endl;
        cout << "Frekuensi: " << this->frekuensiMHz << " MHz" << endl;
    }

    ~Ram() {}
};
