#include <iostream>

using namespace std;

int main()
{
   int elmnts,prmd,sm,n,i,j;
   cout<<"diga el número de de elmentos que desea ingresar:\n"; cin>>n;
    sm=0;
int nmrs[100];
   for(j=0;j<n;j++){  
    cout<<"ingrese el elemento que desee:\n";cin>>nmrs[j];
   	sm=nmrs[j]+sm;
   }
   prmd=sm/n;
   
int myr;
   for(i=0;i<n;i++){
   	if(nmrs[i]>prmd){
   		myr=nmrs[i];
   		cout<<"el numero mayor al promedio es:"<<myr<<",sabiendo que el promedio es:"<<prmd<<"\n";
	   }
	else{
	}
   }
int mnr;
for(i=0;i<n;i++){
   	if(nmrs[i]<prmd){
   		mnr=nmrs[i];
   		cout<<"el numero menor al promedio es: "<<mnr<<",sabiendo que el promedio es:"<<prmd<<"\n";
	   }
	else{
	}
   }
    return 0;
}

