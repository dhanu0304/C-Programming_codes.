#include <stdio.h>
int main() {
    int a[10],i,j,temp;
    printf("Enter unsorted integers:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

        for(i=0;i<5-1;i++) {
            for(j=0;j<5-i-1;j++) {
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Sorted Array=\n");
        for (i=0; i<5;i++)
        printf("%d ",a[i]);

          int l = 0, h = 5, mid, ele;

    printf("\nEnter the element to be searched:\n ");
    scanf("%d", &ele);

    while (l <= h) {
        mid = (l + h) / 2;

        if (a[mid] == ele) {
            printf("Element %d found at position %d\n", ele, mid + 1);
            return 0;
        }
        else if (ele < a[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    printf("Element %d not found in the array\n", ele);

    return 0;
}
