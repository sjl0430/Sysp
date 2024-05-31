#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	char *ptr;
	ptr = getenv(argv[1]);
	printf("%s = %s\n", argv[1], ptr);
	return 0;
}
