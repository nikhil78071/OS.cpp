#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int i;
printf("\n TheKernel Version is:\n");
system("cat /proc/sys/kernel/osrelease");
printf("\n The Information on Configured amount of Free and Used Memory is:\n");
system("cat /proc/meminfo | awk 'NR==1,NR==2 {print}'");
return 0;
}
