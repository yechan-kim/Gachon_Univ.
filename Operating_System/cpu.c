#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
// #include <windows.h> // for windows
#include <unistd.h> // for mac

int main(int argc, char *argv[])
{
    if (argc != 2) // argc must be 2
    {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }

    char *str = argv[1];

    while (1)
    {
        // Sleep(1000); // for windows
        sleep(1); // for mac
        printf("%s\n", str);
    }

    return 0;
}