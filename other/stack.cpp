# include <iostream>
# include <stack>
using namespace std;

int main(void)
{
    stack<string> st;
    st.push("aaa");
    st.push("bbb");
    st.push("ccc");
    cout<<st.top()<<endl; // ����� ccc
    //---------------------------------
    cout<<st.empty()<<endl; // ����� 0
    cout<<st.size()<<endl; // ����� 3
    st.push("ddd");
    cout<<st.top()<<endl; // ����� ddd
    st.pop();
    cout<<st.top()<<endl; // ����� ccc

    return 0;
}
