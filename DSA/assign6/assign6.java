import java.util.*;
import java.io.*;

class Student {

	int id;
	String name;
	double cgpa;
	int year;

    	Student (int id, String name, double cgpa, int year) {
	
		this.id = id;
    		this.name = name;
    		this.cgpa = cgpa;
    		this.year = year;

  	}

  	public String toString () {
  
		return String.format (id + " " + name + " " + cgpa + " " + year);

  	}

}

class assign6 {

	public static void main (String[] args) {

    		List < Student > students = new ArrayList < Student > ();

    		try {

      			BufferedReader bufferedReader = new BufferedReader (new FileReader ("students.txt"));

      			String temp = bufferedReader.readLine ();

      			while (temp != null) {
			
				String[]data = temp.split (" ");
				
				students.add (new Student (Integer.parseInt (data[0]), data[1],  Double.parseDouble (data[2]), Integer.parseInt (data[3])));

	  			temp = bufferedReader.readLine ();
			
			}

    		}

    		catch (Exception e) {
	
      			e.printStackTrace ();
    	
		}

    		System.out.println ("\nRecords read from the file:");
  		for (Student temp:students)
      			System.out.println (temp);

    		Student[]studentsArray = new Student[students.size ()];
    		studentsArray = students.toArray (studentsArray);

    		mergeSort (studentsArray, 0, studentsArray.length - 1);

    		System.out.println ("\nRecords sorted by Name using Merge Sort:");
  		for (Student temp:studentsArray)
      			System.out.println (temp);

    		insertionSort (studentsArray);

    		System.out.println ("\nRecords sorted by Year using Insertion Sort:");
  		for (Student temp:studentsArray)
      			System.out.println (temp);

    		students = Arrays.asList (studentsArray);

  	}

  	static void mergeSort (Student[]studentsArray, int left, int right) {

		if (left < right) {

			int middle = (left + right) / 2;

			mergeSort (studentsArray, left, middle);
			mergeSort (studentsArray, middle + 1, right);

			merge (studentsArray, left, middle, right);

		}

  	}

	static void merge (Student[]studentsArray, int left, int middle, int right) {
 
    		int leftArraySize = middle - left + 1;
    		int rightArraySize = right - middle;

    		Student[]leftArray = new Student[leftArraySize];
    		Student[]rightArray = new Student[rightArraySize];

    		for (int i = 0; i < leftArraySize; ++i)
      			leftArray[i] = studentsArray[left + i];

    		for (int j = 0; j < rightArraySize; ++j)
      			rightArray[j] = studentsArray[middle + 1 + j];

    		int leftIndex = 0;
    		int rightIndex = 0;
    		int finalIndex = left;

    		while (leftIndex < leftArraySize && rightIndex < rightArraySize) {

			if (leftArray[leftIndex].name.compareTo (rightArray[rightIndex].name) <= 0) {
	  
				studentsArray[finalIndex] = leftArray[leftIndex];
	    			leftIndex++;
	  		}

			else {

	    			studentsArray[finalIndex] = rightArray[rightIndex];
	    			rightIndex++;
	  		}

			finalIndex++;

      		}

    		while (leftIndex < leftArraySize) {

			studentsArray[finalIndex] = leftArray[leftIndex];
			leftIndex++;
			finalIndex++;

      		}

    		while (rightIndex < rightArraySize) {

			studentsArray[finalIndex] = rightArray[rightIndex];
			rightIndex++;
			finalIndex++;
      		}

	}

  	static void insertionSort (Student[]studentArray) {

    		int length = studentArray.length;

    		for (int i = 1; i < length; ++i) {

			Student key = studentArray[i];
			int j = i - 1;

			while (j >= 0 && studentArray[j].year < key.year) {

	    			studentArray[j + 1] = studentArray[j];
	    			j = j - 1;

	  		}
	
		studentArray[j + 1] = key;
      
		}
  	
	}

}
