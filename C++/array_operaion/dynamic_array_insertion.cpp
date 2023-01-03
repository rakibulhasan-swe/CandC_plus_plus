#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void Increase_size()
    {
        cap*=2;
        int *tmp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    void push_back(int x)
    {
        if(cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    void Print()
    {
        for(int i=0; i<sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int getSize()
    {
        return sz;
    }
    int getElement(int idx)
    {
        if(sz<=idx)
        {
            cout << "Error! Index is out of bound." << "\n";
            return -1;
        }
        return arr[idx];
    }
};

int main()
{



    return 0;
}
