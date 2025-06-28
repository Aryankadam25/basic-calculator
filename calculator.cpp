#include <iostream>
#include<cmath>

int main(){
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "********** CALCULATOR **********"<<'\n';
  std::cout << "Enter either (+ - * /): ";
  std::cin>>op;

  switch(op){
    case '+':
      std::cout<<"enter first number: ";
      std::cin>>num1;
      std::cout<<"enter second number: ";
      std::cin>>num2;
      std::cout<<"sum of two numbers: "<<'\n';
      result=num1+num2;
      std::cout<<result<<'\n';
      break;
    case '-':
      std::cout<<"enter first number: ";
      std::cin>>num1;
      std::cout<<"enter second number: ";
      std::cin>>num2;
      std::cout<<"difference of two numbers: "<<'\n';
      result=num1-num2;
      std::cout<<result<<'\n';
      break;
    case '*':
      std::cout<<"enter first number: ";
      std::cin>>num1;
      std::cout<<"enter second number: ";
      std::cin>>num2;
    std::cout<<"product of two numbers: "<<'\n';
      result=num1*num2;
      std::cout<<result<<'\n';
      break;
    case '/':
      std::cout<<"enter first number: ";
      std::cin>>num1;
      std::cout<<"enter second number: ";
      std::cin>>num2;
      std::cout<<" quotient of two numbers:"<<'\n';
      result=num1/num2;
      std::cout<<result<<'\n';
      break;
    default :
      std::cout<<"That wasn't a valid response"<<'\n';
    break;
    
  }

  std::cout<<"*********************************"<<'\n';
  
  return 0;
}
