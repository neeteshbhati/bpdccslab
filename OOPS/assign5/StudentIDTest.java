import java.util.Random;
import java.util.Scanner;

class Student {
	
	String id = "";
	String email = "";

	Student(String year, String discipline, String option, String campus) {
	
		id+=year;
		
		switch(discipline) {
		
			case "CHEM" : id+="A1"; break;

			case "EEE" : id+="A3"; break;

			case "MECH" : id+="A4"; break;

			case "CS" : id+="A7"; break;
				
		}

		switch(option) {
		
			case "PS" : id+="PS"; break;

			case "TS" : id+="TS"; break;
		
		}

		Random rand = new Random();

		int r = rand.nextInt(999)+1;

		id+=Integer.toString(r);

		switch(campus) {
		
			case "Pilani" : id+="P"; break;

			case "Hyderabad" : id+="H"; break;

			case "Goa" : id+="G"; break;

			case "Dubai" : id+="U"; break;
		
		}

		email+= "f"; email+=year; email+=Integer.toString(r); email+="@dubai.bits-pilani.ac.in";
	
	}

	void display() {
	
		System.out.println("ID: " + id);
		System.out.println("Email: " + email);

	}

}

class StudentIDTest {

	public static void main(String[] args) {
	
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter Year");
		String year = scan.nextLine();

		System.out.println("Enter Discipline");
		String discipline = scan.nextLine();

		System.out.println("Enter PS/TS");
		String option = scan.nextLine();

		System.out.println("Enter Campus");
		String campus = scan.nextLine();

		Student student = new Student(year, discipline, option, campus);

		student.display();
		
	}
}
