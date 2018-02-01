
public class regula_falsi_method {
	public static void main(String[] args) {
		double a=-1,b=2,d;
		int i=1;
		while(i<31){
			double x1=(a*f(b)-b*f(a))/(f(b)-f(a));
		
			System.out.print(a+"\t");
			System.out.print(b+"\t");
			System.out.print(x1+"\t");
			System.out.println(f(x1));
			
			if (f(a)*f(b)<0)
			{
				
				if (f(x1)<0) {
					a=x1;
				}
				else {
					b=x1;
				}
			}
			i++;
		}

	}
	public static double f(double a){
		return 	a*a*a+4*a*a-10;
	}
}
