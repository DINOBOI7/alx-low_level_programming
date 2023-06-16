#include <stdio.h>
#include <stdlib.h>
/* Include the necessary header file for the rand() and RAND_MAX functions */

int main(void)
{
       	int n = rand() - RAND_MAX / 2;
       	if (n > 0) { printf("%d is positive\n", n);
       	}
       	else if (n == 0) { printf("%d is zero\n", n);
       	}
       	else { printf("%d is negative\n", n);
       	}
       	return 0;
}
