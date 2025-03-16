from Penyimpanan import Penyimpanan

# Derived class dari Penyimpanan (hierarchical inheritance)
class HDD(Penyimpanan):
    def __init__(self, kapasitas_gb=0, interface="", rpm=0, cache_size=0, 
                 merk="", nama="", harga=0):
        super().__init__(kapasitas_gb, interface, merk, nama, harga)
        self.rpm = rpm
        self.cache_size = cache_size
        
    def set_rpm(self, rpm):
        self.rpm = rpm
        
    def set_cache_size(self, cache_size):
        self.cache_size = cache_size
        
    def get_rpm(self):
        return self.rpm
        
    def get_cache_size(self):
        return self.cache_size
        
    def display_info(self):
        super().display_info()
        print(f"RPM: {self.rpm}")
        print(f"Cache Size: {self.cache_size} MB")
