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
int main()
{
    char st[1000];
    while (1)
    {
        gets(st);
        if (st[0] == 't' && st[1] == 'h' && st[2] == 'e' && st[3] == ' ' && st[4] == 'e' && st[5] == 'n' && st[6] == 'd' && st[7] == '.')
            break;
        for (int i = 0; i < strlen(st); i++)
        {
            if (st[i] == 'b')
                st[i] = '6';
            else if (st[i] == 'g')
                st[i] = '9';
            else if (st[i] == 'l')
                st[i] = '1';
            else if (st[i] == 'o')
                st[i] = '0';
            else if (st[i] == 's')
                st[i] = '5';
            else if (st[i] == 'z')
                st[i] = '2';
            else if (st[i] == '6')
                st[i] = 'b';
            else if (st[i] == '9')
                st[i] = 'g';
            else if (st[i] == '0')
                st[i] = 'o';
            else if (st[i] == '5')
                st[i] = 's';
            else if (st[i] == '2')
                st[i] = 'z';
            else if (st[i] == '1')
                st[i] = 'l';
        }
        printf("%s\n", st);
    }
    return 0;
}