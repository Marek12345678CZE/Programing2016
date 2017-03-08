

#include<stdbool.h>
#include<stdio.h>
bool je_sude(int*cislo){
	if(*cislo%2==0)
		return true;
	return false;
}
int main(void){
	printf("\nzadej číslo:");
	int *i;
	i = malloc(sizeof (int));	
	scanf("%d",i);
		if (je_sude(i) == true){
			printf("\ntvé číslo je sude\n\n");
}
		else{printf("\ntvé číslo je sude\n\n");}
			return 0;
}
