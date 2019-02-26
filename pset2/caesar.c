#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, string argv[])
{
    int i;
    int b;
    if (argc==2)
    {
     printf("usage:");
     return 1;
    }

    int k=atoi(argv[1]);
    if (k<0)
    {
        printf("key must be positive\n");
        return 1;
    }
    string plaintext[k] = get_string("plaintext:");
    // the plaintext and ciphertext
    for(i=0,b=strlen (plaintext);i<b;i++)
    {
        if(islower(plaintext[i]))
        {
        printf("%c",(plaintext[i]-'a'+k)%26+'a');
        }
        else if(isupper(plaintext[i]))
    {
        printf("%c",(plaintext[i]-'A'+k)%26+'A');
    }
        else
        printf("%c",plaintext[i]);
    }
    printf("\n");
}