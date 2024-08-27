#include <iostream>
#include <cstdlib>

int main(){
    double first_number;
    double second_number;
    char op;
    double result;
    std::cout<<"Welcome to the calculator!\nPlease enter the first digit:\n";
    std::cin>>first_number;
    if(first_number<0||first_number>9){
        std::cout<<"Sorry, but this isn't a correct digit.\n";
        exit(1);
    }
    std::cout<<"Enter the second digit:";
    std::cin>>second_number;
    if(second_number<0||second_number>9){
        std::cout<<"Sorry, but this isn't a correct digit.\n";
        exit(1);
    }
    std::cout<<"Choose an operator (*, /, +, -):";
    std::cin>>op;
    if(op!='+'&&op!='-'&&op!='*'&&op!='/'){
        std::cout<<"Sorry, but this isn't a correct operator.\n";
        exit(1);
    }
    if(op=='*'){
        result=first_number*second_number;
    }else if(op=='/'){
        if(second_number==0){
            std::cout<<"Error: Division by zero is not allowed.\n";
            exit(1);
        }
        result=first_number/second_number;
    }else if(op=='+'){
        result=first_number+second_number;
    }else if(op=='-'){
        result=first_number-second_number;
    }
    std::cout<<"The result is:"<<result<<std::endl;
    return 0;
}