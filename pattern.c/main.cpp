#include<stdio.h>

int main(){
int i,j,k,s;

for(i=5;i>=1;i--){
    for(j=5;j>=i;j--){
        printf("%5d",j);
    }
        for(k=1;k<=i-1;k++){
                if (i!=1)
            printf("%5d",i);
        }
        for(s=i;s<=5;s++){
                if(i!=1&&i!=5)
            printf("%5d",s);
        }

    printf("\n");
}


}
/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
    for(j=i;j<=5;j++){
        printf("%5d",j);
    }
    for(k=i-1;k>=1;k--){
        printf("%5d",k);
    }
    printf("\n");
}

}

/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
    for(j=1;j<=i-1;j++){
        printf("%5d",i);
    }
    for(k=i;k<=5;k++){
        printf("%5d",k);
    }
    printf("\n");
}
}

/*int main(){
int i,j,k;

for(i=5;i>=1;i--){
    for(j=5;j>=i;j--){
        printf("%5d",j);
    }
    for(k=1;k<=i-1;k++){
        printf("%5d",i);
    }
    printf("\n");
}
    }

/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
        for(j=i;j<=5;j++){
            printf("\t%d",j);
        }
        for(k=1;k<=i-1;k++){
            printf("\t5");
        }
   printf("\n");
}
}*/

/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
    for(j=i;j>=1;j--){
        printf("%5d",j);
    }
    for(k=2;k<=6-i;k++){
        printf("%5d",k);
    }
    printf("\n");
}
}
/*int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=i;j>=1;j--){
            printf("%5d",j);
        }
        for(k=2;k<=6-i;k++){
            printf("%5d",k);
        }
        printf("\n");
    }
}

/*int main(){
int i,j,k;
for (i=5;i>=1;i--){
  for(j=i;j<=i+4;j++){
        if(j<=5)
    printf("\t%d",j);
  else
    printf("\t5");
  }
 printf("\n");
}
}
/*int main(){
int i,j,k;
for (i=1;i<=5;i++){
  for(j=i;j<=i+4;j++){
        if(j<=5)
    printf("\t%d",j);
  else
    printf("\t5");
  }
 printf("\n");
}
}
/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
    for(j=i;j<=i+4;j++){
            printf("%5d",j);
                      }
                        printf("\n");

}
}

/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
            printf("%5d",j);
                      }
                        printf("\n");

}
}

/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
    if(i==2&&j==2||j==4&&i==2||i==3&&j==3||i==4&&j==2||i==4&&j==4||i==1&&j==1||i==1&&j==5||i==5&&j==5||i==5&&j==1)
        printf("\t1");
    else
        printf("\t0");
}
printf("\n");
}
}


/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
    if(i==3||j==3)
        printf("\t0");
    else
        printf("\t1");
}
printf("\n");
}
}

/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
    if(i==3&&j==3)
        printf("\t0");
    else
        printf("\t1");
}
printf("\n");
}
}

/*int main(){
 int i,j,k;
 for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(i==1||i==5||j==1||j==4)
            printf("\t 1");
        else
        printf("\t ");
    }
    printf("\n");
 }

}

/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
            if(i==1||i==5||j==1||j==5)
        printf("\t 1");
        else
            printf("\t 0");
    }
    printf("\n");
}
}

/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
    for(j=0;j<5;j++){
        printf("%5d",(j%2));
    }
    printf("\n");
}
}

/*int main(){
int i,j,k;

for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
            printf("%5d",(i%2));

    }

    printf("\n");

}
}
/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
   for(j=1;j<=5;j++){
        printf("1");
   }
    printf("\n");
}

}

/*int main(){

int i,j,k,count=1;
for(i=1;i<=5;i++){
        for(k=1;k<=9-i;k++){
            printf(" ");
        }
    for(j=1;j<=count;j++){
        printf("%5d",j);

}
     count+=2;
    printf("\n");
}
}
/*int main(){
int i,j,k,currentnumber;
for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
        if(i%2==0){
            currentnumber=2;
        }
        else{
            currentnumber=1;
        }
    for(j=1;j<=i;j++){
        printf("%5d",currentnumber);
        currentnumber+=2;
    }
    printf("\n");
}
}
/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
    for(j=1;j<=i;j++){
        printf("%5d",i);
    }
    printf("\n");
}
}
/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
        for(k=1;k<=i-1;k++){
            printf(" ");
        }
    for(j=1;j<=6-i;j++){
        printf("%5d",i);
    }
    printf("\n");
}
}
/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
    for(j=1;j<=i;j++){
        printf("%5d",i);
    }
        printf("\n");
}

}
/*int main(){
int i,j,k;
for(i=5;i>=1;i--){
        for(k=1;k<=5-i;k++){
        printf(" ");
        }

    for(j=i;j>=1;j--){
        printf("%5d",j);
    }
    printf("\n");
}
}
/*int main(){
 int i,j,k;
 for(i=5;i>=1;i--){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
    for(j=1;j<=i;j++){
        printf("%5d",j);
    }
    printf("\n");
 }
 return 0;
}
/*int main(){
int i,j,k;
for(i=1;i<=5;i++){
        for(k=1;k<=i-1;k++){
            printf(" ");
        }

    for(j=5;j>=i;j--){
        printf("%5d",j);
    }
    printf("\n");
}
}
/*int main(){

int i,j,k;
for(i=5;i>=1;i--){
    for(j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\n");
        }
        return 0;

}
/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%5d",j);
    }
    printf("\n");
        }
        return 0;
}

/*int main(){

int i,j,k;
 for(i=5;i>=1;i--){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
    for(j=i;j<=2*i-1;j++){
        printf("%5d",j);
 }
    printf("\n");

 }

    return 0;
}

/*int main(){
 int i,j,k;
 for(i=1;i<=9;i+=2){
        for(j=5;j>=5-i;j--){
            printf(" ");
        }

    for(j=i;j<=9;j+=2){
        printf("%5d",j);
     }
     printf("\n");
 }
 return 0;
}

/*int main(){

int i,j,k;
for(i=5;i>=1;i--){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
for(j=i;j<=5;j++){
    printf("%5d",j);
}
printf("\n");
}
return 0;
}
/*int main(){

int i,j,k;
for(i=5;i>=1;i--){
for(j=5;j>=i;j--){
    printf("%5d",j);
}
printf("\n");
}
return 0;
}


/*int main(){

int i,j,k;
for(i=1;i<=5;i++){
for(j=i;j<=5;j++){
    printf("%5d",j);
}
printf("\n");
}
return 0;
}


/*int main(){

int i,j,k;
for(i=0;i<=10;i+=2){
    for(j=i;j<=10;j+=2){
        printf("%5d",j);
    }
    printf("\n");
}
return 0;
}

/*int main(){
 int i,j,k;
 for(i=1;i<=9;i+=2){

    for(j=i;j<=9;j+=2){
        printf("%5d",j);
     }
     printf("\n");
 }
 return 0;
}*/
