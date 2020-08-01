#include <iostream>
using namespace std;
int main()
{	
	int photoDimension;
	cin>>photoDimension;
	int numberOfPhotos;
	cin>>numberOfPhotos;
	int width[numberOfPhotos],height[numberOfPhotos];
 
	for (int i=0; i<numberOfPhotos; i++)
	{
		cin>>width[i]>>height[i];
	}
	for (int i=0; i<numberOfPhotos; i++)
	{
		if (width[i] < photoDimension || height[i] < photoDimension)
			cout<<"UPLOAD ANOTHER \n";
		else if (width[i]==height[i] && height[i]>=photoDimension)
			cout<<"ACCEPTED \n";
		else if (width[i] >=photoDimension && height[i] >=photoDimension)
			cout<<"CROP IT \n";
	}
}