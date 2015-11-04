#include <stdio.h>
#define SIZE 5
int arr[5];
int i,j;
void selectionSort(){
    while(i<SIZE) scanf("%d",arr+i++);
    for(i=0;i<SIZE;i++) printf("\t%d",arr[i]);
    
	for(i=0;i<SIZE;i++){
        for(j=i+1;j<SIZE;j++){
            if(arr[i]>=arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}
int main(){
    selectionSort();
    for(i=0;i<SIZE;i++) printf("\t %d",arr[i]);
    return 0;
}
