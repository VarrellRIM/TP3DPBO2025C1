import java.util.ArrayList;
import java.util.List;

// Kelas Komputer yang menggunakan komposisi dari banyak komponen
public class Komputer {
    private String nama;
    private Cpu cpu;
    private Motherboard motherboard;
    private List<Ram> ramList;
    private List<SSD> ssdList;
    private List<HDD> hddList;
    private GPU gpu;
    private PowerSupply powerSupply;
    private Casing casing;
    private int totalHarga;

    public Komputer() {
        this.nama = "";
        this.ramList = new ArrayList<>();
        this.ssdList = new ArrayList<>();
        this.hddList = new ArrayList<>();
        this.totalHarga = 0;
    }

    public Komputer(String nama, Cpu cpu, Motherboard motherboard, List<Ram> ramList,
                   GPU gpu, PowerSupply powerSupply, Casing casing) {
        this.nama = nama;
        this.cpu = cpu;
        this.motherboard = motherboard;
        this.ramList = ramList;
        this.ssdList = new ArrayList<>();
        this.hddList = new ArrayList<>();
        this.gpu = gpu;
        this.powerSupply = powerSupply;
        this.casing = casing;
        hitungTotalHarga();
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
        hitungTotalHarga();
    }

    public void setMotherboard(Motherboard motherboard) {
        this.motherboard = motherboard;
        hitungTotalHarga();
    }

    public void setRamList(List<Ram> ramList) {
        this.ramList = ramList;
        hitungTotalHarga();
    }

    public void addRam(Ram ram) {
        this.ramList.add(ram);
        hitungTotalHarga();
    }

    public void setSsdList(List<SSD> ssdList) {
        this.ssdList = ssdList;
        hitungTotalHarga();
    }

    public void addSsd(SSD ssd) {
        this.ssdList.add(ssd);
        hitungTotalHarga();
    }

    public void setHddList(List<HDD> hddList) {
        this.hddList = hddList;
        hitungTotalHarga();
    }

    public void addHdd(HDD hdd) {
        this.hddList.add(hdd);
        hitungTotalHarga();
    }

    public void setGpu(GPU gpu) {
        this.gpu = gpu;
        hitungTotalHarga();
    }

    public void setPowerSupply(PowerSupply powerSupply) {
        this.powerSupply = powerSupply;
        hitungTotalHarga();
    }

    public void setCasing(Casing casing) {
        this.casing = casing;
        hitungTotalHarga();
    }

    public String getNama() {
        return this.nama;
    }

    public Cpu getCpu() {
        return this.cpu;
    }

    public Motherboard getMotherboard() {
        return this.motherboard;
    }

    public List<Ram> getRamList() {
        return this.ramList;
    }

    public List<SSD> getSsdList() {
        return this.ssdList;
    }

    public List<HDD> getHddList() {
        return this.hddList;
    }

    public GPU getGpu() {
        return this.gpu;
    }

    public PowerSupply getPowerSupply() {
        return this.powerSupply;
    }

    public Casing getCasing() {
        return this.casing;
    }

    public int getTotalHarga() {
        return this.totalHarga;
    }

    public void hitungTotalHarga() {
        int total = cpu.getHarga() + motherboard.getHarga() + gpu.getHarga() +
                   powerSupply.getHarga() + casing.getHarga();

        for (Ram ram : ramList) {
            total += ram.getHarga();
        }

        for (SSD ssd : ssdList) {
            total += ssd.getHarga();
        }

        for (HDD hdd : hddList) {
            total += hdd.getHarga();
        }

        this.totalHarga = total;
    }

    public void displayInfo() {
        System.out.println("==========================================");
        System.out.println("           INFORMASI KOMPUTER");
        System.out.println("==========================================");
        System.out.println("Nama Komputer  : " + this.nama);
        System.out.println("Total Harga    : Rp " + this.totalHarga);
        System.out.println("==========================================");

        System.out.println("\n>> CPU:");
        this.cpu.displayInfo();

        System.out.println("\n>> Motherboard:");
        this.motherboard.displayInfo();

        System.out.println("\n>> RAM (" + this.ramList.size() + " modul):");
        for (int i = 0; i < this.ramList.size(); i++) {
            System.out.println("  RAM #" + (i + 1) + ":");
            this.ramList.get(i).displayInfo();
            System.out.println();
        }

        if (!this.ssdList.isEmpty()) {
            System.out.println("\n>> SSD (" + this.ssdList.size() + " buah):");
            for (int i = 0; i < this.ssdList.size(); i++) {
                System.out.println("  SSD #" + (i + 1) + ":");
                this.ssdList.get(i).displayInfo();
                System.out.println();
            }
        }

        if (!this.hddList.isEmpty()) {
            System.out.println("\n>> HDD (" + this.hddList.size() + " buah):");
            for (int i = 0; i < this.hddList.size(); i++) {
                System.out.println("  HDD #" + (i + 1) + ":");
                this.hddList.get(i).displayInfo();
                System.out.println();
            }
        }

        System.out.println("\n>> GPU:");
        this.gpu.displayInfo();

        System.out.println("\n>> Power Supply:");
        this.powerSupply.displayInfo();

        System.out.println("\n>> Casing:");
        this.casing.displayInfo();

        System.out.println("\n==========================================");
        System.out.println("Total Harga: Rp " + this.totalHarga);
        System.out.println("==========================================");
    }
}
