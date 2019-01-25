#include "nhapSV.h"
#include "nhapnode.h"
bool check(List* x, int t){
	bool flag = false;
	NODE* p= x->dau;
	if( p == NULL) return false;
	else{	
		for( p = x->dau; p!=NULL; p= p->next)
			  if (p->data.MSSV == t) {flag = true;break;}
	
	}return flag;
}

int NhapSV( List* x){
	int t = 0;
	NODE*p = x->cuoi;
	NODE*a = creatNode();
	if( p == NULL){
		Nhap(a);
		themdau(x,a);
	}
	else{
	while(t == 0){
		Nhap(a);
		  
		  		if( check(x,a->data.MSSV)){
					cout<<"MSSV da co trong danh sach!Ban nhap lai:";
					continue;}
			 	t++;}
				themcuoi(x,a);}
	  	
		return 0;
}

