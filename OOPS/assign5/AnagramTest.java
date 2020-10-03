import java.util.Arrays;

class Anagram {
  
	boolean status = true;
	String s1 = "";
	String s2 = "";
	
	Anagram (String str1, String str2) {

		s1 = str1;
		s2 = str2;
		s1 = str1.replaceAll ("\\s", "");
    		s2 = str2.replaceAll ("\\s", "");
    		
    
    		if (s1.length () != s2.length ()) {
			status = false;
      		}
    		else {
			char[] ArrayS1 = s1.toLowerCase ().toCharArray ();
			char[] ArrayS2 = s2.toLowerCase ().toCharArray ();
			Arrays.sort (ArrayS1);
			Arrays.sort (ArrayS2);
			status = Arrays.equals (ArrayS1, ArrayS2);
      		}
    	}

	void display () {

		if (status) {
			System.out.println (s1 + " and " + s2 + " are anagrams");
      		}
    		else {
			System.out.println (s1 + " and " + s2 + " are not anagrams");
      		}
  	}
}

class AnagramTest {

	public static void main (String[]args) {
		
		Anagram anagram = new Anagram("neetesh","bhati");
		anagram.display();

  	}
}
