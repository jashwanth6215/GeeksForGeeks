class myQueue {

  public:
    vector<int>v;
    int N;
    myQueue(int n) {
        // Define Data Structures
        N=n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(v.empty())
        {
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the queue is full
        if(v.size()==N)
        {
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(v.size()!=N)
        {
            v.push_back(x);
        }
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(!v.empty())
        {
             v.erase(v.begin());
        }
    }

    int getFront() {
        // Returns the front element of the queue.
        if(v.empty())
        {
            return -1;
        }
        return v[0];
    }

    int getRear() {
        // Return the last element of queue
        if(v.empty())
        {
            return -1;
        }
        return v.back();
    }
};