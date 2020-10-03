import java.util.Scanner;

class Student {
	String name;
	int id;
	int age;
	float[] marks = new float[3];
	float average;
	void findAverage () {
		average = (marks[0] + marks[1] + marks[2])/2;
	}
}

class Student_Marks {
	public static void main (String args[]) {
		
		Scanner scan = new Scanner(System.in);
		
		Student[] list = new Student[3];
		Student buffer = new Student();
		
		for (int i=0; i<list.length; ++i) {
			System.out.println("Enter Name");
			list[i].name = scan.nextLine();
			System.out.println("Enter ID");
			list[i].id = scan.nextInt();
			System.out.println("Enter Age");
			list[i].age = scan.nextInt();
			for(int j=0; j<buffer.marks.length; ++j) {
				System.out.println("Enter Subject Marks");
				list[i].marks[j] = scan.nextInt();
			}
		}
		for(int k=0; k<list.length; ++k) {
			list[k].findAverage();
			System.out.println("The average is " + list[k].average);
		}



			
		
		

	}
}
