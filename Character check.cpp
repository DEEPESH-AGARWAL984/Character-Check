//WAP TO CHECK WHETHER THE CHARACTER IS AN ALPHABET OR NOT.

#include<iostream>
using namespace std;

int main(){
	
	char ch;
	cout<<"Enter the Character: ";
	cin>>ch;
	
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
		cout<<"It is an character.";
	}
	else{
		cout<<"It is not an character.";
	}
}
