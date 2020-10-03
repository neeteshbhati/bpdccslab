import java.util.Scanner;

class ArmStrong {
	
	public static void main (String args[]) {
		
		Scanner scan = new Scanner(System.in);
		ArmstrongNumber n1 = new ArmstrongNumber();

		System.out.println("Enter Number to test");
		n1.no = scan.nextInt();
		
		System.out.println(n1.no + " is an Armstrong Number: "+n1.check());


	}
}

class ArmstrongNumber {
	
	int no;
	
	boolean check () {

		int digits=0, sum=0, num=0;

		num = no;

		while(num != 0)	{
			num/= 10;
			digits++;
		}

		num = no;

		while(num != 0) {
		
			sum +=	Math.pow((num%10),digits);
			num /= 10;
		}

		if(sum == no)
			return true;
		else
			return false;
		
	}
}
