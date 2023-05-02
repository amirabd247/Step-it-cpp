#include <iostream>
using namespace std;

struct system_block{

    char* name{};
    int size{};

};

struct power_unit{

    char* name{};
    int power{};

};

struct mother_board{

    char* name{};
    int size{};

};

struct ram{

    char* name{};
    int ddr_module{};

};

struct gpu{

    char* name{};
    int graphic_memory{};

};

struct cpu{

    char* name{};
    int frequency{};

};

struct Computer{

    system_block sb;
    power_unit pwru;
    mother_board mb;
    ram ozu;
    gpu videocard;
    cpu processor;


    void DoSystemBlock(){
        sb.name = new char[10]{};
        cout << "Enter the model name for system block->" << endl;
        getchar();
        cin.getline(sb.name,10);

        cout << "Enter the size of sytem block->" << endl;
        cin >> sb.size;

    }

    void DoPowerUnit(){

        if(sb.name == 0)
        {
            cout << "Enter the System Block first" << endl;
            return;
        }
        pwru.name = new char[10]{};
        cout << "Enter the model name for power unit->" << endl;
        getchar();
        cin.getline(pwru.name,10);

        cout << "Enter the power amount->" << endl;
        cin >> pwru.power;

    }

    void DoMotherBoard(){
        if(sb.name == 0)
        {
            cout << "Enter the System Block first" << endl;
            return;
        }
        if(pwru.name == 0)
        {
            cout << "Enter the PowerUnit first" << endl;
            return;
        }
        mb.name = new char[10]{};
        cout << "Enter the model name for motherboard->" << endl;
        getchar();
        cin.getline(mb.name,10);

        cout << "Enter the size of motherboard->" << endl;
        cin >> mb.size;

    }

    void DoRam(){
        if(sb.name == 0)
        {
            cout << "Enter the System block first" << endl;
            return;
        }
        if(mb.name == 0)
        {
            cout << "Enter the Motherboard first" << endl;
            return;
        }
        ozu.name = new char[10]{};
        cout << "Enter the model name for RAM->" << endl;
        getchar();
        cin.getline(ozu.name,10);

        cout << "Enter the ddr module of RAM->" << endl;
        cin >> ozu.ddr_module;

    }

    void DoGPU(){

        if(sb.name == 0)
        {
            cout << "Enter the System Block first" << endl;
            return;
        }
        if(mb.name == 0)
        {
            cout << "Enter the Motherboard first" << endl;
            return;
        }
        videocard.name = new char[10]{};
        cout << "Enter the model name for GPU->" << endl;
        getchar();
        cin.getline(videocard.name,10);

        cout << "Enter the size of graphic memory->" << endl;
        cin >> videocard.graphic_memory;

    }

    void DoCPU(){
        if(sb.name == 0)
        {
            cout << "Enter the system block first" << endl;
            return;
        }
        if(mb.name == 0)
        {
            cout << "Enter the Motherboard first" << endl;
            return;
        }
        processor.name = new char[10]{};
        cout << "Enter the model name for CPU->" << endl;
        getchar();
        cin.getline(processor.name,10);

        cout << "Enter the frequence of CPU->" << endl;
        cin >> processor.frequency;

    }

};

int main() {

    Computer *personal_computer = new Computer{};

    while (true) {


        int choice{};
        cout
                << "Enter choice: " << endl
                << "1. Add System Block" << endl
                << "2. Add Power Unit" << endl
                << "3. Add MotherBoard" << endl
                << "4. Add RAM" << endl
                << "5. Add GPU" << endl
                << "6. Add CPU" << endl
                << "7. END" << endl;

        cin >> choice;

        if (choice == 7) {
            break;
        }

        switch (choice)
        {
            case 1:
                personal_computer->DoSystemBlock();
                break;
            case 2:
                personal_computer->DoPowerUnit();
                break;
            case 3:
                personal_computer->DoMotherBoard();
                break;
            case 4:
                personal_computer->DoRam();
                break;
            case 5:
                personal_computer->DoGPU();
                break;
            case 6:
                personal_computer->DoCPU();
                break;
        }
    }
        return 0;
}
