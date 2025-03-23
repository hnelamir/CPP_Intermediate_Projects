#include <iostream>
#include <string>
#include <stack>
#include <queue>
//#define FIFO 
/*---------------functions Declartions ---------------------------------*/



/*---------------Classes---------------------------------*/
class Process{
private:
    int id;
    std::string name;
    int priority;
public:
    Process(int& x,std::string& y,int& number){
        this->id=x;
        this->name=y;
        this->priority=number;
        }
    void display(){
        std::cout<<"ID: "<<id<<std::endl;
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Priority: "<<priority<<std::endl;}
};

class TaskManger{
private:
    std::stack<Process> tasks;
public:
   void pushInner(int x, std::string y,int number){
        tasks.push(Process(x,y,number));
   }
   void printTop(){
         tasks.top().display();
   }
   void printList(){
        std::stack<Process>temp=tasks;// the problem is here
        while (!temp.empty()) {
            temp.top().display();
            temp.pop();
        }
   }
};
class TaskFIFO:public TaskManger{
private:
    std::queue<Process> tasks;
public:

};
/*      
    
*/
/*---------------------Main---------------------------------*/
int main(){
    /*  
    Requirements:
        1. Create a class called Process that has the following attributes:
            - id (int)
            - name (string)
            - priority (int)
        2. Create a class called TaskManger that has the following attributes:
            - tasks (stack of Process)
            - add process (function that adds a process to the stack)
            - remove process (function that removes the top process from the stack)
            - Excute process (function that remove the next process and mark it as executed)
            - List (dispaly all processes in the Stack)
        3.Bonus features
            - Sort the process by priority (Add class comparator)
            - Simulate running process based on priority
    Process:
        1. create process class
            -adding the members.
            -adding the constructor.
            -adding display method.
        2. create Taskmanager Class(Stack
        )
        3. create Taskmanager Class(Queue)
    */
    int input;
    TaskManger test;
    TaskFIFO test2;
    test.pushInner(10, "hussien",1);
    test.pushInner(2, "omar", 2);
    //test.printTop();
    test.printList();
    test2.pushInner(5, "ahmed", 3);
    test2.pushInner(2, "omar", 2);
   // test2.printTop();
    test.printList();
  
}