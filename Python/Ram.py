from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitas_gb=0, tipe="", frekuensi_mhz=0, merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.kapasitas_gb = kapasitas_gb
        self.tipe = tipe
        self.frekuensi_mhz = frekuensi_mhz
        
    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb
        
    def set_tipe(self, tipe):
        self.tipe = tipe
        
    def set_frekuensi_mhz(self, frekuensi_mhz):
        self.frekuensi_mhz = frekuensi_mhz
        
    def get_kapasitas_gb(self):
        return self.kapasitas_gb
        
    def get_tipe(self):
        return self.tipe
        
    def get_frekuensi_mhz(self):
        return self.frekuensi_mhz
        
    def display_info(self):
        super().display_info()
        print(f"Kapasitas: {self.kapasitas_gb} GB")
        print(f"Tipe: {self.tipe}")
        print(f"Frekuensi: {self.frekuensi_mhz} MHz")
