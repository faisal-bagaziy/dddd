#include <iostream>
using namespace std;
int main(){
	 char  source, desination;
     int pers;
     
     cout<<"J-Jubail\nD-Dammam\nR-Riyadh"<<endl;
     cout<<"enter your source city"<<endl;
     cin>>source;
     
     cout<<"J-Jubail\nD-Dammam\nR-Riyadh"<<endl;
     cout<<"Enter your desiantion city"<<endl;
     cin>>desination;
     
     cout<<"enetr the number of persons whom will be travling"<<endl;
     cin>>pers;
     
     switch(source){
     	case'J':
     		if(desination=='R'){
			 cout<<"you have to pay "<<pers*150<<endl;
				}
     		else if(desination=='D'){
     		  	cout<<"you have to pay "<<pers*25<<endl;
				}
     		else if(desination=='J'){
     			cout<<"you have to pay "<<0<<endl;
			 }        
			 else;
			 break;
     	case'D':
     		if(desination=='R'){
			 cout<<"you have to pay "<<pers*100<<endl;
				}
     		else if(desination=='D'){
     		  	cout<<"you have to pay "<<0<<endl;
				}
     		else if(desination=='J'){
     			cout<<"you have to pay "<<pers*25<<endl;
			 }        
			 else;
			  break;
     	case'R':
     		if(desination=='R'){
			 cout<<"you have to pay "<<0<<endl;
				}
     		else if(desination=='D'){
     		  	cout<<"you have to pay "<<pers*100<<endl;
				}
     		else if(desination=='J'){
     			cout<<"you have to pay "<<pers*150<<endl;
			 }        
			 else;
			  break;
     	
     	
	 }
     
     
return 0;
}
 
