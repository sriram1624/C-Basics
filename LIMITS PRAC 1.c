#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned:%hd to %hd\n,",SHRT_MIN,SHRT_MAX);
	printf("unsigned: %d to %hu",0,USHRT_MAX);
	printf("\nint:\signed:%d to %d\n",INT_MIN,INT_MAX);
	printf("unsigned:%u to %u\n",0,UINT_MAX);
	printf("\longint:\nsigned:%1d to %1d\n",LONG_MIN,LONG_MAX);
	printf("unsigned:%1u to %1u\n",0,ULONG_MAX);
	printf("nlong longn int:\nsigned: % 11d % 11d\n", LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned: %11u to %11u\n",0,ULONG_LONG_MAX);
	
	
}
