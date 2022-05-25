/* IMPRIME UNA TABLA DE FARHRENHEIT A CELSIUS DE 20 en 20 GRADOS F*/
/* AÑADIDO TEMEPERATURAS EN FLOAT*/
#include <stdio.h> 

#define LOWER	0
#define UPPER	300
#define STEP	20


main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = LOWER;	/* lower limit of temperature table */
	upper = UPPER;	/* upper limit */
	step = STEP;	/* step size */

	printf("Fahrenheit-Celsius table\n");

	for (fahr = lower; fahr <= upper; fahr = fahr + step){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
