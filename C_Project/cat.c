/* Rewriting cat command.
 * @lakshay khanna (1910991116)
 * C Project
 *Compilation: cat.c
 * Execution: ./a.out
 * source :-GeeksforGeeks
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char* argv[])
{  
    char *a1 = (char*) malloc (sizeof(char));
    int sz, fd,cont=0, cont1=0;
    char *b1 = (char*) malloc (sizeof(char));
    char * a2;
    char *b2 = (char*) malloc (sizeof(char));

    // NO PARAMETERS
    while (argc == 1){      
        sz=read(0, a1, 1);
        b1[cont]=a1[0];

        if(b1[cont]=='\n'){
            write(1,b1,cont);
            write(1,"\n",1);
            b1=NULL;            
        }

        cont=cont+1;
        b1=(char*) realloc(b1, sizeof(char)*cont);
      }

    // 1 PARAMETER (FILE)   /*Here is the problem*/
    if (argc > 1){

        fd=open(argv[1],O_RDONLY);
        a2=fgetc(fd);

        while (a2 != EOF){
            b2[cont1]=a2;
            cont1=cont1+1;
            b2=(char*) realloc (b2, sizeof(char)*cont1+1);
            a2=fgetc(fd);
        }

        write(1,b2,cont);
        b2=NULL;
        close(fd);  
    }

    return 0;
}