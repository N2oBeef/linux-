#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	int val;
	
	printf("argc is %d\n", argc);
	
	printf("argv[1] is %s\n", argv[1]);
	
	val = fcntl(atoi(argv[1]), F_GETFL, 0);
	
	printf("val is %d\n", val);
	
	if (atoi(argv[1]) == 5){
		int n = write(5, "iiiiii", 7);
		printf("n is %d", n);
	}	
	return 0;	
}
