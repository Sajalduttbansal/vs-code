#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the 3 numbers you want in ascendig and decending order\n");
    printf("number 1 : ");
    scanf("%d", &a);
    printf("number 2 : ");
    scanf("%d", &b);
    printf("number 3 : ");
    scanf("%d", &c);
    if (a>=b & a>=c)
    {
        if (b>=c)
        {
            printf("numbers in ascending order : %d, %d, %d\n", a,b,c);
            printf("numbers in decending order : %d, %d, %d\n", c,b,a);
        }
        else
        {
            printf("numbers in ascending order : %d, %d, %d\n", a,c,b);
            printf("numbers in decending order : %d, %d, %d\n", b,c,a);
        }        
    }
    else if (b>=a, b>=c)
    {
        if (a>=c)
        {
            printf("numbers in ascending order : %d, %d, %d\n", b,a,c);
            printf("numbers in decending order : %d, %d, %d\n", c,a,b);
        }
        else
        {
            printf("numbers in ascending order : %d, %d, %d\n", b,c,a);
            printf("numbers in decending order : %d, %d, %d\n", a,c,b);
        }
    }
    else
    {
        if (b>=a)
        {
            printf("numbers in ascending order : %d, %d, %d\n", c,b,a);
            printf("numbers in decending order : %d, %d, %d\n", a,b,c);
        }
        else
        {
            printf("numbers in ascending order : %d, %d, %d\n", c,a,b);
            printf("numbers in decending order : %d, %d, %d\n", b,a,c);
        }        
    }    
    return 0;
}
