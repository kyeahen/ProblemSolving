public class Exercise2 {

    public static void main(String[] args) {

        for (int i = 2; i <= 30; i++) {

            if (isPrime(i) == 1) {
                System.out.print(i + " ");
            }
        }
    }

    public static int isPrime(int x) {

        for (int j = 2; j < x; j++) {
            if (x % j == 0) {
                return 0;
            }
        }

        return 1;
    }
}
