from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, jumlah_core=0, kecepatan_ghz=0.0, socket="", merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
        self.socket = socket
        
    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core
        
    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz
        
    def set_socket(self, socket):
        self.socket = socket
        
    def get_jumlah_core(self):
        return self.jumlah_core
        
    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz
        
    def get_socket(self):
        return self.socket
        
    def display_info(self):
        super().display_info()
        print(f"Jumlah Core: {self.jumlah_core}")
        print(f"Kecepatan: {self.kecepatan_ghz} GHz")
        print(f"Socket: {self.socket}")
