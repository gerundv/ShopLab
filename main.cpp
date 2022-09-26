#include <iostream>
#include <fstream>

#define LOG_TRACE Logger Logger(__FILE__, __FUNCTION__, __LINE__);

class Logger {
public:
    Logger(const char* fileName, const char* funcName, int lineNumber){
        std::ofstream foofile("log.txt", std::ios_base::app);
        _fileName = fileName;
        _funcName = funcName;
        std::cout << "Entering " << _funcName << "() - (" << _fileName << ":" << lineNumber << ")" << std::endl;
        foofile << "Entering " << _funcName << "() - (" << _fileName << ":" << lineNumber << ")\n";
        foofile.close();
    };
    ~Logger(){ };

private:
    const char* _fileName;
    const char* _funcName;
    static std::string Indent;
};

class DAO{
public:
    void Create(int Id,std::string Login){
        std::ofstream Datafile("data.txt", std::ios_base::app);
        Datafile << Id << " " << Login;
        Datafile.close();
    }

    void GetAll(){
        std::ifstream  Datafile("data.txt");
        std::string str;
        while(getline(Datafile,str)){
            std::cout << str << std::endl;
        }
        Datafile.close();
    }

    void GetById(){
        std::ifstream  Datafile("data.txt");

        Datafile.close();
    }

    void Update(){
        std::ofstream Datafile("data.txt", std::ios_base::app);

        Datafile.close();
    }

    void Delete(){
        std::ofstream Datafile("data.txt", std::ios_base::app);

        Datafile.close();
    }
};

void foo() {
    //LOG_TRACE;
}

int main() {
    //foo();
    DAO DateFile;
    DateFile.Create(1,"avdeev");
    return 0;
}