#include<stdio.h>
#define CAPACITY 10
main(){
    int ar[CAPACITY];
    printf("Enter elements in array:");
    for(int i=0;i<CAPACITY;i++){
        scanf("%d",&ar[i]);
    }
    printf("After insertion elements are:");
     for(int i=0;i<CAPACITY;i++){
        printf(" %d",ar[i]);
     }
    int low=0,high=CAPACITY-1,mid,key,f=1;
    printf("Enter element to find:");
    scanf("%d",&key);
    while(low<=high){
         mid=(low+high)/2;
         if(key>mid){
             low=mid+1;
         }
         else if(key==mid){
             printf("element is present at location %d",mid-1);
             f=0;
             break;
         }
         else
            high=mid-1;     
    }
    if(f==1)
      printf("element is not present");
return 0;
}