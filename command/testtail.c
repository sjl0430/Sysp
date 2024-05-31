#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char *argv[]){
	char contents;
	int fd;
	int i = 0;
	fd = open(argv[1], O_RDONLY);
	while(read(fd, &contents, 1))
		if(contents=='\n') i++;
	close(fd);

	fd = open(argv[1], O_RDONLY);
	while(read(fd, &contents, 1)){
		if(i <= 10) write(1, &contents,1);
		if(contents == '\n') i--;
	}
	close(fd);
	exit(0);
}
