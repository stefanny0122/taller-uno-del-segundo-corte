#include <iostream>

using namespace std;

int main()
{
	int prms,nmr,cntdd,i,j,div;
	cout<<"ingrese la cantidad de n�meros que desea saber si son o no primos:";
    cin>>cntdd;
	int nmrs_prms[cntdd];
	for(i=0;i<cntdd;i++){
       cout<<"ingrese un n�mero:";cin>>nmr;
	  for(j=2;j<3;j++){
	  	div=nmr%j;
	  	if(div==0){
	  		cout<<"no es primo\n";
		  }
		  else{
				  cout<<"el n�mero es primo\n";
	        }
     }
	
}

	    return 0;
}

