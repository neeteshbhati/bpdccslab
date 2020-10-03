import java.util.*;

class Student {

	int id;
	String name;
	int marks1;
	int marks2;
	int marks3;
	float percentage;

	Student get_detail (String name, int id, int marks1, int marks2, int marks3) {
	
		this.name = name;
		this.id = id;
		this.marks1 = marks1;
		this.marks2 = marks2;
		this.marks3 = marks3;
		
		return this;	
			
	}

	void calculate_per() {
	
		percentage = (float)((float)marks1+(float)marks2+(float)marks3)/3;	
	
	}

}

class StudentTest {
	
	public static void main(String[] args) {
	
		ArrayList<Student> studentlist = new ArrayList<Student>();

		studentlist.add(new Student().get_detail("Neetesh",60,97,98,95));	
		studentlist.add(new Student().get_detail("Rahul",68,67,66,63));
		studentlist.add(new Student().get_detail("Aditya",58,87,89,82));

		System.out.println(studentlist.get(0).marks1);
		//find_extreme(studentlist);	
	
	}

	static void find_extreme(ArrayList<Student> studentlist) {
	
		float minimum = studentlist.get(0).percentage;
		float maximum = studentlist.get(0).percentage;
		
		for(Student temp : studentlist) {
		
			if(temp.percentage>maximum)
				maximum = temp.percentage;
			
			if(temp.percentage<minimum)
				minimum = temp.percentage;
		}

		System.out.println("Minimum: " + minimum + "Maximum: " + maximum);
			
	}

}
