    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int low = 0;
        while(low < N)
        {
            if(A[low] != B[low])
            {
                return 0;
            }
            low++;
        }
        return 1;
    }
