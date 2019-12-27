#include<iostream>
#include<string>
#include"Alloc.h"
#include"Iterator.h"
#include"Vector.h"

using namespace std;


int main()
{
    try
    {
        //TestOneAllocate();
        Vector<int, Alloc> v1;
        for (int i = 0 ; i < 10; i++){
            v1.PushBack(i);
        }
        Vector<int>::Iterator it1 = v1.Begin();
        cout << "使用迭代器打印:";
        while (it1!=v1.End())
        {
            cout<< *it1 <<" ";
            ++it1;
        }
        cout << endl;

    }
    catch (exception& error)
    {
        cout << error.what()<< endl;
    }
    return 0;
}
