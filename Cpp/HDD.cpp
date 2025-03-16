#pragma once
#include <iostream>
#include <string>
#include "Penyimpanan.cpp"
using namespace std;

// Derived class dari Penyimpanan (hierarchical inheritance)
class HDD : public Penyimpanan {
private:
    int rpm;  // rotations per minute
    int cacheSize; // MB

public:
    HDD() : Penyimpanan() {
        this->rpm = 0;
        this->cacheSize = 0;
    }

    HDD(int kapasitasGB, string interface, int rpm, int cacheSize, string merk, string nama, int harga) 
        : Penyimpanan(kapasitasGB, interface, merk, nama, harga) {
        this->rpm = rpm;
        this->cacheSize = cacheSize;
    }

    void setRpm(int rpm) {
        this->rpm = rpm;
    }

    void setCacheSize(int cacheSize) {
        this->cacheSize = cacheSize;
    }

    int getRpm() const {
        return this->rpm;
    }

    int getCacheSize() const {
        return this->cacheSize;
    }

    void displayInfo() const override {
        Penyimpanan::displayInfo();
        cout << "RPM: " << this->rpm << endl;
        cout << "Cache Size: " << this->cacheSize << " MB" << endl;
    }

    ~HDD() {}
};
