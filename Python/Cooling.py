from Komponen import Komponen

# Interface untuk pengaturan RGB
class RGBInterface:
    def __init__(self, has_rgb=False, rgb_type=""):
        self.has_rgb = has_rgb
        self.rgb_type = rgb_type
        
    def set_has_rgb(self, has_rgb):
        self.has_rgb = has_rgb
        
    def set_rgb_type(self, rgb_type):
        self.rgb_type = rgb_type
        
    def get_has_rgb(self):
        return self.has_rgb
        
    def get_rgb_type(self):
        return self.rgb_type
        
    def display_rgb_info(self):
        print(f"RGB: {'Ya' if self.has_rgb else 'Tidak'}")
        if self.has_rgb:
            print(f"RGB Type: {self.rgb_type}")
            
# Base class untuk cooling
class Cooling(Komponen):
    def __init__(self, noise_level=0, airflow=0, merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.noise_level = noise_level
        self.airflow = airflow
        
    def set_noise_level(self, noise_level):
        self.noise_level = noise_level
        
    def set_airflow(self, airflow):
        self.airflow = airflow
        
    def get_noise_level(self):
        return self.noise_level
        
    def get_airflow(self):
        return self.airflow
        
    def display_info(self):
        super().display_info()
        print(f"Noise Level: {self.noise_level} dB")
        print(f"Airflow: {self.airflow} CFM")
        
# Fan class dengan hybrid inheritance (Cooling + RGBInterface)
class Fan(Cooling, RGBInterface):
    def __init__(self, size=0, rpm=0, noise_level=0, airflow=0, 
                 has_rgb=False, rgb_type="", merk="", nama="", harga=0):
        Cooling.__init__(self, noise_level, airflow, merk, nama, harga)
        RGBInterface.__init__(self, has_rgb, rgb_type)
        self.size = size
        self.rpm = rpm
        
    def set_size(self, size):
        self.size = size
        
    def set_rpm(self, rpm):
        self.rpm = rpm
        
    def get_size(self):
        return self.size
        
    def get_rpm(self):
        return self.rpm
        
    def display_info(self):
        Cooling.display_info(self)
        print(f"Size: {self.size} mm")
        print(f"RPM: {self.rpm}")
        self.display_rgb_info()
