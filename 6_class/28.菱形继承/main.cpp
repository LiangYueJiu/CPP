#include <iostream>
using namespace std;

class Animal{
    public:
    int m_Age;
};

class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test01() {
    SheepTuo st;
    st.m_Age = 18;
    cout << st.m_Age << endl;
    st.Sheep::m_Age = 20;
    cout << st.m_Age << endl;
    cout << st.Sheep::m_Age << endl;
    cout << st.Tuo::m_Age << endl;
}

int main(){
    test01();

    return 0;
}