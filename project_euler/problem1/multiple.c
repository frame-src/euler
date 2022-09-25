#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    long long n, sum = 0;
    int t = 0,
        a = 0;

    scanf("%d", &t);
    if (t < 0)
        return 0;
    while(t > a++){
        scanf("%lld", &n);
        sum = 0;
        if (n <= 2)
            sum = 0;
        else{
        n = n - 1;
        sum = sum + (3 * (n/3) *((n/3) + 1))/2;
        sum = sum + (5 * (n/5) *((n/5) + 1))/2;
        sum = sum - (15 * (n/15) *((n/15) + 1))/2;
        }
        printf("%lld \n", sum);
    }
    return 0;
}