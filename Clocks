// My solution of https://www.e-olymp.com/en/problems/111

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	int s=0,k=0,p=0;
	bool stop=false;
	for (int i=h1; i<=23; i++)
    {
		int _min=0;
		if(k==0)
		{
			_min=m1;
			if(m1==0)
			{
				if(i==0) s=s+12;
                else
                {
					if(i>12) s=s+i-12;
					else s=s+i;
				}
			}
		}
        else _min=0;
		if(p!=0)
        {
			if (i>12) s=s+i-12;
			else s=s+i;
		}
		p++; k++;
		for (int j=_min; j<=59; j++)
		{
			if(j==30) s++;
			if(i==h2&&j==m2)
			{
				stop=true;
				break;
			}
		}
		if(stop)
		{
			cout<<s<<endl;
			return 0;
		}
	}
	cout<<s<<endl;
}
