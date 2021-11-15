// My solution of https://www.e-olymp.com/en/problems/838


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,x,y;
    char tmp;
	cin>>n;
	int arr[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>tmp;
			arr[i][j]=tmp-'0';
		}
	}
	for (int i=1; i<n; i++) 
        arr[i][0]+=arr[i-1][0];
	for (int j=1; j<n; j++) 
        arr[0][j]+=arr[0][j-1];
	for (int i=1; i<n; i++)
		for (int j=1; j<n; j++) 
            arr[i][j]+=min(arr[i-1][j],arr[i][j-1]);
	x=n-1,y=n-1;
	while (x!=0||y!=0){
		arr[x][y]=-1;
		if (x>0&&y>0){
			if (arr[x-1][y]<arr[x][y-1]) x--;
			else y--;
		}
		else if (x==0) y--;
		else if (y==0) x--;
	}
	arr[0][0]=-1;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (arr[i][j]==-1) cout<<"#";
			else cout<<".";
		}
		cout<<endl;
	}
}
