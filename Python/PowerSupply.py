from Komponen import Komponen

class PowerSupply(Komponen):
    def __init__(self, wattage=0, efficiency="", modular=False, merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.wattage = wattage
        self.efficiency = efficiency
        self.modular = modular
        
    def set_wattage(self, wattage):
        self.wattage = wattage
        
    def set_efficiency(self, efficiency):
        self.efficiency = efficiency
        
    def set_modular(self, modular):
        self.modular = modular
        
    def get_wattage(self):
        return self.wattage
        
    def get_efficiency(self):
        return self.efficiency
        
    def is_modular(self):
        return self.modular
        
    def display_info(self):
        super().display_info()
        print(f"Wattage: {self.wattage}W")
        print(f"Efficiency: {self.efficiency}")
        print(f"Modular: {'Ya' if self.modular else 'Tidak'}")
