// Derived class dari Penyimpanan
public class SSD extends Penyimpanan {
    private int readSpeed;  // MB/s
    private int writeSpeed; // MB/s

    public SSD() {
        super();
        this.readSpeed = 0;
        this.writeSpeed = 0;
    }

    public SSD(int kapasitasGB, String interface_, int readSpeed, int writeSpeed, String merk, String nama, int harga) {
        super(kapasitasGB, interface_, merk, nama, harga);
        this.readSpeed = readSpeed;
        this.writeSpeed = writeSpeed;
    }

    public void setReadSpeed(int readSpeed) {
        this.readSpeed = readSpeed;
    }

    public void setWriteSpeed(int writeSpeed) {
        this.writeSpeed = writeSpeed;
    }

    public int getReadSpeed() {
        return this.readSpeed;
    }

    public int getWriteSpeed() {
        return this.writeSpeed;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Read Speed: " + this.readSpeed + " MB/s");
        System.out.println("Write Speed: " + this.writeSpeed + " MB/s");
    }
}
