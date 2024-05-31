#include<stdio.h>

int main(int argc, char *argv[]){
	int byte = 0;
	int li = 0;
	FILE *fp;
	char c;
	
	if (argc < 2) fp = stdin;
	else fp = fopen(argv[1],"r");
	
	while((c = getc(fp)) != EOF){ 
		byte +=1;
		if(c == '\n') li += 1;
	}
	fclose(fp);
	printf(" %d %d %s \n", li, byte, argv[1]);
}
