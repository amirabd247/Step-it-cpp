
#include <iostream>
using namespace std;


enum gender
{
    MALE = 1,
    FEMALE
};



gender GenderSelection()
{

    int genderselect{};

    cout << "Select gender: " << endl;
    cout << "1.Male: " << endl;
    cout << "2.Female " << endl;

    cin >> genderselect;
    return (gender)genderselect;

}

gender showGender(gender genderselect)
{
    switch(genderselect)
    {
        case MALE:
            cout << "male" << endl;
            break;
        case FEMALE:
            cout << "female" << endl;
            break;
    }
}

struct animal
{
    char* name{};
    uint16_t age{};
    gender sex{};

    void showAnimal(){
        cout << "Name" << name << endl;
        cout << "Age" << age << endl;
        showGender(sex);
    }
};



struct Zoo{
    char* name{};
    uint16_t animalCapacity{10};
    uint16_t animalCount{};

    animal *animals = new animal[animalCapacity]{};


    animal doAnimal(){

        animal *Animal = new animal{};

        Animal->name = new char[20]{};

        getchar();

        cout << "Enter the name of Animal" << endl;
        cin.getline(Animal->name,20);



        cout << "Enter the age" << endl;
        cin >> Animal->age;

        cout << "Enter the gender";
        Animal->sex = GenderSelection();
        return *Animal;
    }
    void addAnimal()
    {
        if (animalCount < animalCapacity) {
            animals[animalCount] = doAnimal();
            animalCount += 1;
        }
        else
        {
            cout << "Zoo is full" << endl;
        }
    }
    void showAnimals(){
        for (int i = 0; i < animalCount; ++i)
        {
            animals[i].showAnimal();

        }
    }
    animal* editanimal(animal*& arr,int number)
    {

        cout << "Enter the name";
        getchar();
        cin.getline(arr[number].name,20);

        cout << "Enter the age";
        cin >> arr[number].age;

        cout << "Enter the gender";
        arr[number].sex =GenderSelection();

        return arr;
    }
    animal* deleteanimal(animal*& arr,int number)
    {

        animal* newarr = new animal[animalCount - 1]{};
        animal* tmp = new animal[animalCount- 1]{};

        for (int i = 0,j = 0; i < 10; ++i,++j) {
            if(i == number){
                i += 1;
            }
            tmp[j] = arr[i];

        }
        delete[] arr;
        for (int i = 0; i < 10; ++i)
        {
            newarr[i] = tmp[i];
        }
        return newarr;
    }

};

int main() {

    Zoo* zoo = new Zoo{};
    int editchoice{};
    int deletednumber{};
    while(true)
    {
        int choice2{};
        cout
                << "Enter choice: " << endl
                << "1. Add animal" << endl
                << "2. Show animals" << endl
                << "3. Edit" << endl
                << "4. Delete" << endl
                << "5.End" << endl;

        cin >> choice2;
        if(choice2 == 5){
            break;
        }
        switch (choice2)
        {
            case 1:
                zoo->addAnimal();
                break;
            case 2:
                zoo->showAnimals();
                break;
            case 3:
                getchar();
                cout << "Enter the number of edited animal" << endl;
                cin >> editchoice;
                zoo->editanimal(zoo->animals, editchoice);
                break;
            case 4:
                cout << "Enter the number of deleted" << endl;
                cin >> deletednumber;
                zoo->deleteanimal(zoo->animals,deletednumber);
                break;
            default:
                break;
        }
    }
    return 0;
}