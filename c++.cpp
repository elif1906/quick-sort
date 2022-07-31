#include<iostream>
#include<ctime>
#include<cstdlib>
#include <stdlib.h>
using namespace std;


void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];  
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
     
        if (arr[j] < pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        
        int pi = partition(arr, low, high);  
   
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

void printArray(int arr[],int n){
	
     for(int i=0;i<n;i++){
     	cout<<arr[i]<<" "<<endl;
	 }
	 
}
void clrscr()
{
	system("cls");
}

int main(){
	
	int choice;
	int arr1[500],arr2[1000],arr3[5000],arr4[10000],arr5[25000];
	
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	int n3=sizeof(arr3)/sizeof(arr3[0]);
	int n4=sizeof(arr4)/sizeof(arr4[0]);
	int n5=sizeof(arr5)/sizeof(arr5[0]);
	
	
	
	cout<<"Enter a number from 1 to 5:";
	cin>>choice;
	
	clock_t start1=clock(),finish1;
	srand(time(0));
	
	if(choice==1){
		for(int i=0;i<500;i++){
			arr1[i]=rand();
		}
		
		quickSort(arr1,0,n1);
		printArray(arr1,n1);
		cout<<endl;
		finish1=clock();
		cout<<"First Time :"<<(float)(finish1-start1)/CLOCKS_PER_SEC<<"\tsize of 500"<<endl;
		
	}
	clock_t start2=clock(),finish2;
	srand(time(0));
	
	 if(choice==2){
		
		for(int i=0;i<1000;i++){
			arr2[i]=rand();
			
		}
		
		quickSort(arr2,0,n2);
		printArray(arr2,n2);
		finish2=clock();
		cout<<"Two Time :"<<(float)(finish2-start1)/CLOCKS_PER_SEC<<"\tsize of 1000"<<endl;
	}
	clock_t start3=clock(),finish3;
	srand(time(0));
	
	
	if(choice==3){
		for(int i=0;i<5000;i++){
			arr2[i]=rand();
			
		}
		
		quickSort(arr3,0,n3);
		printArray(arr3,n3);
	finish3=clock();
	cout<<"Tree Time :"<<(float)(finish3-start2)/CLOCKS_PER_SEC<<"\tsize of 5000"<<endl;
	}
	clock_t start4=clock(),finish4;
	srand(time(0));
	
	
	
	if(choice==4){
		for(int i=0;i<10000;i++){
			arr2[i]=rand();
			
		}
		
		quickSort(arr4,0,n4);
		printArray(arr4,n4);
	finish4=clock();
		cout<<"Four Time :"<<(float)(finish4-start3)/CLOCKS_PER_SEC<<"\tsize of 10000"<<endl;
	}
	
	
	clock_t start5=clock(),finish5;
	srand(time(0));
	
	if(choice==5){
		for(int i=0;i<25000;i++){
			arr2[i]=rand();
			
		}
		
		quickSort(arr5,0,n5);
		printArray(arr5,n5);
			
	    finish5=clock();
		cout<<"Five Time :"<<(float)(finish5-start4)/CLOCKS_PER_SEC<<"\tsize of 25000"<<endl;
	}

	
	
}
