//202610125119
//周丽淇
#include <stdio.h>
int main()
{
    float a;
    float b;
    char op;
    printf("请依次输入数字，运算符，数字\n");
    scanf("%f %c %f",&a,&op,&b);
    if (op=='+')
    {
        printf("%.2f\n",a+b);
    }
    else if (op=='-')
    {
        printf("%.2f\n",a-b);
    }
    else if(op=='*')
    {
        printf("%.2f\n",a*b);
    }
    else if(op=='/')
    {
        if(b==0)
        {
            printf("错误，除数不能为零\n");
        }
        else
        {
            printf("%.2f\n",a/b);
        }
    }
    else
    {
        printf("错误，未知的运算符");
    return 0;
}
}
