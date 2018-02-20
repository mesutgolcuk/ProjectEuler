#include <stdio.h>
#define DIVISOR 500

int calculate_next_triangle(int);

int main()
{
   int divisor_count = 0;
   int natural_num = 1;
   int triangle_num;
   int i;
   while(divisor_count < DIVISOR)
   {
        divisor_count = 0;
        triangle_num = calculate_next_triangle(natural_num);
        for(i=1; i <= triangle_num/2; i++)
        {
            if(triangle_num % i == 0)
            {
                divisor_count ++;
            }
        }
        divisor_count++;
        natural_num++;
   }
   printf("Result: %d",triangle_num);
   return 0;
}

int calculate_next_triangle(int number)
{
    return (number*(number+1)) / 2;
}