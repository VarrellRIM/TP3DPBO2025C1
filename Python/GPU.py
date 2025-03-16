from Komponen import Komponen

class GPU(Komponen):
    def __init__(self, vram=0, cuda_cores=0, memory_type="", merk="", nama="", harga=0):
        super().__init__(merk, nama, harga)
        self.vram = vram
        self.cuda_cores = cuda_cores
        self.memory_type = memory_type
        
    def set_vram(self, vram):
        self.vram = vram
        
    def set_cuda_cores(self, cuda_cores):
        self.cuda_cores = cuda_cores
        
    def set_memory_type(self, memory_type):
        self.memory_type = memory_type
        
    def get_vram(self):
        return self.vram
        
    def get_cuda_cores(self):
        return self.cuda_cores
        
    def get_memory_type(self):
        return self.memory_type
        
    def display_info(self):
        super().display_info()
        print(f"VRAM: {self.vram} GB")
        print(f"CUDA Cores: {self.cuda_cores}")
        print(f"Memory Type: {self.memory_type}")
