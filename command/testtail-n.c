#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char *argv[]){
	char contents;
	int fd;
	int i = 0;
	int t = *argv[1] - 48;
	fd = open(argv[2], O_RDONLY);
	while(read(fd, &contents, 1))
		if(contents=='\n') i++;
	close(fd);

	fd = open(argv[2], O_RDONLY);
	while(read(fd, &contents, 1)){
		if(i <= t) write(1, &contents,1);
		if(contents == '\n') i--;
	}
	close(fd);
	exit(0);
}
