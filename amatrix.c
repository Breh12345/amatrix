#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**/
int main(void) {
	char r;
	int s;
	int e;
	bool AAA = true;
	while (AAA){
		for (int j = 0; j < 10; j++){
			e = (((float)rand()/(float)RAND_MAX) * 5) + 30;
			s = ((float)rand()/(float)RAND_MAX) * 30;
			printf("\033[0;%dm", e);			
			for (int i=0;i<s;i++) printf(" ");
			r = (((float)rand()/(float)RAND_MAX) * (126-32))+32;
			printf("%c",r);
		}
		printf("\n");
		printf("\033[0m\n");
	}
}
