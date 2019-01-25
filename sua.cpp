#include "sua.h"
void suaSV(List *x,int n){
	
	NODE *p =x->dau;
	if(p == NULL) cout<<"Danh sach rong!";
	else{
		int t=0;
		
		for( p = x->dau;p!=NULL;p= p->next){
			if(p->data.MSSV==n){t++;
		
			char tg[35];
			char lp[10];
			int  d,m,y;
			float diem;
	
	
		fflush(stdin);
		cout<<"\nNhap ten sinh vien: ";
		gets(tg);
		strcpy(p->data.Hoten,tg);
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
			
		}while( (d < 1 || d > 31) || (m <1|| m>12) || (y<1990||y>2018));
		p->data.ngay = d;
		p->data.thang = m;
		p->data.nam = y;
		
		
		cout<<"Nhap lop sinh vien: ";
		gets(lp);
		strcpy(p->data.Lop,lp);
		fflush(stdin);
		
	
			do{
			cout<<"Nhap diem cua sinh vien: ";
			cin>>diem;
			fflush(stdin);
		}	while( diem < 0|| diem > 10);
			p->data.diem = diem;
				
				break;	
				}
		}
		if(t==0) cout<<"Khong co SV ton tai trong danh sach!";
		else cout<<"Du lieu da duoc sua!";
	}
}

