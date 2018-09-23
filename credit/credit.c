#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long ccnum;

    do
    {
        ccnum = get_long_long("Please enter a cc number: \n");
    }
    while ((ccnum < 1000000000000) && (ccnum > 9999999999999999));

    string cctype = "INVALID";


    // amex

    if (((ccnum / 10000000000000 == 34) || (ccnum / 10000000000000 == 37)) && (ccnum >= 100000000000000) && (ccnum <= 999999999999999))
    {
        int j = 0;
        int x;
        for (long long i = 10; i < ccnum; i*=100)
        {
            x = (ccnum / i % 10)*2;
            if (x > 9)
            {
                j +=((x % 10) + 1);
            }
            else if (x <= 9)
            {
                j += x;
            }
        }
        for (long long k = 1; k < ccnum; k*=100)
        {
            x = (ccnum / k % 10);
            j += x;
        }
        if (j % 10 == 0)
        {
            cctype = "AMEX";
        }
    }
    else if ((ccnum / 100000000000000 >= 51) && (ccnum / 100000000000000 <=55) && (ccnum >= 1000000000000000) && (ccnum <= 9999999999999999))
    {
        int j = 0;
        int x;
        for (long long i = 1; i < ccnum; i*=100)
        {
            x = (ccnum / i % 10) * 2;
            if (x > 9)
            {
                j += ((x % 10) + 1);
            }
            else if (x <= 9)
            {
                j += x;
            }
        }
        for (long long k = 10; k < ccnum; k*=100)
        {
            x = (ccnum / k % 10);
            j += x;
        }
        if (j % 10 == 0)
        {
            cctype = "MASTERCARD";
        }
    }
    else if ((ccnum / 1000000000000 == 4) && (ccnum >= 1000000000000) && (ccnum <= 9999999999999))
    {
        int j = 0;
        int x;
        for (long long i = 10; i < ccnum; i*=100)
        {
            x = (ccnum / i % 10)*2;
            if (x > 9)
            {
                j += ((x % 10) + 1);
                printf("%i\n", j);
            }
            else if (x <= 9)
            {
                j += x;
                printf("%i\n", j);
            }
        }
        for (long long k = 1; k < ccnum; k*=100)
        {
            x = (ccnum / k % 10);
            j += x;
            printf("%i\n", j);
        }
        if (j % 10 == 0)
        {
            cctype = "VISA";
        }
    }
    else if ((ccnum / 1000000000000000 == 4) && (ccnum >= 1000000000000000) && (ccnum <= 9999999999999999))
    {
        int j = 0;
        int x;
        for (long long i = 1; i < ccnum; i *= 100)
        {
            x = (ccnum / i % 10) * 2;
            if (x > 9)
            {
                j += ((x % 10) + 1);
                printf("%i\n", j);

            }
            else if (x <= 9)
            {
                j += x;
                printf("%i\n", j);
            }
        }
        for (long long k = 10; k < ccnum; k *= 100)
        {
            x = (ccnum / k % 10);
            j += x;
            printf("%i\n", j);
        }
        if (j % 10 == 0)
        {
            cctype = "VISA";
        }
    }

    printf("%s\n", cctype);
}
