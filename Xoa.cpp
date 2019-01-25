#include "Xoa.h"
void Delete(List*x){ 
	  	int n;
	  	NODE  *t = new NODE;	
	  	NODE *p = new NODE;
	  	 
	  	cout<<"Nhap MSSV";
	  	cin>>n;
 	  	t= x->dau;
 	  	if( t == NULL) cout<<"danh sach rong!";
 	  	else{
					if( t -> data.MSSV == n){
		 	  	 	p = t->next;
		 	  	 	x->dau = p;
		 	  	 	delete t;
					 }
			 
		else{
  	  	while( t != NULL){
					if( t -> data.MSSV == n ) 	 break;
		  		 	p = t;
		  	  		t = t->next;
		  	  		}
  		if( t == NULL) cout<<" Khong ton tai sinh vien trong danh sach ";
  		else {
		  			NODE *q = new NODE;
		  			q= t->next;
		  			p->next = q;
		  			delete t;
		  }

		}
	 		}
		}
