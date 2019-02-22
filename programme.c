#include <stdio.h>
#include <cs50.h>
int main (void)
{
//getting numbers from the user
    int a= get_int ("type a:");
    int b= get_int ("type b:");
    int c= get_int ("type c:");
//give the comparison between a, b and c   
    if(a<b&&b<c)
    {
//print the result
        printf ("%i<%i<%i\n",a,b,c);
    }
    else if (a<c&&c<b)
    {
//print the result
        printf ("%i<%i<%i\n",a,c,b);
    }
    else if (b<a&&a<c)
    {
//print the result
        printf ("%i<%i<%i\n",b,a,c);
    }
    else if (b<c&&c<a)
    {
//print the result
        printf ("%i<%i<%i\n",b,c,a);
    }
    else if (c<a&&a<b)
    {
//print the result
        printf ("%i<%i<%i\n",c,a,b);
    }
    else if (c<b&&b<a)
    {
//print the result
        printf ("%i<%i<%i\n",c,b,a);
    }

}