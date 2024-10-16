import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of an array");
        //length of an array
        int n = sc.nextInt();
        //declaration of an array
        int arr[] = new int[n+1];


        System.out.println("Insert the Element to be added");
        int item = sc.nextInt();

        System.out.println("Insert the position at which it will add");
        int pos = sc.nextInt();


        System.out.println("Enter the elements of an array");
        //input of an array
        for(int i=0;i<n;i++) {
            arr[i] = sc.nextInt();
        }

        //logic to add element in an array
      for(int i=n; i>=pos;i--) {
          arr[i] = arr[i-1];
      }
       arr[pos] = item;


        //output of an array


        for(int i=0; i<=n; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}