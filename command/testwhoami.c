#include <stdio.h>
#include <pwd.h>
#include <grp.h>

int main(){
	printf("%s\n", getpwuid(getuid())->pw_name);
	return 0;
}
