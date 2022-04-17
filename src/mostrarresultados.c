/*
 * mostrarResultaddos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: pablo
 */

#include <stdio.h>

float mostrarResultados(float kilometros, float precioAerolineas, float precioLatam, float debitoA, float debitoL, float creditoA, float creditoL, float bitcoinA, float bitcoinL, float precioUnitarioA, float precioUnitarioL, float diferencia)
{
	printf("\n Kilometros ingresados: %.2f"
			"\n\n Latam: %.2f"
			"\n a) Precio con tarjeta de débito: %.2f"
			"\n b) Precio con tarjeta de crédito: %.2f"
			"\n c) Precio pagando con bitcoin : %.7f"
			"\n d) Precio unitario: %.2f"
			"\n\n Aerolíneas: %.2f"
			"\n a) Precio con tarjeta de débito: %.2f"
			"\n b) Precio con tarjeta de crédito: %.2f"
			"\n c) Precio pagando con bitcoin : %.7f"
			"\n d) Precio unitario: %.2f"
			"\n La diferencia de precio es: %.2f", kilometros, precioLatam, debitoL, creditoL, bitcoinL, precioUnitarioL, precioAerolineas, debitoA, creditoA, bitcoinA, precioUnitarioA, diferencia);
	return 0;
}
