#include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int main()
 {
 char a[50];
 clrscr();
scanf("%s",a);
if((strcmp(a,"sunday")==0)||(strcmp(a,"saturday")==0))
{
printf("\nholiday");
printf("\nfalse");
}
else
{
printf("\nWorking day");
printf("\ntrue");
}
getch();
return 0;
}
