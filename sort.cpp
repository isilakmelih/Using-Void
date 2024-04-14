#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sorta(int* a, int b)
{
	bool done=false;

	while(!done)
	{
		done = true;
		for(int i = 0; i < b-1; i++)
			if(a[i]>a[i+1]) swap(a[i], a[i+1]);


		for(int i = 0; i < b-1; i++)
			if(a[i]>a[i+1]) {done = false; break;}
			
	}
}



void sortd(int* a, int b)
{
	bool done=false;

	while(!done)
	{
		done = true;
		for(int i = 0; i < b-1; i++)
			if(a[i]<a[i+1]) swap(a[i], a[i+1]);


		for(int i = 0; i < b-1; i++)
			if(a[i]<a[i+1]) {done = false; break;}
			
	}
}


int main(){

	int a[4]={3, 2, 1, 5};
	sorta(a, 4);
	for (int i  = 0; i < 4; i++) cout << a[i] << endl;
	cout << "------"<<endl;
	sortd(a, 4);
	for (int i  = 0; i < 4; i++) cout << a[i] << endl;
}
