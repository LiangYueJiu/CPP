#include <iostream>
using namespace std;

class CPU {
    public:
    virtual void calculate() = 0;
};


class GPU {
    public:
    virtual void display() = 0;
};

class RAM {
    public:
    virtual void storage() = 0;
};

class IntelCPU : public CPU {
    public:
    void calculate() override {
        cout << "Intel CPU 正在工作" << endl;
    }
};

class IntelGPU :  public GPU {
    public:
    void  display() override {
        cout << "Intel GPU 正在工作" << endl;
    }
};

class IntelRAM : public RAM {
    public:
    void storage() override {
        cout << "Intel RAM 正在工作" << endl;
    }
};

class AMDCPU : public CPU {
    public:
    void calculate() override {
        cout << "AMD CPU 正在工作" << endl;
    }
};

class AMDGPU :  public GPU {
    public:
    void  display() override {
        cout << "AMD GPU 正在工作" << endl;
    }
};

class AMDRAM : public RAM {
    public:
    void storage() override {
        cout << "AMD RAM 正在工作" << endl;
    }
};


class Computer{
    public:
    Computer(CPU &cpu, GPU &gpu, RAM &ram) : m_Cpu(&cpu), m_Gpu(&gpu), m_Ram(&ram) {}
    ~Computer() {
        if (m_Cpu != NULL) {
            delete m_Cpu;
            m_Cpu = NULL;
        }

        if (m_Gpu != NULL) {
            delete m_Gpu;
            m_Gpu = NULL;
        }

        if (m_Ram != NULL) {
            delete m_Ram;
            m_Ram = NULL;
        }
    }

    void doWork() {
        m_Cpu->calculate();
        m_Gpu->display();
        m_Ram->storage();
    }

    private:
    CPU *m_Cpu;
    GPU *m_Gpu;
    RAM *m_Ram;
};

void test() {
    CPU *cpu = new IntelCPU;
    GPU *gpu = new AMDGPU;
    RAM *ram = new AMDRAM;
    Computer c1(*cpu, *gpu, *ram);
    c1.doWork();
}

int main() {
    test();
    return 0;
}