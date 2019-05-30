#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{

	char str1 [] = "gladiator";
	char str2 [] = "gladiolus";
	char str3 [] = "xyz";
	char str4 [] = "abdcde";
	char str5 [] = "same";
	char str6 [] = "same";
	char str7 [] = "dog";
	char str8 [] = "doghouse";
   
    int res = strcmp(str7, str8);
     
    if (res == 0)
        printf("Strings are equal");
    else if (res == 1)
        printf("%s is > greater than %s\n",str7,str8);  
     
    else
		printf("%s is < less than %s\n",str7,str8);
    return 0;
}
