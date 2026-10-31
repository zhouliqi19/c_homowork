//202610125119
//周丽淇
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("请输入三个实数\n");
    scanf("%f %f %f",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        printf("abc可以构成三角形");
    }
    else
    {
    printf("abc不能构成三角形");
    }
    return 0;
}
