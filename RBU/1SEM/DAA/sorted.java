import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;


public class sorted {
    public static void main(String args[]) {
        String fileName = "file1.txt"; // Output file name
        int num = 100000; // Total numbers to generate
    
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileName))) {
            for (int i = 1; i <= num; i++) {
               
                writer.write(Integer.toString(i));
                writer.newLine(); // Write a newline character after each number
            }
            System.out.println("Finished writing random numbers to " + fileName);
        } catch (IOException e) {
            System.err.println("An error occurred while writing to the file: " + e.getMessage());
        }
         

    }
}
