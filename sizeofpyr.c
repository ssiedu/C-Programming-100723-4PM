#include<stdio.h>
void main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	void *ptr;
	
	printf("\n size of integer pointer %d bytes ",sizeof(iptr));
	printf("\n size of float pointer %d bytes ",sizeof(fptr));
	printf("\n size of char pointer %d bytes ",sizeof(cptr));
	printf("\n size of void pointer %d bytes ",sizeof(ptr));
	getch();
}
