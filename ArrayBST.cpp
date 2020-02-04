#include <iostream>
#include "ArrayBST.h"

ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE;i++){
		this->element[i]=0;
	}
	std::cout<<"Hello World"<<std::endl;
}

ArrayBST::~ArrayBST(){
}
int ArrayBST::getMin(){
	int num=this->element[1];
	for(int i=1;i<=MAX_SIZE;){
		if(this->element[i]!=0){
			if(this->element[i]<=num) num=this->element[i];
			i=2*i;
		}else{
			break;
		}
	}
	return num;
}
int ArrayBST::getMax(){
	int num=this->element[1];
	for(int i=1;i<=MAX_SIZE;){
		if(this->element[i]!=0){
			if(this->element[i]>=num) num=this->element[i];
			i=2*i+1;
		}else{
			break;
		}
	}
	return num;
}

int ArrayBST::max(){
	return getMax();
}
int ArrayBST::min(){
	return getMin();
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

