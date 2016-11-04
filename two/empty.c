#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
char buf1[] = "asd";
char buf2[] = "ASD";

int main(){
	int fd;
	
	if ((fd = creat("empty.file", O_RDWR)) < 0){
		printf("write error");
 	}

	printf("fd is %d", fd);

	if (write(fd, buf1, 3) != 3)
		printf("buf1 write error");
	
	if (lseek(fd, 11111, SEEK_SET) == -1)
		printf("lseek error");

	if (write(fd, buf2, 3) != 3)
		printf("buf1 write error");
	
	strerror(errno);
	return 0;
}
