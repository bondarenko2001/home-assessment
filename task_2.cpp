#include <iostream>
using namespace std;

 
int main()
{

  //1
    // setlocale(0, "");
    double num;

    cout << "Введите произвольное число: ";
    cin >> num;

    if (num < 0) // Если введенное число меньше 0.
        cout << "Это число меньше 0." << endl;
    else if (num == 0)
        cout << "Это число равно 0." << endl;
    else  // иначе
        cout << "Это число больше 0." << endl;
        
//2
char str1[50], str2[50];
    int i=0, chk=0;
    cout<<"Enter the First String: ";
    cin>>str1;
    cout<<"Enter the Second String: ";
    cin>>str2;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if(chk==0)
        cout<<"\nStrings are Equal";
    else
        cout<<"\nStrings are not Equal";
    cout<<endl;

// 3
float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;
  
    return 0;

}



