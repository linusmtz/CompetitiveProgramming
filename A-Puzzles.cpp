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
		cin >> n >> m;
		std::vector<int> v(m);
		for (int i = 0; i < m; i++)
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		int least = v[v.size()-1]-v[0];


		for (int i = 0; i <= m-n; i++)
		{
			
			if(v[i+n-1]-v[i]<least){
				least = v[i+n-1]-v[i]; 
			}

		}

		cout << least;


		return 0; 
	}
