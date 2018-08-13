
    for(int i=0;i<arr.size()/2+1;i++){
        if(k==0)
            break;
        //4 2 3 5 1  
            if(arr[i] != arr.size()-i){
                int t = arr[i];
                arr[i]=arr.size()-i;
                arr[inx[arr.size()-i]]=t;
            }
    }
    return arr;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n); vector<int> inx(n);
    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
        inx[arr_item]=i;
    }

    vector<int> result = largestPermutation(k, arr, inx);
    for (int i = 0; i < result.size(); i++) {
