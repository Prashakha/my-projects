#include<stdio.h>

int main(){

int i,j,k;

for (i=5;i>0;i--){

        for (j=i;j<=2*i-1;j++){

                if(i%2!=0){    printf("%5d",j);}
            }
          printf("\n");


    }
}
/*int i,j,k;
 for(i=1;i<=5;i++){
    for(j=0;j<5-i;j++)
        printf(" ");
    for(j=i;j<=2*i-1;j++)
        printf("%5d",j);
    //for(j=0;j<=i-1;j++)
    printf("\n");
 }

}

 /*int i,j,k;
 for (i=1;i<=5;i++){
        for(i=1;i<=5-i;i++){
            printf(" ");
        }

        for (j=i;j<=2*i-1;j++){
                printf("%5d",j);
            }
          printf("\n");


    }
}




/*int i,j,k;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%5d",i);
    }
    printf("\n");
}
}


/*int i,j,k;
for(i=1;i<=5;i++){
    for(j=1;j<=5-i;j++){
        printf("");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}

}



  /*  int i,j,k;

for (i=1;i<=5;i++){


        for (j=i;j<=2*i-1;j++){
                for(k=1;k<=5-i;k++){
        printf("");
         }
                printf("%5d",j);
            }
          printf("\n");


    }

}

/*int i,j,k;

for (i=5;i>0;i--){

        for (j=i;j<=2*i-1;j++){
                printf("%5d",j);
            }
          printf("\n");


    }
}*/

/*int i,j,n=1,k;
for(i=1;i<=5;i++){
    for(j=1;j<=5-i;j++){
        printf("");
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}*/

