#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void intializing_array(int[],int);//prototype
void print_array(int[],int);//prototype
double max_mark(int[],int);//prototype
double min_mark(int[],int);//prototype
double avg_mark(int[],int);//prototype
void mark_90(int[],int);//prototype
void less_60(int[],int);

int main(){
	srand(time(NULL));
	
	int sizeA=7;
	int A[sizeA];

	
	intializing_array(A,sizeA);
	cout<<"\n\n-------your marks are-------"<<endl;
	print_array(A,sizeA);
   	double avg=avg_mark(A,sizeA);
    cout<<"\n\n-------avrage mark-------"<<endl;
	cout<<"         "<<avg;
	int max=max_mark(A,sizeA);
	cout<<"\n\n-------maximum mark-------"<<endl;
	cout<<"         "<<max;
	int min=min_mark(A,sizeA);
	cout<<"\n\n-------mininum mark-------"<<endl;
	cout<<"         "<<min;
	cout<<"\n\n-------did the student got 90 mark?-------"<<endl;
	mark_90(A,sizeA);
	cout<<"\n\n-------how many subject have you failed-------"<<endl;
	less_60(A,sizeA);
	return 0;
}
//////////////////////////////////////////////
void intializing_array(int AR[],int size){
	
	for(int i=0;i<size;i++){
		cout<<"enter your 7 marks ("<<i+1<<")\n";
		cin>>AR[i];
	
		while(AR[i]<0||AR[i]>100){
		cout<<"invalid. enter your mark \n ";
		cin>>AR[i];
		}
	
		}
	    
			
		}
	

///////////////////////////////////////////
void print_array(int temp[],int size){
	
		for(int i=0;i<size;i++){
		cout<<temp[i]<<"  ";		
		}
	
}
///////////////////////////////////////////
double max_mark(int mark[],int size){
		int	max=mark[0];
		for(int i=0;i<size;i++){
			if(max<mark[i]){
				max=mark[i];
				
			}
		}
	return max;
}
////////////////////////////////////////////////
double min_mark(int mark[],int size){
		int	min=mark[0];
		for(int i=0;i<size;i++){
			if(min>mark[i]){
				min=mark[i];
				
			}
		}
	return min;
}
/////////////////////////////////
double avg_mark(int mark[],int size){
	int sum=0;
	double avg=0;
	for(int i=0;i<size;i++){
		sum=sum+ mark[i];
	}
	
	avg=sum/7;
	return avg;
}
/////////////////////////////////
void mark_90(int mark[],int size){
	int key=90;
	for(int i=0;i<size;i++){
		if(key==mark[i]){
			cout<<"                    YES!";
			break;
		}
		
	
	}
	
	
}
//////////////////////////////////////////
void less_60(int mark[],int size){
	int key=60;
	int sum=0;
	for(int i=0;i<size;i++){
		if(key>mark[i]){
			sum=sum+1;
		}
		
		
	}
	cout<<"               "<<sum;
}
