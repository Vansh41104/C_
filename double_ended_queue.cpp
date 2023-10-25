#include <iostream>
using namespace std;
#define max 10
int queue[max];
int f=-1, r=-1;

// Basic operation of deque.
void front_enqueue(int);
void back_enqueue(int);
int front_dequeue();
int back_dequeue();
void display();


//Restriction cases of deque.
void f_inp_res();
void f_out_res();
void r_inp_res();
void r_out_res();
void g_queue();



int main(){
    int n;
    do
    {   
        cout<<"Enter 1 for front input restricted queue :"<<endl;
        cout<<"Enter 2 for front output restricted queue :"<<endl;
        cout<<"Enter 3 for rear input restricted queue  :"<<endl;
        cout<<"Enter 4 for rear output restricted queue  :"<<endl;
        cout<<"Enter 5 for general double-ended queue :"<<endl;
        cout<<"Enter -1 for exit :"<<endl;
        cout<<"Enter here : ";
        cin>>n;
        switch (n)
        {
        case 1:
            f_inp_res();
            break;
        case 2:
            f_out_res();
            break;
        case 3:
            r_inp_res();
            break;
        case 4:
            r_out_res();
            break;
        case 5:
            g_queue();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
    
    return 0;
}


// Basic operation of deque.
void front_enqueue(int x){
    if((f==0 && r==max-1) || r+1==f){
        cout<<"Overflow"<<endl;
    }
    else{
        if(r==-1){
            r++;
            queue[++f]=x;
        }
        else{
            if(f==0)
                f=max-1;
            else
                f--;
            queue[f]=x;
        }
    }

}

void back_enqueue(int x){
    if((f==0 && r==max-1) || r+1==f){
        cout<<"Overflow"<<endl;
    }
    else{
        if(r==-1){
            f++;
            queue[++r]=x;
        }
        else{
            r=(r+1)%max;
            queue[r]=x;
        }
    }
}

int front_dequeue(){
    int t=queue[f];
    if(f==-1 )
        cout<<"Underflow"<<endl;
    else
        f=(f+1)%max;
    if(r+1==f){
        f=-1;
        r=-1;
    }
    return t;
}

int back_dequeue(){
    int t = queue[r];
    if(r==-1 )
        cout<<"Underflow"<<endl;
    else{
        if(r==0)
            r=max-1;
        else
            r--;
    }
    return t; 
}

void display(){
    if(f==-1)
        cout<<"Underflow"<<endl;
    else{
        for (int i = f; i!=r; i=(i+1)%max)
        {
            cout<<queue[i]<<"\t";
        }
        cout<<queue[r]<<endl;
    }
    
}


//Restriction cases of deque.
void f_inp_res(){
    int n,m;
    do
    {
        cout<<"Enter 1 for enqueue"<<endl;
        cout<<"Enter 2 for front dequeue"<<endl;
        cout<<"Enter 3 for back dequeue"<<endl;
        cout<<"Enter 4 to display queue"<<endl;
        cout<<"Enter -1 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the no. you want to push :";
            cin>>m;
            back_enqueue(m);
            break;
        case 2:
            cout<<"The no. deleted form front is "<<front_dequeue()<<endl;
            break;
        case 3:
            cout<<"The no. deleted form back is "<<back_dequeue()<<endl;
            break;
        case 4:
            cout<<"The elements are :"<<endl;
            display();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
}

void f_out_res(){
    int n,m;
    do
    {
        cout<<"Enter 1 for front enqueue"<<endl;
        cout<<"Enter 2 for back enqueue"<<endl;
        cout<<"Enter 3 for dequeue"<<endl;
        cout<<"Enter 4 to display queue"<<endl;
        cout<<"Enter -1 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the no. you want to push at front:";
            cin>>m;
            front_enqueue(m);
            break;
        case 2:
            cout<<"Enter the no. you want to push at back:";
            cin>>m;
            back_enqueue(m);
            break;
        case 3:
            cout<<"The no. deleted is "<<back_dequeue()<<endl;
            break;
        case 4:
            cout<<"The elements are :"<<endl;
            display();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
}

void r_inp_res(){
    int n,m;
    do
    {
        cout<<"Enter 1 for enqueue"<<endl;
        cout<<"Enter 2 for front dequeue"<<endl;
        cout<<"Enter 3 for back dequeue"<<endl;
        cout<<"Enter 4 to display queue"<<endl;
        cout<<"Enter -1 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the no. you want to push :";
            cin>>m;
            front_enqueue(m);
            break;
        case 2:
            cout<<"The no. deleted form front is "<<front_dequeue()<<endl;
            break;
        case 3:
            cout<<"The no. deleted form back is "<<back_dequeue()<<endl;
            break;
        case 4:
            cout<<"The elements are :"<<endl;
            display();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
}

void r_out_res(){
    int n,m;
    do
    {
        cout<<"Enter 1 for front enqueue"<<endl;
        cout<<"Enter 2 for back enqueue"<<endl;
        cout<<"Enter 3 for dequeue"<<endl;
        cout<<"Enter 4 to display queue"<<endl;
        cout<<"Enter -1 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the no. you want to push at front:";
            cin>>m;
            front_enqueue(m);
            break;
        case 2:
            cout<<"Enter the no. you want to push at back:";
            cin>>m;
            back_enqueue(m);
            break;
        case 3:
            cout<<"The no. deleted is "<<front_dequeue()<<endl;
            break;
        case 4:
            cout<<"The elements are :"<<endl;
            display();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
}

void g_queue(){
    int n,m;
    do
    {
        cout<<"Enter 1 for front enqueue"<<endl;
        cout<<"Enter 2 for back enqueue"<<endl;
        cout<<"Enter 3 for front dequeue"<<endl;
        cout<<"Enter 4 for back dequeue"<<endl;
        cout<<"Enter 5 to display queue"<<endl;
        cout<<"Enter -1 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the no. you want to push :";
            cin>>m;
            front_enqueue(m);
            break;
        case 2:
            cout<<"Enter the no. you want to push :";
            cin>>m;
            back_enqueue(m);
            break;
        case 3:
            cout<<"The no. deleted form front is "<<front_dequeue()<<endl;
            break;
        case 4:
            cout<<"The no. deleted form back is "<<back_dequeue()<<endl;
            break;
        case 5:
            cout<<"The elements are :"<<endl;
            display();
            break;
        default:
            break;
        }

    } while (n!=-1);
    
}