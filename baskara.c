#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("a nao pode ser nulo!");
		return 1;
	}
	
	delta = b*b - 4*a*c;
	
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("x = {%.2f, %.2f}\n", x1, x2);
	} else if (delta == 0) {
		x1 = (-b) / (2 * a);
		printf("x = {%.2f}\n", x1);
	} else {
		printf("Nao ha raizes no dominio dos Reais.\n");
	}
	
	return 0;
}
