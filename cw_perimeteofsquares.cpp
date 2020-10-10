#include <stdio.h>
typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n)
  {
    if (n <= 0) 
       return 0; 
  
    ull fibo[n+1]; 
    fibo[0] = 1, fibo[1] = 1; 
  
    // Initialize result 
    ull sum = fibo[0] + fibo[1]; 
  
    // Add remaining terms 
    for (int i=2; i<=n; i++) 
    { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        sum += fibo[i];
        printf("fibo[i]=%d sum=%d \n",fibo[i],sum); 
    } 
    return sum*4; 
  }
};
