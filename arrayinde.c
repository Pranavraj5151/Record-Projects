#include <stdio.h>
#include <conio.h>
void main(){
    #define MAX 100
    int i, pos, val, choice, size,arr[MAX]; 
    for(;;){
    printf("Enter the size of the array(max 100):");
    scanf("%d", &size);
    if (size > MAX || size <= 0) {
    printf("Invalid size. Please enter a number between 1 and %d.\n", MAX);
    continue;
     }
     break;
}
    printf("Enter %d elements\n", size);
    for (i = 0; i < size; i++){
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    do{
        printf("\n1.insert 2.Delete 3.Display 0.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        if (choice == 1){
            if(size>=MAX){
                printf("Cannot insert. Array is full.\n");
                continue;
            }
            printf("Enter the position:");
            scanf("%d", &pos);
            printf("Enter the value:");
            scanf("%d", &val);
            if (pos > size || pos < 0){
                printf("Invalid");
                continue;
            }
            for (i = size; i > pos; i--){
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            size++;
        }
        else if (choice == 2){
            if(size==0){
                printf("Array is empty. Nothing to delete.\n");
                continue;
            }
            printf("Enter the position of the element you want to delete: ");
            scanf("%d", &pos);
            if (pos >= size || pos < 0){
                printf("Invalid");
                continue;
            }
            for (i = pos; i < size - 1; i++){
                arr[i] = arr[i + 1];
            }
            size--;
        }
        else if (choice == 3){
            if(size==0){
                printf("Array is empty. Nothing to display.\n");
                continue;
            }
            printf("\nArray:[");
            for (i = 0; i < size; i++){
                printf(" %d", arr[i]);
            }
            printf("]\n");
        }
        else if (choice != 0) {
        printf("Invalid choice. Please enter 0, 1, 2, or 3.\n");
        }
        
    } while (choice != 0);
     printf("Exiting... Goodbye!\n");
    getch();
}
