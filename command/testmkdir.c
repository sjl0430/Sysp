#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc, char *argv[]){
	const char *dir = argv[1];
	if(argc < 2) {
		perror("Error\n");
		exit(1);
	}

	if(mkdir(dir, 0644) == 0) printf("%s 디렉토리가 생성됨.\n", argv[1]);
	else{ 
		perror("Error\n");
		exit(1);
	}
	exit(0);
}
