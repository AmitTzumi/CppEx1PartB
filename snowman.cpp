#include "snowman.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <cmath>

constexpr int TEN = 10;
constexpr int EIGHT = 8;
constexpr int SEVEN = 7;
constexpr int SIX = 6;
constexpr int FIVE = 5;


using namespace std;
namespace ariel{
    string snowman(int i){
        int temp = i;
        int len=0;
        while(temp>0){
            temp=temp/TEN;
            len++;
        }
            if(len!=EIGHT){
                throw invalid_argument("invalid length\n"); 
            }
        /*catch (const invalid_argument& e)
        {
            cout << e.what();
            return "";
        }
        */
        int hat = static_cast<int>(i/(pow(TEN,SEVEN)));
        int nose = static_cast<int>(i/(pow(TEN,SIX)));
        nose = nose%TEN;
        int lefteye = static_cast<int>(i/(pow(TEN,FIVE)));
        lefteye = lefteye%TEN;
        int righteye = static_cast<int>(i/(pow(TEN,4)));
        righteye = righteye%TEN;
        int leftarm = static_cast<int>(i/(pow(TEN,3)));
        leftarm = leftarm%TEN;
        int rightarm = static_cast<int>(i/(pow(TEN,2)));
        rightarm = rightarm%TEN;
        int torso = i/TEN;
        torso = torso%TEN;
        int base = i%TEN;
        //try{
            if (!( (hat>=1) && (hat<=4)) ){
                throw invalid_argument("invalid hat parameter\n");
            }
            if (!( (nose>=1) && (nose<=4)) ){
                throw invalid_argument("invalid nose parameter\n");
            }
            if (!( (lefteye>=1) && (lefteye<=4)) ){
                throw invalid_argument("invalid lefteye parameter\n");
            }
            if (!( (righteye>=1) && (righteye<=4)) ){
                throw invalid_argument("invalid righteye parameter\n");
            }
            if (!( (leftarm>=1) && (leftarm<=4)) ){
                throw invalid_argument("invalid leftarm parameter\n");
            }
            if (!( (rightarm>=1) && (rightarm<=4)) ){
                throw invalid_argument("invalid rightarm parameter\n");
            }
            if (!( (torso>=1) && (torso<=4)) ){
                throw invalid_argument("invalid torso parameter\n");
            }
            if (!( (base>=1) && (base<=4)) ){
                throw invalid_argument("invalid base parameter\n");
            }
           // }
        /*catch (const invalid_argument& e)
        {
            cout << e.what();
            return "";
        }
        */
        string str;
        str.append(Hat(hat));
        str.append(LeftArmUp(leftarm));
        str.append(LeftEye(lefteye));
        str.append(NoseOrMouth(nose));
        str.append(RightEye(righteye));
        str.append(RightArmUp(rightarm));
        str.append(LeftArmDown(leftarm));
        str.append(Torso(torso));
        str.append(RightArmDown(rightarm));
        str.append(Base(base));
        return str;
    }

    string Hat(int i){
        string temp;
        if(i==1){
            //cout << "      \n _===_\n";
            temp = "\n _===_\n";
        }
        if(i==2){
            //cout << "  ___ \n .....\n";
            temp = "  ___ \n .....\n";
        }
        if(i==3){
            //cout << "   _  \n  /_\\ \n";
            temp = "   _  \n  /_\\\n";
        }
        if(i==4){
            //cout << "  ___ \n (_*_)\n";
            temp = "  ___ \n (_*_)\n";
        }
        return temp;
    }

    string NoseOrMouth(int i){
        string temp;
        if(i==1){
            //cout << ",";
            temp = ",";
        }
        if(i==2){
            //cout << ".";
            temp = ".";
        }
        if(i==3){
            //cout << "_";
            temp = "_";
        }
        if(i==4){
            //cout << "";
            temp = " ";
        }
        return temp;
    }

    string LeftEye(int i){
        string temp;
        if(i==1){
            //cout << ".";
            temp = ".";
        }
        if(i==2){
            //cout << "o";
            temp = "o";
        }
        if(i==3){
            //cout << "O";
            temp = "O";
        }
        if(i==4){
            //cout << "-";
            temp = "-";
        }
        return temp;
    }

    string RightEye(int i){
        string temp;
        if(i==1){
            //cout << ".";
            temp = ".";
        }
        if(i==2){
            //cout << "o";
            temp = "o";
        }
        if(i==3){
            //cout << "O";
            temp = "O";
        }
        if(i==4){
            //cout << "-";
            temp = "-";
        }
        return temp;
    }

    string LeftArmUp(int i){
        string temp;
        if(i==1){
            //cout << " (";
            temp = " (";
        }
        if(i==2){
            //cout << "\\(";
            temp = "\\(";
        }
        if(i==3){
            //cout << " (";
            temp = " (";
        }
        if(i==4){
            //cout << " (";
            temp = " (";
        }
        return temp;
    }

    string LeftArmDown(int i){
        string temp;
        if(i==1){
            //cout << "<(";
            temp = "<(";
        }
        if(i==2){
            //cout << " (";
            temp = " (";
        }
        if(i==3){
            //cout << "/(";
            temp = "/(";
        }
        if(i==4){
            //cout << " (";
            temp = " (";
        }
        return temp;
    }

    string RightArmUp(int i){
        string temp;
        if(i==1){
            //cout << ") \n";
            temp = ") \n";
        }
        if(i==2){
            //cout << ")/\n";
            temp = ")/\n";
        }
        if(i==3){
            //cout << ") \n";
            temp = ") \n";
        }
        if(i==4){
            //cout << ") \n";
            temp = ") \n";
        }
        return temp;
    }

    string RightArmDown(int i){
        string temp;
        if(i==1){
            //cout << ")>\n";
            temp = ")>\n";
        }
        if(i==2){
            //cout << ") \n";
            temp = ") \n";
        }
        if(i==3){
            //cout << ")\\\n";
            temp = ")\\\n";
        }
        if(i==4){
            //cout << ") \n";
            temp = ") \n";
        }
        return temp;
    }

    string Torso(int i){
        string temp;
        if(i==1){
            //cout << " : ";
            temp = " : ";
        }
        if(i==2){
            //cout << "] [";
            temp = "] [";
        }
        if(i==3){
            //cout << "> <";
            temp = "> <";
        }
        if(i==4){
            //cout << "   ";
            temp = "   ";
        }
        return temp;
    }

    string Base(int i){
        string temp;
        if(i==1){
            //cout << " ( : )\n";
            temp = " ( : )\n";
        }
        if(i==2){
            //cout << " (\" \")\n";
            temp = " (\" \")\n";
        }
        if(i==3){
            //cout << " (___)\n";
            temp = " (___)\n";
        }
        if(i==4){
            //cout << " (   )\n";
            temp = " (   )\n";
        }
        return temp;
    }
}

/*int main(){
    string str = ariel::snowman(11114411);
    cout << str;
    return 0;
    }
*/
    




