// bruteforce solution is to find all the set bits of each number till N: O(n*m) m is the number of bits
int countSetBits(int N)
{   int c=0;
 
    for(int j=1; j<=N;j++){
        int i = j;
        while(i!=0){
            if((i&1)==1) c++;
            i = i>>1;
        
        }
    }
    return c;
}

//optimal solution is to use formula and recursion

int maxPowOf2(int N){
    int x=0;
    while((1<<x)<=N){   // find largest power of two less than N
        x++;
    }
    return x-1;
}

int countSetBits(int N){   
    if(N==0){
        return 0;
    }
    int x = maxPowOf2(N);
    int btill2x = x*(1<<(x-1));
    int msb2xton = N-(1<<x)+1;
    int rest = N-(1<<x);
    int ans = btill2x+msb2xton+countSetBits(rest);

    return ans;
    
}
