#include<stdio.h>

int a[20][20],w[10],v[10],n,cap;

int sack(){
    for(int i=0;i<n+1;i++) a[i][0]=0;
    for(int i=0;i<cap+1;i++) a[0][i]=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<cap+1;j++){
             if(w[i-1]>j){
                a[i][j]=a[i-1][j];
            }else{
            a[i][j] = a[i-1][j]  >=  (a[i-1][j-w[i-1]]+v[i-1]) ? a[i-1][j] : (a[i-1][j-w[i-1]]+v[i-1]);
            }
        }

    }
    //for(int i=0;i<n+1;i++){
        //for(int j=0;j<cap+1;j++){
        //    printf("%d ",a[i][j]);
       // }
      //  printf("\n");
  //  }
    return a[n][cap];


}

int main(){
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter weight and value\n");
for(int i=0;i<n;i++){
    scanf("%d %d",&w[i],&v[i]);
}
printf("Enter sack capacity\n");
scanf("%d",&cap);
printf("Max profit %d",sack());
return 0;
}
