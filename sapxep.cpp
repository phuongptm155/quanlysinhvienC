#include "sapxep.h"

void sapxepdiem(List *l ){
	List l1, l2;
	NODE *tag, *p;
	if(l->dau == l->cuoi ) return;
	creatList(&l1); creatList(&l2);
	tag = l->dau;
	l->dau = l->dau->next; // cap nhat lai l->dau
	tag->next = NULL;
	while( l->dau!= NULL ){
			p = l->dau;
			l->dau = l->dau->next;
			p->next = NULL;
			if(p->data.diem <= tag->data.diem) themdau(&l1,p);
			else themdau(&l2,p);
	}
	sapxepdiem(&l1); 
	sapxepdiem(&l2);
			if(l1.dau != NULL ){ // l1 k rong
				l->dau = l1.dau; // lay head cua l1 gan cho head cua l;
				l1.cuoi->next = tag;
			} // l1 rong 
			else l->dau = tag;
			tag->next = l2.dau;
			if(l2.dau!= NULL ) l->cuoi = l2.cuoi;
			else l->cuoi = tag;
}


void sapxepMSSV(List* l){
	List l1, l2;
	NODE *tag, *p;
	if(l->dau == l->cuoi) return;
	creatList(&l1);
	creatList(&l2);
	tag = l->dau;
	l->dau = l->dau ->next;
	tag->next == NULL;
	while(l->dau!=NULL){
			p = l->dau;
			l->dau = l->dau->next;
			p->next = NULL;
			if(p->data.MSSV <= tag->data.MSSV) themdau(&l1,p);
			else themdau(&l2,p);
	}
	sapxepMSSV(&l1);
	sapxepMSSV(&l2);
	if(l1.dau !=NULL){
		l->dau=l1.dau;
		l1.cuoi->next = tag;
			}
	else l->dau =tag;
	tag->next =l2.dau;
	if(l2.dau!=NULL) l->cuoi = l2.cuoi;
					 else l->cuoi = tag;
	
}
