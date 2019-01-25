#include "nhapnode.h"
#include "nhapSV.h"
#include "Xuat.h"
#include "sapxep.h"
#include "sua.h"
#include "timkiem.h"
#include "PhanloaiSV.h"
#include "Xoa.h"
#include <iostream>

void menu();
int main(int argc, char** argv) {
	  system("color 5E");
      cout<<"\t\t\t\t************************************************\n";
      cout<<"\t\t\t\t*Chao mung den voi chuong trinh quan ly sinh vien*\n";
     	cout<<"\t\t\t\t************************************************\n";
     menu();
      
}
void menu(){
	List x;
	creatList(&x);
	int choice, chon;
	do{
	cout<<"\n\t\t\t  ________________________________________________________\n";
	cout<<"\t\t\t |                                                        |\n";
	cout<<"\t\t\t | 1. Nhap danh sach sinh vien                            |\n";
	cout<<"\t\t\t | 2. Xoa sinh vien theo MSSV                             |\n ";
	cout<<"\t\t\t | 3. Them sinh vien                                      |\n";
	cout<<"\t\t\t | 4. Sap xep danh sach sinh vien                         |\n";
	cout<<"\t\t\t | 5. Tim kiem thong tin sinh vien                        |\n";
	cout<<"\t\t\t | 6. Xem danh sach sinh vien                             |\n";
	cout<<"\t\t\t | 7. Phan loai sinh vien                                 |\n";
	cout<<"\t\t\t | 8. Sua sinh vien                                       |\n";
	cout<<"\t\t\t | 0. Thoat                                               |\n";
	cout<<"\t\t\t | ******************** Ban chon tu 0-8 ******************|\n";
	cout<<"\t\t\t |________________________________________________________|\n";
							
	

	cin>>choice;
	if( choice == 0){
	 	system("cls");
		exit(0);
		
		}
	switch(choice){
		
		         case 1:
							int n;
							cout<<"Nhap so sinh vien: ";
							cin>>n;
							for( int i = 1; i <= n; i++){
							cout<<"\nNhap thong tin sinh vien thu "<<i<<": ";
						 	NhapSV(&x);
							 }break;
					   case 2:
					   	Delete(&x);break;
				   	case 3:
				   		NhapSV(&x);
				   		break;
			   		case 4:
  
			   			  int chon;
			   			  do{
							  cout<<"\t\t\t\t1.Sap xep theo MSSV?\n ";
			   			  cout<<"\t\t\t\t2.Sap xep theo diem SV\n";
			   			  cout<<" \t\t\t\t***Ban chon 1-2?***\n";
			   			  cin>>chon;
			   			  switch(chon){
			   			  					case 1:
			   			  						sapxepMSSV(&x);xuat(&x);break;
		   			  						case 2:
		   			  							sapxepdiem(&x);xuat(&x);break;
	   			  							default:
	   			  								cout<<"\n Ban nhap sai";
							  						}
									}while(chon < 1|| chon > 2);
							  break;
			   			 
			   			
	   			
			   		
			   		case 5:
			   			int a;
			   			cout<<"Nhap MSSV cua sinh vien muon tim kiem:";
			   			cin>>a;
			   			timkiem(&x,a);
			   			break;
			   			
			   			
	   			
				   		
					  	case 6:
					  		xuat(&x);break;
				  		case 7:
				  			int lc;
				  			do {
			  			   cout<<"\t\t\t\t1.Xem hoc sinh dat loai gioi?\n ";
		   			   cout<<"\t\t\t\t2.Xem hoc sinh dat loai kha\n";
		   			   cout<<"\t\t\t\t3.Xem hoc sinh dat loai trung binh\n";
	   			      cout<<" \t\t\t\t***Ban chon 1-3?***\n";
	   			      cin>>lc;
  							switch(lc){
  								case 1:
	   			      			phanloaigioi(&x); break;
	   			      	case 2:
	   			      			phanloaikha(&x);break;
  			      			case 3:
      				  	 		   phanloaiTB(&x);break;
				   			default:cout<<" Ban nhap khong dung";
	   			    				 }
										  }while(lc < 1|| lc >3);
										  break;
					  case 8:
					  		 int b;
					  		 cout<<"Nhap MSSV ban muon sua?";
					  		 cin>>b;
					  		 timkiem(&x,b);
					  		 suaSV(&x,b);break;
					 
					  default: cout<<"ban nhap khong dung";
				  }
				  	}while(choice != 0);
				}
	

