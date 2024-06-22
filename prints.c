#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void printfs(char *c, ...){
    char rrr[1025];
    char cc=0;
    char *s;
    char *cf=rrr;
    va_list ap;
    int n=0;
    int a=0;
    
    va_start(ap,c);
    

    
    while(*c){
        switch(*c++){
           case 's':
               s=va_arg(ap,char *);
               fputs(s,stdout);
               break;
           case 'c':
               cc=(char)va_arg(ap,int);
               fputc(cc,stdout);
               break;
        }
    }
    va_end(ap);
}    
int main(){
    char unsigned a=0;
    int count=0;
    char unsigned c=0;
    puts("\ec\e[43;37m");
    printfs("%s %c","100",'c');
    return 0;
}
