#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("This is just an example program.\n");
    printf("Arguments:\n");
    for (i = 1; i < argc; i++) {
        printf("\t%s\n", argv[i]);
    }
    return 0;
}
