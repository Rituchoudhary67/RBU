package mypackage;

public class Circle {
    static float pi = 3.14f;
    public void area(float radius){
        float areaCir = pi * (radius*radius);
        System.out.println("Area of Circle is : " + areaCir);
    }

    public void perimeter(float radius) {
        float periCircle = 2 * pi * radius;
        System.out.println("Perimeter of Circle is : " + periCircle);
    }
}
