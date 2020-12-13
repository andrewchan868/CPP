#include <iostream>

int main(){

std::cout << "The input two integers:" << std::endl;
int x;
int y;
std::cin >> x;
std::cin >> y;
if ( x > y ){
    std::cout << "The first number is larger";
}
else if(x==y){
    std::cout << "The two numbers are the same";
}
else{
    std::cout << "The second number is bigger";
} 
}