#include<iostream>
#include<queue>
using namespace std;
class queue1{
    int front;
    int rear;
    int size;
    int q[];
    public:
    queue1(){
        front=-1;
        rear=-1;
        size=4;

    }
    void push(int x){
        if(rear+1==size){
            cout<<"invalid\n";

        }
        else{
            if(rear==-1)
            front=0;
        }
        q[++rear]=x;
    }
    int pop()
    {
        if(rear==front==-1){
            cout<<"empty-invalid\n";
        }
        else{
            int temp=q[front];
            if(front==rear){
                front=-1;
                rear=-1;
            }
            front++;
            return temp;
        }
        
    }

};

int main(){
    queue1 q;
    q.push(1);
    

return 0;
}