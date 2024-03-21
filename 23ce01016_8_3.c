#include<stdio.h>
void reverse(int arr[],int size)  {
    int *ptr=arr;
    
    for(int i=0;i<size/2;i++)
    {
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+(size-i-1));
        *(ptr+(size-i-1))=temp;
    }

    printf("{\t");
    for(int i=0;i<size;i++)
        printf("%d\t",arr[i]);
    printf("}");
    
}
int main() {
    int arr[10],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    reverse(arr,n);
    return 0;

}