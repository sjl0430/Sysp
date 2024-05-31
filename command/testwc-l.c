#include<stdio.h>
int main(int argc, char *argv[]){
	int li = 0;
	char c;
	FILE *fp;

	if(argc < 2) fp = stdin;
	else fp = fopen(argv[1],"r");
	
	while((c = getc(fp)) != EOF)
		if(c == '\n') li+=1;
	fclose(fp);
	printf("%d %s \n", li, argv[1]);
	return 0;
}
