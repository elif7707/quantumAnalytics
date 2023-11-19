//
//  main.c
//  arraysCode
//
//  Created by Elif Zeynep Çetinkaya on 1.11.2023.
//

#include <stdio.h>
void analyzeArray(int arr[]);
void PerformQuantumAnalytics(int arr[]);
int main(void) {
    
    int i, x;
    int arrSize[7];
    
    printf("Enter 7 quantum elements: ");

    for (i = 0; i < 7; i++) {
        scanf(" %d",&arrSize[i]);
    }
    
    printf("Enter the index of the Quantium element to be modified: ");
    scanf(" %d",&x);
    
    if(x >= 0 && x < 7){
        if(x % 2 == 0){
            if(arrSize[x] % 2 == 0){
                arrSize[x] *=  2;
            }
            else {
                arrSize[x] /= 2;
            }
            
            printf("Newly generated Quantium: ");
            
            // Print all elements in array one by one.
            for (i = 0; i < 7; i++){
                printf(" %d", arrSize[i]);
               
            }
            printf("\n");
        }

    }
    
    analyzeArray(arrSize);
    PerformQuantumAnalytics(arrSize);
  
    return 0;
}

void analyzeArray(int arr[]) {
    
    float sum=0;
    for (int i = 0; i < 7; i++){
        sum += arr[i];
    }
    float avg = sum / 7;
    
    printf("Average value of modified elements: %.2f\n",avg);
}
void PerformQuantumAnalytics(int arr[]){
    
    printf("Sorted elements: ");
    
    int i, j, temp;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Print all elements in array one by one.
    for (i = 0; i < 7; i++){
        printf(" %d", arr[i]);
   }
    
    // isPrime is 1 (true) by default, if the number is NOT prime
    // then isPrime will be set to 0 which is considered as false.
    int isPrime = 1;
    for (i = 2; i < arr[0]; i++) {
        if (arr[0] % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime) {
        printf("The first element in the sorted array is a prime number.");
    } else {
        printf("The first element in the sorted array is not a prime number.");
    }
    
    printf("\n");
    
}



    


