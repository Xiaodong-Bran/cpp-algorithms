// recursively output the number from vector<int>

#include <iostream>
#include <vector>
using namespace std;
int vprint (vector<int>::iterator,vector<int>::iterator);
int main()
{
    vector<int> v1 = {2,3,4,5,6,7,8,10,12};
    vector<int>::iterator ifirst=v1.begin();
    vector<int>::iterator iend=v1.end();
    vprint(ifirst,iend);
    return 0;
}

int vprint (vector<int>::iterator ibegin,vector<int>::iterator iend)
{
    if(ibegin!=iend)
    {
        std::cout<<*ibegin<<std::endl;
        vprint(++ibegin,iend);
    }

    return 0;
}

