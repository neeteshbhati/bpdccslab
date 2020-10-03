import java.util.*;

class ReverseArray {
	
	public static void main(String[] args) {
		
		int[] array = {1,2,3,4,5};

		int start,end,temp;

		for(start = 0, end = 4; start<(int)5/2; ++start, --end) {
			
			temp = array[start];
			array[start] = array[end];
			array[end] = temp;
		
		}

		for(int i=0;i<5;++i) {System.out.println(array[i]);}



	}

}
