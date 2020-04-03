#ifndef _SIMPLE_EXEC_STORAGE_H_
#define _SIMPLE_EXEC_STORAGE_H_

namespace SimpleExec
{
class Storage
{
private:
    char mData[5];

public:
    void setData(int, char);
    char getData(int);
};

} // namespace SimpleExec

#endif