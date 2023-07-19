#include <stdio.h>
#include <windows.h>
int main()
{
    int h, m, s;
    int d = 1000; // delay for 1000 milli seconds and we will use this in sleep function sleep
    printf("Set time: \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("Error! \n");
        exit(0);
    }
    while (1) // thid is an infinite loop and anything inside will repeat itself to infinity

    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d", h, m, s); // this writes our time in this format 00 00 00
        _sleep(d);                             // this is the delay function
        system("cls");                        // this is the clear screen function
    }
}
