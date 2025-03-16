// Base class untuk cooling
public class Cooling extends Komponen {
    protected int noiseLevel; // dB
    protected int airflow;    // CFM

    public Cooling() {
        super();
        this.noiseLevel = 0;
        this.airflow = 0;
    }

    public Cooling(int noiseLevel, int airflow, String merk, String nama, int harga) {
        super(merk, nama, harga);
        this.noiseLevel = noiseLevel;
        this.airflow = airflow;
    }

    public void setNoiseLevel(int noiseLevel) {
        this.noiseLevel = noiseLevel;
    }

    public void setAirflow(int airflow) {
        this.airflow = airflow;
    }

    public int getNoiseLevel() {
        return this.noiseLevel;
    }

    public int getAirflow() {
        return this.airflow;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Noise Level: " + this.noiseLevel + " dB");
        System.out.println("Airflow: " + this.airflow + " CFM");
    }
}
