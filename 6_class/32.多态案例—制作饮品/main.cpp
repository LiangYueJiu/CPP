#include <iostream>
using namespace std;

class AbstracDrink{
    public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSth() = 0;

    void Make() {
        Boil();
        Brew();
        PourInCup();
        PutSth();
    }
};

class CoffeeDrink : public AbstracDrink {
    virtual void Boil() {
        cout << "煮矿泉水" << endl;
    }

    virtual void Brew() {
        cout << "冲泡咖啡" << endl;
    }

    virtual void PourInCup() {
        cout << "倒入杯中" << endl;
    } 

    virtual void PutSth() {
        cout << "加糖和牛奶" << endl;
    }
};

class TeaDrink : public AbstracDrink {
    virtual void Boil() {
        cout << "煮饮用水" << endl;
    }

    virtual void Brew() {
        cout << "冲泡茶叶" << endl;
    }

    virtual void PourInCup() {
        cout << "倒入杯中" << endl;
    } 

    virtual void PutSth() {
        cout << "加柠檬" << endl;
    }
};

void doWork(AbstracDrink &abs) {
    abs.Make();
    delete &abs;
}
void test() {
    doWork(*new TeaDrink);
}

int main() {
    test();
    return 0;
}