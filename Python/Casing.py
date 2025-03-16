from Komponen import Komponen
from Cooling import Fan

# Kelas Casing dengan komposisi (memiliki Fan objects)
class Casing(Komponen):
    def __init__(self, form_factor="", material="", fans=None, merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.form_factor = form_factor
        self.material = material
        self.fans = fans if fans is not None else []
        
    def set_form_factor(self, form_factor):
        self.form_factor = form_factor
        
    def set_material(self, material):
        self.material = material
        
    def set_fans(self, fans):
        self.fans = fans
        
    def add_fan(self, fan):
        self.fans.append(fan)
        
    def get_form_factor(self):
        return self.form_factor
        
    def get_material(self):
        return self.material
        
    def get_fans(self):
        return self.fans
        
    def display_info(self):
        super().display_info()
        print(f"Form Factor: {self.form_factor}")
        print(f"Material: {self.material}")
        print(f"Jumlah Fan: {len(self.fans)}")
        
        if self.fans:
            print("Detail Fan:")
            for i, fan in enumerate(self.fans, 1):
                print(f"  Fan #{i}:")
                fan.display_info()
                print()
