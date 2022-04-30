#include <iostream>

using namespace std;

int main()
{
	int nmr_1[100], nmr_2[100],prdct[100],cntdd,i;
	 cout<<"ingrese la cantidad de números que va ha escribir"; cin>>cntdd;
	 for(i=0;i<cntdd;i++){
	 	cout<<"ingrese un numero1:"; cin>>nmr_1[i];
	 	cout<<"ingrese un numero2:"; cin>>nmr_2[i];
	 	prdct[i]=nmr_1[i]*nmr_2[i];
	 }
	  for(i=0;i<cntdd;i++){
	  	cout<<"el primer numero en la posicion ["<<i<<"] es:"<<nmr_1[i]<<endl;
	  	cout<<"el segundo numero en la posicion ["<<i<<"] es:"<<nmr_2[i]<<endl;
	  	cout<< "el producto de de estos dos números es:"<<prdct[i]<<endl;
	    }
	    return 0;
}

