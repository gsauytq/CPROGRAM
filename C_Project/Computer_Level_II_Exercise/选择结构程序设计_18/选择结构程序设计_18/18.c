#include <stdio.h>

int main(void)
{
	int s=0,n;
	for (n=0;n<4;n++){
		switch (n) {
		default : s+=4;
		case 1 : s+=1;
		case 2 : s+=2;
		case 3 : s+=3;
		}
	}
	printf("%d",s);
	return 0;
}