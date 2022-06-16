#include<iostream>
using namespace std;

class dynamicarray {

    int *data;
    int nextIndex;
    int totalSize;


public:
    dynamicarray()
    {
        data = new int[10];
        nextIndex = 0;
        totalSize = 10;

    }

    void add(int element)
    {
        if(nextIndex==totalSize)
        {
            int *newData = new int[totalSize*2];
            for(int i =0;i<totalSize;i++) {
                newData[i] = data[i];

        }

        delete [] data;
        data = newData;
        totalSize *= 2;

        }

        data[nextIndex] = element;
        nextIndex++;

    }

    int get(int i)

    {

        if(i< nextIndex)
        {

            return data[i];
        }

        else
        {

            return -1;

        }
    }



    void add(int i,int element)
    {
        if(i<nextIndex)
        {

            data[i] = element;

        }
        else if(i== nextIndex)
        {

            add(element);
        }

        else
        {

            return;

        }
    }



    void print()
    {

        for(int i=0;i<totalSize;i++)
        {
            cout << data[i] << ' '<< endl;

        }
    }

};



int main()

{
    dynamicarray d1;
    d1.add(11);
    d1.add(456);


    d1.print();

}


