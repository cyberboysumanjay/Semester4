
public class NewtonBackwardInterpolation {

	public static void main(String[] args) {
		int a[]=new int[9];

		int n = 5;

		System.out.println("Roll Number 161210040\n");
		float x[] = { 1974, 1976, 1978,
				1980, 1982 };

		float y[][] = new float [n][n];
		y[0][0] = 40;
		y[1][0] = 43;
		y[2][0] = 48;
		y[3][0] = 52;
		y[4][0] = 57;

		for (int i = 1; i < n; i++) {
			for (int j = n - 1; j >= i; j--)
				y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
		}
		System.out.println("x"+"\t"+"F(x)");
		for (int i = 0; i < n; i++) {
			System.out.print((int)x[i]+ "\t");
			for (int j = 0; j <= i; j++)
				
				System.out.print( y[i][j]+"   "); 
			System.out.println();

		}


		float year=1979;
		float sum = y[n - 1][0];
		float u = (year - x[n - 1]) / (x[1] - x[0]);
		for (int i = 1; i < n; i++) {
			sum = sum + (calculateP(u, i) * y[n - 1][i]) / fact(i);
		}
		System.out.println();
		System.out.println("Sales in Year " + (int)year +" is "+sum);

	}
	public static float calculateP(float u, int n)  {


		float temp = u;
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
