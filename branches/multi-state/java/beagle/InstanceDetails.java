package beagle;

/**
 * An interface for reporting information about a particular instance
 * as reported by the BEAGLE API.
 * @author Andrew Rambaut
 * @version $Id$
 */
public class InstanceDetails {

    public InstanceDetails() {
    }

    public int getResourceNumber() {
        return resourceNumber;
    }

    public void setResourceNumber(int resourceNumber) {
        this.resourceNumber = resourceNumber;
    }

    public long getFlags() {
        return flags;
    }

    public void setFlags(long flags) {
        this.flags = flags;
    }

    private int resourceNumber;
    private long flags;
}