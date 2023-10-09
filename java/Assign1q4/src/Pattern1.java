
public class Pattern1 {

	public static void main(String[] args) {
        int i, j; 
	        // outer loop to handle number of rows 
	        for (i = 1; i <= 5; i++) 
	        { 
	            // inner loop to print space 
	            for (j = 1; j <= 5 - i; j++)
	            { 
	                System.out.print(" "); 
	            } 
	            // inner loop to print star 
	            for (j = 1; j <= i; j++) 
	            { 
	                System.out.print("*"); 
	            } 
	            for (j = 2; j <= i; j++) 
	            { 
	                System.out.print("*"); 
	            } 
	            // print new line for each row 
	            
	            System.out.println(); 
			
		}
	         
	        // outer loop to handle number of rows 
	        for (i = 4; i>=1 ; i--) 
	        { 
	            // inner loop to print space 
	            for (j = 1; j <=5-i; j++) 
	            { 
	                System.out.print(" "); 
	            } 
	            // inner loop to print star 
	            for (j = 1; j <=2*i-1 ; j++) 
	            { 
	                System.out.print("*"); 
	            } 
	            System.out.println();
        

	}
}
}

