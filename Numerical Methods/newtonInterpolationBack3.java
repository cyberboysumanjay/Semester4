
import java.text.DecimalFormat;
public class newtonInterpolationBack3 {

	public static void main(String[] args) {
		DecimalFormat df = new DecimalFormat();
		df.setMaximumFractionDigits(2);
		
		int a[]=new int[9];
		System.out.println("Roll Number 161210040\n");

		int n = 6;
		double x[] = { 1,1.1f,1.2f,1.3f,1.4f,1.5f };

		double y[][] = new double [n][n];
		y[0][0] = 2;
		y[1][0] = 2.1f;
		y[2][0] = 2.3f;
		y[3][0] = 2.7f;
		y[4][0] = 3.5f;
		y[5][0] = 4.5f;

		for (int i = 1; i < n; i++) {
			for (int j = n - 1; j >= i; j--)
				y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
		}

		System.out.println("x"+"\t"+"F(x)");
		for (int i = 0; i < n; i++) {
			System.out.print(df.format(x[i])+"\t");
			for (int j = 0; j <= i; j++)
				System.out.print(df.format(y[i][j])+"   "); 
			System.out.println();

		}
		double value= 1.45f;
		double sum = y[n - 1][0];
		double u = (value - x[n - 1]) / (x[1] - x[0]);
		for (int i = 1; i < n; i++) {
			sum = sum + (calculateP(u, i) * y[n - 1][i]) / fact(i);
		}
		System.out.println();
		System.out.println("F(" + df.format(value) +") = "+sum);
	}
	public static double calculateP(double u, int n)  {
		double temp = u;
		for (int i = 1; i < n; i++)
			temp = temp * (u + i);
		return temp;
	}
	
	public static int fact(int n) {
		int f = 1;
		for (int i = 2; i <= n; i++)
			f *= i;
		return f;
	}
}
