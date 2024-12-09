#include <stdio.h>
void timSoLonNhat(int arr[], int size) {
    int max = arr[0]; 
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    printf("phan tu lon nhat trong mang la \n%d",max);
}
int main() {
    int n,i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Nhap cac phan tu cho mang:\n");
    for ( i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    timSoLonNhat(arr, n);   
    return 0;
}


	
	
