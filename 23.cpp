#include<iostream>
using namespace std;
class Stack{
    public:
int st[50];

int top=-1;

void push(int element){

top++;
st[top]=element;
}


void pop(){
    if(top!=-1){
        top--;
    }
}
void display(){
for(int i=0;i<=top;i++){
    cout<<st[i]<<" ";
}}

};
int merst(Stack s1,Stack s2){
Stack s3;
while(s1.top!=-1&&s2.top!=-1)
{
    s3.top++;

if(s1.st[s1.top]<=s2.st[s2.top])
    {

        s3.st[s3.top]=s1.st[s1.top];
        s1.top--;
    }
    else{
       s3.st[s3.top]=s2.st[s2.top] ;
       s2.top--;


    }
}
while(s1.top!=-1){
        s3.top++;
        s3.st[s3.top]=s1.st[s1.top];
        s1.top--;

}
while(s2.top!=-1){
    s3.top++;
    s3.st[s3.top]=s2.st[s2.top];
    s2.top--;
}
s3.display();
}
int main(){
    Stack s1,s2;
    s1.push(50);
    s1.push(30);
    s1.push(10);
    s2.push(40);
    s2.push(20);
    merst(s1,s2);

    return 0;
}
