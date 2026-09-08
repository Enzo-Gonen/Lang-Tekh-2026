#include <stdio.h>
#include <stdlib.h>
/*Aprendendo sobre Linguagem C e suas mecânicas*/
	/*"%f" = Float*/
		/*"%/f" = Double*/
			/*"%c" = Char*/
				/*"%d" = Int*/

int main(int argc, char *argv[]) {
	
/*=====MEU=====*/
	int a,b,c,r1,r2;

	a = 5;
	b = 11;
	c = 85;
	r1 = a+b+c;
	r2 = r1/3;

	printf("%i + %i + %i => %i/3 = %i", a,b,c,r1,r2);

/*====Dacio====*/

 int k,l,m;
 float resultado;
 
 k = 10;
 l = 10;
 m = 10;
 
 resultado = (k+l+m)/3;
 
 printf("Resultado %f", resultado);
	
	return 0;
	
}
