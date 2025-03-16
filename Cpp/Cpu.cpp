#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Cpu : public Komponen {
private:
    int jumlahCore;
    float kecepatanGHz;
    string socket;  // tambahan atribut

public:
    Cpu() : Komponen() {
        this->jumlahCore = 0;
        this->kecepatanGHz = 0.0;
        this->socket = "";
    }

    Cpu(int jumlahCore, float kecepatanGHz, string socket, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
        this->socket = socket;
    }

    void setJumlahCore(int jumlahCore) {
        this->jumlahCore = jumlahCore;
    }

    void setKecepatanGHz(float kecepatanGHz) {
        this->kecepatanGHz = kecepatanGHz;
    }

    void setSocket(string socket) {
        this->socket = socket;
    }

    int getJumlahCore() const {
        return this->jumlahCore;
    }

    float getKecepatanGHz() const {
        return this->kecepatanGHz;
    }

    string getSocket() const {
        return this->socket;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Jumlah Core: " << this->jumlahCore << endl;
        cout << "Kecepatan: " << this->kecepatanGHz << " GHz" << endl;
        cout << "Socket: " << this->socket << endl;
    }

    ~Cpu() {}
};
