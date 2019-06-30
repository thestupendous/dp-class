#include<stdio.h>
#include<stdlib.h>
#define un long long
int main(void) {
    unsigned int n,i;
    short f;
    un *a;
    
    scanf("%d",&n);
    if(n>=130) printf("YES");
    else
    {
        f=0;
        a=(un*) malloc(n*sizeof(un));
        for(i=0;i<n;i++) scanf("%d",a+i);
        for(i=3;i<n;i++)
        {
            if( a[i] ^ a[i-1] ^ a[i-2] ^ a[i-3] == 0) {
                printf("YES");
                return 0;
            }
        }
        printf("NO");
    }
	return 0;
}