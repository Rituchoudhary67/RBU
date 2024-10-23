package mypackage;

public class Rectangle {
    public int area(int len, int bred) {
        int rectArea = len * bred ;
        return rectArea;
    }

    public int perimeter(int len, int bred) {
        int rectPeri = 2 * (len + bred);
        return  rectPeri;
    }
}
