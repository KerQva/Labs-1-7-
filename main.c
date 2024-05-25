#include "lab.h"

int main()
{
printf("###bananchiki###\n");
    int n;
printf("Choose lab work from 1-7 \n");
scanf("%d",&n);

if  (n<8)
{
if (n==1)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d",&k);
     if (k==1)
         lr1();
     if (k==2)
         lr1d();
     if(k>2||k<1){
        printf("Do you can read?");
        return main();}


}
if (n==2)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d",&k);
     if (k==1)
         lr2();
     if (k==2)
         lr2d();
     if(k>2||k<1){
        printf("Do you can read?\n");
        return main();}
}
if (n==3)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d",&k);
     if (k==1)
         lr3();
     if (k==2)
         lr3d();
     if(k>2||k<1){
        printf("Do you can read?\n");
        return main();}
}
if (n==4)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d\n",&k);
     if (k==1)
         return lr4();
     if (k==2)
         lr4d();
     if(k>2||k<1){
        printf("Do you can read?\n");
        return main();}
}
if (n==5)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d",&k);
     if (k==1)
         lr5();
     if (k==2)
         lr5d();
     if(k>2||k<1){
        printf("Do you can read?\n");
        return main();}
}
if (n==6)
{
    int k;
printf("Choose basic(1) or additional(2) task\n");
scanf("%d",&k);
     if (k==1)
         lr6();
     if (k==2)
         lr6d();
     if(k>2||k<1){
        printf("Do you can read?\n");
        return main();}
}
if (n==7)
return lr7();
}
else
{
    printf("Do you can read?\n");
    return main();
}
}
