#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using ordered_set =tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//order_of_key (k) : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).


int main()
{
    int q; cin>>q;

    ordered_set<int>os;

    while(q--)
    {
        string s; cin>>s;

        if(s=="add")
        {
            int x; cin>>x;os.insert(x);

        }
        else
        {
            int k ; cin>>k;
            cout << *os.find_by_order(k-1)<<endl;
        }
    }
}


/*
q ta query nibo thn string intput nibo. string  add hole insert korbo otherwise sorted inserted valu er k_th index er elemnt print korbo  
 // if add hole set a insert korbo
       else k-th index er elemnt print korbo

       
5 query
add 2 
add 1
add 7
add 20
print 3
*/

