abstract class Compartment {

    public abstract String notice();
}

class FirstClass extends Compartment {

    public String notice() {
        return " This is a First Class Compartment";
    }
}
class Ladies extends Compartment {

    public String notice() {
        return "This Compartment is for Ladies only";
    }
}
class General extends Compartment {

    public String notice() {
        return "General Coach";
    }
}
class Luggage extends Compartment {

    public String notice() {
        return "Comprtment for Luggage";
    }
}