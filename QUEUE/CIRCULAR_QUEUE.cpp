class CircularQueue{
    int* arr;
    int front, rear, size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        //constructor
//         size=100001;
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //full check
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
//             cout<<"Q full";
            return false;
        }
        else if(front == -1){
            //first element insert
            front = rear = 0;
//             arr[rear] = value;
        }
        else if(rear == size-1 && front!=0){    //make it circular ass rear is at end
            rear = 0;
//             arr[rear] = value;
        }
        else{
            //normal cases
            rear++;
//             arr[rear] = value;
        }
        //pushing into queue
        arr[rear] = value;    //multiple times being used
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //check empty
        if(front==-1){
//             cout<<"Q empty";
            return -1;
        }
        
        //single element present
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            //start me aa jao
            front = rear = -1;
        }
        else if(front == size-1){    //front end pe => circular
        front = 0;    //to maintain cycle nature
        }
        else{
            //normal
            front++;
        }
        return ans;
    }
};
