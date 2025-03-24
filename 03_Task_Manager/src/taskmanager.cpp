#include <iostream>
#include <string>
#include "taskmanager.hpp"

namespace Task {


/*---------------Process Class methods----------------- */
Process::Process(int& ID,std::string& Process,int& Priorty){
    this->id=ID;
    this->name=Process;
    this->priority=Priorty;
    }
void Process::display(){
    std::cout<<"ID: "<<id<<std::endl;
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Priority: "<<priority<<std::endl;}

/*---------------TaskManager Class methods----------------- */
void TaskManager::TaskManagerAdd(int& ID, std::string& processName,int& priorityNum){
    tasks.push(Process(ID,processName,priorityNum));
}
void TaskManager::printTop(){
    tasks.top().display();
}
void TaskManager::printList(){
    std::stack<Process>temp=tasks;// the problem is here
    while (!temp.empty()) {
        temp.top().display();
        temp.pop();
    }
}
/*---------------TaskManager(FIFO) Class methods----------------- */
/*----------------Functions -------------------------------------------- */
void welcomeScreen(){
    std::cout<<"Program Started....\n";
    std::cout<<"\t\t\t | TASK MANAGER | \n";
}

void menuOptions(){
    std::cout<<"\t1. Add a Process:\n";
    std::cout<<"\t2. View Next Process:\n";
    std::cout<<"\t3. Execute Process:\n";
    std::cout<<"\t4. List all Processes\n";
    std::cout<<"\t5. Exit the Program!\n";
}
void addProcess(TaskManager& tempStack,TaskFIFO& tempQueue){
    int tempID,tempPriority,tempInput;
    std::string tempProcess;
    std::cout<<"\t\tEnter Unique ID:\n";
    std::cin>>tempID;
    std::cout<<"\t\tEnter Process Name:\n";
    std::getline(std::cin,tempProcess);
    std::cout<<"\t\tEnter Priority:\n";
    std::cin>>tempPriority;
    std::cout<<"\t\t1.Stack or 2.Queue\n";
    std::cin>>tempInput;
    while (1) {
        if(tempInput==1){
            tempStack.TaskManagerAdd(tempID, tempProcess, tempPriority);
            return;
        }
        else if (tempInput==2) {
            tempQueue.TaskManagerAdd(tempID, tempProcess, tempPriority);
            return;
        }
        else {
            std::cout<<"Wrong input\n";
        }
    }
    std::cout<<"Process Added sucessfully!\n";

    
}




}