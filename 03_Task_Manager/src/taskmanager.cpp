#include <iostream>
#include "taskmanager.hpp"

namespace Task {


/*---------------Process Class methods----------------- */
Process::Process(int& x,std::string& y,int& number){
    this->id=x;
    this->name=y;
    this->priority=number;
    }
void Process::display(){
    std::cout<<"ID: "<<id<<std::endl;
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Priority: "<<priority<<std::endl;}

/*---------------TaskManager Class methods----------------- */
TaskManager::TaskManager(int x, std::string y,int number){
    tasks.push(Process(x,y,number));
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

}




}