#include<iostream>
using namespace std;

class Queue
{
public:
    int q[100],f=-1,r=-1,n;

    Queue(int s)
    {
        n=s;
    }

    int enqueue(int data)
    {
        if(f==(r+1)%n)
        {
            cout<<"over flow";
            return 0;
        }
        else if(f==-1)
            {
                f=r=0;
            }
            else
            {
                r=(r+1)%n;
            }

            q[r]=data;
    }

    int dequeue()
    {
        if(r==-1)
        {
            cout<<"queue is empty";
            return 0;
        }
        else if(f==r)
        {
            f=r=0;
        }
        else
        {
            f=(f+1)%n;

        }
        cout<<endl<<"element deleted succesfully"<<endl;
    }

    int display()
    {
        cout<<"displaying:";
        for(int i=f;i<=r;i++)
        {
            cout<<endl<<q[i];
        }
    }
};
int main()
{
    Queue q(3);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue (20);
    q.display();
    q.dequeue();
    q.display();
}


