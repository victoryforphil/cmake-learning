#include <iostream>
#include <storage.hpp>

int main(){
    SimpleExec::Storage storage;
    storage.setData(0,'T');
    storage.setData(1,'E');

    std::cout << "-- Simple Exec Program -- " << std::endl;
    std::cout << " - Data 0 : " << storage.getData(0) << std::endl;
    std::cout << " - Data 1 : " << storage.getData(1) << std::endl;

}