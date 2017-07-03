#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g_ulA[10];

void init_data()
{
    g_ulA[0] = 87;
    g_ulA[1] = 43;
    g_ulA[2] = 12;
    g_ulA[3] = 98;
    g_ulA[4] = 54;
    g_ulA[5] = 32;
    g_ulA[6] = 71;
    g_ulA[7] = 65;
    g_ulA[8] = 29;
    g_ulA[9] = 7;
    return;
}

void PRINT()
{
    int i = 0;

    printf("\r\n");
    for (i=0; i<10; i++)
    {
        printf("%u ", g_ulA[i]);
    }
    printf("\r\n");
    return;
}

int insert()
{
    int i,j;
    int tmp;

    for (i=1; i<10; i++)
    {
        if (g_ulA[i] < g_ulA[i-1])
        {
            j = i-1;
            tmp = g_ulA[i];
            g_ulA[i] = g_ulA[i-1];
            while (tmp < g_ulA[j])
            {
                g_ulA[j+1] = g_ulA[j];
                j--;
            }
            g_ulA[j+1] = tmp;
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    init_data();
    PRINT();

    printf("insert agor\r\n");
    insert();
    PRINT();

    init_data();
    PRINT();
    printf("sort agor\r\n");

    return 0;
}


