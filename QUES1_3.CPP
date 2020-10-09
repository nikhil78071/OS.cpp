
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int i;
i=fork();
if(i<0)
{
printf("Child Process can't be Created");
exit(-1);
}
else if(i==0)
{
printf("\nIn Child Process\n");
}
else
{
wait(NULL);
printf("\nIn Parent Process\n");
}
return 0;
}