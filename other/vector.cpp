# include <iostream>
# include <vector>
using namespace std;

int main(void){

    vector<int> v, v2;

    /*
    operator=
    */
    v = {1, 2, 3, 4, 5}; // ��ֵ

    /*
    assignԭ��:
    */

    cout<< v.at(0) <<endl; // ����ָ����Ԫ�أ������ 2
    cout<< v.at(5); // ����Խ���飬����� out_of_range



    return 0;
}
