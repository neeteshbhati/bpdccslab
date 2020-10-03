import java.util.Scanner;

class DectoBin {
	
	public static void main (String args[]) {
		
		int num;
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter Number");
		num = scan.nextInt();

		while (num !=0 ) {
			System.out.println(num%2);
			num/=2;
		}
			
	}
}
