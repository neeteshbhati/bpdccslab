import java.util.*;

class Binary  {

	public static void main(String[] args) {
	
		double startTime = System.currentTimeMillis();

		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter size of array");
		int size = scanner.nextInt();

		int[] array = new int[size];

		System.out.println("Enter data for array");

		for (int i=0; i<size; ++i) { 

			array[i] = scanner.nextInt();

		}
		
		System.out.println("Enter the key to search for");
		int key = scanner.nextInt();

		int start=0, end=size-1, mid;

		while (start<=end) {

			mid = (int)(start+end)/2;
			
			if (key>array[mid])			
				start = mid+1;
			
			else if(key<array[mid])
				end = mid-1;

			else if(key==array[mid]) {

				System.out.println("Element found at" + (mid+1));
				break;
			}

			else continue;

		}

		double endTime = System.currentTimeMillis();

		System.out.println("Time taken to execute: " + (endTime-startTime)/1000 + " seconds");
			
	
		
	
	}





}
