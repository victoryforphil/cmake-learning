#include "storage.hpp"

using namespace SimpleExec;

void Storage::setData(int index, char data){
    mData[index] = data;
}

char Storage::getData(int index){
    return mData[index];
}