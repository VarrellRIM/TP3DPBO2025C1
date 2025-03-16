from Komponen import Komponen

# Interface untuk USB ports (digunakan untuk multiple inheritance)
class USBInterface:
    def __init__(self, usb2_ports=0, usb3_ports=0):
        self.usb2_ports = usb2_ports
        self.usb3_ports = usb3_ports
        
    def set_usb2_ports(self, usb2_ports):
        self.usb2_ports = usb2_ports
        
    def set_usb3_ports(self, usb3_ports):
        self.usb3_ports = usb3_ports
        
    def get_usb2_ports(self):
        return self.usb2_ports
        
    def get_usb3_ports(self):
        return self.usb3_ports
        
    def display_usb_info(self):
        print(f"USB 2.0 Ports: {self.usb2_ports}")
        print(f"USB 3.0 Ports: {self.usb3_ports}")
        
# Motherboard menggunakan multiple inheritance
class Motherboard(Komponen, USBInterface):
    def __init__(self, chipset="", form_factor="", ram_slots=0, m2_slots=0, 
                 usb2_ports=0, usb3_ports=0, merk="", nama="", harga=0):
        Komponen.__init__(self, merk, nama, harga)
        USBInterface.__init__(self, usb2_ports, usb3_ports)
        self.chipset = chipset
        self.form_factor = form_factor
        self.ram_slots = ram_slots
        self.m2_slots = m2_slots
        
    def set_chipset(self, chipset):
        self.chipset = chipset
        
    def set_form_factor(self, form_factor):
        self.form_factor = form_factor
        
    def set_ram_slots(self, ram_slots):
        self.ram_slots = ram_slots
        
    def set_m2_slots(self, m2_slots):
        self.m2_slots = m2_slots
        
    def get_chipset(self):
        return self.chipset
        
    def get_form_factor(self):
        return self.form_factor
        
    def get_ram_slots(self):
        return self.ram_slots
        
    def get_m2_slots(self):
        return self.m2_slots
        
    def display_info(self):
        Komponen.display_info(self)
        print(f"Chipset: {self.chipset}")
        print(f"Form Factor: {self.form_factor}")
        print(f"RAM Slots: {self.ram_slots}")
        print(f"M.2 Slots: {self.m2_slots}")
        self.display_usb_info()
