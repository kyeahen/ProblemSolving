import java.util.Scanner;

public class Exercise3 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Input a number: ");
        int num = s.nextInt();

        System.out.print(total(num));
    }

    public static int total(int num) {

        if (num == 1) {
            return 1;
        }

        return total(num - 1) + num;
    }
}
