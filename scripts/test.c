// Author : TiWim
// Compilation : gcc vulnerable.c -o vulnerable -m32 -fno-stack-protector -z execstack
// For any compilation problem, try to install libc6-dev-i386 first

#include <stdio.h>
#include <string.h>
int copy (char message[20], char * string){

    strcpy (message, string);
    printf ("Your message: %s\n", message);
    return 0;
}

int main (int argc, char ** argv){
    char message[20];

    if (argc != 2){
        printf ("Usage: %s <message>\n", argv[0]);
        return -1;
    }

    copy (message, argv[1]);

    return 0;
}
