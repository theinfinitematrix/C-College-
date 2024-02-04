#include <stdio.h>
#include <math.h>

float sqrt_custom(int num)
{
    num = fabs(num);
    int root;
    int s = 0;
    int e = num;
    int mid = s + (e - s) / 2;

    // Binary search for initial estimation
    while (s <= e)
    {
        if (mid * mid == num)
        {
            root = mid;
            break;
        }
        else if (mid * mid > num)
        {
            e = mid - 1;
        }
        else
        {
            root = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    float step = 0.1;
    float ans = root;

    // Refining the estimation through multiple iterations
    for (int i = 0; i < 5; i++)
    {
        for (float j = ans; j * j <= num; j += step)
        {
            ans = j;
        }

        step = step / 10;
    }

    return ans;
}
int main()
{
    int a, b, c, disc;
    float root1, root2;
    float sqrtdisc;
    printf("Enter values of a,b and c: \n");
    scanf("%d%d%d", &a, &b, &c);
    disc = b * b - 4 * a * c;
    sqrtdisc = sqrt_custom(disc);
    if (disc < 0)
    {
        root1 = (-b) / (2 * a);
        sqrtdisc /= 2 * a;
        printf("The roots are Imaginary\n");
        printf("Root1: %.2f + %.2fi, Root2: %.2f - %.2fi\n", root1, sqrtdisc, root1, sqrtdisc);
    }
    else if (disc > 0)
    {
        printf("The roots are real and unequal\n");
        root1 = (-b + sqrtdisc) / (2 * a);
        root2 = (-b - sqrtdisc) / (2 * a);
        printf("Root1: %.2f, Root2: %.2f\n", root1, root2);
    }
    else
    {
        printf("The roots are real and equal\n");
        root1 = -b / 2 * a;
        printf("Root1: %.2f, Root2: %.2f\n", root1, root1);
    }
    return 0;
}