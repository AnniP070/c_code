#include <stdio.h>
int max(int x, int y)
{
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    int a, b,c,d;
    printf("Enter the value of a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    printf("Maximum number is: %d", final_max);
}

