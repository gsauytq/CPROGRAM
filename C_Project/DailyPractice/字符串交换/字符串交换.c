#include <stdio.h>

void fun_string(char** str1, char** str2) {
	char* temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;

}
int main(void)
{
	char* p1 = "data structure", * p2 = "algorithm";
	
	fun_string(&p1, &p2);
	
	printf("%s\t%s\n", p1, p2);

	return 0;
}