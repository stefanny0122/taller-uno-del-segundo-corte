#include <iostream>

using namespace std;

int main()
{
	int cntdd,i,j;
	cout<<"ingrese la cantidad de números desee:";
	cin>>cntdd;
int nmrs_entrs[cntdd];
	for(i=0;i<cntdd;i++){
		cout<<"ingrese un número:"; cin>>nmrs_entrs[i];
	}
int nmrs_prs[cntdd]; int nmr_imprs[cntdd];
for(j=0;j<cntdd;j++){
 if(nmrs_entrs[i]%2==0){
 	nmrs_prs[j]=nmrs_entrs[j]*nmrs_entrs[j];
	  cout<<"este valor es par:"<<nmrs_entrs[j]<<"\n";
	  cout<<"y sus resultados de potencias son:"<<nmrs_prs[j]<<"\n";
 }
 else{
 	nmr_imprs[j]=nmrs_entrs[j]*nmrs_entrs[j]*nmrs_entrs[j];
 	 cout<<"este valor es impar:"<<nmrs_entrs[j]<<"\n";
	 cout<<"y sus resultados de potencias son:"<<nmr_imprs[j]<<"\n";
 }
}

    return 0;
}
