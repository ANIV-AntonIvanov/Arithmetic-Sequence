#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
{
	int a,d,PR;
	int const n = 20;
	int arr[n];
	
	cout << "input a" << endl;
	cin >> a;
	cout << "input d" << endl;
	cin >> d;
	
	cout << "input numbers for progression" << endl;
	
	for(int i = 0; i < n;i++)
	{
		cin >> i;
		PR = a+(i-1)*d;
		cout <<"for i="<< i <<" "<< "Progression is= " << PR << endl;
	}
	
	
	system("pause");
	return 0;
}
