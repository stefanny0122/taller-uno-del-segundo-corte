#include <iostream>

using namespace std;

int main()
{
	int usrs,i,j,kw,h;
	cout<<"ingrese su cantidad de clientes:"; cin>>usrs;
	int lst_usrs[usrs];	
	int lctrs[usrs];
	for(h=0;h<usrs;h++){
	for (i=0;i<=h;i++){
		cout<<"ingrese el número del usuario:"; cin>>lst_usrs[i];
        cout<<"ingrese el valor del mes anterior de cada usuario:"; cin>>lctrs[i];	
	}
	int kw[usrs],vlr_pgr;
	for (j=0;j<=h;j++){
		cout<<"ingrese los kw gastados por el usuario:"; cin>>kw[j];
		if(kw[j]<200){
			vlr_pgr=kw[j]*1.364;
			cout<<"tendra que pagar es de:"<<vlr_pgr<<endl;
		}
		else{
		vlr_pgr=kw[j]*1.364;
			cout<<"tendra que pagar es de:"<<vlr_pgr<<endl;	
		}
	}
}
   return 0;
}	
