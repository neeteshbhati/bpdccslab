import java.util.*;

class Stack {

	int top = -1;
	char[] stackArray = new char[100];
	
	void push (char data) {
	
		if(size()==100)
			System.out.println("Stack Overflow");

		else {
		
			top++;
			stackArray[top]=data;
		
		}
		
	}

	void pop () {
	
		if (isEmpty())
			System.out.println("Stack Underflow");


		else
			--top;
	
	}

	int size () {
	
		return (top+1);
	
	}

	boolean isEmpty() {
	
		return (top==-1);

	}

}

class Balance {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);

		Stack stack = new Stack();

		System.out.println("Enter the expression to check for brackets");
		String expression = scanner.nextLine();

		for(int i=0; i<expression.length(); ++i) {
		
			switch(expression.charAt(i)) {
			
				case '(' : 
				case '{' :
				case '[' : stack.push(expression.charAt(i)); break;
				case ')' :
				case '}' :
				case ']' : stack.pop(); break;		
			
			}
		
		}

		System.out.println("The expression is balanced: " + stack.isEmpty());
		
	}

}
