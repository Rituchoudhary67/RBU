import java.util.Scanner;

public class Delete {
    public static  void  main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an array");
        int n = sc.nextInt();
        //declaration of an array
        int arr[] = new int[n];

        System.out.println("Enter the position at which element to be deleted");
        int pos = sc.nextInt();

        System.out.println("Enter the element of an array");
        //input of an array
        for(int i=0; i<n;i++) {
            arr[i] = sc.nextInt();
        }

        //logic to delete an element from an array
        for(int i=pos; i<n-1;i++) {
            arr[i] = arr[i+1];
        }

        //output of an array
        for(int i=0; i<n-1; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
