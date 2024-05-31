#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char *argv[]){
	char contents;
	int fd;
	fd = open(argv[1], O_RDONLY);
	while(read(fd, &contents, 1)) write(1, &contents,1);
	close(fd);
	exit(0);
}
