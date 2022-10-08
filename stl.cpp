#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // PAIR (utility library)

    // pair<int, int> p={1,3};
    // cout<<p.first<<" "<<p.second;


    // pair<int, pair<int, int>> p = {1,{2,3}}; 
    // cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    // pair<int,int>arr[]={{1,2}, {3,4}, {4,5}};
    // cout<<arr[2].second<<endl; 


    // VECTOR (container)

    // vector<int> v; //empty container
    // v.push_back(1); // inserting 1
    // v.emplace_back(2); // similar to pushback and faster

    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2); // {} not required


    // vector<int> v(5,100); // 100,100,100,100,100

 
    // vector<int> v(5); // 0,0,0,0,0


    // vector<int> v1(5,20); //20,20,20,20,20
    // vector<int> v2(v1); // 20,20,20,20,20


    // vector<int>::iterator it= v.begin();
    // it++;
    // cout<<*(it)<<" ";

    // it+=2;
    // cout<<*(it)<<" ";

    // vector<int>::iterator it=v.end(); //points to right after last element
    // vector<int>::iterator it=v.rend(); // points to right before begin element
    // vector<int>::iterator it=v.rbegin(); // points to the last element and it++ moves one back 

    // cout<<v[0]<<" "<<v.at(0);
    // cout<<v.back()<<" "; // element at last


    // for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    // for(auto it=v.begin();it!=v.end();it++){ // auto means auto assignation of data type
    //     cout<<*(it)<<" ";
    // }

    // for(auto it : v)[
    //     cout<<it<<" ";
    // ]


    // // {10,20,12,23}
    // v.erase(v.begin()+1); //result is {10,12,23}
     
    // // {10,20,30,12,23}
    // v.erase(v.begin(),v.begin()+3);// +3 points after deletion element
    
    
    // vector<int>v(2,100);
    // v.insert(v.begin(),300);
    // v.insert(v.begin()+1,2,10);

    // cout<<v.size();

    // v.pop_back(); //pops out the last element

    // v1.swap(v2); //swaps two vectors

    // v.clear(); //erases the entire vector

    // cout<<v.empty(); //true or false



    // LIST (container)
    // has push_front() for inserting in front
    // list<int> ls;
    // ls.push_back(2);
    // ls.emplace_back(4);

    // ls.push_front(5);
    // ls.emplace_front();

    //rest functions are same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap


    // DEQUE (container)
    // deque<int> dq;
    //functions similar to vector and list


    // STACK (container) LIFO concept (all O(1) operations)
    // stack<int> st;
    // st.push(1); // {1}
    // st.push(2); // {2,1}
    // st.push(3);
    // st.push(3);
    // st.emplace(5);

    // cout<<st.top(); //prints 5
    
    // st.pop() // deletes the element at top

    // cout<<st.top();
    
    // cout<<st.size();
    
    // cout<<st.empty();

    // stack<int>st1, st2;
    // st1.swap(st2);


    // QUEUE (container) FIFO concept
    // queue<int> q;
    // q.push(1); // {1}
    // q.push(2); // {1,2}
    // q.emplace(4);

    // q.back()+=5;
    // cout<<q.back();

    // cout<<q.front();

    // q.pop() // {deletes first element}

    // cout<<q.front();

    // PRIORITY QUEUE
    // the greatest element gets priority on top 
    // priority_queue<int>pq; (MAX HEAP)

    // for minimum element
    //priority_queue<int, vector<int>, greateer<int>>pq; (MIN HEAP)
    
    // push,pop->O(logn), top->O(1)

    // SET (container)
    // stores everything in sorted order and unique

    // set<int>st;
    // st.insert(1);
    // st.emplace(2);
    // st.insert(2);
    // st.insert(4);
    // st.insert(3);

    // // begin(), end(), rbegin(), rend(), size(),
    // // empty() and swap() are same as those of above

    // auto it = st.find(3); //{1,2,3,4,5}

    // auto it = st.find(6); // if element not in set, returns st.end()

    // st.erase(5) //deletes 5 in the set and maintains sorted order

    // int cnt = st.count(1); // no of occurrence in the set

    // // in set everything happens in logN complexity

    // // MULTISET
    // // only sorted not unique

    // // UNORDERED SET - onlu unique not sorted - randomized
    // unordered_set<int>st;
    // // all operations same except lower_bound and upper_bound


    // MAP (container)
    // map<int,int> mpp; // unique keys(with sorted order) with value concept

    // map<int, pair<int,int>> mpp;

    // map<pair<int,int>, int> mpp;

    // mpp[1]=2;
    // mpp.emplace({3,1});
    // mpp.insert({2,4});



    // STL ALGORITHMS

    // sort(a,a+n); // a is first iterator posn, a+n is just after last element or last iterator 
    // sort(v.begin(), v.end());

    // sort(a+2,a+4); // particular portion

    // sort(a,a+n,greater<int>); // descending order

    // sort(a,a+n,comp); // my way and it is useful
    // bool comp(pair<int,int>p1, pair<int,int>p2){
    //     if(p1.second<p2.second) return true;
    //     if(p1.second > p2.second) return false;

    //     if(p1.first>p2.first) return true;
    //     return false;
    // }

    // int num=7;
    // int cnt = __builtin_popcout(); // how many set bits are there

    // long long num = 165786578687;
    // int cnt = __builtin_popcountll();

    // string s = "123";

    // do{
    //     cout<<s<<endl;
    // } while(next_permutation(s.begin(), s.end())); // start from sorted guy to get all permutations


    // int maxi = *max_element(a,a+n);
    // int mini = *min_element(a,a+n);

    // BASICS ARE COVERED NOW :)
    return 0;
}