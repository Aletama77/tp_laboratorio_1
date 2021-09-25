
/*
 ============================================================================
 Name        : tp1.c
 Author      : Alexander Tamashiro 1-H
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
2
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void) {

	int operando1;
	int operando2;
	int opcion;
	char opcionLetra;
	char opcionLetraResultado;
	int suma;
	int resta;
	float division;
	int multiplicacion;
	int respuestaDivision;
	int factorial1;
	int factorial2;
	int flag1 = 1;
	int flag2 = 1;
	int flag3 = 1;
	int flagA = 1;
	int flagB = 1;
	int flagC = 1;
	int flagD = 1;
	int flagE = 1;

	do
	{
		menu(&opcion, "Ingrese opcion:\n\n1-Ingresar el primer operando (A=x)\n2-Ingresar el segundo operando (B=y)\n\n3-Calcular todas las operaciones\na)Calcular la suma (A-B): \nb)Calcular la resta (A-B)\nc)Calcular la division (A/B)\nd) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A!)\n\n4-Informar resultados\nA) El resultado de A+B es: r\nB) El resultado de A-B es: r\nC)El resultado de A/B es: r\nD)El resultado de A*B es: r\nE)El factorial de A es: r1 y El factorial de B es: r2\n\n5-Salir\n\n", 1, 5);
		if(opcion >=1 && opcion <= 4)
		{
			switch(opcion)
			{
			case 1:
				if(flag1 == 1)
				{
					operando1=pedirOperandos(operando1, "Operando1?: \n\n");
					flag1=0;
				}
				else
				{
					printf("Ya ingreso el operando1. Ingrese otra opcion\n\n");
				}
				break;
			case 2:
				if(flag2==1)
				{
					operando2=pedirOperandos(operando2, "Operando2?: \n\n");
					flag2=0;
				}
				else
				{
					printf("Ya ingreso el operando2. Ingrese otra opcion!\n\n");
				}
				break;
			case 3:
				if(flag1 != 1 && flag2 != 1)
				{
					printf("\n\nIngrese letra: \n\n");
					scanf("%c",&opcionLetra);
					switch(opcionLetra)
					{
					case 'a':
						if(flagA==1)
						{
							suma = funcionSuma(operando1,operando2);
							printf("Se realizó la suma\n\n");
							flagA = 0;
							flag3 = 0;
						}
						else
						{
							if(flagA == 0)
							{
								printf("ya se sumo\n\n");
							}
						}
						break;
					case 'b':
						if(flagB==1)
						{
						resta = funcionResta(operando1, operando2);
						printf("Se realizó la resta\n\n");
							flagB = 0;
							flag3 = 0;
						}
						else
						{
							if(flagB == 0)
							{
								printf("ya se resto\n\n");
							}

						}
						break;
					case 'c':
						if(flagC==1)
						{
							respuestaDivision = funcionDividir(&division, operando1, operando2);
							printf("Se realizó la division\n\n");
							if(respuestaDivision != 0)
							{
								printf("No es posible dividir por 0\n\n");
							}
							flagC=0;
							flag3 = 0;
						}
						else
						{
							if(flagC == 0)
							{
								printf("ya se dividio\n\n");
							}

						}
						break;
					case 'd':
						if(flagD==1)
						{
							multiplicacion = funcionMultiplicar(operando1, operando2);
							printf("Se realizó la multiplicacion\n\n");
							flagD = 0;
							flag3 = 0;
						}
						else
						{
							if(flagD == 0)
							{
								printf("ya se multiplico\n\n");
							}

						}
						break;
					case 'e':
						if(flagE==1)
						{
							factorial1 = funcionFactorial(operando1);
							factorial2 = funcionFactorial(operando2);
							printf("Se realizó la factorizacion\n\n");

							flagE = 0;
							flag3 = 0;
						}
						else
						{
							if(flagE == 0)
							{
								printf("Ya se factorizo\n\n");
							}
						}
					}while(flagA != 1 && flagB != 1 && flagC != 1 && flagD != 1 && flagE != 1);
				}
				else
				{
					printf("Primero Ingrese un operando!\n\n");
				}
				break;
			case 4:
				if(flag1 ==0 && flag2 ==0 && flag3 == 0)
				{
					printf("Ingrese letra: \n\n");
					scanf("%c",&opcionLetraResultado);
					switch(opcionLetraResultado)
					{
					case 'a':
						printf("El resultado de la suma es: %d\n\n",suma);
						break;
					case 'b':
						printf("El resultado de la resta es: %d\n\n",resta);
						break;
					case 'c':
						printf("El resultado de la division es: %.2f\n\n",division);
						break;
					case 'd':
						printf("El resultado de la multiplicaciion es: %d\n\n",multiplicacion);
						break;
					case 'e':
						printf("El factorial de operando1 es: %d\n\n", factorial1);
						printf("El factorial de operando2 es: %d\n\n", factorial2);
						break;
					}
				}
				else
				{
					if(flag1 == 0 && flag2 == 0 && flag3 == 1)
					{
						printf("Primero debe calcular\n\n");
					}
					else
					{
						if(flag1 == 1 && flag2 == 1)
						{
							printf("Debe ingresar un operando!\n\n");
						}
						else
						{
							if(flag2 == 1)
							{
								printf("Debe ingresar un operando!\n\n");
							}
							else
							{
								if(flag1 == 1)
								{
									printf("Debe ingresar un operando!\n\n");
								}
							}
						}
					}
				}
				break;
			}
		}
		else
		{
			if(opcion != 1 || opcion!= 2 || opcion != 3 || opcion != 4 || opcion != 5)
			{
				printf("Error, ingrese opcion válida\n\n");
			}
			else
			{
				if(flag1 == 0 && flag2 == 0 && flag3 == 0 && opcionLetra != 'a' && opcionLetra != 'b' && opcionLetra != 'c' && opcionLetra != 'd' && opcionLetra != 'e')
				{
					printf("Error, Ingrese una opcion vàlida");
				}
			}
		}
	}while(opcion != 5);

	return EXIT_SUCCESS;
}
