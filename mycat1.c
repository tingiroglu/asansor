#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main(int argc, char **argv){
	int c;
	char buff[10];

	while((c = read(STDIN_FILENO, buff,1)) > 0){
		if(write(STDOUT_FILENO, buff, c) != c){
		printf("write error");
		}
	}
	return 0;
}
