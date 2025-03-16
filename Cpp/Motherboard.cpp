#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

// Interface untuk USB ports (digunakan untuk multiple inheritance)
class USBInterface {
protected:
    int usb2Ports;
    int usb3Ports;

public:
    USBInterface() {
        this->usb2Ports = 0;
        this->usb3Ports = 0;
    }

    USBInterface(int usb2Ports, int usb3Ports) {
        this->usb2Ports = usb2Ports;
        this->usb3Ports = usb3Ports;
    }

    void setUsb2Ports(int usb2Ports) {
        this->usb2Ports = usb2Ports;
    }

    void setUsb3Ports(int usb3Ports) {
        this->usb3Ports = usb3Ports;
    }

    int getUsb2Ports() const {
        return this->usb2Ports;
    }

    int getUsb3Ports() const {
        return this->usb3Ports;
    }

    virtual void displayUSBInfo() const {
        cout << "USB 2.0 Ports: " << this->usb2Ports << endl;
        cout << "USB 3.0 Ports: " << this->usb3Ports << endl;
    }

    virtual ~USBInterface() {}
};

// Motherboard menggunakan multiple inheritance
class Motherboard : public Komponen, public USBInterface {
private:
    string chipset;
    string formFactor;  // ATX, MicroATX, etc
    int ramSlots;
    int m2Slots;

public:
    Motherboard() : Komponen(), USBInterface() {
        this->chipset = "";
        this->formFactor = "";
        this->ramSlots = 0;
        this->m2Slots = 0;
    }

    Motherboard(string chipset, string formFactor, int ramSlots, int m2Slots, 
                int usb2Ports, int usb3Ports, string merk, string nama, int harga) 
        : Komponen(merk, nama, harga), USBInterface(usb2Ports, usb3Ports) {
        this->chipset = chipset;
        this->formFactor = formFactor;
        this->ramSlots = ramSlots;
        this->m2Slots = m2Slots;
    }

    void setChipset(string chipset) {
        this->chipset = chipset;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    void setRamSlots(int ramSlots) {
        this->ramSlots = ramSlots;
    }

    void setM2Slots(int m2Slots) {
        this->m2Slots = m2Slots;
    }

    string getChipset() const {
        return this->chipset;
    }

    string getFormFactor() const {
        return this->formFactor;
    }

    int getRamSlots() const {
        return this->ramSlots;
    }

    int getM2Slots() const {
        return this->m2Slots;
    }

    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Chipset: " << this->chipset << endl;
        cout << "Form Factor: " << this->formFactor << endl;
        cout << "RAM Slots: " << this->ramSlots << endl;
        cout << "M.2 Slots: " << this->m2Slots << endl;
        displayUSBInfo();
    }

    void displayUSBInfo() const override {
        USBInterface::displayUSBInfo();
    }

    ~Motherboard() {}
};
