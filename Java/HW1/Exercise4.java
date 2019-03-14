import java.util.Scanner;

public class Exercise4 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter 5개의 정수: ");
        int[] numArray = new int[5];
        for(int i = 0; i < numArray.length; i++) {
            numArray[i] = s.nextInt();
        }

        System.out.print("Enter a key: ");
        int key = s.nextInt();

        System.out.print(searchNumber(numArray, key));
    }

    public static String searchNumber(int[] numArray, int key) {
        for (int i = 0; i < numArray.length; i++) {
            if (numArray[i] == key) {
                return i + 1 + "번째에 있다.";
            }
        }

        return "없다";
    }
}
