#include <stdio.h>
#include <stdlib.h>

int main(){

	int empleado, empleado2, empleado3, cont, cont2, cantidad;

	printf("############################################################################### \n");
	printf("Este programa carga datos de empleados y te deja modificarlos o borrarlos (ABM) \n");
	printf("############################################################################### \n");

	printf("Cuantos empleados tiene? \n");
	scanf("%d", &empleado);
	
	//guardar esta informacion en esta variable aparte va a ser importante mas adelante.
	empleado2 = empleado;

	int matriz [empleado][3];

	for(int i = 0; i < empleado; i++){
		
		printf("Cual es el DNI del empleado? \n");
		scanf("%d", &matriz[i][0]);
	
		printf("Cual es el legajo del empleado? \n");
		scanf("%d", &matriz[i][1]);

		printf("Cual es el sueldo del empleado? \n");
		scanf("%d", &matriz[i][2]);		

	}

	for(int i = 0; i < empleado; i++){
		
		cantidad = i;
	
		printf("Este es el empleado numero: %d \n", ++cantidad);
		
		printf("DNI: %d \n", matriz[i][0]);
		
		printf("Legajo: %d \n", matriz[i][1]);
		
		printf("Sueldo: %d \n", matriz[i][2]);
	
	}	

do{

	printf("Que dato quiere modificar? \n 1)DNI \n 2)Legajo \n 3)sueldo \n 4)Borrar empleado \n 5)Agregar empleado \n 6)Salir \n");
	scanf("%d", &cont);

	switch (cont){
	case 1:
		
		//usamos la variable cantidad, para que el usuario elija los empleados empezando por el 1.
		printf("De cual empleado? \n");
		scanf("%d", &cantidad);

		if(cantidad <= empleado){

		//dado que la opcion elegida esta guardada en cantidad, y ademas tiene una posicion extra, se necesita esta linea de codigo.
		empleado = --cantidad;

		printf("El DNI de su empleado en este momento es este: %d \n", matriz[empleado][0]);


		printf("Dame el nuevo DNI \n");
		scanf("%d", &matriz[empleado][0]);

		printf("El nuevo DNI quedo en: %d \n", matriz[empleado][0]);
		
		//usamos la variable empleado2 para dejar la variable empleado como lo eligio el usuario.
		empleado = empleado2;
		
		}else
		printf("La cantidad de empleados en mas baja! \n");
		break;

	case 2:

		printf("De cual empleado? \n");
		scanf("%d", &cantidad);

		if(cantidad <= empleado){

		empleado = --cantidad;

		printf("El legajo de su empleado en este momento es este: %d \n", matriz[empleado][1]);

		printf("Dame el nuevo legajo \n");
		scanf("%d", &matriz[empleado][1]);

		printf("El nuevo legajo quedo en: %d \n", matriz[empleado][1]);
		
		empleado = empleado2;
		
		}else
		printf("La cantidad de empleados en mas baja! \n");
		break;

	case 3:

		printf("De cual empleado? \n");
		scanf("%d", &cantidad);

		if(cantidad <= empleado){

		empleado = --cantidad;

		printf("El sueldo de su empleado en este momento es este: %d \n", matriz[empleado][2]);

		printf("Dame el nuevo sueldo \n");
		scanf("%d", &matriz[empleado][2]);

		printf("El nuevo sueldo quedo en: %d \n", matriz[empleado][2]);
		
		empleado = empleado2;
		
		}else
		printf("La cantidad de empleados en mas baja! \n");
		break;	

	case 4:

		printf("Que empleado desea borrar? \n");
		scanf("%d", &cantidad);

		if(cantidad <= empleado){

		empleado = --cantidad;

		matriz[empleado][0] = NULL;
		matriz[empleado][1] = NULL;
		matriz[empleado][2] = NULL;
		
		empleado = empleado2;

		}else
		printf("La cantidad de empleados en mas baja! \n");
		break;
		
	case 5:
		
		printf("Cual es el DNI del empleado? \n");
		scanf("%d", &matriz[empleado][0]);
	
		printf("Cual es el legajo del empleado? \n");
		scanf("%d", &matriz[empleado][1]);
			
		printf("Cual es el sueldo del empleado? \n");
		scanf("%d", &matriz[empleado][2]);
		
		empleado2++;
		empleado++;
		break;
		
	case 6:
		
		goto final;

		default:
		printf("La opcion solicitada no existe. \n");

		}
		
		printf("Su lista de empleados quedo: \n");
		
		for(int i = 0; i < empleado2; i++){
		
			cantidad = i;
	
			printf("Este es el empleado numero: %d \n", ++cantidad);
			
				printf("DNI: %d \n", matriz[i][0]);
		
				printf("Legajo: %d \n", matriz[i][1]);
		
				printf("Sueldo: %d \n", matriz[i][2]);

		}	
		
		printf("Quiere seguir modificando datos? \n 1)Si \n 2)No \n");
		scanf("%d", &cont2);

	}while(cont2 == 1);	

	final:
	printf("####################### \n");
	printf("Gracias, vuelva pronto! \n");
	printf("####################### \n");

}
