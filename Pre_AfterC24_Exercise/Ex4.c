#include <stdio.h>
void input_array(int array[], int length){
    for (int i = 0; i < length; i++){ 
        printf("arr[%d] = ",i);
        scanf("%d", &array[i]);
    }
}

void show_array(int array[], int length){
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

void average(int array[], int length){
    float sum = 0.0;
    for (int i = 0; i < length; i++){
        sum += array[i];
    }

    float avg = sum / length;
    printf("Gia tri trung binh: %f", avg);
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
        average(array, n);
    }
}