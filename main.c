#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "mac.h"

int main(void)
{
    u64 a = 3;
    u64 b = 5;
    u64 c = 7;

    printf("%d\n",mac_subset(&a,&b));
    printf("%d\n",mac_subset(&a,&c));

    return 0;
}
