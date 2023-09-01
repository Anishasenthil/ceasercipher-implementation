#include<iostream>
using namespace std;
int main()
{
    int z=0,i=0,key=0,y=0,j=0,l=0,len=0;
    char str1[40];
    char arr2[40];
    char arr1[40];
    char k;
    char m;
    int h=0,choice = 0;
    cout << "Enter the string " << endl;
    gets(str1);
    while(str1[len++] != '\0') ;
    len--;
    cout<<"Do you want to do encryption[0] or decryption[1] ?"<<endl;
    cin>>choice;
    cout<<"Enter key ";
    cin>>key;
    if(choice == 1)
    {
      for(i=0;i<len;i++)
      {
        h=str1[i];
        if((h>= 65 && h<=90)||(h==32))//capital letter decrypt
        {
            if(h != 32)
            {
                if(h-key<65)
                    m=h-key+26;
                else
                    m=h-key;
                arr2[l++]=m;
            }
            else
            {
                arr2[l++]= ' ';//checking for blank spacee
            }
        }
        if((h >= 97 && h<= 122)||(h==32))//small letter decrypt
        {
            if(h != 32)
            {
                if(h-key<97)
                    m=h-key+26;
                else
                    m=h-key;
                arr2[l++]=m;
            }

        }
        if((h >= 48 && h<= 57)||(h==32))// numbers decrypt
        {
            if(h!=32)
            {
                if(h-key<48)
                    m=h-key+10;
                else
                    m=h-key;
                arr2[l++]=m;

            }
        }

    }
        arr2[l]='\0';
        cout<< "Decrypted word  is " << " = >  "<<arr2<<endl;
    }
    if(choice == 0)
    {
      for(i=0;i<len;i++)
      {
         z=str1[i];
         if((z>= 65 && z<=90)||(z==32))//capital letter encrypt
         {
            if(z != 32)
            {
              if(z+key >90)
                k=z+key-26;
              else
                 k=z+key;
              arr1[j++]=k;
            }
            else
            {
                 arr1[j++]=' ';//checking for blank spacee
            }

         }
         if((z >= 97 && z<= 122)||(z==32))//small letter encrypt
         {
            if(z != 32)
            {
              if(z+key >122)
              {
                 k=z+key-26;
              }
              else
              {
                k=z+key;
              }
              arr1[j++]=k;
            }

         }
         if((z>= 48 && z<= 57 )||(z==32))//numbers encrypt
         {
             if(z!=32)
             {
                 if(z+key > 57)
                 {
                     k=z+key-10;
                 }
                 else
                 {
                     k=z+key;
                 }
                 arr1[j++]=k;
             }
         }

      }
        arr1[j]='\0';
        cout<<"Encrypted word is " << " =>  "<<arr1<<endl<<endl;
    }
    return(0);
}
