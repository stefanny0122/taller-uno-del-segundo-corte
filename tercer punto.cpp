#include <iostream>

using namespace std;

int main()
{
	int prms,nmr,cntdd,i,j,div;
	cout<<"ingrese la cantidad de números que desea saber si son o no primos:";
    cin>>cntdd;
	int nmrs_prms[cntdd];
	for(i=0;i<cntdd;i++){
       cout<<"ingrese un número:";cin>>nmr;
	  for(j=2;j<3;j++){
	  	div=nmr%j;
	  	if(div==0){
	  		cout<<"no es primo\n";
		  }
		  else{
				  cout<<"el número es primo\n";
	        }
     }
	
}

	    return 0;
}

