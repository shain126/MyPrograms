#include <stdio.h>
#define SIZE 5
int arr[5];
int i,j;
void bubbleSort(){
    while(i<SIZE) scanf("%d",arr+i++);
    for(i=0;i<SIZE;i++) printf("\t%d",arr[i]);
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE-i-1;j++){
            if(arr[j+1]>=arr[j]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}
int main(){
    bubbleSort();
    for(i=0;i<SIZE;i++) printf("\t%d",arr[i]);
    return 0;
}
