#include<stdio.h>
int main(){
    int n,i,key,flag=0;
    printf("Enter the no.of elements in the list");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the list\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched in the lsit");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key=a[i]){
        flag = 1;
        break;
        }
    }
    if(flag == 1){
        printf("The element %d is present in the list",key);
    }
    else{
        printf("The element %d is not present in the list",key);
    }
    return 0;
}
