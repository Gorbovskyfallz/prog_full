#include <stdio.h>

/* присвоение с помощью * и & */

int main(void)

{
 int target, source;
 int *m;

source = 10;
m = &source;
target = *m;

printf("%d\n", target);
    printf("kek %d\n", *m);
    

return 0;
}