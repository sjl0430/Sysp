#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc, char *argv[]){
	char contents;
	int fd;
	int li = 0;
	int t = *argv[1] - 48;
	fd = open(argv[2], O_RDONLY);
	while(read(fd, &contents, 1) && li < t){
		if(contents=='\n') li++;
		write(1, &contents,1);
	}
	close(fd);
	exit(0);
}
