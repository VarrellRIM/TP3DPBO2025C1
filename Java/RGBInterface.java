// Interface untuk pengaturan RGB
public class RGBInterface {
    protected boolean hasRGB;
    protected String rgbType; // Addressable, Non-Addressable, etc

    public RGBInterface() {
        this.hasRGB = false;
        this.rgbType = "";
    }

    public RGBInterface(boolean hasRGB, String rgbType) {
        this.hasRGB = hasRGB;
        this.rgbType = rgbType;
    }

    public void setHasRGB(boolean hasRGB) {
        this.hasRGB = hasRGB;
    }

    public void setRgbType(String rgbType) {
        this.rgbType = rgbType;
    }

    public boolean getHasRGB() {
        return this.hasRGB;
    }

    public String getRgbType() {
        return this.rgbType;
    }

    public void displayRGBInfo() {
        System.out.println("RGB: " + (this.hasRGB ? "Ya" : "Tidak"));
        if (this.hasRGB) {
            System.out.println("RGB Type: " + this.rgbType);
        }
    }
}
