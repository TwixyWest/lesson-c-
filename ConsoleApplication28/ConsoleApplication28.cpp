
//#include <iostream>
//#include <fstream>
//#include<string>
//
//using namespace std;
//
//void write(string & file, string text) {
//    fstream obj;
//    obj.open(file, ios::out);
//    obj << text << endl;
//
//    obj.close();
//}
//void write(string& file, string text) {
//    fstream obj;
//
//}
//
//int main()
//{
//    fstream obj;
//    obj.open("ITSTEP.txt", ios::out);
//    obj << "HELLO IT STEP AND WORLD" << endl;
//    obj.close();
//  
//    obj.open("ITSTEP.txt", ios::in);
//    string txt;
//    while (getline(obj, txt)) {
//        cout << txt;
//    }
//    obj.close();
//}



//#include <iostream>
//#include <fstream>
//#include <cstdlib> 
//#include <ctime>   
//using namespace std;
//
//void randN(string& file) {
//    fstream obj;
//    obj.open(file, ios::out);
//
//    if (obj.is_open()) {
//        srand(time(0));
//        for (int i = 0; i < 10; i++) {
//            int number = rand() % 100; 
//            obj << number << " ";
//        }
//        obj.close();
//        cout << "number was written in file" << endl;
//    }
//    else {
//        cout << "error when we trying open file" << endl;
//    }
//}
//
//int main() {
//    string filename = "C:\\numbers.txt";
//    randN(filename);
//}


#include <iostream>
#include <fstream>
using namespace std;


struct Student {
    int age;    
    bool loveCPlusPlus;

    
    void wfile(fstream& file) {
        file << "Age: " << age << ",  Love C++: ";
        if (loveCPlusPlus) {
            file << "Yes";
        }
        else {
            file << "No";
        }
        file << endl;
    }
};

int main() {
    string filename = "C:\\students.txt";
    fstream file;
    file.open(filename, ios::out);

    if (file.is_open()) {
        
        Student s1 = { 16, true };
        s1.wfile(file);

        
        Student group[3] = {
            {14, true},
            {15, false},
            {16, true}
        };


        for (int i = 0; i < 3; i++) {
            group[i].wfile(file);
        }

        file.close();
        cout << "dani for student was written to file" << endl;
    }
    else {
        cout << "we cannt open file" << endl;
    }

}