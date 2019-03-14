import java.util.Scanner;

public class HowManyOnes {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int num = s.nextInt();

        int result = 1;
        int i = 0;
        while (result % num != 0) {
            if (num * i == result) {
                break;
            }
            result = addOne(result);
            i++;
        }

        String strResult = Integer.toString(result);
        System.out.print(strResult.length());
    }

    //1의 자릿수를 늘려주는 메소드
    public static int addOne(int c) {
        String one = Integer.toString(c);
        one += "1";
        return Integer.parseInt(one);
    }
}
