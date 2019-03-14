import java.util.Scanner;

public class FindingPalindrome {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int num = s.nextInt();

        int i = 0;
        int sum = 0;
        while (num != reverse(num)) {
            sum = num + reverse(num);
            num = sum;
            i++;

            if (reverse(num) < 0) {
                System.out.print("Overflow");
                break;
            }
        }

        System.out.print(i +" " + sum);
    }

    //숫자를 역순으로 바꾸는 메소드
    public static int reverse(int num) {
        String strNum = Integer.toString(num);
        String reverse = "";

        for (int i = 0; i < strNum.length(); i++) {
            reverse += strNum.charAt(strNum.length() - i - 1);
        }

        return Integer.parseInt(reverse);
    }

}
