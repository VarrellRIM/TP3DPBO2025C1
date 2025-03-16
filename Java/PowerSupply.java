public class PowerSupply extends Komponen {
    private int wattage;
    private String efficiency; // 80+ Bronze, Gold, etc
    private boolean modular;

    public PowerSupply() {
        super();
        this.wattage = 0;
        this.efficiency = "";
        this.modular = false;
    }

    public PowerSupply(int wattage, String efficiency, boolean modular, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.wattage = wattage;
        this.efficiency = efficiency;
        this.modular = modular;
    }

    public void setWattage(int wattage) {
        this.wattage = wattage;
    }

    public void setEfficiency(String efficiency) {
        this.efficiency = efficiency;
    }

    public void setModular(boolean modular) {
        this.modular = modular;
    }

    public int getWattage() {
        return this.wattage;
    }

    public String getEfficiency() {
        return this.efficiency;
    }

    public boolean isModular() {
        return this.modular;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Wattage: " + this.wattage + "W");
        System.out.println("Efficiency: " + this.efficiency);
        System.out.println("Modular: " + (this.modular ? "Ya" : "Tidak"));
    }
}
