#include <iostream>
using namespace std;

class BasePage{
    public:
    void header() {
        cout << "首页、公开课、登录、注册。。。（公共头部）" << endl;
    }

    void footer() {
        cout << "帮助中心、合作交流、站内地图。。。（公共底部）" << endl;
    }

    void left() {
        cout << "Java、Python、C++。。。（公共分类列表）" << endl;
    }
};

class Java : public BasePage {
    public:
    void content() {
        cout << "Java 学科视频" << endl;
    }
};

class Python : public BasePage {
    public:
    void content() {
        cout << "Python 学科视频" << endl;
    }
};

class CPP : public BasePage {
    public:
    void content() {
        cout << "CPP 学科视频" << endl;
    }
};

void test01() {
    CPP cpp;
    cpp.header();
    cpp.content();
    cpp.left();
    cpp.footer();
}

int main(){
    test01();

    return 0;
}