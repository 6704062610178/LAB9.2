#include <stdio.h>
#include <string.h>
 
int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i,j,k;
    printf ("Enter the First string: ");
    gets (str1);
    printf ("Enter the Second string: ");
    gets (str2);
 
    for (i = 0; str1[i]!= '\0'; i++)
    {
    	int count = 0;
		k = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                count++;
            }
            else
            {
                str_rem[k] = str2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
		if(count >0){
    		printf("Characters %c has removed %d times\n",str1[i],count);}
    	else{
			printf("Not found Characters %c In this String\n",str1[i]);}
	}
    
 
    printf ("On removing characters from second string we get: %s\n", str2);
 
    return 0;
}
