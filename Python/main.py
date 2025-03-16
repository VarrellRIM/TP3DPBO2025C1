from Komputer import Komputer
from Cpu import Cpu
from Motherboard import Motherboard
from Ram import Ram
from SSD import SSD
from HDD import HDD
from GPU import GPU
from PowerSupply import PowerSupply
from Casing import Casing
from Cooling import Fan

def main():
    # Membuat komponen-komponen
    # CPU
    cpu = Cpu(12, 4.5, "LGA1700", "Intel", "Core i7-13700K", 5500000)
    
    # Motherboard
    mobo = Motherboard("Z790", "ATX", 4, 3, 4, 6, "ASUS", "ROG Maximus", 4800000)
    
    # RAM
    ram1 = Ram(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000)
    ram2 = Ram(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000)
    ram_list = [ram1, ram2]
    
    # SSD
    ssd1 = SSD(1000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 1800000)
    ssd2 = SSD(2000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 3200000)
    
    # HDD
    hdd = HDD(4000, "SATA", 7200, 64, "Seagate", "Barracuda", 1500000)
    
    # GPU
    gpu = GPU(16, 10240, "GDDR6X", "NVIDIA", "RTX 4080", 15000000)
    
    # Power Supply
    psu = PowerSupply(850, "80+ Gold", True, "Corsair", "RM850x", 2200000)
    
    # Fan (untuk casing)
    fan1 = Fan(120, 1500, 25, 50, True, "Addressable", "Corsair", "LL120", 350000)
    fan2 = Fan(120, 1500, 25, 50, True, "Addressable", "Corsair", "LL120", 350000)
    fan3 = Fan(120, 1500, 25, 50, True, "Addressable", "Corsair", "LL120", 350000)
    fan_list = [fan1, fan2, fan3]
    
    # Casing
    casing = Casing("ATX", "Tempered Glass", fan_list, "Corsair", "5000D Airflow", 2500000)
    
    # Membuat komputer
    komputer = Komputer("Gaming PC Build 2025", cpu, mobo, ram_list, gpu, psu, casing)
    
    # Menambahkan SSD dan HDD
    komputer.add_ssd(ssd1)
    komputer.add_ssd(ssd2)
    komputer.add_hdd(hdd)
    
    # Menampilkan informasi komputer
    komputer.display_info()
    
if __name__ == "__main__":
    main()
