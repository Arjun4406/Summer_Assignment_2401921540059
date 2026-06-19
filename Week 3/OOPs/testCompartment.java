public class testCompartment {

    public static void main(String[] args) {

     Compartment[] compartments = new Compartment[10];

        for (int i = 0; i < compartments.length; i++) {

         int randomNumber = (int)(Math.random() * 4) + 1;

            if (randomNumber == 1) {
                compartments[i] = new FirstClass();
            }
            else if (randomNumber == 2) {
                compartments[i] = new Ladies();
            }
            else if (randomNumber == 3) {
                compartments[i] = new General();
            }
            else {
                compartments[i] = new Luggage();
            }
        }

              System.out.println("Notice Messages:");

        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + " : " + compartments[i].notice() );
        }
    }
}