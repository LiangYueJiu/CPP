#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Worker {
    public:
    Worker(string name, int salary) {
        this->m_Name = name;
        this->m_Salary = salary;
    }

    string m_Name;
    int m_Salary;
};

void printVector(vector<Worker> &v) {
    for (vector<Worker>::iterator it = v.begin(); it < v.end(); it++) {
        cout << "姓名：" << it->m_Name << " 薪资：" << it->m_Salary << endl;
    }
}

void creatWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++) {
        v.push_back(Worker(string("员工") + nameSeed[i], rand()% 10001 + 3000));
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
    for(vector<Worker>::iterator it = v.begin(); it < v.end(); it++) {
        int deptID = rand() % 3 + 1;
        m.insert(make_pair(deptID, *it));
    }
}

void showWorkerByGroup(multimap<int, Worker> &m) {
    for (int i = 1; i <= 3; i++) {
        switch (i)
        {
        case 1:
            cout << "策划部门：" << endl;
            break;
        case 2:
            cout << "美术部门：" << endl;
            break;
        case 3:
            cout << "研发部门：" << endl;
            break;
        default:
            break;
        }
        int count = m.count(i);
        multimap<int, Worker>::iterator pos = m.find(i);
        for(; count > 0; count--) {
            cout << pos++->second.m_Name << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<Worker> vWorker;
    creatWorker(vWorker);
    // printVector(vWorker);
    multimap<int, Worker> mWorker;
    setGroup(vWorker, mWorker);
    showWorkerByGroup(mWorker);
    return 0;
}
