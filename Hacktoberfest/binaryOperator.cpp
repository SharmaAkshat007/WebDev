#include<iostream>

using namespace std;


class Overloading{
  int x;
public:
//  Overloading(){}
  Overloading(int x = 0){
    this->x=x;
  }
  Overloading operator +(Overloading ob){
    Overloading temp;
    temp.x = x + ob.x;

    return temp;

  }

  void displaY(){
    cout<<"Values"<<endl;
    cout<<x<<endl;
  }

  friend Overloading operator - (Overloading ob, Overloading ob1);

};
Overloading operator - (Overloading ob, Overloading ob1){

  Overloading temp;

  temp.x = ob.x - ob1.x;

  return temp;
}


int main(){
  Overloading ob(1); Overloading ob1(2);
  Overloading ob2;
  ob2 = ob.operator + (ob1);

  ob.displaY();
  ob1.displaY();
  ob2.displaY();

  ob2 = operator - (ob1, ob);
  ob2.displaY();

  return 0;
}
