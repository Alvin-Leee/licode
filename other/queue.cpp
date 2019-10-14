# include <iostream>
# include <queue>
using namespace std;

int main(void)
{
    queue<string> qu;
    qu.push("aaa");
    qu.push("bbb");
    qu.push("ccc");
    cout<<qu.front()<<endl; // ��һ��Ԫ�أ������ aaa
    cout<<qu.back()<<endl; // ���һ��Ԫ�أ������ ccc
    //-------------------------------------------
    cout<<qu.empty()<<endl; // ����� 0
    cout<<qu.size()<<endl; // ����� 3
    //-------------------------------------------
    qu.push("ddd");
    cout<<qu.back()<<endl; // ����� ddd
    qu.pop();
    cout<<qu.front()<<endl; // ����� bbb

    return 0;
}
