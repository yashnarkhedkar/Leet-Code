class NStack
{
    int* arr;
    int* top;
    int* next;
    int n, s;
    
    int freeSpot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        
        //Making array of size s
        arr = new int[s];
        //Making top array & next
        top = new int[n];
        
        for(int i = 0; i < n; i++){
            top[i] = -1;
        }
        
        next = new int[s];
        for(int i = 0; i < s; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
        
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freeSpot == -1){
            return false;
        }
        
        //Step 1 : index = freespot
        int index = freeSpot;
        
        //Step 2 : assign freespot
        freeSpot = next[index];
        
        //Step 3 : assign value to array index
        arr[index] = x;
        
        //Step 4 : assign next
        next[index] = top[m-1];
        
        //Step 5 : assign top
        top[m-1] = index;
       
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1){
            return -1;
        }
        
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;
        
        return arr[index];
    }
};
