#include <iostream>
using namespace std;
int main()
{
	long long D, OC, OF, OD, CS, CB, CM, CD;
	cin>>D;
	cin>> OC>>OF>>OD;
	cin>>CS>>CB>>CM>>CD;
	long long OT, CT;
	OT= OC + (D-OF)*OD;
	CT= CB+ (D*CD) + D*CM/CS;
	if (OT>CT)
	{
		cout<< "Classic Taxi \n";
	}
	else if (OT<CT)
	{
		cout<<"Online Taxi \n";
	}
	else
	cout<<"Online Taxi \n";
}
