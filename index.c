#include <stdio.h>

int main(void) {
    int n;
    while(scanf("%d", &n) != EOF) {
        for (int i=0; i<n; i++) {
            long long int a,b,c;
            scanf("%ld %ld %ld", &a, &b, &c);
            if (a == 1) {
                printf("%ld\n", b+c);
            } else if (a == 2) {
                printf("%ld\n", b-c);
            } else if (a == 3) {
                printf("%ld\n", b*c);
            } else if (a == 4) {
                printf("%ld\n", b/c);
            }
        }
    }
}