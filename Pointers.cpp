#include <stdio.h>
#include <bits/stdc++.h>

void update(int *a,int *b) {
    int temp = *a;
    *a = *b + *a;
    *b = abs(temp - *b);
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}