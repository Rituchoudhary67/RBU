import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;

public class random {
    public static void main(String args[]) {
        String fileName = "file2.txt"; // Output file name
        int num = 100000; // Total numbers to generate
        int upperBound = 1000000; // Upper bound for the random numbers (exclusive)

        Random random = new Random(); //creating random number object

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileName))) {
            for (int i = 1; i <= num; i++) {
                int randomNumber = random.nextInt(upperBound); // Generate a random number
                writer.write(Integer.toString(randomNumber));
                writer.newLine(); // Write a newline character after each number
            }
            System.out.println("Finished writing random numbers to " + fileName);
        } catch (IOException e) {
            System.err.println("An error occurred while writing to the file: " + e.getMessage());
        }
         

    }
}
