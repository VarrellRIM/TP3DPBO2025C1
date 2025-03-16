// Fan class dengan hybrid inheritance (Cooling + RGBInterface)
public class Fan extends Cooling {
    private RGBInterface rgbInterface;
    private int size; // mm (120, 140, etc)
    private int rpm;

    public Fan() {
        super();
        this.rgbInterface = new RGBInterface();
        this.size = 0;
        this.rpm = 0;
    }

    public Fan(int size, int rpm, int noiseLevel, int airflow, boolean hasRGB, String rgbType,
               String merk, String nama, int harga) {
        super(noiseLevel, airflow, merk, nama, harga);
        this.rgbInterface = new RGBInterface(hasRGB, rgbType);
        this.size = size;
        this.rpm = rpm;
    }

    public void setSize(int size) {
        this.size = size;
    }

    public void setRpm(int rpm) {
        this.rpm = rpm;
    }

    public void setHasRGB(boolean hasRGB) {
        this.rgbInterface.setHasRGB(hasRGB);
    }

    public void setRgbType(String rgbType) {
        this.rgbInterface.setRgbType(rgbType);
    }

    public int getSize() {
        return this.size;
    }

    public int getRpm() {
        return this.rpm;
    }

    public boolean getHasRGB() {
        return this.rgbInterface.getHasRGB();
    }

    public String getRgbType() {
        return this.rgbInterface.getRgbType();
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Size: " + this.size + " mm");
        System.out.println("RPM: " + this.rpm);
        this.rgbInterface.displayRGBInfo();
    }
}
