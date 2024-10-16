import java.util.Scanner;

public class Insert {
    public static  void  main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an array :");
        int n = sc.nextInt();
        System.out.println("Enter the position at which item to be inserted :");
        int pos = sc.nextInt();
        System.out.println("Enter the element to be inserted :");
        int item = sc.nextInt();

        //declaration of an array
        int arr[] = new int[n+1];

        //input of an array
        System.out.println("Enter the elements of an array :");
        for(int i=0; i<n;i++) {
            arr[i] = sc.nextInt();
        }

        //logic of an array
        for(int i=n-1; i>=pos-1; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = item;

        //output of an array
        System.out.println("After insertion of an element in an array");
        for(int i=0; i<arr.length;i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
