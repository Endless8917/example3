#include<iostream>
using namespace std;

int main(){
	int input,total=0,i=1;
	cin>>input;
	while(input){
		total=total+input%10*i;
		i=i*8;
		input=input/10;
	}
	cout<<total;	
	
} 
