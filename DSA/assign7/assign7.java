import java.util.*;
import java.io.*;

class Person {

	String name;
	int number;

    	Person (String name, int number) {
	
		this.name = name;
    		this.number = number;

  	}

  	public String toString () {
  
		return String.format (name + " " + number);

  	}

}

class assign7 {

	public static void main (String[] args) {

    		List < Person > people = new ArrayList < Person > ();

    		try {

      			BufferedReader bufferedReader = new BufferedReader (new FileReader ("contacts.txt"));

      			String temp = bufferedReader.readLine ();

			while (temp != null) {
			
				String[]data = temp.split (" ");

				people.add (new Person (data[0], Integer.parseInt (data[1])));

	  			temp = bufferedReader.readLine ();
							
			}

    		}

    		catch (Exception e) {
	
      			e.printStackTrace ();
    	
		}

		System.out.println ("\nRecords read from the file:");
  		for (Person temp : people)
      			System.out.println (temp);

    		Person[] peopleArray = new Person[people.size ()];
    		peopleArray = people.toArray (peopleArray);

    		quickSort (peopleArray, 0 , peopleArray.length - 1);

    		System.out.println ("\nRecords sorted by Name using Quick Sort:");
  		for (Person temp : peopleArray)
      			System.out.println (temp);

    		people = Arrays.asList (peopleArray);
		
  	}

  	static void quickSort (Person[] peopleArray, int left, int right) {

		if (left < right) {

			int pivot = partiton (peopleArray, left, right);

			quickSort (peopleArray, left, pivot - 1);
			quickSort (peopleArray, pivot + 1, right);
	
		}

  	}

	static int partiton (Person[] peopleArray, int left, int right) {
 
		Person pivot = peopleArray[right];

		int i = left - 1;

		for (int j = left; j < right; j++) {

			if (peopleArray[j].name.compareTo(pivot.name) <= 0) {
			
				i++;
	
				Person temp = peopleArray[i];
				peopleArray[i] = peopleArray[j];
				peopleArray[j] = temp;

			}

		}

		Person temp = peopleArray[i+1];
		peopleArray[i+1] = peopleArray[right];
		peopleArray[right] = temp;

		return (i+1);   		

	}

}
