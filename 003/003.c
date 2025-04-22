#include <stdio.h>

int main()
{
    int isPrime = 0 ;
    
    for(int i = 2; i <= 600851475143; i++)
    {
        if(600851475143 % i == 0)
        {
            for (int j = 2; j <= i ; j++)
            {
                if (i % j == 0)
                isPrime++;
            }
            
            if (isPrime <= 2)
            {
                printf("%d\n", i);
                isPrime = 0;
            }
        }
    }

    return 0;
}