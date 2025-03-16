#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Motherboard.cpp"
#include "Ram.cpp"
#include "SSD.cpp"
#include "HDD.cpp"
#include "GPU.cpp"
#include "PowerSupply.cpp"
#include "Casing.cpp"
using namespace std;

// Kelas Komputer yang menggunakan komposisi dari banyak komponen
class Komputer {
private:
    string nama;
    Cpu cpu;
    Motherboard motherboard;
    vector<Ram> ramList;
    vector<SSD> ssdList;
    vector<HDD> hddList;
    GPU gpu;
    PowerSupply powerSupply;
    Casing casing;
    int totalHarga;

public:
    Komputer() {
        this->nama = "";
        this->totalHarga = 0;
    }

    Komputer(string nama, Cpu cpu, Motherboard motherboard, vector<Ram> ramList,
             GPU gpu, PowerSupply powerSupply, Casing casing) {
        this->nama = nama;
        this->cpu = cpu;
        this->motherboard = motherboard;
        this->ramList = ramList;
        this->gpu = gpu;
        this->powerSupply = powerSupply;
        this->casing = casing;
        hitungTotalHarga();
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setCpu(Cpu cpu) {
        this->cpu = cpu;
        hitungTotalHarga();
    }

    void setMotherboard(Motherboard motherboard) {
        this->motherboard = motherboard;
        hitungTotalHarga();
    }

    void setRamList(vector<Ram> ramList) {
        this->ramList = ramList;
        hitungTotalHarga();
    }

    void addRam(Ram ram) {
        this->ramList.push_back(ram);
        hitungTotalHarga();
    }

    void setSsdList(vector<SSD> ssdList) {
        this->ssdList = ssdList;
        hitungTotalHarga();
    }

    void addSsd(SSD ssd) {
        this->ssdList.push_back(ssd);
        hitungTotalHarga();
    }

    void setHddList(vector<HDD> hddList) {
        this->hddList = hddList;
        hitungTotalHarga();
    }

    void addHdd(HDD hdd) {
        this->hddList.push_back(hdd);
        hitungTotalHarga();
    }

    void setGpu(GPU gpu) {
        this->gpu = gpu;
        hitungTotalHarga();
    }

    void setPowerSupply(PowerSupply powerSupply) {
        this->powerSupply = powerSupply;
        hitungTotalHarga();
    }

    void setCasing(Casing casing) {
        this->casing = casing;
        hitungTotalHarga();
    }

    string getNama() const {
        return this->nama;
    }

    Cpu getCpu() const {
        return this->cpu;
    }

    Motherboard getMotherboard() const {
        return this->motherboard;
    }

    vector<Ram> getRamList() const {
        return this->ramList;
    }

    vector<SSD> getSsdList() const {
        return this->ssdList;
    }

    vector<HDD> getHddList() const {
        return this->hddList;
    }

    GPU getGpu() const {
        return this->gpu;
    }

    PowerSupply getPowerSupply() const {
        return this->powerSupply;
    }

    Casing getCasing() const {
        return this->casing;
    }

    int getTotalHarga() const {
        return this->totalHarga;
    }

    void hitungTotalHarga() {
        int total = cpu.getHarga() + motherboard.getHarga() + gpu.getHarga() + 
                    powerSupply.getHarga() + casing.getHarga();

        for (const Ram& ram : ramList) {
            total += ram.getHarga();
        }

        for (const SSD& ssd : ssdList) {
            total += ssd.getHarga();
        }

        for (const HDD& hdd : hddList) {
            total += hdd.getHarga();
        }

        this->totalHarga = total;
    }

    void displayInfo() const {
        cout << "==========================================" << endl;
        cout << "           INFORMASI KOMPUTER" << endl;
        cout << "==========================================" << endl;
        cout << "Nama Komputer  : " << this->nama << endl;
        cout << "Total Harga    : Rp " << this->totalHarga << endl;
        cout << "==========================================" << endl;

        cout << "\n>> CPU:" << endl;
        this->cpu.displayInfo();

        cout << "\n>> Motherboard:" << endl;
        this->motherboard.displayInfo();

        cout << "\n>> RAM (" << this->ramList.size() << " modul):" << endl;
        for (size_t i = 0; i < this->ramList.size(); i++) {
            cout << "  RAM #" << (i + 1) << ":" << endl;
            this->ramList[i].displayInfo();
            cout << endl;
        }

        if (!this->ssdList.empty()) {
            cout << "\n>> SSD (" << this->ssdList.size() << " buah):" << endl;
            for (size_t i = 0; i < this->ssdList.size(); i++) {
                cout << "  SSD #" << (i + 1) << ":" << endl;
                this->ssdList[i].displayInfo();
                cout << endl;
            }
        }

        if (!this->hddList.empty()) {
            cout << "\n>> HDD (" << this->hddList.size() << " buah):" << endl;
            for (size_t i = 0; i < this->hddList.size(); i++) {
                cout << "  HDD #" << (i + 1) << ":" << endl;
                this->hddList[i].displayInfo();
                 cout << endl;
            }
        }

        cout << "\n>> GPU:" << endl;
        this->gpu.displayInfo();

        cout << "\n>> Power Supply:" << endl;
        this->powerSupply.displayInfo();

        cout << "\n>> Casing:" << endl;
        this->casing.displayInfo();

        cout << "\n==========================================" << endl;
        cout << "Total Harga: Rp " << this->totalHarga << endl;
        cout << "==========================================" << endl;
    }

    ~Komputer() {}
};
