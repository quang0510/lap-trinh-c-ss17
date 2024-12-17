#include<stdio.h>
#include<string.h>
void nhapChuoi(char *str, int size);
void lengStr(char *str);
void textStr(char *str);
void numberStr(char *str);
void specialStr(char *str);
int main(){
	char str[100];
	int  choice;
	do{
	printf("\n******MENU******\n");
	printf("1.nhap so phan tu va tung phan tu trong chuoi\n");
	printf("2.hien thi so phan tu trong chuoi \n");
	printf("3.tinh cac phan tu la chu cai trong chuoi\n");
	printf("4.tinh cac phan tu la so trong chuoi \n");
	printf("5.tinh cac phan tu la ki tu dac biet trong chuoi\n");
	printf("6.thoat\n");
	printf("hay chon chuc nang (1-6): ");
    scanf("%d",&choice);
    getchar();
    switch(choice){
    	case 1:
    		nhapChuoi( str,100);
    		break;
    	case 2:
    	    lengStr( str);
    		break;
    	case 3:
            textStr( str);
    		break;
    	case 4:
    	    numberStr( str);
    		break;
    	case 5:
    		speciaStr( str);
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
void nhapChuoi(char *str, int size) {
    printf("Nhap chuoi str < 100: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; 
}
void lengStr(char *str) {
    int length = strlen(str);
    printf("So phan tu trong chuoi: %d\n", length);
}

void textStr(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("So phan tu la chu cai: %d\n", count);
}

void numberStr(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    printf("So phan tu la so: %d\n", count);
}

void speciaStr(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && !isspace(str[i])) {
            count++;
        }
    }
    printf("So phan tu la ki tu dac biet: %d\n", count);
}
	

