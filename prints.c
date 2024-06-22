#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

int printfs(char *c, ...){
    char rrr[1025];
    char ttt[1024];
    char *t1;
    char *t2;
    char *t3;
    char cc=0;
    char *s;
    char *cf=rrr;
    va_list ap;
    int n=0.0;
    int a=0;
    double ff=0.0;
    int r=0;
    
    va_start(ap,c);
    while(*c){
        switch(*c++){
           case '%':
               r=1;
               fputc(' ',stdout);
               break;
           case 's':
               if(r==1){
                   r=0;         
                   s=va_arg(ap,char *);               
                   fputs(s,stdout);
                   fputc(' ',stdout);
                }else{
                    r=0;
                    fputc(c[0],stdout);
                }
               break;
           case 'c':
               if(r==1){
                   r=0; 
                   cc=(char)va_arg(ap,int);
                   fputc(cc,stdout);
                   fputc(' ',stdout);
               }else{
                    r=0;
                    fputc(c[0],stdout);
                }
               break;
           case 'd':
               if(r==1){
                   r=0; 
                   n=va_arg(ap,int);
                   sprintf(rrr,"%d",n);
                   fputs(rrr,stdout);
                   fputc(' ',stdout);
               }else{
                    r=0;
                    fputc(c[0],stdout);
                }
               break;
           case 'f':
               if(r==1){
                   r=0;
                   ff=va_arg(ap,double);
                   sprintf(rrr,"%f",ff);
                   fputs(rrr,stdout);
                   fputc(' ',stdout);
                   
               }else{
                    r=0;
                    fputc(c[0],stdout);
                }
               break;
           default:
               
               if (c[0]!='%'){
                   r=0;
                   fputc(c[0],stdout);
               }else{
                   r=1;
               }
               break;          
        }
    }
    va_end(ap);
}    
int main(){
    int rets=0;
    char unsigned a=0;
    int count=0;
    char unsigned c=0;
    puts("\ec\e[43;37m");
    printfs(" integer:%d,char:%c,float:%f",100,'c',9.9);
    return 0;
}
