#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char s[15];
	scanf("%d",&t);
	for(int i = 1; i <= t; i++)
	{
		scanf("%s",s);
		if(s[5]=='1' && s[6]=='5')
		{
			if (s[2]=='1')
				printf("CSE Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("CSE Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("CSE Autumn 20%c%c\n",s[0],s[1]);
		}
		else if(s[5]=='4' && s[6]=='1')
		{
			if (s[2]=='1')
				printf("EEE Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("EEE Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("EEE Autumn 20%c%c\n",s[0],s[1]);
		}
		else if(s[5]=='1' && s[6]=='6')
		{
			if (s[2]=='1')
				printf("BBA Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("BBA Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("BBA Autumn 20%c%c\n",s[0],s[1]);
		}
		else if(s[5]=='1' && s[6]=='7')
		{
			if (s[2]=='1')
				printf("LLB Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("LLB Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("LLB Autumn 20%c%c\n",s[0],s[1]);
		}
		else if(s[5]=='1' && s[6]=='4')
		{
			if (s[2]=='1')
				printf("English Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("English Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("English Autumn 20%c%c\n",s[0],s[1]);
		}
		else if(s[5]=='1' && s[6]=='1')
		{
			if (s[2]=='1')
				printf("Economics Spring 20%c%c\n",s[0],s[1]);
			else if (s[2]=='2')
				printf("Economics Summer 20%c%c\n",s[0],s[1]);
			else if (s[2]=='3')
				printf("Economics Autumn 20%c%c\n",s[0],s[1]);
		}
	}
	return 0;

}