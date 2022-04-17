/*
 * calculos.h
 *
 *  Created on: 14 abr. 2022
 *      Author: pablo
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
float debitoAerolineas(float precioAerolineas);
float debitoLatam(float precioLatam);
float creditoAerolineas(float precioAerolineas);
float creditoLatam(float precioLatam);
float bitcoinAerolineas(float precioAerolineas);
float bitcoinLatam(float precioLatam);
float precioKilometroAerolineas(float precioAerolineas, float kilometros);
float precioKilometroLatam(float precioLatam, float kilometros);
float diferenciaLatamAerolineas(float precioAerolineas, float precioLatam);
#endif /* CALCULOS_H_ */
