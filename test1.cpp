#include<iostream>
#include<cstring>
using namespace std;

//排序算法

void print_arry(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
}
//冒泡排序
void bubble_sort(int *a,int n)
{	
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				 temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
			}
		}
	}

}
//选择排序
void check_sort(int *a,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i ;j<n-1;j++)
		{
			if(a[i]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[i];
				a[i]=temp;
			}
		}
	}

}

int main()
{
	int arr[]={20,9,3,7,5,2,16,19,13,11};
	bubble_sort(arr,10);
	print_arry(arr,10);
	cout<<"haha"<<endl;
	cout<<"lize"<<endl;
	cout<<"11111111111111111111"<<endl;
	return 0;
}
