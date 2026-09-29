#include<stdio.h>
int main(){
int ip,op=0,c=1,temp;
printf("enter number");
scanf("%d",&ip);
/*while(temp!=0){
temp/=10;
c*=10;}
ip+=c;*/
while(ip!=0){
op*=10;
op+=ip%10;
ip/=10;}
op/=10;
printf("reverse=%d",op);
return 0;}
