import  mypackage.*;
public class Area {
    public static  void main(String args[]) {
        //mypackage class rectangle
        Rectangle a1 = new Rectangle();
        int rectArea = a1.area(5,4);
        System.out.println("Area of Rectangle is : " + rectArea);
        int rectPeri = a1.perimeter(5,4);
        System.out.println("Perimeter of Rectangle is : " + rectPeri);


        //another class from mypackage -- for circle
        Circle c1 = new Circle();
        c1.area( 5);
        c1.perimeter( 5);

        //another class from mypackage -- for triangle
        Triangle t1 = new Triangle();
        t1.areaTriangle(5,4);

    }
}
