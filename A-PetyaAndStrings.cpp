#include <bits/stdc++.h>
#define ll long long
#include <string>
#include <cstdlib>
#include <map>



using namespace std;


int main(){

	string word,word2;
	int cont=0;
	//string abecedario="abcdefghijklmnopqrstuvwxyz";
	//int posicion=0, posicion2 = 0;

	cin >> word >> word2;

	for (int i = 0; i < word.length(); i++){
		if(tolower(word[i])>tolower(word2[i])){
			cout << "1"<<endl;
			break;
			/*
			for (int j = 0; j < 27; j++){

				if(tolower(word[i])==abecedario[j]){
					posicion = j;
					cout << "palabraPrimera" << i << endl;
				}

				if(tolower(word2[i])==abecedario[j]){
					posicion2 = j;
					cout << "palabraSegunda" << i << endl;
				}

				if(posicion!=0 && posicion2!=0){
					break;
				}

				*/



		}else if(tolower(word[i])<tolower(word2[i])){
			cout << "-1" <<endl;
			break;
		}else if(tolower(word[i])==tolower(word2[i])){
			cont++;
		}

	}
	/*
	string newword,newword2;
	for(int i=0;i<word.length();i++){
		newword[i] +=tolower(word[i]);
		newword2[i] +=tolower(word2[i]);
		
	}
	cout<<newword<<endl;
	cout<<newword2<<endl;
*/
	//cout << cont << endl;
	if(cont==word.length()){
		cout<<"0"<<endl;
	}

	/*
	cout << posicion << endl;
	cout << posicion2 << endl;
	if(posicion <posicion2){
		cout << "-1";
	}else if(posicion > posicion2){
		
	}else{
		cout << "0";
	}
	*/


    return 0;


}

