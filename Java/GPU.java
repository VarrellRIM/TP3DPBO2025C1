public class GPU extends Komponen {
    private int vram;  // GB
    private int cudaCores;
    private String memoryType; // GDDR6, etc

    public GPU() {
        super();
        this.vram = 0;
        this.cudaCores = 0;
        this.memoryType = "";
    }

    public GPU(int vram, int cudaCores, String memoryType, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.vram = vram;
        this.cudaCores = cudaCores;
        this.memoryType = memoryType;
    }

    public void setVram(int vram) {
        this.vram = vram;
    }

    public void setCudaCores(int cudaCores) {
        this.cudaCores = cudaCores;
    }

    public void setMemoryType(String memoryType) {
        this.memoryType = memoryType;
    }

    public int getVram() {
        return this.vram;
    }

    public int getCudaCores() {
        return this.cudaCores;
    }

    public String getMemoryType() {
        return this.memoryType;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("VRAM: " + this.vram + " GB");
        System.out.println("CUDA Cores: " + this.cudaCores);
        System.out.println("Memory Type: " + this.memoryType);
    }
}
