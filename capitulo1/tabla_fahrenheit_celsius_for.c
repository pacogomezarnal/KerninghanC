/* IMPRIME UNA TABLA DE FARHRENHEIT A CELSIUS DE 20 en 20 GRADOS F*/
/* CAMBIO DE WHILE A FOR*/
#include <stdio.h> 


main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	printf("Fahrenheit-Celsius table\n");

	for (fahr = lower; fahr <= upper; fahr = fahr + step){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
