#include <iostream>
#include <vector>
#include <unistd.h>
#include <string>
#include <limits>
#include <algorithm>
/*---------------functions Declartions ---------------------------------*/
void vecInit(std::vector<std::string>& today,std::vector<std::string>& pre,std::vector<std::string>& cust);
void WelcomeScreen();
void menuOptions();
void newOrders(std::vector<std::string>& cust,std::vector<std::string>& today);
void editOrders(std::vector<std::string>& today);

/*---------------------Main---------------------------------*/

int main(){
    /**
     * 1. first of all make function to a init the vectors
     * 2. make print function for welcome menu.
     * 3. make print function for options menu.
     * 4. make function to add new customer orders & add it to new orders.
     * 5. edit the today order list and remove orders from it.
     */
    char menuInput; // Input from user
    std::vector<std::string> todayOrders, prePrepared,customerOrder;
    WelcomeScreen();
    sleep(1);
    vecInit(todayOrders,prePrepared,customerOrder);
    while (1) // another Alternatives using Do while loop,
    {   
        menuOptions();
       // sleep(5);
        std::cin>>menuInput;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//to clear any leftover characters (\n) from the input buffer before calling it.
        switch (menuInput)
        {
        case '1':
            newOrders(customerOrder,todayOrders);
            break;
        case '2':
            editOrders(todayOrders);
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
    //today vector already empty so we dont need to intialize it.
    pre={"Bread","Cake","Brownies"};
    //wont create a braced initializtion for customer oderes because i will add them in run time.


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
void newOrders(std::vector<std::string>& cust,std::vector<std::string>& today){
    std::string newCustOrder;
    
    std::cout<<"What order do you want to add ?\n";
    // std::cin>>newCustOrder; it's only take one word , if another word will take it as another input 
    std::getline(std::cin,newCustOrder);// take whole line as input.
    //std::cout << "Debug: newCustOrder = \"" << newCustOrder << "\"\n";// Verify input
    /**
     * Solutin if we dont want to use algortihm 
    bool exists = false;// flag to check if the variable exists
    for (const std::string& check : cust) {
        if (check == newCustOrder) {
            exists = true;
            break;
        } }
    if (!exists) {
        cust.push_back(newCustOrder);
        std::cout << "Order added.\n";
        today.push_back(newCustOrder);//to copy the new order to the order list.
    } else {
        std::cout << "order already exists!!\n";
    }*/ 
    if (std::find(cust.begin(), cust.end(), newCustOrder) != cust.end()) {
        std::cout << "order already exists!!\n";
    } else {
        cust.push_back(newCustOrder);
        today.push_back(newCustOrder);//to copy the new order to the order list.

    }
    std::cout<<"Customer Orders are ";
    std::cout<<"{ ";
    for (const std::string& order :cust){ 
        /*we use `const` to know that loop purpose is to access the elements, not alter them.
        *we use `&` to avoid make copy of each string. 
        */
        std::cout<<order<<" , ";
    }
    std::cout<<" } \n";

    std::cout<<"Today's are ";
    std::cout<<"{ ";
    for (const std::string& order :today){ 
        /*we use `const` to know that loop purpose is to access the elements, not alter them.
        *we use `&` to avoid make copy of each string. 
        */
        std::cout<<order<<" , ";
    }
    std::cout<<" } \n";

}

void editOrders(std::vector<std::string>& today){
    std::string editedOrder;
    std::cout<<"Today's are ";
    std::cout<<"{ ";
    for (const std::string& order :today){ 
        /*we use `const` to know that loop purpose is to access the elements, not alter them.
        *we use `&` to avoid make copy of each string. 
        */
        std::cout<<order<<" , ";
    }
    std::cout<<" } \n";

    std::cout<<"Enter the order you want to remove from order list\n";
    getline(std::cin,editedOrder);
    /**
     * we can't use `find` algorithm because it's retaurn bool type and erase needs iterator 
      if(std::find(today.begin(),today.end(),editedOrder)!=today.end()){
        today.erase(today.begin());
    }
     */
    if (std::find(today.begin(),today.end(),editedOrder)!=today.end()){
        today.erase(std::find(today.begin(),today.end(),editedOrder));
        std::cout<<"Odrder \" "<<editedOrder<<"\" deleted \n";
    }
    else{
        std::cout<<"Order doesn't exists";
    }
    std::cout<<"Today's are ";
    std::cout<<"{ ";
    for (const std::string& order :today){ 
        /*we use `const` to know that loop purpose is to access the elements, not alter them.
        *we use `&` to avoid make copy of each string. 
        */
        std::cout<<order<<" , ";
    }
    std::cout<<" } \n";
}