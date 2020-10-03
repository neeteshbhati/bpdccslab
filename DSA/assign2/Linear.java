import java.util.*;

class Linear {

	public static void main(String[] args) {
	
		double startTime = System.currentTimeMillis();
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the size of the array");
		int size = scanner.nextInt();

		int[] array = new int[size];

		System.out.println("Enter data for the array");

		for (int i=0; i<size; ++i) {
		
			array[i] = scanner.nextInt();
					
		}

		System.out.println("Enter the key to search for");		
		int key = scanner.nextInt();

		for (int i=0; i<size; ++i) {

			if(array[i]==key) {
			
				System.out.println("Element found at " + (i+1));
				break;
			}
					
		}
		
		double endTime = System.currentTimeMillis();

		System.out.println("Time taken to execute: " + (endTime-startTime)/1000 + " seconds");
	}

}
