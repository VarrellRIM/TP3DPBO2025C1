from Penyimpanan import Penyimpanan

# Derived class dari Penyimpanan (hierarchical inheritance)
class SSD(Penyimpanan):
    def __init__(self, kapasitas_gb=0, interface="", read_speed=0, write_speed=0, 
                 merk="", nama="", harga=0):
        super().__init__(kapasitas_gb, interface, merk, nama, harga)
        self.read_speed = read_speed
        self.write_speed = write_speed
        
    def set_read_speed(self, read_speed):
        self.read_speed = read_speed
        
    def set_write_speed(self, write_speed):
        self.write_speed = write_speed
        
    def get_read_speed(self):
        return self.read_speed
        
    def get_write_speed(self):
        return self.write_speed
        
    def display_info(self):
        super().display_info()
        print(f"Read Speed: {self.read_speed} MB/s")
        print(f"Write Speed: {self.write_speed} MB/s")
