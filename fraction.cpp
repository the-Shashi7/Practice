class fraction{
  private:
      int numerator;
      int denominator;
  public:

    fraction(int numerator, int denominator){
        this->numerator =numerator;
        this->denominator = denominator;
    }

    void display(){
        cout<<this->numerator<<" / "<<this->denominator<< endl ;
    }
    

    void add(fraction f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int num = x*numerator + (y*f2.numerator);

        numerator = num;
        denominator = lcm;

        simply();
    }
    void simply(){
        int gcd=1;
        int j = min(this->numerator,this->denominator);
        for(int i=1; i<=j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
    void multi(fraction const &f2){                 //const term use to make variable can only read the value... 
        numerator=numerator*f2.numerator;
        denominator= denominator*f2.denominator;

        simply();
    }

};
