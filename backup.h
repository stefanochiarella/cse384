#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include<stdio.h>
#include<process.h>

void backup()//char *name)
{
   FILE *fp1, *fp2;
   char a;
   clrscr();
 
   fp1 = fopen("test.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fp2 = fopen("test1.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }
 
   do {
      a = fgetc(fp1);
      fputc(a, fp2);
   } while (a != EOF);
 
   fcloseall();
   getch();


	
}