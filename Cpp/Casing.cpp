#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cooling.cpp"
using namespace std;

// Kelas Casing dengan komposisi (memiliki Fan objects)
class Casing : public Komponen {
private:
    string formFactor;  // ATX, MicroATX, etc
    string material;    // Tempered Glass, Metal, etc
    vector<Fan> fans;

public:
    Casing() : Komponen() {
        this->formFactor = "";
        this->material = "";
    }

    Casing(string formFactor, string material, vector<Fan> fans, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->formFactor = formFactor;
        this->material = material;
        this->fans = fans;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    void setFans(vector<Fan> fans) {
        this->fans = fans;
    }

    void addFan(Fan fan) {
        this->fans.push_back(fan);
    }

    string getFormFactor() const {
        return this->formFactor;
    }

    string getMaterial() const {
        return this->material;
    }

    vector<Fan> getFans() const {
        return this->fans;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Form Factor: " << this->formFactor << endl;
        cout << "Material: " << this->material << endl;
        cout << "Jumlah Fan: " << this->fans.size() << endl;
        
        if (!this->fans.empty()) {
            cout << "Detail Fan:" << endl;
            for (size_t i = 0; i < this->fans.size(); i++) {
                cout << "  Fan #" << (i + 1) << ":" << endl;
                this->fans[i].displayInfo();
                cout << endl;
            }
        }
    }

    ~Casing() {}
};
