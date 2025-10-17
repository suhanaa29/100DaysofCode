// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[100],w[50],lw[50];
    int i,p;

    printf("Enter a sentence\n");
    gets(s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!=' ')
        {
            // store the characters in array w until we find a space
            w[p]=s[i];
            p++;
        }
        else
        {
            // terminate the word by a null character
            w[p]='\0';

            // check if word length is greater than longest word (lw)
            if(strlen(w)>strlen(lw))
            {
                strcpy(lw,w);
            }
            p=0;
        }
    }
    printf("Longest word = %s",lw);
    return 0;
}