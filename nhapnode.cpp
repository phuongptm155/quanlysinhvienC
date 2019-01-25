#include "nhapnode.h"
#include<string.h>

// Khoi tao Node
NODE *creatNode(){
	NODE* x = new NODE;
	if( x == NULL)
	{
		cout<<" Bo nho khong du";
		return 0;
	}
	x->parent = NULL;
	x->next = NULL;
	return x;
}

// Khoi tao danh sach sinh vien
void creatList(ListSV *x){
	x->dau = NULL;
	x->cuoi = NULL;
}

// Nhap thong tin sinh vien
void Nhap(NODE* x){
	char tg[35];
	char lp[10];
	int a, d,m,y;
	float diem;

	cout<<"Nhap ma so (int) sinh vien: ";
	cin>>a;
	fflush(stdin);
	x->data.MSSV = a;

	
	
	cout<<"Nhap ten sinh vien: ";
	gets(tg);
	strcpy(x->data.Hoten,tg);
	fflush(stdin);
	
	
	do{
		cout<<"Nhap ngay,thang,nam sinh: ";
		cin>> d>>m>>y;
		fflush(stdin);
		while(true){
		if(cin.fail()) {
			cout<<"Ban nhap sai cach\n";
			cin.clear();
			_flushall();
			
			cout<<"Ban nhap lai:";
			}else break;
		}
	}while( (d < 1 || d > 31) || (m <1|| m>12) || (y<1990||y>2005));
	x->data.ngay = d;
	x->data.thang = m;
	x->data.nam = y;
	
	
	cout<<"Nhap lop sinh vien: ";
	gets(lp);
	strcpy(x->data.Lop,lp);
	fflush(stdin);
	

		do{
		cout<<"Nhap diem cua sinh vien: ";
		cin>>diem;
		fflush(stdin);
	}	while( diem < 0|| diem > 10);
	x->data.diem = diem;
	
}
void themdau(List *x, NODE *t){
	if(x->dau == NULL)
		x->dau = x->cuoi = t;
	else t->next = x->dau;	
		x->dau = t;
	}
void themcuoi(List* x, NODE* t){
	if(x->dau == NULL)
		x->dau = t;
	else x->cuoi->next = t;
		x->cuoi  = t;
}


