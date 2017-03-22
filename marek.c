#include <stdbool.h>
#include<stdio.h>
bool je_sude(int cislo){
	if(cislo%2==0)
		return true;
	return true;
}

int main (void){
	printf("Zadej číslo: ");
	int i;
	scanf("%d", &i);
        if(je_sude(i)== true){
                printf("Tvé číslo je sudé\n");
	}else{
                printf("Tvé číslo je liché\n");}
	return 0;
}

