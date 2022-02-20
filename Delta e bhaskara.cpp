#include<stdio.h>
#include<math.h>


int main () {
	
	float a, b, c, x1, x2, delta;
	
	printf("Digite o valor de a(diferente de zero), b e c: ");
	scanf("%f%f%f", &a,&b,&c);
	
	delta = pow(b,2) - 4 * a * c;
	
 if(delta < 0)
		printf("Impossivel calcular pois delta eh negativo");
	else{
		if(a==0)
			printf("Impossivel calcular pois a variavel 'a' eh zero");
		else{
			x1 = (-b + sqrt(delta))/(2 * a);
			x2 = (-b - sqrt(delta))/(2 * a);
		printf("O valor de x1 eh: %f \t O valor de x2 eh: %f", x1, x2);
		}
	}
}

