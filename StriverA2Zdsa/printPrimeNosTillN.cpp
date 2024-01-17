//solution 1: bruteforce

int countPrimes(int n){
        int count=0;
        map<int, bool> isPrime;

        for(int i=2; i<n;i++){
            int isPrime = true;
            for(int j=2; j<=sqrt(i); j++){
                if(i%j==0) isPrime = false;
            }
            if(isPrime) count++;
        }

        return count;
}


//solution 2: sieve of eratosthenes O(nloglogn)
int countPrimes(int n) {
        int count =0;
        vector<bool> sieve(n+1, true);
        sieve[0]=sieve[1]=false;
        //create sieve
        for(int i=2; i*i<=n; i++){
            if(sieve[i]){
                for(int j=i*i; j<=n; j+=i){
                    sieve[j] = false;
                }
            }    
        }
        for(int i=2; i<n; i++){
            if(sieve[i]) count++;
        }

        return count;
        
    }
