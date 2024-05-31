#include<stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char c;
	int word = 0;
       	int space = 0;	
	
	if(argc < 2) fp = stdin;
	else fp = fopen(argv[1],"r");
	
	while((c = getc(fp)) != EOF){
		if(c == ' ' || c == '\t' || c == '\n' ) space = 0;
		else if(space == 0){
			space = 1;
			word += 1;
		}
	}
	fclose(fp);
	printf("%d %s \n",word, argv[1]);
	return 0;
}
