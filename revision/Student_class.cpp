class Fraction {
    private:
        int numerator;
        int denomenator;
    public:
        Fraction(int numerator, int denomenator){
            this->numerator = numerator;
            this->denomenator = denomenator;
        }

    void Print(){
       cout<< this->numerator <<"/"<< this->denomenator <<endl;
    }

    int min(int a,int b){
        return a>b? b:a;
    }

    void simplify(){
        int gcd = 1;
        int j = min(this->numerator,this->denomenator);
        for (int i = 1; i <= j; i++){
            if(this->numerator%i== 0 && this->denomenator == 0 ){
                gcd = i ;
            }
        }
        this->denomenator = this->denomenator/gcd;
        this->numerator = this->numerator/gcd;
    }

    void add(Fraction f2){
        int lcm = denomenator *f2.denomenator;
        int x = lcm / denomenator;
        int y = lcm / f2.denomenator;

        int num = x*numerator + (y*f2.numerator);

        numerator = num;
        denomenator = lcm;
        
        simplify();
    }
};

class Student {
    int age;
    string  name;

    public:
        Student(int age, string name){
            this->age = age;
            this->name = name;
        }
    void Display(){
        cout<<age<<" "<<name<<endl;
    }
};