#include<stdio.h>
int main()
{
    int h,m;
    double a_;
    scanf("%d%d",&h,&m);
    a_ = (11.0*m-60.0*h)/2.0;
    a_ = -a_;
    if (a_>180)
        a_ = 360.0-a_;
    printf("%0.7lf\n",a_);
    return 0;
}