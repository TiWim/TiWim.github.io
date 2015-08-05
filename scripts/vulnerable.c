// Author : TiWim
// Compilation : gcc vulnerable.c -o vulnerable
// For any compilation problem, try to install libc6-dev-i386 first

#include <stdio.h>
#include <string.h>

int main (int argc, char ** argv){
    char message[20];

    if (argc != 2){
        printf ("Usage: %s <message>\n", argv[0]);
        return -1;
    }

    strcpy (message, argv[1]);
    printf ("Your message: %s\n", message);
    return 0;
}
