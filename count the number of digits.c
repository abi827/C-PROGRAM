#include <stdio.h>


int findCount(int n)
{

      if(n == 0)
          return 1;

    int count = 0;


    while (n != 0) {


        count++;
        n /= 10;
    }


    return count;
}

int main()
{
    int n = 98562;
    printf("Count of digits in %d = %d\n", n, findCount(n));
    return 0;
}
