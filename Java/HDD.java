// Derived class dari Penyimpanan
public class HDD extends Penyimpanan {
    private int rpm;  // rotations per minute
    private int cacheSize; // MB

    public HDD() {
        super();
        this.rpm = 0;
        this.cacheSize = 0;
    }

    public HDD(int kapasitasGB, String interface_, int rpm, int cacheSize, String merk, String nama, int harga) {
        super(kapasitasGB, interface_, merk, nama, harga);
        this.rpm = rpm;
        this.cacheSize = cacheSize;
    }

    public void setRpm(int rpm) {
        this.rpm = rpm;
    }

    public void setCacheSize(int cacheSize) {
        this.cacheSize = cacheSize;
    }

    public int getRpm() {
        return this.rpm;
    }

    public int getCacheSize() {
        return this.cacheSize;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("RPM: " + this.rpm);
        System.out.println("Cache Size: " + this.cacheSize + " MB");
    }
}
