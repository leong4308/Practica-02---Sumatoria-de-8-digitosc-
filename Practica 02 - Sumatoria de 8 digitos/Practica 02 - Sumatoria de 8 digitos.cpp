#include <iostream> 
using namespace std; 
const int NUM = 8; 
int main()

{

int nums[NUM];
int total = 0;
for (int i = 0; i < NUM; i++)


{
	 cout << "Por favor, introduzca el numero";
	 cin >> nums[i];
	 total += nums[i];

       }
	cout << "El total de numeros es" << total << endl; 
	system("pause");
	return 0;

}