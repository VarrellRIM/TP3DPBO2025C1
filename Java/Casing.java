import java.util.ArrayList;
import java.util.List;

// Kelas Casing dengan komposisi (memiliki Fan objects)
public class Casing extends Komponen {
    private String formFactor; // ATX, MicroATX, etc
    private String material;   // Tempered Glass, Metal, etc
    private List<Fan> fans;

    public Casing() {
        super();
        this.formFactor = "";
        this.material = "";
        this.fans = new ArrayList<>();
    }

    public Casing(String formFactor, String material, List<Fan> fans, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.formFactor = formFactor;
        this.material = material;
        this.fans = fans;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public void setFans(List<Fan> fans) {
        this.fans = fans;
    }

    public void addFan(Fan fan) {
        this.fans.add(fan);
    }

    public String getFormFactor() {
        return this.formFactor;
    }

    public String getMaterial() {
        return this.material;
    }

    public List<Fan> getFans() {
        return this.fans;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Form Factor: " + this.formFactor);
        System.out.println("Material: " + this.material);
        System.out.println("Jumlah Fan: " + this.fans.size());

        if (!this.fans.isEmpty()) {
            System.out.println("Detail Fan:");
            for (int i = 0; i < this.fans.size(); i++) {
                System.out.println("  Fan #" + (i + 1) + ":");
                this.fans.get(i).displayInfo();
                System.out.println();
            }
        }
    }
}
