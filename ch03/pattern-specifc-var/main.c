#include <stdio.h>

int main(int argc, const char *argv[])
{
#ifdef USE_NEW_MALLOC
    printf("11hello world.\n");
#else
    printf("22hello world.\n");
#endif
    
    return 0;
}
