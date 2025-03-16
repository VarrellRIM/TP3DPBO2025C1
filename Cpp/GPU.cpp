#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class GPU : public Komponen {
private:
    int vram;  // GB
    int cudaCores;
    string memoryType;  // GDDR6, etc

public:
    GPU() : Komponen() {
        this->vram = 0;
        this->cudaCores = 0;
        this->memoryType = "";
    }

    GPU(int vram, int cudaCores, string memoryType, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->vram = vram;
        this->cudaCores = cudaCores;
        this->memoryType = memoryType;
    }

    void setVram(int vram) {
        this->vram = vram;
    }

    void setCudaCores(int cudaCores) {
        this->cudaCores = cudaCores;
    }

    void setMemoryType(string memoryType) {
        this->memoryType = memoryType;
    }

    int getVram() const {
        return this->vram;
    }

    int getCudaCores() const {
        return this->cudaCores;
    }

    string getMemoryType() const {
        return this->memoryType;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "VRAM: " << this->vram << " GB" << endl;
        cout << "CUDA Cores: " << this->cudaCores << endl;
        cout << "Memory Type: " << this->memoryType << endl;
    }

    ~GPU() {}
};
