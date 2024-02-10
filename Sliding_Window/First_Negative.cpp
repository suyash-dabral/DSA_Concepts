
// First negative integer in every window of size k








vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int k) {
    int i=0,j=0;
    vector<long long>res;
    vector<long long>cnt;
    while(j<N){
        if(A[j]<0){
            cnt.push_back(A[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(cnt.empty()){
                res.push_back(0);
            }
            else{
                res.push_back(cnt[0]);
                if(A[i]==cnt[0]){
                    cnt.erase(cnt.begin());
                }
            }
            
            
            
            i++;
            j++;
            
        }
        
    }
    return res;
    
    
 }