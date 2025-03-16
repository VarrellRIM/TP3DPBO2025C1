#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

// Base class untuk penyimpanan (implementasi hierarchical inheritance)
class Penyimpanan : public Komponen {
protected:
    int kapasitasGB;
    string interface; // SATA, NVMe, etc.

public:
    Penyimpanan() : Komponen() {
        this->kapasitasGB = 0;
        this->interface = "";
    }

    Penyimpanan(int kapasitasGB, string interface, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->kapasitasGB = kapasitasGB;
        this->interface = interface;
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    void setInterface(string interface) {
        this->interface = interface;
    }

    int getKapasitasGB() const {
        return this->kapasitasGB;
    }

    string getInterface() const {
        return this->interface;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Kapasitas: " << this->kapasitasGB << " GB" << endl;
        cout << "Interface: " << this->interface << endl;
    }

    ~Penyimpanan() {}
};
