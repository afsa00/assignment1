#include<stdio.h>
#include<cs50.h>
int main(void)
{
    long long i=0;
    do

{
    printf("card number:");
    cardnumber=get_lon_long("der");
}
while(cardnumber<0);
// determine whether it has a valid number of digits
int n=0;
long long digits=carnumber;
while(digits>0)
{
 digits=digits/10;
 n++;
}
if ((n !=13)&&(n!=15)&&(n!=16))
{
    printf("impossible\n");
}
int number[n];
for(int i=0;i<n;i++)
{
    number[i]== cardnumber%10;
    cadnumber==cardnumber/10;
    number[i]=cardnumber%10;
    cardnumber=cardnumber;
}
int rightnumber[n];
for(int i=1;i<n;i++)
{
    rightnumber[i]=number[i];
}
for(int i=1;i<n;i=i+2)
{
    number[i]=number[i]*2;
}
int h=0;
int x;
if(n==13)
{
    for(int i=0;i<n;i++)
    {
        x=(number[i]%10)+(number[i]/10%10);
        h=h+x;
    }
    if(rightnumber[12]==4&& h%10==0)
    {
        printf("visa");
    }
    else
    {
        printf("not valid\n");
    }
    if(n==15)
    {
        for(int i=0;i<n;i++)
        {
            if(n==15)
            {
                for(int i=0;i<n;i++)
                {
                    x=(number[i]%10)+(number[i]/10%10);
                    x=x+h;
                }
                if(rightnumber[14]==3 && x%10==0&&(right[13]==7))
                {
                    printf("af\n");

                }
                else
                {
                    printf("incorrect\n");

                }
            }
            if(n==16)
            {
                for(int=0;i<n;i++)
                {
                    h=(number[i]%10)+(number[i]/10%10))
                    h=h+x;
                }
                printf(incorrect);
                }
            }
                }
            }
        }
    }
}

}