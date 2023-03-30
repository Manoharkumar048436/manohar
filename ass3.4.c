#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int num1, num2, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1*num2)/gcd(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}

