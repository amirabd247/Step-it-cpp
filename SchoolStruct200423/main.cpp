#include <iostream>
using namespace std;

struct pupil{
    char* name{};
    bool* grades{};

    int average() {
        int sum = 0;
        for (int i = 0; i < 10; ++i) {
            sum += bool(grades[i]);
        }
        return (sum / 10) * 100;
    }

    void showpupil() {
        cout << "Name: " << name << endl;
        cout << "GPA: " << average() << endl;

    };
};

struct School{

    uint16_t schoolCapacity{10};
    uint16_t schoolCount{};
    pupil* pupils = new pupil[]{};

    pupil doPupil(){

        pupil* Pupil = new pupil{};

        Pupil->name = new char[20]{};
        Pupil->grades = new bool[10]{};

        getchar();

        cout << "Enter pupils name: ";
        cin.getline(Pupil->name, 20);

        cout << "Enter the grade - 1 or 0";
        int grade{};
        for (int i = 0; i < 10; ++i)
        {
            cin >> grade;
            Pupil->grades[i] = bool(grade);
        }

        return *Pupil;

    }

    void addPupil() {
        if (schoolCount < schoolCapacity) {
            pupils[schoolCount] = doPupil();
            schoolCount++;
        }
        else {
            cout << "School is full" << endl;
        }
    }
    void showPupils() {
        for (size_t i = 0; i < schoolCount; i++) {
            pupils[i].showpupil();
        }
    }

    void showGrades(int number){

        for (int i = 0; i < 10; ++i)
        {
            cout << pupils[number].grades[i] << endl;
        }

    }

    void showLended(){
        for (int i = 0; i < schoolCapacity; ++i) {
            if(pupils[i].average() < 50){
                for (int i = 0; i < 10; ++i)
                {
                    cout << pupils[i].grades[i] << endl;
                }
            }
        }
    }



};

int main() {

    School* school = new School{};

    int pupilnumber{};

    while(true)
    {
        int choice{};
        cout
                << "Enter choice: " << endl
                << "1. Add pupil" << endl
                << "2. Show all pupils" << endl
                << "3. Show grades of pupil" << endl
                << "4. Show lended pupils" << endl
                << "5. End" << endl;

        cin >> choice;

        if(choice == 5){
            break;
        }

        switch (choice)
        {
            case 1:
                school->addPupil();
                break;
            case 2:
                school->showPupils();
                break;
            case 3:
                cout << "Enter the number of pupil" << endl;
                cin >> pupilnumber;
                school->showGrades(pupilnumber);
                break;
            case 4:
                school->showLended();
                break;
            case 5:
                break;
        }
    }
    return 0;
}
