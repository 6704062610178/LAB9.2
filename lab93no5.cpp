#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string word;
	int sum;
	cin>>word;
	for(int i = 0;i<word.length();i++){
		if(isdigit(word[i])){
			sum += word[i] - '0';
		}
	}
	cout<<sum;
}
