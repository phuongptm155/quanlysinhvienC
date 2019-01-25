#include "Xuat.h"
void xuat(List* x){
	NODE *p;
	p= x->dau;
	if( p == NULL) cout<<"Danh sach rong";
	else{
	
 		 
		cout<<setw(10)<<"MSSV"<<setw(30)<<"Ho va ten sinh vien"<<setw(15)<<"Lop"<<setw(30)<<"Ngay sinh"<<setw(10)<<"Diem\n";
		cout<<"================================================================================================\n";
		
		while( p != NULL){
			cout<<setw(10)<<p->data.MSSV<<setw(30)<<p->data.Hoten<<setw(15)<<p->data.Lop<<setw(20)<<p->data.ngay<<"/"<<p->data.thang<<"/"<<p->data.nam<<setw(10)<<p->data.diem<<"\n";
			
			p = p->next;
			
		}}
}
