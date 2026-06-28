class Outer {

    void display() {
        System.out.println(" Outer class message");
    }

    class Inner {

        void display() {
            System.out.println("Inner class message");
        }
    }
}

public class Main {
    public static void main(String[] args) {

        Outer obj = new Outer();
        obj.display();

        Outer.Inner obj2 = obj.new Inner();
        obj2.display();
    }
}