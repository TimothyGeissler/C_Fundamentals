#include <stdio.h>

int main(int argc, const char* argv[]) {
	int v = 5;
	printf("Printing adress of variable v = %d\n",v);
	printf("%p\n", &v);
	int* p = &v;
	printf("Printing value at memory address: ");
	printf("%d\n", *p); //Print item from pointer
}
