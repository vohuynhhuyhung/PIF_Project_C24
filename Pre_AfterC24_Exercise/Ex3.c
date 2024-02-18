#include <stdio.h>
void input_array(int array[], int length){
    for (int i = 0; i < length; i++){ 
        printf("arr[%d] = ",i);
        scanf("%d", &array[i]);
    }
}

void show_array(int array[], int length){
    int max = array[0];
    int min = array[0];
    for(int i = 0; i < length; i++){  
        printf("%d ",  array[i] );  
    }  
    printf("\n");
}

void array_address(int array[], int length){
    for(int i = 0; i < length; i++){
        printf("&arr[%d] = %x\n", i, &array[i]);
    }
}

void comparison(int array[], int length){
    int max = array[0];
    int min = array[0];
    for(int i = 0; i < length; i++){
            if(array[i] > max){
                max = array[i];
            }
        
            if(array[i] < min){
                min = array[i];
            }
        }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

int main(void){
    int n;
    printf("Nhap so phan tu n = ");
    scanf("%d", &n);
    if(n < 0){
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }
    if(n > 16){
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }

    printf("Khoi tao mang int arr[%d]\n",n);
    
    int array[n];
    printf("Nhap gia tri tung phan tu:\n");
    input_array(array, n);
     
    printf("arr[] = "); 
    show_array(array, n);

    printf("Dia chi cua tung phan tu: \n");
    array_address(array, n);

    if(n > 5){
        comparison(array, n);   
    }
}
