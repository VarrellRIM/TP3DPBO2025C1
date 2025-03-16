class Komponen:
    def __init__(self, merk="", nama="", harga=0):
        self.merk = merk
        self.nama = nama
        self.harga = harga
        
    def set_merk(self, merk):
        self.merk = merk
        
    def set_nama(self, nama):
        self.nama = nama
        
    def set_harga(self, harga):
        self.harga = harga
        
    def get_merk(self):
        return self.merk
        
    def get_nama(self):
        return self.nama
        
    def get_harga(self):
        return self.harga
        
    def display_info(self):
        print(f"Merk: {self.merk}")
        print(f"Nama: {self.nama}")
        print(f"Harga: Rp {self.harga}")
