/*
 * tp1.c
 *
 *  Created on: 24 sept. 2021
 *      Author: alex
 */


/*
 * tp01.c
 *
 *  Created on: 23 sept. 2021
 *      Author: alex
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * \brief Solicita un numero al usuario, lo valida, verifica y retorna (0) en caso de éxito y(-1) en caso de error
 * \param pResultado Puntero al resultado alli se dejara el numero ingresado por el usuario
 * \param mensaje Es el mesaje a ser mostrado
 * \param minimo Valor minimo aceptado
 * \param maximo Valor maximo aceptado
 * \return En caso de exito (0), en caso de error (-1)
 */
int menu(int* pResultado,char* mensaje, int minimo,int maximo)
{
	int retorno = -1;
	int buffer;

	if(pResultado != NULL && mensaje != NULL && minimo <= maximo)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d",&buffer);

			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
		}while(retorno !=-1);
	}
	return retorno;
}
/**
 * brief Solicita un operando al usuario y devuelve el resultado
 * param numero Es el operando solicitado al usuario
 * param mensaje Es el mensaje a ser mostrado
 * return Retorna el numero solicitado al usuario
 */
int pedirOperandos(int numero, char* mensaje)
{
	printf("%s", mensaje);
	scanf("%d",&numero);
	return numero;
}
/**
 * brief Toma dos valores y los suma, retorna el resultado de la suma
 * param operador1 Es el operador1 solicitado para la suma
 * param operador2 Es el operador2 solicitado para la suma
 * return Retorna el resultado de la suma
 */
int funcionSuma(int operador1,int operador2)
{
	int resultado;
	resultado=operador1+operador2;
	return resultado;
}
/**
 * brief Toma dos valores y los resta, retorna el resultado de la resta
 * param operador1 Es el operador1 solicitado para la resta
 * param operador2 Es el operador2 solicitado para la resta
 * return Retorna el resultado de la resta
 */
int funcionResta(int operador1,int operador2)
{
	int resultado;
	resultado=operador1-operador2;
	return resultado;
}
/**
 * brief Toma dos valores y los multiplicación, retorna el resultado de la multiplicación
 * param operador1 Es el operador1 solicitado para la multiplicación
 * param operador2 Es el operador2 solicitado para la multiplicación
 * return Retorna el resultado de la multiplicación
 */
int funcionMultiplicar(int operador1,int operador2)
{
	int resultado;
	resultado=operador1*operador2;
	return resultado;
}
/**
 * brief Toma dos valores y los divide, retorna
 * param operador1 Es el operador1 solicitado para la división
 * param operador2 Es el operador2 solicitado para la división
 * param pResultado Es un puntero resultado de la división
 * return En caso de exito (0), en caso de error (-1)
 */
funcionDividir(float* pResultado,int operador1,int operador2)
{
	float resultado;
	int huboError = -1;
	if(pResultado != NULL && operador2 !=0 )
	{
		resultado=(float)operador1/operador2;
		*pResultado = resultado;
		huboError=0;
	}
	return huboError;
}
/**
 * brief toma un numero y realiza la factorización del mismo
 * param operador Es el numero que se va a factorizar
 * return fact Retorna el resultado de la factorización
 */
int funcionFactorial(int operador)
{
	int fact = 1;
	int i;

	for(i=1; i<=operador; i++)
	{
		fact = fact * i;
	}
	return fact;
}
