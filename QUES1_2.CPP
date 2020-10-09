#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int i;
i=fork();
if(i<0)
{
printf("Sorry! Child Process can't be Created.");
exit(-1);
}
else if(i==0)
{
execl("/bin/ls","ls\n",NULL);
}
else 
{
printf("\n In Parent Process\n");
}
return 0;
}