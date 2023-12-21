#include <stdio.h>
#include <math.h>
/* Q1
    
    int main(){
    int a, b, c, largest;
    printf("enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if (b>a && b>c)
    {
        largest=b;
    }
    else if (c>a && c>b)
    {
        largest=c;
    }
    else
    {
        largest=a;
    }
    printf("largest number: %d", largest);
    return 0;
}*/

/* Q2

    int main(){
    int f, n, c;
    f=1;
    printf("enter number for factorial\n");
    scanf("%d", &n);
    for ( c = 1; c <= n; c++)
    {
        f=f*c;
    }
    printf("factorial of number: %d", f);

    return 0;
}*/

/* Q3

    int main(){
    int i;
    for ( i = 1000; i <= 2000; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}*/

/* Q4

    int main(){

    int number, number1, number2, reverse=0, d=1, c=0;
    printf("enter at least 2 digit number\n");
    scanf("%d", &number);
    number1 = number;
    number2 = number;
        while (d>0)
        {
            d=number%10;
            number=number/10;
            c=c+1;
        }
    c=c-1;
        while (c>0)
        {
            reverse = reverse + number1%10*pow(10,(c-1));
            number1=number1/10;
            c=c-1;
        }
    if (number2==reverse)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }    
    
    return 0;

}*/

/* Q5
    
    int main(){

    double i, x, c, f=1, sum;
    printf("enter a number for x \n");
    scanf("%lf", &x);
    printf("enter a number for end of the sum\n");
    scanf("%lf", &c);
    for ( i = 1; i <= c; i++)
    {
        f = f * i;
        sum = sum + pow(x,i)/f;
    }
    sum = sum + 1;
    printf("sum: %lf", sum);

    return 0;

}*/

