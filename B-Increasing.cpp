#include <bits/stdc++.h>
#define ll long long
#include <string>
#include <cstdlib>
//#include <map>



using namespace std;


int main(){

	int casos;
	cin >> casos;



	while(casos--){
		int n;

		cin >>n;

		vector <int> vectorr(n);

		for (int i = 0; i < n; i++){
			cin >> vectorr[i];
		}
		sort(vectorr.begin(),vectorr.end());
		
		int contador = 1;

		for (int i = 1; i < n; i++){
			if(vectorr[i-1] < vectorr[i]){
				contador++;
			}
		}
		//cout << contador << endl;
		if(contador == n){
			cout << "YES"<< endl;	
		}else{
			cout << "NO"<<endl;

		}
		

		

	}


	return 0;
}
