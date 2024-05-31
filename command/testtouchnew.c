#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *name = argv[1];
	FILE *file;

	if(argc != 2) {
		fprintf(stderr, "사용법: %s 파일명\n", argv[0]);
		exit(1);
	}
	
	if((file = fopen(name, "w")) == NULL) {
		perror("ERROR\n");
		exit(1);
	}

	fclose(file);
	printf("%s 빈 파일이 생성되었습니다.\n", name);
	exit(0);
}
