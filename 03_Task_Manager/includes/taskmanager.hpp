#ifndef _TASKMANAGER_HPP
#define _TASKMANAGER_HPP

#include <string>
#include <stack>
#include <queue>
namespace Task {


/*---------------functions Declartions ---------------------------------*/
void welcomeScreen();
void menuOptions();
/*----------------Classes-------------------*/
class Process{
    private:
        int id;
        std::string name;
        int priority;
    public:
        Process(int& x,std::string& y,int& number);
        void display();
    };
    
class TaskManager{
    private:
        std::stack<Process> tasks;
    public:
       TaskManager(int x, std::string y,int number);
       void printTop();
       void printList();
    };

class TaskFIFO:public TaskManager{
    private:
        std::queue<Process> tasks;
    public:
    
    };































}
#endif