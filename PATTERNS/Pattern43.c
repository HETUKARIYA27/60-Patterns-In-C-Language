#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("  ");
        }
        for(int j=1;j<i;j++){
            if(j==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=1;j<=i;j++){
            if(i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            if(i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=i;j<n;j++){
            if(j==n-2){
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