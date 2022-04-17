/*
 * calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: pablo
 */

#include <stdio.h>
#include "calculos.h"
#include "mostrarResultados.h"

float debitoAerolineas(float precioAerolineas)
{
	float descuentoAerolineasD;

	descuentoAerolineasD = precioAerolineas - ((float)precioAerolineas*0.10);

	return descuentoAerolineasD;
}
float debitoLatam(float precioLatam)
{
	float descuentoLatamD;

	descuentoLatamD = precioLatam - ((float)precioLatam*0.10);

	return descuentoLatamD;
}
float creditoAerolineas(float precioAerolineas)
{
	float aumentoAerolineas;

	aumentoAerolineas = precioAerolineas + ((float)precioAerolineas*0.25);

	return aumentoAerolineas;
}
float creditoLatam(float precioLatam)
{
	float aumentoLatam;

	aumentoLatam = precioLatam + ((float)precioLatam*0.25);

	return aumentoLatam;
}
float bitcoinAerolineas(float precioAerolineas)
{
	float precioBitcoinAerolineas;
	float precioBC;

	precioBC = 4606954.55;

	precioBitcoinAerolineas = (float) (precioAerolineas / precioBC);

	return precioBitcoinAerolineas;
}
float bitcoinLatam(float precioLatam)
{
	float precioBitcoinAerolineas;
	float precioBC;

	precioBC = 4606954.55;

	precioBitcoinAerolineas = (float) (precioLatam / precioBC);

	return precioBitcoinAerolineas;
}
float precioKilometroAerolineas(float precioAerolineas, float kilometros)
{
	float precioAerolineasPorKM;

	precioAerolineasPorKM = (float) (precioAerolineas / kilometros);

	return precioAerolineasPorKM;
}
float precioKilometroLatam(float precioLatam, float kilometros)
{
	float precioLatamPorKM;

	precioLatamPorKM = (float) (precioLatam / kilometros);

	return precioLatamPorKM;
}
float diferenciaLatamAerolineas(float precioAerolineas, float precioLatam)
{
	float resultadoDiferencia;

	resultadoDiferencia = precioAerolineas - precioLatam;

	return resultadoDiferencia;
}

