import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Membuat komponen-komponen
        // CPU
        Cpu cpu = new Cpu(12, 4.5f, "LGA1700", "Intel", "Core i7-13700K", 5500000);
        
        // Motherboard
        Motherboard mobo = new Motherboard("Z790", "ATX", 4, 3, 4, 6, "ASUS", "ROG Maximus", 4800000);
        
        // RAM
        Ram ram1 = new Ram(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000);
        Ram ram2 = new Ram(16, "DDR5", 6000, "Corsair", "Vengeance RGB", 1200000);
        List<Ram> ramList = new ArrayList<>();
        ramList.add(ram1);
        ramList.add(ram2);
        
        // SSD
        SSD ssd1 = new SSD(1000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 1800000);
        SSD ssd2 = new SSD(2000, "NVMe", 7000, 5000, "Samsung", "980 Pro", 3200000);
        
        // HDD
        HDD hdd = new HDD(4000, "SATA", 7200, 64, "Seagate", "Barracuda", 1500000);
        
        // GPU
        GPU gpu = new GPU(16, 10240, "GDDR6X", "NVIDIA", "RTX 4080", 15000000);
        
        // Power Supply
        PowerSupply psu = new PowerSupply(850, "80+ Gold", true, "Corsair", "RM850x", 2200000);
        
        // Fan (untuk casing)
        Fan fan1 = new Fan(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
        Fan fan2 = new Fan(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
        Fan fan3 = new Fan(120, 1500, 25, 50, true, "Addressable", "Corsair", "LL120", 350000);
        List<Fan> fanList = new ArrayList<>();
        fanList.add(fan1);
        fanList.add(fan2);
        fanList.add(fan3);
        
        // Casing
        Casing casing = new Casing("ATX", "Tempered Glass", fanList, "Corsair", "5000D Airflow", 2500000);
        
        // Membuat komputer
        Komputer komputer = new Komputer("Gaming PC Build 2025", cpu, mobo, ramList, gpu, psu, casing);
        
        // Menambahkan SSD dan HDD
        komputer.addSsd(ssd1);
        komputer.addSsd(ssd2);
        komputer.addHdd(hdd);
        
        // Menampilkan informasi komputer
        komputer.displayInfo();
    }
}
