#include <stdlib.h>
#include "c-sum.h"

int sum_abs_(int *in, int *num, int *sum) {
   int i;

   for (i=0,sum[0]=0; i < num[0]; ++i) {
       sum[0] += abs(in[i]);
   }
}
 
