#include <iostream>

int add(int a, int b){
	return a + b;
}
int main(){
	std::cout<<"Calculator V1.0"<<std::endl;
	std::cout<<"2 + 2 = " << add(2,2)<< std::endl;
	return 0;
}
