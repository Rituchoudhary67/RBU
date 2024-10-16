class Plant_Name {
    String plantColor ;

    public void plantName(String name) {
        System.out.println(name + " is my Plant Name");
        System.out.println(this.plantColor + " is my color of my plant " + name);
    }
}


public class Fun {

    //without argument function created
    static void animal() {
        System.out.println("Without argument function calling");
        System.out.println("Animal function is created");
    }

    //with argument function created
    static void herbivours(String animalName) {
        System.out.println("With Argument Function Calling");
        System.out.println(animalName + " is Herbivours ");
    }

    //function overloading
    static void herbivours(String animalName, int walk) {
        System.out.println("Function OverLoading");
        System.out.println(animalName + " Walks on " + walk + " Legs");

    }
   public static void main(String agrs[]) {
        //calling function without argument
         animal();
         herbivours("Deer");
         herbivours("Rabbit",4);

         //external class
       //creating external object
       Plant_Name p1 = new Plant_Name();
       //class variable access
       p1.plantColor = "green";
       p1.plantName("Tulsi");
   }
}
