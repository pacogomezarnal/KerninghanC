/* IMPRIME UNA TABLA DE FARHRENHEIT A CELSIUS DE 20 en 20 GRADOS F*/
/* AÑADIDO TEMEPERATURAS EN FLOAT*/
#include <stdio.h> 


main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;

	printf("Fahrenheit-Celsius table\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
