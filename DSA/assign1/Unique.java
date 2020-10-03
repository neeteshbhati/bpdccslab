class Unique {

	public static void main(String[] args) {
	
		int[] array = {1,2,3,3,5};

		boolean unique = true;

		for(int i=0; i<5; ++i) {
		
			for(int j=i+1; j<5; ++j) {
			
				if(array[i]==array[j])
					unique = false;
						
			}
		
		
		}

		if(unique)
			System.out.println("Unique");
		else
			System.out.println("Not Unique");
	
	
	
	}



}
