#include <stdio.h>

int main(void)
{
    int n, i;
    long long total = 0;
    scanf("%d", &n);
    if (n < 0){
        printf("NG");
    } else {
        for (i = 1; i <= n; i += 2){
            total += i;
        }
        printf("%lld", total);
    }
    return 0;
}
