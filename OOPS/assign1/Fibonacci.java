class Fibonacci {
	public static void main (String args[]) {
		int a=0, b=1, c=1;
		System.out.print("0 1 1 ");
		for (int i=0; i<7; ++i) {
			a=b;
			b=c;
			c=b+a;
			System.out.print(c + " ");
		}
	}

