#include<stdio.h>
#include<unistd.h>
#define BUFSIZE 512
int main(void){
	char buffer[BUFSIZE];
	getcwd(buffer,BUFSIZE); 
	printf("%s \n",buffer);
	return 0;
}
