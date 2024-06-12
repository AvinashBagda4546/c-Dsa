#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    
    vector<int> arr = {0, 1, 0, 1, 2, 1, 0, 2, 1, 0, 2};

    int zero, one, two = 0;
    zero = one = two = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    cout<<"zero"<<zero<<endl;
    cout<<"one"<<one<<endl;
    cout<<"two"<<two<<endl;
    int i = 0;
    while (zero--)
    {
       arr[i] = 0;
       i++;
    }
    while (one--)
    {
      arr[i] = 1;
      i++;
    }
    while (two--)
    {
      arr[i] = 2;
      i++;
    }

    for(auto i:arr){
        cout<<i;
    }

   return 0;
}
