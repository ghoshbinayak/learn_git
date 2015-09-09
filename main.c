#include <stdio.h>

void shout(char *);

int main(int argc, char const *argv[])
{
	printf("%s\n", "hello Prashant :)");
	shout("test new feature");
	return 0;
}

void shout(char * str){
	printf("%s\n", str);
}