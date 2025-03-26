#ifndef _TASKMANAGER_HPP
#define _TASKMANAGER_HPP

#include <string>
#include <stack>
#include <queue>
namespace Task {

enum {add=1,view,execute,list,exit};
/*----------------Classes-------------------*/
class Process{
    private:
        int id;
        std::string name;
        int priority;
    public:
        Process(int& ID,std::string& Process,int& Priorty);
        void display();
        bool operator<(const Process& other) const;
    };
    
class TaskManager{
    private:
        std::stack<Process> tasks;
    public:
       void taskManagerAdd(int& ID, std::string& processName,int& priorityNum);
       void taskManagerRemove();
       void taskSort();
       bool taskEmpty();
       void printTop();
       void printList();
    };

class TaskFIFO:public TaskManager{
    private:
        std::queue<Process> tasks;
    public:
        void taskSort();
        void printTop();
        void printList();

    };
/*---------------functions Declartions ---------------------------------*/
void welcomeScreen();
void menuOptions();
void addProcess(TaskManager& tempStack,TaskFIFO& tempQueue);
void printNextProcess(TaskManager& tempStack,TaskFIFO& tempQueue);
void excuteProcess(TaskManager& tempStack,TaskFIFO& tempQueue);
void printAllProcesses(TaskManager& tempStack,TaskFIFO& tempQueue);
void sortProcesses(TaskManager& tempStack,TaskFIFO& tempQueue);
}
#endif