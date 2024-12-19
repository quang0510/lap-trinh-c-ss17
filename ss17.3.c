#include<stdio.h>
#include<string.h>

void nhapChuoi(char *str, int size);
void daoChuoi(char *str);
void lengStr(char *str);
void demSoTu(char *str);
void soSanhChuoi(char *str);
void floPrint(char *str);
int main(){
	char str[100];
	int  choice;
	do{
	printf("\n******MENU******\n");
	printf("1.nhap so phan tu va tung phan tu trong chuoi\n");
	printf("2.hien thi chuoi dao nguoc \n");
	printf("3.hien thi do dai chuoi");
	printf("4.dem so luong tu trong chuoi\n");
	printf("5.Nhap vao chuoi khac, so sanh chuoi voi chuoi ban dau (kp in ra ngan hon hoac dai hon chuoi ban dau)\n");
	printf("6.in hoa tat ca cac chu cai in hoa  trong chuoi\n");
	printf("7.thoat\n");
	printf("hay chon chuc nang (1-7): ");
    scanf("%d",&choice);
    switch(choice){
    	case 1:
    		nhapChuoi(str,100);
    		break;
    	case 2:
    	   daoChuoi(str);
    		break;
    	case 3:
           lengStr(str);
    		break;
    	case 4:
    	   demSoTu(str);
    		break;
    	case 5:
    		soSanhChuoi(str);
    		break;
    	case 6:
    		floPrint(str);
    	case 7:
    	    printf("ban da thoat chuong trinh");
    		return 0;
    		break;
        default:
            printf("du lieu khong hop le nhap lai!\n");
	    }				
	}while(choice!=7);
	return 0;
}
void nhapChuoi(char *str, int size) {
    printf("Nhap chuoi str < 100: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; 
}
void daoChuoi(char *str) {
    int length = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void lengStr(char *str) {
    int length = strlen(str);
    printf("So phan tu trong chuoi: %d\n", length);
}

void demSoTu(char *str) {
    int count = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    printf("So luong tu trong chuoi: %d\n", count);
}

void soSanhChuoi(char *str) {
    char str2[100];
    printf("Nhap chuoi khac de so sanh: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 

    if (strcmp(str, str2) == 0) {
        printf("Hai chuoi giong nhau.\n");
    } else if (strcmp(str, str2) < 0) {
        printf("Chuoi ban dau ngan hon chuoi moi.\n");
    } else {
        printf("Chuoi ban dau dai hon chuoi moi.\n");
    }
}

void floPrint(char *str) {
    printf("Chuoi sau khi chuyen hoa tat ca chu cai: ");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toupper(str[i]));
    }
    printf("\n");
}
