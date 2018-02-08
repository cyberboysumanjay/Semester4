import java.util.Scanner;


public class NewtonRaphsonMethod {

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
		while ((int) (x1*10000)!= (int)(x*10000));
	}

	public static double derivative(double x) {
		return 3*x*x-3;
	}

	public static double nextRoot (double x, int iteration) {
		return ( x- ( f(x)/derivative(x) ) );		
	}

	public static double f(double x) {
		return x*x*x-3*x+1;
	}



}
