#include<stdio.h>
int main()
{
char c;
clrscr();
printf("Enter a character:");
scanf("%c",&c);
{
if((c>='a' &&c<='z')||(c>='A' &&c<='Z'))
printf("%c is an alphabet",c);
else
printf("%c is No",c);
}
getch();
}
