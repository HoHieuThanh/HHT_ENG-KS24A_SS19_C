#include <stdio.h>
typedef struct{
	int id;
    char name[50];
    int age;
    char phoneNumber[15];
}SinhVien;

SinhVien students[50]={
		{00,"Nguyen Van A",17,"0123456700"},
		{01,"Nguyen Van B",18,"0123456701"},
    	{02,"Nguyen Van C",19,"0123456702"},
    	{03,"Nguyen Van D",20,"0123456703"},
		{04,"Nguyen Van E",21,"0123456704"}
	};
int timSV(int id);
void xoaSV(int index);

int main() {
	int id, index;

    printf("\nDanh sach thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ma SV: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }
    
    printf("Nhap ID sinh vien can xoa");
    scanf("%d", &id);
    index=timSV(id);
    if(index==-1){
    	printf("Khong tim thay sinh vien co ID %d\n", id);
	}else{
		xoaSV(index);
		printf("\nDanh sach thong tin sinh vien sau khi sua:\n");
	    for (int i = 0; i < 5-1; i++) {
	        printf("Sinh vien %d:\n", i + 1);
	        printf("Ma SV: %d\n", students[i].id);
	        printf("Ten: %s\n", students[i].name);
	        printf("Tuoi: %d\n", students[i].age);
	        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
	    }
	}
	return 0;
}

int timSV(int id) {
    for (int i = 0; i < 5; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

void xoaSV(int index){
	for (int i=0; i<5; i++){
		if(students[i].id == index){
			for(int j=index; j<5-1; j++){
				students[j]=students[j+1];
			}
		}
	}
}