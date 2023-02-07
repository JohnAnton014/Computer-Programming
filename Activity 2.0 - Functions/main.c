#include <stdio.h>

int addg(int A, int B, int C, int D, int E);
float avg(int sum);

int main()
{
    int grade1, grade2, grade3, grade4, grade5;
    int sum;
    float average;

    printf("Input five grades:\n\n");
    scanf("%d%d%d%d%d", &grade1, &grade2, &grade3, &grade4, &grade5);		   
    

    sum = addg(grade1, grade2, grade3, grade4, grade5);
    average = avg(sum);
    printf("Average is: %.2f\n", average);

    return 0;
}

int addg(int A, int B, int C, int D, int E)
{
    int sum = A + B + C + D + E;
    return sum;
}

float avg(int sum)
{
    float average = sum / 5;
    return average;
}
