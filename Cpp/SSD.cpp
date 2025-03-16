#pragma once
#include <iostream>
#include <string>
#include "Penyimpanan.cpp"
using namespace std;

// Derived class dari Penyimpanan (hierarchical inheritance)
class SSD : public Penyimpanan {
private:
    int readSpeed;  // MB/s
    int writeSpeed; // MB/s

public:
    SSD() : Penyimpanan() {
        this->readSpeed = 0;
        this->writeSpeed = 0;
    }

    SSD(int kapasitasGB, string interface, int readSpeed, int writeSpeed, string merk, string nama, int harga) 
        : Penyimpanan(kapasitasGB, interface, merk, nama, harga) {
        this->readSpeed = readSpeed;
        this->writeSpeed = writeSpeed;
    }

    void setReadSpeed(int readSpeed) {
        this->readSpeed = readSpeed;
    }

    void setWriteSpeed(int writeSpeed) {
        this->writeSpeed = writeSpeed;
    }

    int getReadSpeed() const {
        return this->readSpeed;
    }

    int getWriteSpeed() const {
        return this->writeSpeed;
    }

    void displayInfo() const override {
        Penyimpanan::displayInfo();
        cout << "Read Speed: " << this->readSpeed << " MB/s" << endl;
        cout << "Write Speed: " << this->writeSpeed << " MB/s" << endl;
    }

    ~SSD() {}
};
