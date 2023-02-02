#include "stdio.h"
void main()
{
    int x=0;
    int y=0;
    int sum=0;
    scanf("%d%d",&x,&y);//&取地址符号 输入例如：1 2中间加空格
    sum=x+y;
    printf("%d",sum);
}