#include <stdio.h>
#include <string.h>

#define BRAINFUCK( code ) int i = 0;							\
						  unsigned char arr [30000];			\
						  int main ()							\
						  {										\
							  memset (arr, 0, sizeof (arr));	\
							  code								\
							  return 0;							\
						  }
						  
#define L i--;
#define R i++;
#define I arr[i]++;
#define D arr[i]--;
#define P putchar (arr[i]);
#define G arr[i] = getchar ();
#define _W while (arr[i]) {
#define W_ }
