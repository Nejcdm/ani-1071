#include <iostream>
int main()
{
char nom[30];
  char ville[30];
std::cout<<"entrer votre nom \n" ;
std::cin.getline(nom,30);
  std::cout<<"entrer votre ville \n" ;
std::cin.getline(ville,30);
std::cout<<nom<<"\n";
std::cout<<ville<<"\n";
return 0 ;
}
