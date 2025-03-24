#include "taskmanager.hpp"
#include <thread>
#include <iostream>
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
        2. create Taskmanager Class(Stack)
        3. create Taskmanager Class(Queue)
    Main:
        1. Add process Function created.
    */
    int menuInput;
    Task::TaskManager mainStack;
    Task::TaskFIFO mainQueue;
    Task::welcomeScreen();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    while (1) {
        Task::menuOptions();
        std::cin>>menuInput;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//to clear any leftover characters (\n) from the input buffer before calling it.
        switch (menuInput) {
            case Task::add:
                Task::addProcess(mainStack,mainQueue);
                break;
            case Task::view:
                break;
            case Task::execute:
                break;
            case Task::list:
                break;    
            case Task::exit:
                std::cout<<"Good Bye !!\n";
                return 0;
                break;
            default:
                break;
        
        }
    }
  
}


