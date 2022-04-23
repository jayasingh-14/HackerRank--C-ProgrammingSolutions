#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int digit, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        digit = n%10;
        sum += digit;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
