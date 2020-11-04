#include <math.h> 
#include <stdio.h> 
  
double sum(int x, int n) 
{ 
    double i, total = 1.0; 
    for (i = 1;i<=n ;i++ ) 
        total = total +  
                (1 / pow(x, i)); 
    return total; 
} 
  
 
int main() 
{ 
    int x=2 ; 
	double n=INFINITY; 
    printf("%.4f", sum(x, n)); 
    return 0; 
} 
