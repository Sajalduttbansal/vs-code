#include<stdio.h>
int main(int argc, char const *argv[])
{
    int reminder, sum=0, n;
    printf("Enter n : ");
    scanf("%d", &n);

    while (n>0)
    {
        reminder = n % 10;
        sum = sum + reminder;
        n = n / 10;
    }
    printf("Sum of digits : %d", sum);
    
    
    
    
    
}
