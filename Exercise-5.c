#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, num, nextnum, result, a, b = 0;
    char function;
    printf("Enter the function you want to access : \n");
    printf("Keywords to access diffrent features : \n");
    printf("Multiplication = M\nAddition = A\nDivide = D\n");
    printf("Subtract = S\n");
    printf("Press 'enter' to change the feature\n");

    printf("Please enter the number : ");
    scanf("%d", &num);
    do
    {
        printf("Enter the keyword to access any function : ");
        scanf("%s", &function);

        switch (function)
        {
        case 'A':
            printf("The feature accessed by user is Addition\n");
            break;
        case 'S':
            printf("The feature accessed by user is Subtraction\n");
            break;
        case 'M':
            printf("The feature accessed by user is Multiplication\n");
            break;
        case 'D':
            printf("The feature accessed by user is Division\n");
            break;
        default:
            printf("Please put an appropriate keyword\n");
            break;
        }

        switch (function)
        {
        case 'A':
            for (i = 1; i > 0;)
            {
                printf("Enter the next number :");
                scanf("%d", &nextnum);
                i = nextnum;
                a = i;
                b = nextnum;
                while (a != 0)
                {
                    result = num + nextnum;
                    printf("%d + %d = %d\n", num, nextnum, result);

                    num = result;
                    a = 0;
                }
            }
            break;
        case 'S':
            for (i = 1; i > 0;)
            {
                printf("Enter the next number :");
                scanf("%d", &nextnum);
                i = nextnum;
                a = i;
                b = nextnum;
                while (a != 0)
                {
                    result = num - nextnum;
                    printf("%d - %d = %d\n", num, nextnum, result);

                    num = result;
                    a = 0;
                }
            }

            break;
        case 'M':
            for (i = 1; i > 0;)
            {
                printf("Enter the next number :");
                scanf("%d", &nextnum);
                i = nextnum;
                a = i;
                b = nextnum;
                while (a != 0)
                {
                    result = num * nextnum;
                    printf("%d X %d = %d\n", num, nextnum, result);

                    num = result;
                    a = 0;
                }
            }

            break;
        case 'D':
            for (i = 1; i > 0;)
            {
                printf("Enter the next number :");
                scanf("%d", &nextnum);
                i = nextnum;
                a = i;
                b = nextnum;
                while (a != 0)
                {
                    result = num / nextnum;
                    printf("%d / %d = %d\n", num, nextnum, result);

                    num = result;
                    a = 0;
                }
            }

            break;
        }
    } while (b == 0);
    return 0;
}