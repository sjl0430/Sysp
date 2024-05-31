#include<stdio.h>

int main(int argc, char *argv[]){
	int i=0;
	for(i=0; i<argc; i++) {
		if(i!=0) printf("%s ",argv[i]);
	}
	printf("\n");
	return 0;
}
