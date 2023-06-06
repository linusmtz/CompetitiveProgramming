	#include <bits/stdc++.h>
	#define ll long long
	#include <string>
	#include <cstdlib>
	#include <map>
	#define SIZE 10

	 
	 
	using namespace std;
	//void bubbleSort(vector<int> a,const int);

	int main(){
		
		int n,m;

		cin >> n>>m;
		std::vector<int> v;
		int xd=-1,index=-1;
		for (int i = 2; i <= 50; i++)
		{
			if(i!=2 && i!=3 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
				v.push_back(i);
				index++;

			}
			if(i==2 ||i==3||i==5||i==7){
				v.push_back(i);
				index++;	
			}
			if(n==i){
				xd=index;

			}
		}

		if(v[xd+1]==m){
			cout <<"YES"<<endl;
		}else{
			cout << "NO"<< endl;
		}
		
		



		return 0; 
	}
