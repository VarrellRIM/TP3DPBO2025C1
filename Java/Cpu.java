public class Cpu extends Komponen {
    private int jumlahCore;
    private float kecepatanGHz;
    private String socket;

    public Cpu() {
        super();
        this.jumlahCore = 0;
        this.kecepatanGHz = 0.0f;
        this.socket = "";
    }

    public Cpu(int jumlahCore, float kecepatanGHz, String socket, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
        this.socket = socket;
    }

    public void setJumlahCore(int jumlahCore) {
        this.jumlahCore = jumlahCore;
    }

    public void setKecepatanGHz(float kecepatanGHz) {
        this.kecepatanGHz = kecepatanGHz;
    }

    public void setSocket(String socket) {
        this.socket = socket;
    }

    public int getJumlahCore() {
        return this.jumlahCore;
    }

    public float getKecepatanGHz() {
        return this.kecepatanGHz;
    }

    public String getSocket() {
        return this.socket;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Jumlah Core: " + this.jumlahCore);
        System.out.println("Kecepatan: " + this.kecepatanGHz + " GHz");
        System.out.println("Socket: " + this.socket);
    }
}
