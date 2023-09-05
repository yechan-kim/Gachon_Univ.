#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// #include <windows.h> // for windows
#include <unistd.h> // for mac

int main(int argc, char* argv[])
{
    int *p = malloc(sizeof(int)); // a1: allocate some memory

    assert(p != NULL);
    printf("(%d) address of p: %08x\n", getpid(), (unsigned) p); // a2: print out the address of memory
    *p=0; // a3: put 0 into the first slot of the memory

    while(1)
    {
        // Sleep(1000); // for windows
        sleep(1); // for mac
        *p = *p + 1;
        printf("(%d) p: %d\n", getpid(), *p); // a4: print out the value of the memory
    }

    return 0;
}