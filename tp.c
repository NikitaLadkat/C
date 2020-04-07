	#include<stdio.h>
	void main()
	{

	int i,n,grt1,grt2,grt3;

	printf("Enter How Many Elements U Want");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
	grt1=arr[0];
	 printf("Array Elements Are\n");
	for(i=0;i<n;i++)
	{
	   if(arr[i]>grt1)
	    {
	    grt3=grt2;
	    grt2=grt1;
	    grt1=arr[i];
	    }
	else if(arr[i]>grt2  && arr[i]!=grt1)
		  grt2=arr[i];
	else if(arr[i]>grt3  && arr[i]!=grt2  && arr[i]!=grt1)
		  grt3=arr[i];


	}

	printf("Largest Number is=%d",grt3);

	}

