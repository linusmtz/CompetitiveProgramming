#include <bits/stdc++.h>
#define ll long long
#include <string>
#include <cstdlib>
//#include <map>



using namespace std;


int main(){
	
	set<char> sett;
	string s;
	int n;
	cin >> n >> s;
	//toosmallword
	
	for (int i = 0; i < s.length() ; i++){
		int xd = tolower(s[i]);
		//(xd>=65 && xd<=90)||
		if(xd>=97 && xd<=122){
			sett.insert(xd);
			//cout << xd << endl;
		}

	}
	//cout << sett.size()<< "SIZEEEEEEEEEEEEEEEEE"<< endl;
	if(sett.size()==26){
		cout << "YES";
	}else{
		cout << "NO";
	}
	//qwertyuiopasdfghjklzxcvbnm
	//12345678912345678912345678

	return 0;
}

