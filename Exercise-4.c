#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, fixnum, reminder, result = 0;
    int count = 0, i, a, orgnum;
    printf("Enter the number to check whether it is armstrong no. or not : ");
    scanf("%d", &fixnum);
    orgnum = fixnum;

    num = fixnum;

    while (num != 0)
    {
        num = num / 10;
        ++count;
    }
    while (fixnum > 0)
    {
        reminder = fixnum % 10;
        a = reminder;
        for (i = 1; i < count; i++)
        {
            reminder = reminder * a;       
        }
        result += reminder;
        fixnum = fixnum / 10;
    }
    printf("%d\n", result);
    printf("%d", orgnum);
    if (orgnum == result)
    {
        printf("This is a armstrong number");
    }
    else
    {
        printf("This is not a armstrong number");
    }

    return 0;
}
