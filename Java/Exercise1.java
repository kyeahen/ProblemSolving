import java.util.Scanner;

public class Exercise1 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = s.nextInt();

        System.out.print(pow(num));
    }

    public static int pow(int num) {

        if (num == 0) {
            return 1;
        }

        return 2 * pow(num - 1);
    }
}
