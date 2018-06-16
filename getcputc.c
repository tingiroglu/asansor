#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv){
	int c;

	while((c = getc(stdin)) != EOF){
		if(putc(c, stdout) == EOF){
		printf("putc error");
		}
	}
	return 0;
}
