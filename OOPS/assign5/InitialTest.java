class Name {

	String initial = "";

	Name(String name) {
	
		initial+=name.substring(0,1);
		initial+=name.substring(name.indexOf(' ')+1,name.indexOf(' ')+2);
	}

	void display() {
	
		System.out.println("Initials are: " + initial);

	}
}

class InitialTest {

	public static void main(String[] args) {
	
		Name name = new Name("Rohan Mehra");
		name.display();
	
	}

}
