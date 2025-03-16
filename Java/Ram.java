public class Ram extends Komponen {
    private int kapasitasGB;
    private String tipe;     // DDR4, DDR5, etc
    private int frekuensiMHz;

    public Ram() {
        super();
        this.kapasitasGB = 0;
        this.tipe = "";
        this.frekuensiMHz = 0;
    }

    public Ram(int kapasitasGB, String tipe, int frekuensiMHz, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.kapasitasGB = kapasitasGB;
        this.tipe = tipe;
        this.frekuensiMHz = frekuensiMHz;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public void setFrekuensiMHz(int frekuensiMHz) {
        this.frekuensiMHz = frekuensiMHz;
    }

    public int getKapasitasGB() {
        return this.kapasitasGB;
    }

    public String getTipe() {
        return this.tipe;
    }

    public int getFrekuensiMHz() {
        return this.frekuensiMHz;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kapasitas: " + this.kapasitasGB + " GB");
        System.out.println("Tipe: " + this.tipe);
        System.out.println("Frekuensi: " + this.frekuensiMHz + " MHz");
    }
}
