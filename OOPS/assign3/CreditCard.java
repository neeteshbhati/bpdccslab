class CreditCard {
	
	String name;
	String cardNo;
	boolean enabled;
	int pin;
	String expiryMonth;
	String cardType;
	int currrentCredit;
	int creditLimit;

	CreditCard (String name, String cardNo, boolean enabled, int pin, int expiryMonth, 
		    String cardType, int currentCredit, int creditLimit) {
		
		this.name = name;
		this.cardNo = cardNo;
		this.enabled = enabled;
		this.pin = pin;
		this.expiryMonth = expiryMonth;
		this.cardType = cardType;
		this.currentCredit = currentCredit;
		this.creditLimit = creditLimit;

	}

	void changePin (int newPin) {
		this.pin = newPin;
	}

	void transact (int amt, int pin) {
	
		if( enabled == true && pin == this.pin && (currentCredit+amt)<creditLimit ) {
			
			switch (cardType) {
			
				case "Platinum" : currentCredit += amt*0.97; break;
				case "Gold" : currentCredit += amt*0.98; break;
				case "Silver" : currentCredit += amt*0.99; break;
			
			
			}
			
			System.out.println("Thank you for transaction");
		}
		else {
			System.out.println("Error processing your request.");
		}
	}


}
