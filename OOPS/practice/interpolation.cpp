#include<iostream>
#include<math.h>
using namespace std;
 float calculateP(float u, int n)  {


		float temp = u;
		for (int i = 1; i < n; i++)
			temp = temp * (u + i);
		return temp;
	}
 int fact(int n) {

		int f = 1;
		for (int i = 2; i <= n; i++)
			f *= i;
		return f;
	}
	int main() {
		int a[9];
		int n = 5;
		cout<<"Roll Number 161210040\n";
		float x[] = { 1974, 1976, 1978,
				1980, 1982 };

		float y[n][n] ;
		y[0][0] = 40;
		y[1][0] = 43;
		y[2][0] = 48;
		y[3][0] = 52;
		y[4][0] = 57;

		for (int i = 1; i < n; i++) {
			for (int j = n - 1; j >= i; j--)
				y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
		}
		cout<<"x"<<"\t"<<"F(x)";
		for (int i = 0; i < n; i++) {
			cout<<(int)x[i] << "\t";
			for (int j = 0; j <= i; j++)

				cout<< y[i][j]<<"   ";


		}


		float year=1979;
		float sum = y[n - 1][0];
		float u = (year - x[n - 1]) / (x[1] - x[0]);
		for (int i = 1; i < n; i++) {
			sum = sum + (calculateP(u, i) * y[n - 1][i]) / fact(i);
		}
		cout<<"Sales in Year " << (int)year <<" is "<<sum;

	}


