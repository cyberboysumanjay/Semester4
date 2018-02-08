
public class bisectionMethod {
	
	public static  double f(double x){
	        double f;
	        f=(x*x*x)-4*x-9;
	        return f;
	    }

	     public static void main(String[] args) {
	         
		        double a=2,b=3,x=0,i=1,x1;
		          do
		          {
		        	  x1=x;
		             x=(a+b)/2;
		             if(f(x)<0)
		                a=x;
		             else
		                b=x;
		             i++;
		          }
		          while ((int) (x1*1000)!= (int)(x*1000));
		          double ans= (int)(x*1000);
		          
		          System.out.println(ans/1000);
		}
	     
	
	          
	
}
