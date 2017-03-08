#include <stdio.h>
#define BUFFSIZE 1000 
int main(int argc,char *argv[]){
        FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	return 1;
        char buff[BUFFSIZE];
	int i=i;
        while (fgets(buff,BUFFSIZE-1,fp)!=NULL){
			printf("%s %s",&i,buff);
		i++;
}
        fclose(fp);
}
