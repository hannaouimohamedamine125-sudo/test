#include<iostream>
using namespace std;

void fillarray( int arr[100][100],int &size){

	
	cout<<"Enter size of the matrix : ";
	cin>>size;


	   for(int i=0;i<size;i++){
	   	
	   	for(int j=0;j<size;j++){
		   
	   	
	   	cout<<"Enter the item of matrix["<<i<<"]["<<j<<"] : ";
	   	 cin>>arr[i][j];
	
	      }
	   }
	   cout<<endl;
}
void uppertriangular(int arr[100][100],int size){
	
	  cout<<"the upper triangular of the matrix : "<<endl;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
			if(j >= i)
			cout<<arr[i][j]<<"\t";
			
			else
			
			cout<<"\t";
			
		}
		cout<<endl;
	}
}
void lowertriangular(int arr[100][100],int size){
	
	  cout<<"the lower triangular of the matrix : "<<endl;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
			if(j <= i)
			cout<<arr[i][j]<<"\t";
			
			else
			
			cout<<"\t";
			
		}
		cout<<endl;
	}
}
void diagonal(int arr[100][100],int size){
	         
	    cout<<"the diagonal of the matrix : "<<endl;
	    for(int i=0;i<size;i++){
	    	for(int j=0;j<size;j++){
	    		if(j == i)
	    		cout<<arr[i][j]<<"\t";
	    		else
	    		cout<<"\t";
			}
			cout<<endl;
		}
}

int main ()
{
	int arr[100][100];
	int size;
	
	fillarray(arr,size);
	uppertriangular(arr,size);
	lowertriangular(arr,size);
	diagonal(arr,size);

return 0;}
