#include<stdio.h>
#include<math.h>
void addArray(int *array, int currentLength);
void evenNumber(int *array, int currentLength);
void primeNumber(int *array, int currentLength);
void reverseArray(int *array, int currentLength);
void ascendingSort(int *array, int currentLength);
void descendingSort(int *array, int currentLength);
void searchItem(int *array, int currentLength,int item);

int main(){
    int choice,currentLength,item;
    int array[100];
    do
    {
        printf("______________________________________________\n");
        printf("                Menu                    \n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("______________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu ban muon nhap : ");
            scanf("%d",&currentLength);
            addArray(array,currentLength);
            break;
        case 2:
            printf("Cac phan tu la so chan la : \n");
            evenNumber(array,currentLength);
            break;
        case 3:
            printf("Cac phan tu la so nguyen to trong mang : \n");
            primeNumber(array,currentLength);
            break;
        case 4:
            reverseArray(array,currentLength);
            break;
        case 5:
            printf("1, Tang dan\n");
            printf("2, Giam dan\n");
            printf("Nhap lua chon cua ban : ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                ascendingSort(array,currentLength);
                break;
            case 2:
                descendingSort(array,currentLength);
                break;
            default:
                printf("Khong hop le!!Nhap lai!!");
                break;
            }
            break;
        case 6:
            printf("Nhap phan tu ban muon tim : ");
            scanf("%d",&item);
            searchItem(array,currentLength,item);
            break;
        case 7:
            printf("Tam biet!!\n");
            break;
        default:
            printf("Khong hop le!! Nhap lai!!\n");
            break;
        }
    } while (choice != 7);
}

void addArray(int *array, int currentLength){
    for (int i = 0; i < currentLength; i++)
    {
        printf("Nhap array[%d] = ",i);
        scanf("%d",&array[i]);
    }
}

void evenNumber(int *array, int currentLength){
    int *ptrArray = array;
    for (int i = 0; i < currentLength; i++)
    {
        if (*(ptrArray+i) % 2 == 0)
        {
            printf("array[%d] = %d\n",i,*(ptrArray+i));
        }
    }
}

void primeNumber(int *array, int currentLength){
    int *ptrArray = array;
    int prime;
    for (int i = 0; i < currentLength; i++)
    {
        prime = 1;
        if (*(ptrArray+i) < 2)
        {
            prime = 0;
        }
        else{
            for (int j = 2; j <= sqrt(*(ptrArray+i)); j++)
            {
                if (*(ptrArray+i) % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime != 0)
        {
            printf("array[%d] = %d\n",i,*(ptrArray+i));
        }
    }
}

void reverseArray(int *array, int currentLength) {
    int *start = array;
    int *end = array + currentLength - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Mang hien tai :\n");
    for (int i = 0; i < currentLength; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}

void ascendingSort(int *array, int currentLength){
    int *ptrArray = array;
    for (int i = 0; i < currentLength; i++)
        {
            for (int j = 0; j < currentLength - i - 1; j++)
            {
                if (*(ptrArray + j) > *(ptrArray+j+1))
                    {
                        int temp = *(ptrArray+j);
                        *(ptrArray+j) = *(ptrArray+j+1);
                        *(ptrArray+j+1) = temp;
                    }
            }
        }
    printf("Mang hien tai : \n");
    for (int i = 0; i < currentLength; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}

void descendingSort(int *array, int currentLength){
    int *ptrArray = array;
    for (int i = 0; i < currentLength; i++)
        {
            for (int j = 0; j < currentLength - i - 1; j++)
            {
                if (*(ptrArray + j) < *(ptrArray+j+1))
                    {
                        int temp = *(ptrArray+j);
                        *(ptrArray+j) = *(ptrArray+j+1);
                        *(ptrArray+j+1) = temp;
                    }
            }
        }
    printf("Mang hien tai : \n");
    for (int i = 0; i < currentLength; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}

void searchItem(int *array, int currentLength,int item){
    int *ptrArray = array;
    int flag;
    for (int i = 0; i < currentLength; i++)
    {
        flag = 0;
        if (*(ptrArray+i) == item)
        {
            flag = 1;
        }
        else{
            flag = 0;
        }
        if (flag != 0)
        {
            printf("array[%d] = %d\n",i,*(ptrArray+i));
        }
    }
    if (flag == 0)
    {
        printf("Phan tu khong ton tai trong mang!\n");
    }
    
}
