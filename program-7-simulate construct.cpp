#include<stdio.h>
int main()
{
int i,j,n,a[50],frame[10],nf,k,avail,count=0;
printf("\nENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);
printf("\nENTER THE PAGE NUMBER:\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("\nENTER THE NUMBER OF RAMES:");
scanf("%d",&nf);
for(i=0;i<nf;i++)
frame[i]=-1;j=0;
printf("\trefstring\tpageframes\n");
for(i=1;i<=n;i++)
{
printf("%d\t\t",a[i]);avail=0;
for(k=0;k<nf;k++)
if(frame[k]==a[i])avail=1;
if(avail==0)
{
frame[j]=a[i];j=(j+1)%nf;
count++;for(k=0;k<nf;k++)
printf("%d\t",frame[k]);
}
printf("\n");
}
printf("page faults%d",count);
}
