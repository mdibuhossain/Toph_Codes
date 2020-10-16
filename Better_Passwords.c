/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char s[17];
    gets(s);;
    printf("%c", (s[0] - 32));
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == 's')
            printf("$");
        if (s[i] == 'i')
            printf("!");
        if (s[i] == 'o')
            printf("()");
        else if (s[i] != 's' && s[i] != 'i' && s[i] != 'o')
            printf("%c", s[i]);
    }
    printf(".\n");
    return 0;
}