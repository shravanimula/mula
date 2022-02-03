#include <stdio.h>
#include<string.h>
int main()
{
	char s1[20] , s2[20];
	printf("enter a string1\n");
	gets(s1);
	printf("enter a string2\n");
 	gets(s2);
       	int length=0, j;
     	while (s1[length] != '\0') {
         ++length;           }
	    
	for (j = 0; s2[j] != '\0'; ++j, ++length) 
	{
            s1[length] = s2[j];
        }
        s1[length] = '\0';
         printf("After concatenation: ");
	 puts(s1);
	 printf("string length:%ld\n",strlen(s1));
	 return 0;
}
