package web;

public class Fibonacci {
	
	public static int fibonacci(int n){

        if (n == 1 || n == 2) {            
            return 1;
        }
        if (n > 2) {
            return fibonacci(n - 1) + fibonacci(n - 2);     
        }
        return -2;             
    }

	public static void main(String[] args) {
		for(int i=1; ;i++) {
			if(fibonacci(i)>200)break;
			System.out.print(fibonacci(i)+" ");
		}
		
	}

}
