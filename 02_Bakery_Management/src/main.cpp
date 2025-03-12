#include <iostream>
#include <vector>
#include <unistd.h>

/*---------------functions Declartions ---------------------------------*/
void vecInit(std::vector<std::string>& today,std::vector<std::string>& pre,std::vector<std::string>& cust);
void WelcomeScreen();
void menuOptions();



int main(){
    /**
     *1. first of all make function to a init the vectors
     */
    char menuInput; // Input from user
    std::vector<std::string> todayOrders, prePrepared,customerOrder;
    WelcomeScreen();
    sleep(1);
    vecInit(todayOrders,prePrepared,customerOrder);
    while (1) // another Alternatives using Do while loop,
    {   
        menuOptions();
        sleep(5);
        std::cin>>menuInput;
        switch (menuInput)
        {
        case '1':
            std::cout<<menuInput;
            break;
        case '2':
            std::cout<<menuInput<<std::endl;
            break;
        case '3' :
            std::cout<<menuInput<<std::endl;
            break;
        case '4':
            std::cout<<menuInput<<std::endl;
            break;
        case '5':
            std::cout<<menuInput<<std::endl;    
            break;
        case '6' :
            std::cout<<menuInput<<std::endl;   
            break;
        case '7':
            std::cout<<menuInput<<std::endl;
            break;
        case '8':
            std::cout<<menuInput<<std::endl;
            break;
        case '9' :
            std::cout<<menuInput<<std::endl;
            return 0;
            break;
        default:
            break;
        }
    }
    

    
}


/*----------------Functions -------------------------------------------- */
void vecInit(std::vector<std::string>& today,std::vector<std::string>& pre,std::vector<std::string>& cust){

}

void WelcomeScreen(){
    std::cout<<"Program Started....\n";
    std::cout<<"Hello Cheif!!\n";

}
void menuOptions(){
std::cout<<"1.Add new Orders\n";
std::cout<<"2.Edit the order list\n";
std::cout<<"3.Print first , third ,last order.\n";
std::cout<<"4.Insert pre-prepared items.\n";
std::cout<<"5.Add Large order.\n";
std::cout<<"6.Optmize Orders vector.\n";
std::cout<<"7.Print Order list information.\n";
std::cout<<"8.Clear list.\n";
std::cout<<"9.Exit Program\n";
}