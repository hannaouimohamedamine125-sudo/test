#include<iostream>
using namespace std;
void fillarray(int arr[], int &s){
	
	cout<<"Enter the number of the rows:  ";
	cin>>s;
	cout<<"Enter the items of the array: "<<endl;
	
	for(int i=0 ;i<s ;i++ ){
		
		cin>>arr[i];
	
	}	
}
void printarray (int arr[], int s)
{
	cout<<"the array :";
    for(int i=0 ;i<s ;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int sumarray(int arr[],int sum,int s ){
	
	
	cout<<"the sum of the items of the array :";
	  for(int i=0 ;i<s ;i++){
    	sum=sum+arr[i];
	}
	cout<<sum<<endl;
	return sum;
}
int minarray(int arr[],int s){
	
	int min=arr[0];
	cout<<"the minimum item of the array :";
	  for(int i=1 ;i<s ;i++){
    	if(arr[i]<min)
    	min=arr[i];
    	  
	}
	cout<<min<<endl;
	return min;
	 
}
int  maxarray(int arr[],int s){
	
	int max=arr[0];
	cout<<"the maximum item of the array :";
	  for(int i=1 ;i<s ;i++){
    	if(arr[i]>max)
    	max=arr[i];
    	
	}
	cout<<max;  
	return max;
}


int main(){
	
	int s;
	int arr[100];
	int sum=0;
	
	fillarray(arr, s);
	printarray(arr, s);
	sumarray(arr,sum,s);
	minarray(arr,s);
	maxarray(arr,s);
    cout<<"hello casablanca";
	cout<<"hello morocco";
    cout<<"testing git ignore";
return 0;}
