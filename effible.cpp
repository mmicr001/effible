#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<string> words;

bool isWord(string s){
	for(int i=0; i<words.size();i++){
		if (s == words[i])
			return true;
	} 
	return false;
}

bool effible(string s){
	for (int i=0; i<s.size(); i++){
		string temp1, temp2 ;
		temp1 = temp2 = s;
		temp1.erase(i,1);
		cout << "-----------------------------------------\n";
		cout << "Checking : 		" << s << endl;
		cout << "removing char : " << i  << "	"<< temp2.replace(i,1,"_") <<endl;
		if (s.size()==1  && isWord(s)){
			cout << "**************\n";
			return true;
		}
		else{
			if (isWord(temp1) && effible(temp1)){
				cout << "temp1 = " << temp1 << endl;
				return true;
			}
		}
	}
	return false;
}

int main(){

	words.push_back("string");
	words.push_back("sting");
	words.push_back("sing");
	words.push_back("sin");
	words.push_back("in");
	words.push_back("i");

/*
	string n;
	n = "abcdefghij";
	cout << n << endl;
	cout << n.erase(0,1)<<endl;
*/
	effible("string");

}

