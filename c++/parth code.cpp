#include <bits/stdc++.h>
using namespace std;
vector<int> Rearrangement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> posi , negi;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            posi.push_back(arr[i]);
        }else{
            negi.push_back(arr[i]);
        }
    }
    if(posi.size() > negi.size()){
        for(int i = 0 ; i<negi.size() ; i++){
            arr[2*i] = posi[i];
            arr[2*i+1] = negi[i];
        }
        int index = negi.size()*2;
        for(int i = negi.size(); i<posi.size() ; i++){
            arr[index] = posi[i];
            index++;
        }
    }
    else{
        for (int i = 0; i < posi.size(); i++)
        {
            arr[2 * i] = posi[i];
            arr[2 * i + 1] = negi[i];
        }
        int index = posi.size() * 2;
        for (int i = posi.size(); i < negi.size(); i++)
        {
            arr[index] = negi[i];
            index++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr{3, 1, -2, -5, 2, -4 , 2 , 1};
    Rearrangement(arr);
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}