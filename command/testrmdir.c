#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	const char *dir = argv[1];

	if(argc < 2){
		perror("Error\n");
		exit(1);
	}
	
	if(rmdir(dir) == 0) printf("%s 디렉토리 제거 완료\n", argv[1]);
	else{
		perror("Error\n");
		exit(1);
	}
	exit(0);
}
