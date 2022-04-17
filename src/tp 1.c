/*
 ============================================================================
 Name        : tp.c
 Author      : Pablo Perez Suarez
 Version     :
 Copyright   : MEET
 Description : Trabajo Practico Programacion
 ============================================================================
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "mostrarresultados.h"


int main(void)
	{
		setbuf(stdout, NULL);
		int opciones;
		float kilometros;
		float precioAerolineas;
		float precioLatam;
		float debitoA;
		float debitoL;
		float creditoA;
		float creditoL;
		float bitcoinA;
		float bitcoinL;
		float precioUnitarioA;
		float precioUnitarioL;
		float diferencia;

		do
		{
			printf("\n 1. Ingresar kilometros.");
			printf("\n 2. Ingresar precio de vuelos.");
			printf("\n 3. Calcular precios.");
			printf("\n 4. Informar resultados.");
			printf("\n 5. Carga forzada de datos.");
			printf("\n 6. Fin.");
			printf("\n Ingrese una opcion: ");
			scanf("%d", &opciones);

			switch(opciones)
			{
			case 1:
				printf("\n Ingresar kilometros: ");
				scanf("%f", &kilometros);
				break;
			case 2:
			printf("Ingrese el precio del vuelo (AEROLINEAS): ");

								scanf("%f", &precioAerolineas);


								printf("Ingrese el precio del vuelo (LATAM): ");

								scanf("%f", &precioLatam);

							while(precioAerolineas < 0 ){
								printf("Error. Ingrese un precio valido para AEROLINEAS: ");
								scanf("%f", &precioAerolineas);
							}
							while(precioLatam < 0 ){
								printf("Error. Ingrese un precio valido para LATAM: ");
								scanf("%f", &precioLatam);
							}


				break;
			case 3:
					debitoA = debitoAerolineas(precioAerolineas);
					debitoL = debitoLatam(precioLatam);
					creditoA = creditoAerolineas(precioAerolineas);
					creditoL = creditoLatam(precioLatam);
					bitcoinA = bitcoinAerolineas(precioAerolineas);
					bitcoinL = bitcoinLatam(precioLatam);
					precioUnitarioA = precioKilometroAerolineas(precioAerolineas, kilometros);
					precioUnitarioL = precioKilometroLatam(precioLatam, kilometros);
					diferencia = diferenciaLatamAerolineas(precioAerolineas, precioLatam);

				break;
			case 4:
				mostrarResultados(kilometros, precioAerolineas, precioLatam, debitoA, debitoL, creditoA, creditoL, bitcoinA, bitcoinL, precioUnitarioA, precioUnitarioL, diferencia);
				break;

			case 5:
				kilometros = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;

				debitoA = debitoAerolineas(precioAerolineas);
				debitoL = debitoLatam(precioLatam);
				creditoA = creditoAerolineas(precioAerolineas);
				creditoL = creditoLatam(precioLatam);
				bitcoinA = bitcoinAerolineas(precioAerolineas);
				bitcoinL = bitcoinLatam(precioLatam);
				precioUnitarioA = precioKilometroAerolineas(precioAerolineas, kilometros);
				precioUnitarioL = precioKilometroLatam(precioLatam, kilometros);
				diferencia = diferenciaLatamAerolineas(precioAerolineas, precioLatam);

				mostrarResultados(kilometros, precioAerolineas, precioLatam, debitoA, debitoL, creditoA, creditoL, bitcoinA, bitcoinL, precioUnitarioA, precioUnitarioL, diferencia);
				break;

			case 6:
				printf("Has salido del menu");
				break;

				default:
					printf("Opcion invalida");
					break;
			}

		}while(opciones != 6);

		return 0;
	}
