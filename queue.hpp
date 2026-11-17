#pragma once
#include <string>
#include <vector>
struct Job {std::string id, group, command; int priority=0;};
class Queue {public: std::vector<Job> jobs; std::string add(Job job);};
