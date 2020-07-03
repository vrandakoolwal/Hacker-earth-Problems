#include <iostream>
using namespace std;
int main()
{
	int numberOfTasks;
	cin>>numberOfTasks;
	int hours[numberOfTasks], minutes[numberOfTasks];
 
	int SH[numberOfTasks],SM[numberOfTasks],EH[numberOfTasks],EM[numberOfTasks];
	for (int i=0; i<numberOfTasks; i++)
		cin>>SH[i]>>SM[i]>>EH[i]>>EM[i];
	for (int i=0; i<numberOfTasks; i++)
	{
		hours[i]=EH[i]-SH[i]-1;
		minutes[i]=EM[i]+(60-SM[i]);
		
		if (minutes[i]>=60)
		{
			hours[i]++;
			minutes[i]=minutes[i]-60;
			cout<<hours[i]<<" "<<minutes[i]<<endl;
		}
		else 
			cout<<hours[i]<<" "<<minutes[i]<<endl;
	}
}