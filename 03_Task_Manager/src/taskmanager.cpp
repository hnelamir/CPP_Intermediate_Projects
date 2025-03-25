#include <iostream>
#include <limits>
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
void TaskManager::taskManagerAdd(int& ID, std::string& processName,int& priorityNum){
    tasks.push(Process(ID,processName,priorityNum));
}
void TaskManager::taskManagerRemove(){
    tasks.pop();
}
bool TaskManager::taskEmpty(){
    return tasks.empty();
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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"\t\tEnter Process Name:\n";
    std::getline(std::cin,tempProcess);
    std::cout<<"\t\tEnter Priority:\n";
    std::cin>>tempPriority;
    std::cout<<"\t\t1.Stack or 2.Queue\n";
    std::cin>>tempInput;
    while(1) {
        if(tempInput==1){
            tempStack.taskManagerAdd(tempID, tempProcess, tempPriority);
            break;
        }
        else if (tempInput==2) {
            tempQueue.taskManagerAdd(tempID, tempProcess, tempPriority);
            break;
        }
        else {// here enterd wrong input
            std::cout<<"Wrong input\n";
            std::cout<<"1.Stack or 2.Queue\n";
            std::cin>>tempInput;//getting input again
        }
    }// this function used to get right input for stack or queue.
    std::cout<<"Process Added sucessfully!\n";
}
void printNextProcess(TaskManager& tempStack,TaskFIFO& tempQueue){
    if(!tempStack.taskEmpty()){
        std::cout<<"Next Process in stack is:\n";
        tempStack.printTop();}
    else {
        std::cout<<"Stack is Empty!\n";
    }
    if(!tempQueue.taskEmpty()){
        std::cout<<"Next Process in Queue is:\n";
        tempQueue.printTop();}
    else {
        std::cout<<"Queue is Empty!\n";
    }
}
void printAllProcesses(TaskManager& tempStack,TaskFIFO& tempQueue){
    std::cout<<"The all Processes in Stack is :\n";
    tempStack.printList();
    std::cout<<"The all Processes in Queue is :\n";
    tempQueue.printList();
}
void excuteProcess(TaskManager& tempStack,TaskFIFO& tempQueue){
    int tempInput;
    std::cout<<"Do you want Excute the process in 1.Stack or 2.Queue\n";
    std::cin>>tempInput;
    while(1) {
        if(tempInput==1){
            std::cout<<"this process will be excuted :\n";
            tempStack.printTop();
            tempStack.taskManagerRemove();
            break;
        }
        else if (tempInput==2) {
            std::cout<<"this process will be excuted :\n";
            tempQueue.printTop();
            tempQueue.taskManagerRemove();
            break;
        }
        else {// here enterd wrong input
            std::cout<<"Wrong input\n";
            std::cout<<"1.Stack or 2.Queue\n";
            std::cin>>tempInput;//getting input again
        }
    }
    std::cout<<"Process excuted sucessfully!\n";
}

}