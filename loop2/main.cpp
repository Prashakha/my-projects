#include<stdio.h>

int main(){

int i,n,fact=1,lastnumber,sum=0,temp;
printf("enter any number:");
scanf("%d",&n);
temp=n;

for(i=1;i<n;i++){
    lastnumber=n%10;
    for(i=1;i<=lastnumber;i++){
            fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
if(sum==temp)
printf("%d is a strong number",temp);
else
    printf("%d is not a strong number",temp);


}

/*//perfect number
int main(){

int i,j,n,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<n;i++){
    if(n%i==0)
        sum=sum+i;
}
if(sum==n)
printf("%d is a perfect number",n);
else
    printf("%d is not a perfect number",n);
    return 0;

}*/
