#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            if(i==1 || i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=i;j<=n;j++){
            if(i==1 || j==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("  ");
        }
        for(int j=1;j<i;j++){
            if(i==5 || j==1){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=1;j<=i;j++){
            if(i==5 || i==j || j==5){
            printf("* ");
        }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}