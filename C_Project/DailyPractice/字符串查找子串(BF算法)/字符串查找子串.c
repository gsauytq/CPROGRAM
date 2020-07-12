#include <stdio.h>
#define TURE 1
#define FALSE 0

int Substring(char* s, char* r);

int main(void)
{
	int i,s;
	char main_str[100], assi_str[100];
	
	printf("Please enter a string:");
	gets_s(main_str,sizeof(main_str)-1);
	printf("Please enter a substring:");
	gets_s(assi_str,sizeof(assi_str)-1);


	s=Substring(main_str, assi_str);

	if (s == 1)
		printf("%s是%s的子串\n", assi_str, main_str);
	else
		printf("%s不是%s的子串\n", assi_str, main_str);

	return 0;	
}

int Substring(char* s, char* r)
{
	char* p, * q;
	p = s;
	q = r;

	while (*s)
	{
		p = s;
		while (*q)
		{
			if (*p == *q)
			{
				p++;
				q++;
			}
			else
				break;

			if (*q == '\0')
				return TURE;
		}
		q = r;
		s++;
	}
}