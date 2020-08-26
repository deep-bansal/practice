#include<bits/stdc++.h>
using namespace std;


int powBetter(int a ,int b)
{
	if(b == 0)
	{
		return 1;
	}

	int smallresult = powBetter(a,b/2);

	int result = smallresult*smallresult;

	if(b&1)
	{
		result = a* result;
	}
	return result;
}

bool isSorted(int*arr,int n)
{
	if(n == 1)
	{
		return true;
	}

	if(arr[1] > arr[0] && isSorted(arr+1,n-1))
	{
		return true;
	}
	return false;
}

void addstar(string input,string output)
{
	if(input.length() == 0)
	{
		cout<<output<<endl;
		return;
	}

	if(input.length() >= 2 && input[0] == 'x' and input[1] == 'x')
	{
		output = output + "x*";
		string ros = input.substr(1);
		addstar(ros,output);
	}

	else{
		output = output + input[0];
		string ros = input.substr(1);
		addstar(ros,output);
	}
}

int countBinary(int n , string output)
{
	if(n == 0)
	{
		return 1;
	}

	int sum = 0;

	int len = output.length();

	if(output[len - 1] == '0')
	{
		sum  = countBinary(n-1,output + "0") + countBinary (n-1, output + "1");
	}

	else
	{
		sum = countBinary(n-1, output + "0");
	}

	return sum;
}

int multiply(int a,int b)
{	
	if(b >= 0)
	{
		if (b == 0)
	{
		return 0;
	}


	if(b == 1)
	{
		return a;
	}

	int result = 0;

	result =  a + multiply(a,b-1);
	return result;

	
	}

	else 
	{
		if (b == 0)
	{
		return 0;
	}


	if(b == 1)
	{
		return a;
	}

	int result = 0;

	result =  a + multiply(a,b+1);
	return result;

	}

	
}

int tilingProb(int n)
{
	if(n == 0)
	{
		return 1;
	}

	if(n < 0 )
	{
		return 0;
	}

	int count  = 0;
	count  = tilingProb (n-1) + tilingProb (n-2);

	return count;
}


string  num[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void convertToSpell(int n, vector<string> output)
{
	if(n == 0)
	{
		reverse(output.begin(), output.end());
		for (int i = 0; i < output.size() ; i++)
		{
			cout<<output[i]<<" ";			
		}
		return;
	}

	int r = n%10;

	output.push_back(num[r]);
	n = n/10;

	convertToSpell(n,output);
}

int main(int argc, char const *argv[])
{
	int a = 2,b = 6;

	cout<<powBetter(a,b)<<endl;

	int arr[] = {1,2,3,4,5,6,7};

	cout<<isSorted(arr,7);

	string s = "abcxxyyzxfxxxxh";

	addstar(s,"");

	int n;
	cin>>n;

	int result = countBinary(n-1,"0") + countBinary(n-1,"1");

	cout<<result<<endl;

	int a  = 7 , b = -1;
	int ans  = multiply(a,b);

	cout<<ans<<endl;

	int n;
	cin>>n;

	cout<<tilingProb(n)<<endl;

	int n;
	cin>>n;

	vector<string> v;
	convertToSpell(n,v);


	return 0;
}
