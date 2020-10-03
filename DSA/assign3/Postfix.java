import java.util.*;

class Stack {

	int top = -1;
	int[] stackArray = new int[100];

	void push (int data) {
	
		if(size()==100)
			System.out.println("Stack Overflow");

		else {
		
			top++;
			stackArray[top]=data;
		
		}
		
	}

	int pop () {
	
		if (isEmpty()) {

			System.out.println("Stack Underflow");
			return 0;
		}


		else {
		
			int temp = stackArray[top];
			stackArray[top] = 0;
			top--;
			return temp;

		}
	
	}

	int size () {
	
		return (top+1);
	
	}

	boolean isEmpty() {
	
		return (top==-1);

	}

}

class Postfix {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);

		Stack stack = new Stack();

		System.out.println("Enter the expression for evaluation");
		String expression = scanner.nextLine();

		for(int i=0; i<expression.length(); ++i) { 
		
			if (Character.isDigit(expression.charAt(i)))
				stack.push(Character.getNumericValue(expression.charAt(i))); 

			else {
				
				if (expression.charAt(i)=='+')
					stack.push(stack.pop() + stack.pop());
					
				else if (expression.charAt(i)=='-')
					stack.push(stack.pop() - stack.pop());
					
				else if (expression.charAt(i)=='*') 
					stack.push(stack.pop() * stack.pop());

				else
					stack.push(stack.pop() / stack.pop());
								
			}
			
		}

		System.out.println("Result: " + stack.pop());

	}

}
