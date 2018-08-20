#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
/*
2 4 2 6 1 7 8 9 2 1
*/
long candies(int n, vector<int> a) {
    long ans;
    
    vector<int> b(n,1); vector<int> d(n,0) ;long c,idx=0;
    c=0;
    if(n==1) { return 1;} 
    if(n==2) { return (a[0] != a[1] ? 3:2);}
    ans=0;
    for(int i=1,j=n-2;i<n;i++,j--){
        
        if(a[i-1] == a[i]){
        
        }
        else if (a[i-1] < a[i]){
            
            b[i]=b[i-1]+1;
        }
        
        if (a[j] >  a[j+1]){
            
            b[j]=b[j+1]+1;
        }
        ans+=b[i];
    }
        for(auto it:b){cout<<it<<" ";} cout<<"\n";
        for(auto it:a){cout<<it<<" ";} cout<<"\n";
    
        for(auto it:d){cout<<it<<" ";} cout<<"\n";
    ans+=b[0];
    
    return ans;
}

int main()
{
    ofstream fout("out.txt");
    ifstream finn("C:\\Users\\jonks\\Documents\\spice works\\Rosemary\\candies\\inp.txt");

    int n;
    finn >> n;
    finn.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item; 
        finn >> arr_item;
        finn.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";
    fout.flush();
    fout.close();

    return 0;
}