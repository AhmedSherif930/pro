#include <iostream>
# include <string>
#include <cmath>

using namespace std;
class cla
{
public:
    int num;
    int power(int x);

};
int cla::power(int x){
return x*x;
}

int main()
{
    cla x;


    cout<<x.power(10)<<"\n";

    return 0;
}
