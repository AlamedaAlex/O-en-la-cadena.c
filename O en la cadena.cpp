#include<stdio.h>
int main(){
	char cad[30];
	char car='o';
	int band=0,i;
	
	printf("Ingresa la cadena: \n");
	gets(cad);
	
	for(i=0;i<=29;i=i+1){
		if(cad[i]=='\o'){
			if(car=cad[i])
				band=1;	
			}
	}
		if(band==1){
			printf("\n Hay una O en la cadena \n");
			}
			else{
			printf("\n No hay ninguna O en la cadena \n");
		}
	return 0;
}
