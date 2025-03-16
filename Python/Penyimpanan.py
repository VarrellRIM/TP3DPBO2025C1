from Komponen import Komponen

# Base class untuk penyimpanan (implementasi hierarchical inheritance)
class Penyimpanan(Komponen):
    def __init__(self, kapasitas_gb=0, interface="", merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.kapasitas_gb = kapasitas_gb
        self.interface = interface
        
    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb
        
    def set_interface(self, interface):
        self.interface = interface
        
    def get_kapasitas_gb(self):
        return self.kapasitas_gb
        
    def get_interface(self):
        return self.interface
        
    def display_info(self):
        super().display_info()
        print(f"Kapasitas: {self.kapasitas_gb} GB")
        print(f"Interface: {self.interface}")
