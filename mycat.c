#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUFFSIZE 8192

int main (int argc, char **argv){
	int n ;
	char buff[BUFFSIZE];

	while((n = read(STDIN_FILENO, buff, BUFFSIZE)) > 0){
		write(STDOUT_FILENO, buff, n);
		
	
	}
	return 0;
}
