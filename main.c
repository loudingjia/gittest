//1541
#include <stdio.h>
#include <math.h>
int main() {
    unsigned int n;
    int num = 0;
    while(scanf("%d", &n), n) {
        int i = 0;
        while (i * i * i < n) {
            ++i;
            if(i * i * i == n) {
                ++num;
                break;
            }
        }
    }
    printf("%d\n", num);
    return 0;
}