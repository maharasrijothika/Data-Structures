#include <iostream>
using namespace std;

class stacks
{
public:
    int ele[50];
    int top=-1;


void push(int data)
{
    top++;
    ele[top]=data;
}

int pop()
{
    int popping=ele[top];
    top--;
    return popping;
}
int display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<endl<<ele[i];
    }
}
};

int merging(stacks s1,stacks s2)
{
    stacks s3;
    while(s1.top >= 0 && s2.top >= 0){
        if(s1.ele[s1.top] < s2.ele[s2.top])
        {
            s3.top++;
            s3.ele[s3.top]=s1.ele[s1.top];
            s1.top--;

        }
        else
        {
            s3.top++;
            s3.ele[s3.top]=s2.ele[s2.top];
            s2.top--;
        }
    }

    while(s1.top>=0)
    {
         s3.top++;
            s3.ele[s3.top]=s1.ele[s1.top];
            s1.top--;
    }

    while(s2.top>=0)
    {
            s3.top++;
            s3.ele[s3.top]=s2.ele[s2.top];
            s2.top--;

    }
    s3.display();
}

int main()
{
    stacks s1;
    stacks s2;


    s1.push(3);
    s1.push(1);

    s2.push(4);
    s2.push(2);

    merging(s1,s2);


}

