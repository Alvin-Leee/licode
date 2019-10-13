# include <iostream>
# include <map>
# include <list>
using namespace std;

int main(void)
{
    map<string, int> m;
    m = {{"aaa", 1}, {"bbb", 2}, {"ccc", 3}}; // ��ֵ
    // ʱ�临�Ӷ�ͨ��ΪO(nlogn)�������������ΪO(n)

    cout<<m["aaa"]<<endl;  // ����� 1
    m["aaa"] = 4; // ����ֵ
    m["ddd"] = 5; // ����ֵ

    for(auto &pair : m) // ������
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    //----------------------------------------
    // ���ظ�������
    list<string> word = {"hello", "world", "c", "hello", "c++",
                        "world", "hello", "hello"}; // �����б�
    map<string, size_t> word_map;
    for(auto &n : word){ // ͳ��
        ++word_map[n];
    }

    for(auto &pair : word_map){ // ���ͳ�ƽ��
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    //----------------------------------------

    map<string, int> m2 = m;
    map<string, int>::iterator iter; // ���������
    map<string, int>::reverse_iterator riter; // ���������

    for(iter=m2.begin(); iter!=m2.end(); iter++){
        cout<<iter->first<<" : "<<iter->second<<endl;
    } // ���������������, ����iter��ָ�����

    for(riter=m2.rbegin(); riter!=m2.rend(); riter++){
        cout<<riter->first<<" : "<<riter->second<<endl;
    } // ���������������, ����riter��ָ�����

    //-----------------------------------------
    cout<<m2.empty()<<endl; // ����� 0
    cout<<m2.size()<<endl;  // �����4
    cout<<m2.max_size()<<endl; // �����ɵ����Ԫ��������ͬ�����������ܲ�ͬ

    //-----------------------------------------
    m2["ddd"] = 5; // ֱ������
    m2["aaa"] = 10; // ֱ�Ӹ���
    for(auto &pair : m2){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    m2.erase("ddd"); // ����"ddd"
    for(auto &pair : m2){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    //------------------------------------------
    cout<<m2.count("aaa")<<endl; // ��Ϊ������������ظ������Խ��Ϊ1��0

    map<string, int>::iterator sear;
    sear = m2.find("aaa");

    if(sear != m2.end()){
        cout<< "Found. "<< sear->first<<" : "<< sear->second<<endl;
    }else{
        cout<<"Not found."<<endl;
    }


    return 0;
}
