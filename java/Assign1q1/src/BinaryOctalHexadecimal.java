import java.util.Scanner;

public class BinaryOctalHexadecimal {

	public static void main(String[] args) {
		
		System.out.println("Please enter the number");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		System.out.println("Number in binary "+ Integer.toBinaryString(a));
		System.out.println("Number in Octal "+ Integer.toOctalString(a));
		System.out.println("Number in Hexadecimal "+ Integer.toHexString(a));
	}

}
