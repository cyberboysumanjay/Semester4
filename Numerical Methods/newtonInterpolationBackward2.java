
public class newtonInterpolationBackward2 {


	public static void main(String[] args) {
		int a[]=new int[9];
		System.out.println("Roll Number 161210040\n");

		int n = 8;
		double x[] = { 1,2,3,4,5,6,7,8 };

		double y[][] = new double [n][n];
		y[0][0] = 1;
		y[1][0] = 8;
		y[2][0] = 27;
		y[3][0] = 64;
		y[4][0] = 125;
		y[5][0] = 216;
		y[6][0] = 343;
		y[7][0] = 512;



		for (int i = 1; i < n; i++) {
			for (int j = n - 1; j >= i; j--)
				y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
		}
		for (int i = 0; i < n; i++) {
			System.out.print((int)x[i]+"\t");
			for (int j = 0; j <= i; j++)
				System.out.print((int)y[i][j]+"   "); 
			System.out.println();

		}


		double value= 7.5;
		double sum = y[n - 1][0];
		double u = (value - x[n - 1]) / (x[1] - x[0]);
		for (int i = 1; i < n; i++) {
			sum = sum + (calculateP(u, i) * y[n - 1][i]) / fact(i);
		}
		System.out.println();
		System.out.println("F(" + value +") is "+sum);

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
