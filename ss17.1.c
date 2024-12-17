#include<stdio.h>
void nhapMang(int*arr,int size);
void inMang(int *arr,int size);
void lengArr(int size);
int tong(int*arr,int size);
int maxArr(int *arr,int size);
int main(){
	int choice, size=0;
	int arr[100] ;
    int max=arr[0];
	do{
	printf("\n******MENU******\n");
	printf("1.nhap so phan tu va tung phan tu trong mang\n");
	printf("2.hien thi so phan tu trong mang \n");
	printf("3.tinh do dai mang\n");
	printf("4.tinh tong cac phan tu trong mang\n");
	printf("5.hien thi phan tu lon nhat\n");
	printf("6.thoat\n");
	printf("hay chon chuc nang (1-6): ");
    scanf("%d",&choice);
    switch(choice){
    	case 1:
    	printf("moi ban nhap so luong phan tu trong mang : ");
    	scanf("%d", &size);
    		nhapMang( arr,size);
    		break;
    	case 2:
    		inMang( arr,size);
    		break;
    	case 3:
    		lengArr(size);
    		break;
    	case 4:
    		printf("tong cac phan tu trong mang la %d",tinhTong(arr,size));
    		break;
    	case 5:
    		printf("phan tu lon nhat trong mang la %d", maxArr(arr,size));
    		break;
    	case 6:
    		printf("thoat thanh cong");
    		return 0;
    		break;
        default:
            printf("du lieu khong hop le nhap lai!\n");
	    }				
	}while(choice!=6);
	return 0;
}

void    nhapMang(int *arr,int size){
	for(int i=0; i<size; i++){
	printf(" phan tu thu arr[%d] = ",i+1);
		scanf("%d", &arr[i]);
	   }
	}
	
	
void	inMang(int *arr,int size){
		for(int i = 0; i < size; i++){
		printf("phan tu thu %d la %d \n",i,*(arr+i));
	   }
	}
	lengArr(int *size){ 
		printf("Do dai cua mang la %d ", size);
	}
	
	
	
int tinhTong(int *arr,int *size){
	int sum = 0;
	for(int i=0;i<size;i++){
		sum += arr[i];
	}
	return sum;
}
int maxArr(int *arr,int size){
	int max = arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max= arr[i];
		}
	}
}
