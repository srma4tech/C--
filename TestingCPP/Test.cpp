#include <iostream>
#include<vector>
#include<set>
#include<list>
using namespace std;

// int func(int num){
//     return func(num- 1);
// }

// int main() {
//     int num = 5;
//     int ans = func(num - 1);
//     cout << ans;
// }

// void print(int n){
//     if(n < 0){
//         return;
//     }
//     cout << n << " ";
//     print(n - 2);
// }

// int main() {
//     int num = 5;
//     print(num);
// }

// void print(int n){
//     if(n < 0){
//         return;
//     }
//     if(n == 0){
//         cout << n << " ";
//         return;
//     }
//     print(n --);
//     cout << n << " ";
// }

// int main() {
//     int num = 3;
//     print(num);
// }

// int example() throw (int) {
//     throw 5;
// }

// class abc {
//     int x;
//     float y;
//     public:
//     abc(int a, float b=5.0){
//         x = a;
//         y = b;
//     }
//     void print(){
//         cout<<x <<" "<<y;
//     }
// };

int main()
{
    // int i = 0, x = 0;
    // for (i = 1; i < 10; i *= 2)
    // {
    //     x++;
    //     cout << x;
    // }
    // cout << x;

    // signed CodingBlocks = 9;
    // long double Nagarro = 8.8;
    // signed char HackerBlocks = 'A';
    // cout<<CodingBlocks<<endl;
    // cout<<Nagarro<<endl;
    // cout<<HackerBlocks<<endl;
    // try{
    //     throw 'S';
    // }
    // catch(...){
    //     cout<<"catch all\n";
    // }
    // catch(char a){
    //     cout<<"character exce caught";
    // }
    
    // vector<int> v = {2,5,3,4,6,3};
    // set<int> st;
    // for(auto &i : v){
    //     st.insert(++i);
    // }
    // for(auto i : st){
    //     cout<< i <<" ";
    // }

    //example();

    // abc a(2, 3.5);
    // a.print();

    list<int> l;

    for(int i=1;i<10;++i){
        l.push_back(i+i);
    }

    l.resize(5);
    l.resize(7,20);
    l.remove(10);


    for(list<int>::reverse_iterator i =l.rbegin(); i!= l.rend(); ++i){
        cout<<*i<<" ";
    }
    return 0;
}

