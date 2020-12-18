#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rnum, m1, m2, m3, total;
    float avg;
    printf("Please enter your Roll no. : ");
    scanf("%d", &rnum);
    printf("Enter your marks in subject I : ");
    scanf("%d", &m1);
    printf("Enter your marks in subject II : ");
    scanf("%d", &m2);
    printf("Enter your marks in subject III : ");
    scanf("%d", &m3);
    printf("Total marks obtained in the exams : %d\n", m1+m2+m3);
    printf("The average marks obtained : ");
    total = m1+m2+m3;
    avg = total/3.0;
    printf("%5.2f\n", avg);
    if (avg>90) 
    {
        printf("Grade : A1");
    }
    else if (avg>80 & avg<=90)
    {
        printf("Grade : A2");
    }
    else if (avg>70 & avg<=80)
    {
        printf("Grade : B1");
    }
    else if (avg>60 & avg<=70)
    {
        printf("Grade : B2");
    }
    else if (avg>50 & avg<=60)
    {
        printf("Grade : C");
    }
    else if (avg>40 & avg<=50)
    {
        printf("Grade : D");
    }
    else
    {
        printf("Grade : F");
    }
    
    return 0;
}
