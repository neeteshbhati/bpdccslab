class MyComplex {

	private double real, imaginary;

	MyComplex(){
	
		real = 0; imaginary = 0;

	}
	MyComplex(int real, int imaginary){
	
		this.real = real; this.imaginary = imaginary;

	}

	double getReal(){
	
		return real;
	
	}

	double getImaginary(){
	
		return imaginary;
	
	}

	void setReal(double real){
	
		this.real = real;
		
	}

	void setImaginary(double imaginary){
	
		this.imaginary = imaginary;
	
	}

	void setValue (int real, int imaginary){
	
		this.real = real; this.imaginary = imaginary;
	
	}

	public String toString(){
	
		return String.format(%f + " + i" + %f, real, imaginary);
	
	}

	boolean isReal(){
	
		if(imaginary==0)
			return true;
		else
			return false;
	
	}

	boolean isImaginary(){
	
		if(imaginary==0)
			return true;
		else
			return false;
		
	}

}

class TestMyComplex{

	public static void main(String []args){
	
	
	
	
	}


}
