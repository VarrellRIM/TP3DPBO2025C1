#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class PowerSupply : public Komponen {
private:
    int wattage;
    string efficiency;  // 80+ Bronze, Gold, etc
    bool modular;

public:
    PowerSupply() : Komponen() {
        this->wattage = 0;
        this->efficiency = "";
        this->modular = false;
    }

    PowerSupply(int wattage, string efficiency, bool modular, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->wattage = wattage;
        this->efficiency = efficiency;
        this->modular = modular;
    }

    void setWattage(int wattage) {
        this->wattage = wattage;
    }

    void setEfficiency(string efficiency) {
        this->efficiency = efficiency;
    }

    void setModular(bool modular) {
        this->modular = modular;
    }

    int getWattage() const {
        return this->wattage;
    }

    string getEfficiency() const {
        return this->efficiency;
    }

    bool isModular() const {
        return this->modular;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Wattage: " << this->wattage << "W" << endl;
        cout << "Efficiency: " << this->efficiency << endl;
        cout << "Modular: " << (this->modular ? "Ya" : "Tidak") << endl;
    }

    ~PowerSupply() {}
};
