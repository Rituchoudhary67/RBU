import java.util.Scanner;

public class TwoDArr {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int r = sc.nextInt();
        System.out.println("Enter the number of columns");
        int c = sc.nextInt();
        //declaration of an 2D Array
        int arr[][] = new int[r][c];

        //input of an array
        for(int i=0; i<r;i++) {
            for(int j=0; j<c;j++) {
                arr[r][c] = sc.nextInt();
            }
        }

        //output of an array
        for(int i=0;i<r;i++) {
            for(int j=0; j<c;j++) {
                System.out.println(arr[i][j] + " ");
            }
        }
    }
}
