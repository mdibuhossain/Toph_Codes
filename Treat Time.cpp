#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b) printf("Chocolate\n");	
	else if(a<b && a<c) printf("Chocolate\n");
	else if(a<b || a<c) printf("Ice-cream\n");
	return 0;
}