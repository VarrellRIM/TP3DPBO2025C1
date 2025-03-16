// Interface untuk USB ports
public class USBInterface {
    protected int usb2Ports;
    protected int usb3Ports;

    public USBInterface() {
        this.usb2Ports = 0;
        this.usb3Ports = 0;
    }

    public USBInterface(int usb2Ports, int usb3Ports) {
        this.usb2Ports = usb2Ports;
        this.usb3Ports = usb3Ports;
    }

    public void setUsb2Ports(int usb2Ports) {
        this.usb2Ports = usb2Ports;
    }

    public void setUsb3Ports(int usb3Ports) {
        this.usb3Ports = usb3Ports;
    }

    public int getUsb2Ports() {
        return this.usb2Ports;
    }

    public int getUsb3Ports() {
        return this.usb3Ports;
    }

    public void displayUSBInfo() {
        System.out.println("USB 2.0 Ports: " + this.usb2Ports);
        System.out.println("USB 3.0 Ports: " + this.usb3Ports);
    }
}
