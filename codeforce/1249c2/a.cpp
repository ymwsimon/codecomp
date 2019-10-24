#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

vector<long long> threes;
const long long l=1000000000000000000;
vector<long long> list;
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int j=0;
        long long sum=1;
        while(j<40){
            threes.push_back(sum);
            // cout<<threes[threes.size()-1]<<" ";
            sum*=3;
            j++;
        }
        long long end=1;
        long long start=pow(2,30);
        
        sum=0;
        do{
            sum=0;
            
            bitset<64> a(start);
            for(int j=0;j<a.size()&&j<30;j++){
                sum+=a[j]*threes[j];
            }
            start/=2;
            
        }while(sum>n);
        cout<<start<<" "<<sum<<endl;
        
                sum=0;
        do{
            sum=0;
            
            bitset<64> a(end);
            for(int j=0;j<a.size()&&j<30;j++){
                sum+=a[j]*threes[j];
            }
            end*=2;
            
        }while(sum<n);
        cout<<end<<" "<<sum<<endl;
        // cout<<endl;
        // list.clear();
        // long long k=list.size()+1;
        // while(list.empty()||list[list.size()-1]<n){
            // bitset<64> a(k);
            // long long sum=0;
            // for(int m=0;m<a.size();m++)
                // sum+=a[m]*threes[m];
            // list.push_back(sum);
            // k++;
        // }
        // cout<<list[list.size()-1]<<endl;
    }
    
    return 0;
}