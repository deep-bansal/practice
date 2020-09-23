#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){

	for (int i = 1; i < n ; ++i)
	{
		int key = arr[i];
		int j = i-1;
		while(j>=0 and arr[j] > key ){

			arr[j+1] = arr[j];
			j=j-1;

		}
		arr[j+1] = key;

	}
}

void selectionSort(int arr[],int n){

	for (int i = 0; i < n-1; ++i)
	{
		int minidx =i;
		for (int j = i+1; j < n; ++j)
		{
			if(arr[j]< arr[minidx])	{
				minidx = j;
			}		
		}
		swap(arr[i],arr[minidx]);
	}
}

void subseq(string input,string output)
{
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }

    char ch = input[0];
    string ros  = input.substr(1);
    subseq(ros,output);
    subseq(ros,output + ch); 
}

void subseq2(char input[],char output[],int i,int j){

	if(input[i] == '\0'){
		output[j] = '\0';
	   
	   	cout<<output;
	   
	   cout<<endl;
	   return;
	}

    output[j] = input[i];
	subseq2(input,output,i+1,j+1);
	subseq2(input,output,i+1,j);
}

string comb[10] = {"+","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

void keypadComb(string input,string output,int &count){

	if(input.length() == 0){
		cout<<output<<endl;
		count++;
		return;
	}
	int num = input[0] - '0';

	string str2 = comb[num];
	string ros = input.substr(1);

	for (int i = 0; i < str2.length(); ++i)
	{
		char ch = str2[i];
		keypadComb(ros,output+ch,count);		

	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int count =0;
	keypadComb(str,"",count);
	cout<<count<<endl;
	return 0;
}