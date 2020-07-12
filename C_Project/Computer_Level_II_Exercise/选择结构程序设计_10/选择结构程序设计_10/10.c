#include <stdio.h>

int main(void){
	int c=0,k;

	for (k=1;k<3;k++){
		switch (k){
		default: c+=k;
		case 2 : c++;break;
		case 4 : c+=2;break;
		}
	}
	printf("%d",c);
	return 0;
}