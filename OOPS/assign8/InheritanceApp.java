class Person {

	private String name;
	private String address;

	public Person (String name, String address) {
	
		this.name = name;
		this.addres = address;

	}

	public String getName () {
	
		return name;
	
	}

	public String getAddress () {
	
		return address;
		
	}

	public void setAddress (String address) {
	
		this.address = address;
	
	}

	public String toString() {
	
		return String.format("Person Name: %s and Person Address: %s",name,,address);
	
	}

}

class Student extends Person {

	private String program;
	private int year;
	private double fee;

	public Student (String name, String address, String program, int year, double fee) {
	
		super(name,address);
		this.program = program;
		this.year = year;
		this.fee = fee;
	
	}

	public String getProgram () {
	
		return program;
	
	}

	public String getYear () {
	
		return year;
	
	}

	public String getFee () {
	
		return fee;
	
	}

	public void setProgram (String  program) {
	
		this.program = program;

	}

	public void setYear (int year) {
	
		this.year = year;
		
	}

	public void setFee (double fee) {
	
		this.fee = fee;

	}

	public String toString () {
	
		return (super.toString()+String.format("Program: %s, Year: %d, Fee: %f",program,year,fee));
	
	}

}

class Staff extends Person {

	private String school;
	private double pay;

	public Staff (String name, String addresss, String school, double pay) {
	
		super(name,address);
		this.school = school;
		this.pay = pay;
	
	}

	public String getSchool () {
	
		return school;

	}

	public String getPay () {
	
		return pay;
		
	}

	public void setSchool (String school) {
	
		this.school = school;
	
	}

	public void setPay (double pay) {
	
		this.pay = pay;
	
	}

	public String toString () {
	
		return (super.toString()+String.format("School: %s, Pay: %f",school,pay));
	
	}

}
