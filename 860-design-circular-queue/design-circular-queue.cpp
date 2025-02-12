class MyCircularQueue {
public:
    vector<int>cq;
    int front,rear,n;
    MyCircularQueue(int k) {
        cq.resize(k);
        front = -1;
        rear = -1;
        n = k;
    }

    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front = 0;
        }
        rear =(rear+1)%n;
        cq[rear]= value;
        return true; 
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else{
            if(front == rear){
                front = -1;
                rear = -1;
            }else{
                front = (front+1)%n;
            }
            return true; 
        }
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return cq[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return cq[rear];
        
    }
    
    bool isEmpty() {
        if(front ==-1 && rear ==-1){
            return true;
        }
        return false;
        
    }
    
    bool isFull() {
        if((rear+1)%n==front){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */