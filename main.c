#include "main.h";

int main(int argc, char const *argv[])
{
	printf("%s\n", "hello Prashant :)");
	shout("test new feature");
	return 0;
}

void shout(char * str){
	printf("%s\n", str);
}

int add(int a, int b){
	return a+b;
}