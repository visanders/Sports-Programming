// My solution of https://www.eolymp.com/en/problems/10243

#include <iostream>
#include <cmath>
#include <sstream>
#include <random>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <stdlib.h>
#define ll long long

using namespace std;

class Book{
public:
    Book(void){};
    int  book_id;
    string title;
    string author;
    string subject;
    void Print(){
        cout<<book_id<<endl;
        cout<<title<<endl;
        cout<<author<<endl;
        cout<<subject<<endl;
    }
};

int main()
{
    string y;
    getline (cin, y);
    int n;
    istringstream iss (y, istringstream::in);
    iss>>n;
    vector <Book> v;
    for (int i=0; i<n; i++){
        Book a;
        string s;
        getline(cin,s);
        getline(cin, s);
        istringstream iss (s, istringstream::in);
        iss>>a.book_id;
        getline(cin, s);
        a.title=s;
        getline(cin, s);
        a.author=s;
        getline(cin, s);
        a.subject=s;
        v.push_back(a);
    }
    string s;
    getline(cin,s);
    int q, t;
    cin>>q;
    for (int i=0; i<q; i++){
        cin>>t;
        int counter=0;
        for (int j=0; j<v.size(); j++){
            if(v[j].book_id==t) {
                cout<<v[j].title<<" by "<<v[j].author<<endl;
                counter++;
                break;
            }
        }
       if (counter==0) cout<<"Book not found"<<endl;
    }
}
