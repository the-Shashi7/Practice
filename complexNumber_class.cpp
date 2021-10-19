class complexNumber
{
private:    int real;
            int imaginary;
            int choose;
public:
    complexNumber(int real,int imaginary){
        this->real = real;
        this->imaginary=imaginary;
    }
    void display(){
        cout<<this->real<<" + "<<this->imaginary<<"i"<<endl;
    }
    void multi(complexNumber c2){
        this->real=this->real*c2.real;
        this->imaginary=this->imaginary*c2.imaginary;
    }
    void add(complexNumber c2){
        this->real=this->real+c2.real;
        this->imaginary=this->imaginary+c2.imaginary;
    }

};
