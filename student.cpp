class student
{   
    public:
    int rollNumber;

    private:
    int age;

    public:
    student(){     //default contractor
        cout<<"constractor 1st"<<endl;
    }

    student(int r){  // Parameterized Constructor
    cout<<"parametrized constructor 2"<<endl;
    rollNumber = r;
    }

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }
    int setAge(int a){
        age = a;
    }

    student(int rollNumber,int age){
        this->rollNumber=rollNumber;
        this->age=age;
    }
};
