#include<stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int a[1000];
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxValue = a[0];
    for ( i = 0; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    printf("%d", maxValue);
    return 0;
}
