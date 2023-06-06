    #include <bits/stdc++.h>
    #define ll long long
    #include <string>
    #include <cstdlib>
    #include <map>
	#define SIZE 10

     
     
    using namespace std;
	//void bubbleSort(vector<int> a,const int);
 
    int main(){
    	

    	int n;
    	cin >> n;
    	int x,hired = 0,crimes=0;
    	for (int i = 0; i < n; i++)
    	{
    		cin >> x;
    		if(x>0){
    			hired +=x;
    		}

    		if(x<0){
    			if(hired!=0){
    				hired--;
    			}else{
    				crimes++;
    			}
    			
    			continue;
    		}
    		



    	}

    	cout << crimes << endl;
    	




    	return 0; 
    }
  