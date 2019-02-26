#include<stdio.h>
#include<cs50.h>
int main()
{
    int a=500, b=250, c=200, d=100, e=50, f=25, g=10, h=5,n=1,i=0;
    int mnt=get_int("montant:");
    while(mnt>=a)
    {
        mnt=mnt-a;
        i++;
    }
    while(mnt>=b)
    {
        mnt=mnt-b;
        i++;
    }
    while(mnt>=c)
    {
        mnt=mnt-c;
        i++;
    }
    while(mnt>=d){
        mnt=mnt-d;
        i++;
    }
    while(mnt>=e)
    {
        mnt=mnt-e;
        i++;
    }
    while(mnt>f)
    {
        mnt=mnt-f;
        i++;
    }
    while(mnt>=g)
    {
        mnt=mnt-g;
        i++;
        while(mnt>=h)
        {
            mnt=mnt-n;
            i++;
        }
    }
    printf("the coins is %i:",i);
}
