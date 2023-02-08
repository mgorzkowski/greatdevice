#include <stdio.h>
#include "3rd_party/greatmodule.h"

int main(void)
{
    printf("%s\n", get_some_string());
    printf("MAGIC IS %d", MAGIC_NUM);
    return 0;
}