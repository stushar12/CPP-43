#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int p;
	cin>>p;
	while(p--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>arr[i];
	  }
	  
	  sort(arr,arr+n);
	  int i=1;
	  int count=1,result=0,flag=0;
	  while(i<n)
	  {
	      if(arr[i-1]==arr[i])
	      {
	       count++;
	      if(count>(n/2))
	      {
	      cout<<arr[i]<<endl;
	      flag=1;
	      }
	      }
	      else
	      count=1;
	      i++;
	      
	  }
	  if(flag==0)
	  cout<<"-1"<<endl;
	  
	}
}