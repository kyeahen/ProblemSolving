import java.util.Scanner;

public class Carry {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String num = s.nextLine();
        String[] numArray = num.split(" ");

        int size = numArray[0].length();
        if (numArray[0].length() != numArray[1].length()) {

            if (numArray[0].length() > numArray[1].length()) {
                int n = numArray[0].length() - numArray[1].length();
                numArray[0] = numArray[0].substring(n, numArray[0].length());
                size = numArray[1].length();
            } else {
                int n = numArray[1].length() - numArray[0].length();
                numArray[1] = numArray[1].substring(n, numArray[1].length());
                size = numArray[0].length();
            }
        }

        int sum = 0;
        int count = 0;
        for (int i = 0; i < size; i++) {

            char num1 = numArray[0].charAt(numArray[0].length() - i - 1);
            char num2 = numArray[1].charAt(numArray[1].length() - i - 1);

            int a = Character.digit(num1, 10);
            int b = Character.digit(num2, 10);

            sum = a + b;

            if (sum >= 10) {
                count++;
            }
        }

        System.out.print(count);
    }
}
