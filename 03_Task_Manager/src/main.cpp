#include <iostream>
#include <string>
#include <stack>
#include <queue>
//#define FIFO 
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

};

class TaskManger{
    private:
    std::stack<Process> tasks;
   public:
   void pushInner(int x, std::string y,int number){
        tasks.push(Process(x,y,number));
   }
   void printTop(){
    std::cout<<tasks.top();
   }
   

};


int main(){
    TaskManger Test;
    Test.pushInner(10, "hussien",1);
    Test.printTop();
}