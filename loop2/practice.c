#include<stdio.h>
#include<conio.h>
#include<math.h>
//power of a number
void main(){
int b,e,result=1;
printf("enter the value of base:");
scanf("%d",&b);
printf("enter the base of exponent:");
scanf("%d",&e);
while(e!=0){

    result*=b;
e--;
}
printf("%d",result);
getch();
}


/*
void  main(){
int base,expo,result;
printf("enter the value of base: ");
scanf("%d",&base);
printf("enter the value of exponent:");
scanf("%d",&expo);
result=pow(base,expo);
printf("%d",result);
getch();

}

/*
//perfect number
int perfectno(int a);
void main(){
int n;
printf("enter any number:");
scanf("%d",&n);
if(perfectno(n)==n){

    printf("%d is perfect number",n);
}
else{

    printf("not a perfect no");
}
getch();
}
int perfectno(int a){
int i,s=0;
for(i=1;i<a;i++){
    if(a%i==0){

        s+=i;
    }

}
return s;
}

/*
void main(){
int fact=1;
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++){

    fact*=i;
}
printf("the factorial of %d = %d",n,fact);
getch();
}



/*
void main(){
int a,b;
printf("enter any two numbers:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping: %5d,%5d",a,b);
getch();

}

/*
//fabonacci series
void main(){
int n,i,a=0,b=1,c;
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
printf("%d",c);


}

}

/*
//prime number
void main(){
int n,i,flag,j;
printf("enter any number:");
scanf("%d",&n);
for(i=2;i<=n;i++){
    flag=0;
    for(j=2;j<i;j++){

        if(i%j==0){

            flag=1;
            break;
        }
    }
    if(flag==0){

    printf("%d\n",i);
    //break;
    }

}
getch();
}

/*
void main(){
int a,b,s=0;
printf("enter any two numbers:");
scanf("%d %d",&a,&b);
s=a+b;
printf("the sum is=%d",s);
getch();

}
*/
