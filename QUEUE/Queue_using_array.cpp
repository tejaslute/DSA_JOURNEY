//using arrays:-
class Queue {
    int *arr;
    int first;
    int rear;
    int size;
public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        first = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(first==rear){
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout<<"Queue is full";
        }
        else{
         arr[rear] = data;
         rear++;    
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(first==rear){
            return -1;
        } else{ 
           int ans = arr[first];
           arr[first] = -1;
           first++;
            if(first==rear){
                first=0;
                rear=0;
            }
          return ans;    
        }
    }

    int front() {
        // Implement the front() function
        if(rear==first){
            return -1;
        } else{
           return arr[first];    
        }
    }
};
