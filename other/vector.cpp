# include <iostream>
# include <vector>
using namespace std;

int main(void){

    vector<int> v, v2;

    /*
    operator=
    */
    v = {1, 2, 3, 4, 5}; // ��ֵ
//---------------------------------
    /*
    assign()����ԭ��:
    1:void assign(const_iterator first, const_iterator last);
    ��first��last֮���ֵ��ֵ��������
    2:void assign(size_type n, const T& x = T());
    ��n��x��ֵ��������
    */
    v2.assign(v.begin(), v.begin()+3);
    for(int n : v2){
        cout<<n<<' ';
    }
    cout<<endl; // ����� 1 2 3

    v2.assign(5, 8);
    for(int n : v2){
        cout<<n<<' ';
    }
    cout<<endl; // ����� 8 8 8 8 8

//---------------------------------
    cout<< v.at(0) <<endl; // ����ָ����Ԫ�أ������ 2
    //cout<< v.at(5) <<endl; // ����Խ���飬����� out_of_range
    cout<< v.front() <<endl; // ���ʵ�һ��Ԫ�أ������ 1
    cout<< v.back() <<endl; // �������һ��Ԫ�أ������ 5
    cout<< v.data() <<endl; // ����ָ���ڴ��������һ��Ԫ�ص�ָ��

    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int>::iterator iter; // ���������
    vector<int>::reverse_iterator riter; // ���������
    for(iter=v3.begin(); iter!=v3.end(); ++iter){
        cout<<*iter<<' ';
    } // ����� 1 2 3 4 5
    cout<<endl;
    riter = v3.rbegin();
    for(riter=v3.rbegin(); riter!=v3.rend(); ++riter){
        cout<<*riter<<' ';
    } // ����� 5 4 3 2 1
    cout<<endl;

//---------------------------------
    vector<int> v4 = {2, 4, 6, 8, 10};
    cout<<v4.empty()<<endl; // ����� 0���ǿ�
    cout<<v4.size()<<endl; // ����� 5
    cout<<v4.max_size()<<endl; // ����� 1073741823��ȡ���ڼ����
    v4.reserve(8); // Ԥ��8���洢�ռ�
    cout<<v4.size()<<endl; // ����� 5����С����
    cout<<v4.capacity()<<endl; // ����� 8��Ԥ���ռ�ı�
    for(iter=v4.begin(); iter!=v4.end(); ++iter){
        cout<<*iter<<' ';
    } // ����� 2 4 6 8 10
    cout<<endl;

//---------------------------------
    /*
        insert()����ԭ�ͣ�
        void insert( iterator pos, size_type count, const T& value );
    */
    vector<int> v5 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    v5.insert(v5.begin()+2, 3, 5); // ��pos������count��value, count����ʡ�Դ���һ��
    for(int n:v5) { cout<<n<<' '; } cout<<endl; // ����� 1 2 5 5 5 2 3 3 3 4 4 4 4

    /*
        erase()����ԭ�ͣ�
        1.iterator erase( iterator pos );
        ����pos�ϵ�Ԫ��
        2.iterator erase( iterator first, iterator last );
        ����[first, last)��Χ��Ԫ��
    */
    v5.erase(v5.begin()+3); // �Ƴ���4��λ���ϵ�Ԫ��
    for(int n:v5) { cout<<n<<' '; } cout<<endl; // ����� 1 2 5 5 2 3 3 3 4 4 4 4
    v5.erase(v5.begin()+3, v5.begin()+5); // �Ƴ�[4, 6]λ���ϵ�Ԫ��
    for(int n:v5) { cout<<n<<' '; } cout<<endl; // ����� 1 2 5 3 3 3 4 4 4 4

    v5.push_back(6); // ��ӵ�����ĩβ
    for(int n:v5) { cout<<n<<' '; } cout<<endl; // ����� 1 2 5 3 3 3 4 4 4 4 6
    v5.pop_back(); // �Ƴ�ĩβԪ��
    for(int n:v5) { cout<<n<<' '; } cout<<endl; // ����� 1 2 5 3 3 3 4 4 4 4


    return 0;
}
