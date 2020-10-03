import java.util.*;

class BracketCheck {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		String input = scanner.nextLine();
	
		int count=0;

		for(int i=0; i<input.length(); ++i) {
	
			if(input.charAt(i)=='(')
				count++;
			if(input.charAt(i)==')')
				count--;
	
		}

		if(count==0)
			System.out.println("Balanced");
		else 
			System.out.println("Unbalanced");

	}

}
