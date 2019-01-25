#include "timkiem.h"

void timkiem(List* x, int n){
	int t = 0;
	NODE *p = x->dau;
	if( p == NULL) cout<<"Danh sach rong!";
	while( p!= NULL){
		if( p->data.MSSV == n) { t++;
			cout<<setw(10)<<"MSSV"<<setw(30)<<"Ho va ten sinh vien"<<setw(15)<<"Lop"<<setw(30)<<"Ngay sinh"<<setw(10)<<"diem\n";
			cout<<"================================================================================================\n";
			cout<<setw(10)<<p->data.MSSV<<setw(30)<<p->data.Hoten<<setw(15)<<p->data.Lop<<setw(20)<<p->data.ngay<<"/"<<p->data.thang<<"/"<<p->data.nam<<setw(10)<<p->data.diem<<"\n";
			
		 	break;
				}
		else	p = p ->next;		
	}
	if( t == 0) cout<<" Khong co du lieu!";
	
	
};
