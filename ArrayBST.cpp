#include <iostream>
#include "ArrayBST.h"

ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE;i++){
		this->element[i]=0;
	}
}

ArrayBST::~ArrayBST(){
}

void ArrayBST::add(int data){
	//representing tree in array with first space empty
	for(int i=1;i<=MAX_SIZE; ){
		if(this->element[i]==0){
			this->element[i]=data;
			break;
		}
		else if(data<this->element[i]){
			i=2*i;
		}
		else{
			i=2*i+1;
		}
		if(i>MAX_SIZE){
			std::cout<<"The array is full"<<std::endl;
		}
		else{
			if(this->element[i]==0){
				this->element[i]=data;
				break;
			}
			else{
				continue;
			}
		}
	}
}

void ArrayBST::preorderTraversal(){
	
}

bool ArrayBST::search(int data){
	for(int i=0;i<MAX_SIZE;){
		if(data<this->element[i]){
			i=2*i;
		}
		else{
			i=2*i+1;
		}
		if(this->element[i]==data){
			return true;
			break;
		}
		else
		{
			continue;
		}
		
	}
	return false;
}

int main(){
	ArrayBST a;
	a.add(10);
	a.add(5);
	a.add(6);
	a.add(8);
	a.add(4);
	a.add(3);

	for(int i=0; i<MAX_SIZE;i++){
		std::cout<<a.element[i]<<"\t";
	}
	std::cout<<std::endl;
	std::cout<<a.search(9)<<" "<<a.search(8);
}
