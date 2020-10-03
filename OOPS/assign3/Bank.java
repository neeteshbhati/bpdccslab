import java.util.Scanner;

class Bank {
		
	public static void main (String args[]) {
		
		Scanner scan = new Scanner (System.in);
		int option;
		BankAccount b1 = new BankAccount("Neetesh");

		do {
			System.out.println("Welcome to the Bank");
			System.out.println("What would you like to do?");
			System.out.println("1. Deposit Money");
			System.out.println("2. Withdraw Money");
			System.out.println("3. Check Balance");
			System.out.println("4. Exit");
			option = scan.nextInt();
		
			switch (option) {
			
				case 1 : b1.deposit(); break;
				case 2 : b1.withdraw(); break;
				case 3 : b1.balance();  break;
				default : System.out.println("Invalid Choice. Try again");
			}
		}while (option != 4);
	}
}

class BankAccount {

	Scanner scan = new Scanner (System.in);
	String name;
	float balance;

	BankAccount (String name){
		this.name = name;
		balance = 0;
	}
	
	void deposit () {
	
		float d;
		System.out.println("Enter the amount to deposit");
		d = scan.nextFloat();
		balance += d;
		System.out.println(d + " has been credited your account.");
	}

	void withdraw () {

        	float w;
		System.out.println("Enter the amount to withdraw");
		w = scan.nextFloat();
	
		if(balance < w) {
			System.out.println("Low Balance");
		}
		else {
			balance -= w;
	     		System.out.println(w + " has been debited from account.");
  		}

	}

	void balance () {
		System.out.println("Your balance is "+balance);
	}
}
