#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void intializing_array(int[],int);//prototype
void print_array(int[],int);//prototype
double avg_income(int[],int);//prototype
double max_income(int[],int);
int main(){
	srand(time(NULL));
	int sizeA=12;
	int A[sizeA];
	
	intializing_array(A,sizeA);
	cout<<"\n\n-------your  income is -------"<<endl;
	print_array(A,sizeA);
	//////////////
	double avg=avg_income(A,sizeA);
	cout<<"\n\n-------your avrage income is -------"<<endl;
	cout<<"             "<<avg;
	////////////

	int	inmax=max_income(A,sizeA);
    cout<<"\n\n-------your maximum income was in-------"<<endl;
	cout<<"             "<<inmax;
	/////////////////////////
	
}
////////////////////////////
void intializing_array(int AR[],int size){
	
	for(int i=0;i<size;i++){
		AR[i]=rand()%50000+1000;
	
		}
	    
			
	}
//////////////////////////////////////////
void print_array(int temp[],int size){
	
		for(int i=0;i<size;i++){
		cout<<temp[i]<<"  ";		
		}
	
}
///////////////////////////////////////
double avg_income(int inc[],int size){
int	sum=0;
double	avg=0;
	for(int i=0;i<size;i++){
		sum=sum+inc[i];
		
	}
	
	avg=sum/12;
	return avg;	
	
}
///////////////////////////////////
double max_income(int inc[],int size){
int	max=inc[0];
int inmax=0;
	for(int i=0;i<size;i++){
		if(max<inc[i]){
		max=inc[i];
		inmax=i;
		
		
		}
	}
	return inmax+1;
}
	
