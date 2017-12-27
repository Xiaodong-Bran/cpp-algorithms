// binary search for sorted vector <int>

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v1, int keyvalue);
int main()
{
    vector<int> v1 = {2,3,4,5,6,7,8,10,12};
    int keyvalue = 5;
    //cout<<v1[2]<<endl;
    std::cout<<binarySearch(v1,keyvalue)<<std::endl;
    return 0;
}


int binarySearch(vector<int> &v1, int keyvalue)
{
    vector<int>::iterator ibegin = v1.begin();
    vector<int>::iterator iend = v1.end();
    auto ihalf = ibegin+(iend-ibegin)/2;
    while(*ihalf!=keyvalue)
    {
        if (*ihalf>keyvalue)
        {
            iend = ihalf;
            ihalf = ibegin+(iend-ibegin)/2;
        }
        else
        {
            ibegin = ihalf;
            ihalf =ibegin+(iend-ibegin)/2;
        }

    }
    return ihalf-v1.begin();
}
