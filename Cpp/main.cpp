#include <iostream>
#include <vector>
#include "Komputer.cpp"

using namespace std;

int main() {
    // Membuat komponen-komponen
    // CPU
    Cpu cpu(12, 4.5, "LGA1700", "Intel", "Core i7-13700K", 5500000);
    
    // Motherboard
    Motherboard mobo("Z790", "ATX", 4, 3, 4, 6, "ASUS", "ROG Maximus", 4800000);
    
    // RAM
    Ram ram1(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000);
    Ram ram2(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000);
    vector<Ram> ramList = {ram1, ram2};
    
    // SSD
    SSD ssd1(1000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 1800000);
    SSD ssd2(2000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 3200000);
    
    // HDD
    HDD hdd(4000, "SATA", 7200, 64, "Seagate", "Barracuda", 1500000);
    
    // GPU
    GPU gpu(16, 10240, "GDDR6X", "NVIDIA", "RTX 4080", 15000000);
    
    // Power Supply
    PowerSupply psu(850, "80+ Gold", true, "Corsair", "RM850x", 2200000);
    
    // Fan (untuk casing)
    Fan fan1(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
    Fan fan2(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
    Fan fan3(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
    vector<Fan> fanList = {fan1, fan2, fan3};
    
    // Casing
    Casing casing("ATX", "Tempered Glass", fanList, "Corsair", "5000D Airflow", 2500000);
    
    // Membuat komputer
    Komputer komputer("Gaming PC Build 2025", cpu, mobo, ramList, gpu, psu, casing);
    
    // Menambahkan SSD dan HDD
    komputer.addSsd(ssd1);
    komputer.addSsd(ssd2);
    komputer.addHdd(hdd);
    
    // Menampilkan informasi komputer
    komputer.displayInfo();
    
    return 0;
}
