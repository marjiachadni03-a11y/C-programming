#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};

    int n=sizeof(a)/sizeof(a[0]);
    int s=0;
    int e=n-1;
    int val,found=0;

    printf("Enter the value to search");
    scanf("%d",&val);

    while(s<=e){

        int mid=(s+e)/2;
        if(val>a[mid]){
            s=mid+1;
        }
        else if(val<a[mid]){
            e=mid-1;
        }
        else if(val=a[mid]){

            printf("value %d is found at index %d\n",val,mid);
            found=1;
            break;
        }
    }
    if(!found){
        printf("Value not found in the array.\n");
    }

}
