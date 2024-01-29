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
        while (ans * ans <= num)
        {
            ans += step;
        }
        ans -= step;
        step = step / 10;
    }

    return ans;
}

int main()
{
    float ans;
    ans = sqrt_custom(45);
    printf("%.2f", ans);
    return 0;
}
