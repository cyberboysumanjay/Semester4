import java.util.*;
public class Newton_Method3 {

		public static void main(String[] args) {
			double x,x1=0;
			Scanner sc =new Scanner(System.in);
			System.out.println("Enter Trail Root: ");
			x= sc.nextDouble();
			int iteration=1;
			do {
				x1=x;
				x=nextRoot(x, iteration);
				System.out.println("Root after "+iteration+"th iteration is: "+x);
				iteration++;
			}
			while ( (int) (x1*100000)!= (int)(x*100000));		
		}

		public static double derivative(double h) {
			return 3*h*h*Math.PI-18*h*Math.PI;
		}

		public static double nextRoot (double x, int iteration) { 
			return ( x- ( f(x)/derivative(x) ) );
		}

		public static double f(double h) {
			return Math.PI*h*h*h-9*Math.PI*h*h+90;
		}

	
}
