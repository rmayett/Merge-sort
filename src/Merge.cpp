#include "Merge.h"

Merge::Merge(){	
	MergeReg(arr);
}
std::array<int,10> Merge::MergeReg(std::array<int,10> arr){
	for (i = 0; i < arr.size() ; ++i){
		if (i<arr.size()/2){
			izq[i]=arr[i];
		}
		else{
			der[j]=arr[i];
			++j;
		}		
	}
	if (izq.size()>1){
		izq=MergeReg(izq);		
	}
	if (der.size()>1){
		der=MergeReg(der);		
	}

	std::array<int,10> Res;
	i=0,j=0;
	while(i<izq.size()&&j<der.size()){
		if (izq[i]<der[j]){
			Res[k]=izq[i];
			++i;
		}
		else{
			if (der[j]<izq[i]){
				Res[k]=der[j];
				++j;
			}
			else{
				Res[k]=izq[i];
				++k;
				Res[k]=der[j];
				++i;
				++j;
			}
		}
		++k;
	}
	if (i<izq.size()){
		while(i<izq.size()){
			Res[k]=izq[i];
			++i;
			++k;
		}
	}
	if (j<der.size()){
		while(j<der.size()){
			Res[k]=der[j];
			++j;
			++k;
		}
	}
}