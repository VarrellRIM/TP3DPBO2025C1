from Cpu import Cpu
from Motherboard import Motherboard
from Ram import Ram
from SSD import SSD
from HDD import HDD
from GPU import GPU
from PowerSupply import PowerSupply
from Casing import Casing

# Kelas Komputer yang menggunakan komposisi dari banyak komponen
class Komputer:
    def __init__(self, nama="", cpu=None, motherboard=None, ram_list=None,
                 gpu=None, power_supply=None, casing=None):
        self.nama = nama
        self.cpu = cpu if cpu is not None else Cpu()
        self.motherboard = motherboard if motherboard is not None else Motherboard()
        self.ram_list = ram_list if ram_list is not None else []
        self.ssd_list = []
        self.hdd_list = []
        self.gpu = gpu if gpu is not None else GPU()
        self.power_supply = power_supply if power_supply is not None else PowerSupply()
        self.casing = casing if casing is not None else Casing()
        self.total_harga = 0
        self.hitung_total_harga()
        
    def set_nama(self, nama):
        self.nama = nama
        
    def set_cpu(self, cpu):
        self.cpu = cpu
        self.hitung_total_harga()
        
    def set_motherboard(self, motherboard):
        self.motherboard = motherboard
        self.hitung_total_harga()
        
    def set_ram_list(self, ram_list):
        self.ram_list = ram_list
        self.hitung_total_harga()
        
    def add_ram(self, ram):
        self.ram_list.append(ram)
        self.hitung_total_harga()
        
    def set_ssd_list(self, ssd_list):
        self.ssd_list = ssd_list
        self.hitung_total_harga()
        
    def add_ssd(self, ssd):
        self.ssd_list.append(ssd)
        self.hitung_total_harga()
        
    def set_hdd_list(self, hdd_list):
        self.hdd_list = hdd_list
        self.hitung_total_harga()
        
    def add_hdd(self, hdd):
        self.hdd_list.append(hdd)
        self.hitung_total_harga()
        
    def set_gpu(self, gpu):
        self.gpu = gpu
        self.hitung_total_harga()
        
    def set_power_supply(self, power_supply):
        self.power_supply = power_supply
        self.hitung_total_harga()
        
    def set_casing(self, casing):
        self.casing = casing
        self.hitung_total_harga()
        
    def get_nama(self):
        return self.nama
        
    def get_cpu(self):
        return self.cpu
        
    def get_motherboard(self):
        return self.motherboard
        
    def get_ram_list(self):
        return self.ram_list
        
    def get_ssd_list(self):
        return self.ssd_list
        
    def get_hdd_list(self):
        return self.hdd_list
        
    def get_gpu(self):
        return self.gpu
        
    def get_power_supply(self):
        return self.power_supply
        
    def get_casing(self):
        return self.casing
        
    def get_total_harga(self):
        return self.total_harga
        
    def hitung_total_harga(self):
        total = self.cpu.get_harga() + self.motherboard.get_harga() + self.gpu.get_harga() + \
                self.power_supply.get_harga() + self.casing.get_harga()
                
        for ram in self.ram_list:
            total += ram.get_harga()
            
        for ssd in self.ssd_list:
            total += ssd.get_harga()
            
        for hdd in self.hdd_list:
            total += hdd.get_harga()
            
        self.total_harga = total
        
    def display_info(self):
        print("==========================================")
        print("           INFORMASI KOMPUTER")
        print("==========================================")
        print(f"Nama Komputer  : {self.nama}")
        print(f"Total Harga    : Rp {self.total_harga}")
        print("==========================================")
        
        print("\n>> CPU:")
        self.cpu.display_info()
        
        print("\n>> Motherboard:")
        self.motherboard.display_info()
        
        print(f"\n>> RAM ({len(self.ram_list)} modul):")
        for i, ram in enumerate(self.ram_list, 1):
            print(f"  RAM #{i}:")
            ram.display_info()
            print()
            
        if self.ssd_list:
            print(f"\n>> SSD ({len(self.ssd_list)} buah):")
            for i, ssd in enumerate(self.ssd_list, 1):
                print(f"  SSD #{i}:")
                ssd.display_info()
                print()
                
        if self.hdd_list:
            print(f"\n>> HDD ({len(self.hdd_list)} buah):")
            for i, hdd in enumerate(self.hdd_list, 1):
                print(f"  HDD #{i}:")
                hdd.display_info()
                print()
                
        print("\n>> GPU:")
        self.gpu.display_info()
        
        print("\n>> Power Supply:")
        self.power_supply.display_info()
        
        print("\n>> Casing:")
        self.casing.display_info()
        
        print("\n==========================================")
        print(f"Total Harga: Rp {self.total_harga}")
        print("==========================================")
