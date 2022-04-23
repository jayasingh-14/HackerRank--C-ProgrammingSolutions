#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int m1=0,m2=0,m3=0,i,j;
  for(i=1; i<=n; i++)
  {
      for(j = i+1; j<=n; j++)
      {
        int a = i&j;
        int b = i|j;
        int c = i^j;
        if(a>m1 && a<k)
        {
        m1 = a;
        }
        if(b>m2 && b<k){
        m2 = b;
        }
        if(c>m3 && c<k)
        {
        m3 = c;  
        }
     }
  }
  
  printf("%d\n",m1);
  printf("%d\n",m2);
  printf("%d\n",m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
