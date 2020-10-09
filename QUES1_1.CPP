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
else
{
printf("My ID is:%d,My Parent ID is:%d\n",getpid(),getppid());
}
return 0;
}