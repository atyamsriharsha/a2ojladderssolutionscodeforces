#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int sum1=0,sum2=0 ;
	string text,pattern ;
	cin >> text >> pattern ;
	for(long long int i=0;i<pattern.length();i++)
	{
		sum1 +=(pattern[i]-'0')*pow(10,pattern.length()-i-1) ;
	}
	//cout << sum1 << "\n" ;
	for(long long int i=0;i<pattern.length();i++)
	{
		sum2+=(text[i]-'0')*pow(10,pattern.length()-i-1) ;
	}
	if(sum2==sum1)
	{
		cout << "string found at index from " << 0 << " " << pattern.length()  << "\n"; 
	}
	cout << sum2 << "\n" ;
	for(long long int i=1;i<text.length()-pattern.length();i++)
	{
		//cout << sum2 << " " << pow(10,pattern.length()-1) << " " <<  text[i-1]-'0' << " \n" ;
		sum2 = sum2 - pow(10,pattern.length()-1)*(text[i-1]-'0') ; 
		//cout << sum2 << "this is sum2 \n" ;
		sum2 = sum2*10 ;
		//cout << sum2 << "this is sum2 \n" ;
		sum2+= (text[i+pattern.length()-1]-'0') ;
		if(sum2==sum1)
		{
			cout << "string found at index from " << i << " " << i+pattern.length()  << "\n";
			break ;
		} 
	}
	return 0 ;
}