#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

// Interface untuk pengaturan RGB
class RGBInterface {
protected:
    bool hasRGB;
    string rgbType;  // Addressable, Non-Addressable, etc

public:
    RGBInterface() {
        this->hasRGB = false;
        this->rgbType = "";
    }

    RGBInterface(bool hasRGB, string rgbType) {
        this->hasRGB = hasRGB;
        this->rgbType = rgbType;
    }

    void setHasRGB(bool hasRGB) {
        this->hasRGB = hasRGB;
    }

    void setRgbType(string rgbType) {
        this->rgbType = rgbType;
    }

    bool getHasRGB() const {
        return this->hasRGB;
    }

    string getRgbType() const {
        return this->rgbType;
    }

    virtual void displayRGBInfo() const {
        cout << "RGB: " << (this->hasRGB ? "Ya" : "Tidak") << endl;
        if (this->hasRGB) {
            cout << "RGB Type: " << this->rgbType << endl;
        }
    }

    virtual ~RGBInterface() {}
};

// Base class untuk cooling
class Cooling : public Komponen {
protected:
    int noiseLevel;  // dB
    int airflow;     // CFM

public:
    Cooling() : Komponen() {
        this->noiseLevel = 0;
        this->airflow = 0;
    }

    Cooling(int noiseLevel, int airflow, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga) {
        this->noiseLevel = noiseLevel;
        this->airflow = airflow;
    }

    void setNoiseLevel(int noiseLevel) {
        this->noiseLevel = noiseLevel;
    }

    void setAirflow(int airflow) {
        this->airflow = airflow;
    }

    int getNoiseLevel() const {
        return this->noiseLevel;
    }

    int getAirflow() const {
        return this->airflow;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Noise Level: " << this->noiseLevel << " dB" << endl;
        cout << "Airflow: " << this->airflow << " CFM" << endl;
    }

    ~Cooling() {}
};

// Fan class dengan hybrid inheritance (Cooling + RGBInterface)
class Fan : public Cooling, public RGBInterface {
private:
    int size;  // mm (120, 140, etc)
    int rpm;

public:
    Fan() : Cooling(), RGBInterface() {
        this->size = 0;
        this->rpm = 0;
    }

    Fan(int size, int rpm, int noiseLevel, int airflow, bool hasRGB, string rgbType, 
        string merk, string nama, int harga) 
        : Cooling(noiseLevel, airflow, merk, nama, harga), RGBInterface(hasRGB, rgbType) {
        this->size = size;
        this->rpm = rpm;
    }

    void setSize(int size) {
        this->size = size;
    }

    void setRpm(int rpm) {
        this->rpm = rpm;
    }

    int getSize() const {
        return this->size;
    }

    int getRpm() const {
        return this->rpm;
    }

    void displayInfo() const override {
        Cooling::displayInfo();
        cout << "Size: " << this->size << " mm" << endl;
        cout << "RPM: " << this->rpm << endl;
        displayRGBInfo();
    }

    ~Fan() {}
};
