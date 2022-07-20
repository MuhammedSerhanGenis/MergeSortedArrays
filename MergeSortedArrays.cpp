#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void MergeSortedArrays(int array1[],int array2[],int sortedArrayLength,int length1,int length2);
void PrintArrays(int array1[],int array2[],int length1,int length2);

int main(){
	
	int array1[]={0,3,4,31,63,65};
	int array2[]={4,6,30,64};
	int length1= sizeof(array1)/sizeof(array1[0]);
	int length2= sizeof(array2)/sizeof(array2[0]);
	int sortedArrayLength=length1+length2;
    PrintArrays(array1,array2,length1,length2);
    cout<<endl;
	MergeSortedArrays(array1,array2,sortedArrayLength,length1,length2);
	

	
return 0;
	
}


void MergeSortedArrays(int array1[],int array2[],int sortedArrayLength,int length1,int length2){
	
	int sortedArray[sortedArrayLength-1];
	

		int arr1=0;
		int arr2=0;
	for(int i=0;i<sortedArrayLength;i++){                     
		
		
		
			if(array1[arr1]<=array2[arr2])
		{
		    
			sortedArray[i]=array1[arr1];
			
			
				arr1++;
				
		}
			
		else if(array1[arr1]>array2[arr2])
		{
			
			sortedArray[i]=array2[arr2];
			
			
				arr2++;	
			
		}
		
		if(arr1==length1||arr2==length2){
			if(array1[length1-1]>array2[length2-1]){
				sortedArray[sortedArrayLength-1]=array1[length1-1];
				break;
			}
			if(array1[length1-1]<array2[length2-1]){
				sortedArray[sortedArrayLength-1]=array2[length2-1];
				 break;
			}
			
		}
		
		
	}
    cout<<endl;
	cout<<"The merge of two sorted arrays is: ";
    for(int i=0;i<sortedArrayLength;i++){
		cout<<sortedArray[i];
		if(!(i==sortedArrayLength-1))
		{
			cout<<",";
		}
		
	}
	
}

void PrintArrays(int array1[],int array2[],int length1,int length2){
	

	cout <<"Array1:";
	for(int i=0;i<length1;i++){
		cout<<array1[i];
		if(!(i==length1-1))
		{
			cout<<",";
		}
		
	}
	cout<<endl;
	cout <<"Array2:";
		for(int i=0;i<length2;i++){
		cout<<array2[i];
			if(!(i==length2-1))
		{
			cout<<",";
		}
		
	}
	
	
}
