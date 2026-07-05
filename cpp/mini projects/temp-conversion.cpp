#include<iostream>

int main() {
    char  unit;
    double temp;

    std::cout<<"enter the unit u want to convert into \n";
    std::cout<<"convert into F \n";
    std::cout<<"convert into C\n";
    std::cin>> unit;
    std::cout<<"enter temp \n";
    std::cin>> temp;

    if(unit=='F'||unit=='f'){ temp = (1.8 * temp)+ 32;
        std::cout<< temp ;

    }
    else if (unit== 'C' || unit=='c')
    { temp = (temp - 32)/1.8;
        std::cout<< temp ;
      
    }
    



    return 0;
}
