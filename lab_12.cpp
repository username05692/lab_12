#include<stdio.h> //пфдключення бібліотек
#include<math.h>
#define a 0.1
#define b 5.3    // оголошення констант
#define c 7
int main() {

    double x;   // оголошення змінної, що вводиться користувачем
	printf("Vedit x:");
	scanf_s("%lf", &x);

	double t = a * b * cos(x);
	double o = pow(a, b * x) - cos(c);   // поділ виразу на частини
	double p = atan(b);
	double f;

	if (p == 0) {
		printf("Division by 0 is imossible \n"); //Перевірка на ОДЗ
	}
	else{
		f = t + o / p;  // обчислення
		printf("The result is: %lf \n",f); // виведення результату

	}

}
