// Motherboard menggunakan komposisi dengan USBInterface
public class Motherboard extends Komponen {
    private USBInterface usbInterface;
    private String chipset;
    private String formFactor; // ATX, MicroATX, etc
    private int ramSlots;
    private int m2Slots;

    public Motherboard() {
        super();
        this.usbInterface = new USBInterface();
        this.chipset = "";
        this.formFactor = "";
        this.ramSlots = 0;
        this.m2Slots = 0;
    }

    public Motherboard(String chipset, String formFactor, int ramSlots, int m2Slots,
                      int usb2Ports, int usb3Ports, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.usbInterface = new USBInterface(usb2Ports, usb3Ports);
        this.chipset = chipset;
        this.formFactor = formFactor;
        this.ramSlots = ramSlots;
        this.m2Slots = m2Slots;
    }

    public void setChipset(String chipset) {
        this.chipset = chipset;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public void setRamSlots(int ramSlots) {
        this.ramSlots = ramSlots;
    }

    public void setM2Slots(int m2Slots) {
        this.m2Slots = m2Slots;
    }

    public void setUsb2Ports(int usb2Ports) {
        this.usbInterface.setUsb2Ports(usb2Ports);
    }

    public void setUsb3Ports(int usb3Ports) {
        this.usbInterface.setUsb3Ports(usb3Ports);
    }

    public String getChipset() {
        return this.chipset;
    }

    public String getFormFactor() {
        return this.formFactor;
    }

    public int getRamSlots() {
        return this.ramSlots;
    }

    public int getM2Slots() {
        return this.m2Slots;
    }

    public int getUsb2Ports() {
        return this.usbInterface.getUsb2Ports();
    }

    public int getUsb3Ports() {
        return this.usbInterface.getUsb3Ports();
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Chipset: " + this.chipset);
        System.out.println("Form Factor: " + this.formFactor);
        System.out.println("RAM Slots: " + this.ramSlots);
        System.out.println("M.2 Slots: " + this.m2Slots);
        this.usbInterface.displayUSBInfo();
    }
}
