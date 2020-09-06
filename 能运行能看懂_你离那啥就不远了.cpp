#include <iostream>
using namespace std;
int main(){
    cout << "      *******   *******" << endl<<"   *********** ***********"<<endl<<" ************* *************"<<endl;
    //前三排的规律性不强 直接显示
    for (int i = 0; i < 3; i++){//显示中间三排
        for (int j = 0; j < 29; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < 7; i++){//显示呈递减趋势规律的中间7排
        for (int j = 0; j < 2 * (i + 1) - 1; j++)
            cout<<" ";
        for (int j = 0; j < 27 - i * 4; j++)
            cout<<"*";
        cout<<endl;
    }
    for (int i = 0; i < 14; i++)//最后一个星号*与上面的规律脱节了 所以独立显示
        cout << " ";
    cout << "*";
    cout << endl;
    return 0;
}