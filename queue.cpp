#include "queue.hpp"
std::string Queue::add(Job job){for(auto& j:jobs)if(j.id==job.id)return "CONFLICT";jobs.push_back(job);return "ADDED";}
