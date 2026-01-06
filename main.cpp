#include <iostream>

int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}

int multiply(int a, int b){
	return a * b;
}

int main(){
	std::cout<<"Calculator V1.0"<<std::endl;
	std::cout<<"2 + 2 = " << multiply(10,5)<< std::endl;
	return 0;
}
