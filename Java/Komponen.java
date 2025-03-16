// Kelas dasar untuk semua komponen
public class Komponen {
    protected String merk;
    protected String nama;
    protected int harga;

    public Komponen() {
        this.merk = "";
        this.nama = "";
        this.harga = 0;
    }

    public Komponen(String merk, String nama, int harga) {
        this.merk = merk;
        this.nama = nama;
        this.harga = harga;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setHarga(int harga) {
        this.harga = harga;
    }

    public String getMerk() {
        return merk;
    }

    public String getNama() {
        return nama;
    }

    public int getHarga() {
        return harga;
    }

    public void displayInfo() {
        System.out.println("Merk: " + this.merk);
        System.out.println("Nama: " + this.nama);
        System.out.println("Harga: Rp " + this.harga);
    }
}
