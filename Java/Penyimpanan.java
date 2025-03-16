// Base class untuk penyimpanan
public class Penyimpanan extends Komponen {
    protected int kapasitasGB;
    protected String interface_; // SATA, NVMe, etc.

    public Penyimpanan() {
        super();
        this.kapasitasGB = 0;
        this.interface_ = "";
    }

    public Penyimpanan(int kapasitasGB, String interface_, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.kapasitasGB = kapasitasGB;
        this.interface_ = interface_;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public void setInterface(String interface_) {
        this.interface_ = interface_;
    }

    public int getKapasitasGB() {
        return this.kapasitasGB;
    }

    public String getInterface() {
        return this.interface_;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kapasitas: " + this.kapasitasGB + " GB");
        System.out.println("Interface: " + this.interface_);
    }
}
