/* IMPRIME UNA TABLA DE FARHRENHEIT A CELSIUS DE 20 en 20 GRADOS F*/
#include <stdio.h>

main() {
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

