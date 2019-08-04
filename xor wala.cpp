#include<stdio.h>
int main() {
    int n;
    int t;
    int x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        x ^= t;
    }
    printf("%d\n",x);
	return 0;
}