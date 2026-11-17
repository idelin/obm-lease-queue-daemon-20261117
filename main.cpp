#include "queue.hpp"
#include <iostream>
#include <sstream>
int main(int argc,char** argv){
    if(argc!=2)return 2;Queue queue;std::string line;
    while(std::getline(std::cin,line)){
        std::istringstream s(line);std::string op;s>>op;
        if(op=="ADD"){Job j;s>>j.id>>j.group>>j.priority;std::cout<<"{\"result\":\""<<queue.add(j)<<"\"}\n";}
        else std::cout<<"{\"error\":\"UNSUPPORTED\"}\n";
        std::cout.flush();
    }
}
