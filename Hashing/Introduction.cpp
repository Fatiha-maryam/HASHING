#include<iostream>
using namespace std;
#define MAX 1000
bool hashtable[MAX + 1][2];
void insert(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			hashtable[arr[i]][0] = 1;
		}
		else
		{
			hashtable[abs(arr[i])][1] = 1;
		}
	}
}

bool search(int x)
{
	if (x > 0)
	{
		if (hashtable[x][0] == 1)                 
			return true;
		else
			return false;
	}
	else
	{
		x = abs(x);
		if (hashtable[x][1] == 1)
			return true;
		else
			return false;
	}
}

int main()
{
	int arr[] = {1,-4,5,6,9,-2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	insert(arr,n);


	int find = 5;
	if (search(find))
	{
		cout << "Number found " << endl;
	}
	else
	{
		cout << "Number not found " << endl;
	}
	return 0;

}
/*so basically whole code is about:
we are given with array containing positive and negative numbers.
no we want to access the numbers without iterating the whole array every time.
so  we used hash table. hash table is a 2D array in which we store positive number in [x][0] and
negative numbers are first converted to positive and then placed at [x][1] then 
we equal both values to 1 which means now number is present in hash table.
to search any number in hash table we will pass that number which is actually x index of hash table
and if number is positive the next index is 0 and if negative the next index is 1
and as we entered 1 to all present values indices so 1 will be present .*/