//Secant Method for finding Roots
public class secantMethod {
	public static void main(String[] args) {
		System.out.println("Roll Number 161210040");
		double x0=4 ,x1=5.5, x2,x3,x4;
		x2=nextRoot(x0, x1);
		System.out.println("Root after 1st iteration is : "+x2);
		x3=nextRoot(x1, x2);
		System.out.println("Root after 2nd iteration is : "+x3);
		System.out.println("Error % = "+error(x2, x3));
		x4=nextRoot(x2, x3);
		System.out.println("Root after 3rd iteration is : "+x4);
		System.out.println("Error % = "+error(x3, x4));
		System.out.println(f(5.5));
	}
	public static double nextRoot(double x0, double x1) {
		double x2= x1-f(x1)*((x1-x0)/(f(x1)-f(x0)));
		return x2;
	}
	
	public static double f(double x) {
		return x*x*x-20;
	}
	public static double error(double x0,double x1) {
		double error = ((x1-x0)/x1)*100;
		return Math.abs(error);
	}
}
