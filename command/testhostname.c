#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 256

int main(){
	char name[SIZE];
	if(gethostname(name, sizeof(name)) != 0){
		perror("Error\n");
		exit(1);
	}
	printf("%s\n",name);
	return 0;
}
