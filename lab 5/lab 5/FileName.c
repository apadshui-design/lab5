#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define M_PI 3.14159265358979323846

int ex1() {
	float gr,agl;
	printf("Введите значение угла в градусах для вычисления синуса : \n");
	scanf("%f", & gr);
	agl = gr * M_PI / 180;
	printf("%.6f", sin(agl));

	return 0;
}
int ex2() {
	int c; //task 3
	double x;
	float y = 0.41, p = 2.6, b, a;
	printf("Введите x(дробная часть через запятую):");
	scanf("%lf", &x);
	//x=2e-5;
	a = pow(p, 3) + pow(x, 3);
	b = exp(sqrt(p + x));
	y = pow(b, 3) / pow(a, 2);
	printf("b=%.2f,a=%.2f,y=%.2f\n", b, a, y);
	c = ((int)a % 2 + (int)b % 2 == 1) && ((int)a % 3 + (int)b % 3 + (int)y % 3 == 0);
	printf("условие выполнено (1 - да, 0 - нет): %d", c); //x = 2,35 для с = 1



	return 0;
}


int main() {
	setlocale(LC_ALL, ".UTF8");
	ex2();
	
	
	
	
	
	
	
	return 0;


}
