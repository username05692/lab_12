#include<stdio.h> //����������� �������
#include<math.h>
#define a 0.1
#define b 5.3    // ���������� ��������
#define c 7
int main() {

    double x;   // ���������� �����, �� ��������� ������������
	printf("Vedit x:");
	scanf_s("%lf", &x);

	double t = a * b * cos(x);
	double o = pow(a, b * x) - cos(c);   // ���� ������ �� �������
	double p = atan(b);
	double f;

	if (p == 0) {
		printf("Division by 0 is imossible \n"); //�������� �� ���
	}
	else{
		f = t + o / p;  // ����������
		printf("The result is: %lf \n",f); // ��������� ����������

	}

}
