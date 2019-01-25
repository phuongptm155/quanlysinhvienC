#include "PhanloaiSV.h"
void  phanloaigioi(List* l){
	
	NODE *p = l->dau;
	int t = 0;
	if( p == NULL) cout<<"Danh sach rong!";
	else{
		cout<<setw(10)<<"MSSV"<<setw(30)<<"Ho va ten sinh vien"<<setw(15)<<"Lop"<<setw(30)<<"Ngay sinh"<<setw(10)<<"diem\n";
		cout<<"================================================================================================\n";
	for(p = l->dau; p!=NULL; p=p->next){ 
			if(p->data.diem >= 8){
			t++;
				cout<<setw(10)<<p->data.MSSV<<setw(30)<<p->data.Hoten<<setw(15)<<p->data.Lop<<setw(20)<<p->data.ngay<<" "<<p->data.thang<<" "<<p->data.nam<<setw(10)<<p->data.diem<<"\n";
			}
	}
}
	if( t == 0) cout<<"Khong co sinh vien nao!";
};



void  phanloaikha(List* l){	
	NODE *p = l->dau;
	int t = 0;
	if( p == NULL ) cout<<"danh sach rong!";
	else{
		cout<<setw(10)<<"MSSV"<<setw(30)<<"Ho va ten sinh vien"<<setw(15)<<"Lop"<<setw(30)<<"Ngay sinh"<<setw(10)<<"diem\n";
		cout<<"================================================================================================\n";
	for(p = l->dau; p!= NULL; p = p->next){ 
		if(p->data.diem >= 6.5 && p->data.diem <8)
				{ t++;
					cout<<setw(10)<<p->data.MSSV<<setw(30)<<p->data.Hoten<<setw(15)<<p->data.Lop<<setw(20)<<p->data.ngay<<" "<<p->data.thang<<" "<<p->data.nam<<setw(10)<<p->data.diem<<"\n";
				}
	  }
 }
	if( t == 0) cout<<"Khong co sinh vien nao!";
	
};


void  phanloaiTB(List* l){
	NODE *p = l->dau;
	int t = 0;
	if( p == NULL) cout<<"Danh sach rong!";
	else{
			cout<<setw(10)<<"MSSV"<<setw(30)<<"Ho va ten sinh vien"<<setw(15)<<"Lop"<<setw(30)<<"Ngay sinh"<<setw(10)<<"diem\n";
			cout<<"================================================================================================\n";
	for(p=l->dau;p!=NULL; p = p->next){ 
 	if(p->data.diem < 6.5){
			t++;
			cout<<setw(10)<<p->data.MSSV<<setw(30)<<p->data.Hoten<<setw(15)<<p->data.Lop<<setw(20)<<p->data.ngay<<" "<<p->data.thang<<" "<<p->data.nam<<setw(10)<<p->data.diem<<"\n";
					}	
				}
	}
	if( t == 0) cout<<"Khong co sinh vien nao!";
};

