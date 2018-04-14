//
// Created by jbmdu on 14/04/2018.
//

#ifndef UNTITLED_GLOBAL_H
#define UNTITLED_GLOBAL_H


typedef std::function<void(void)> Job;

class Global {
    std::vector<Job> d_jobs;
public:
    void addJob(Job job) {
        d_jobs.push_back(job);
    }
    void run(){
        for(auto j : d_jobs){
            j();
        }
    }
};


#endif //UNTITLED_GLOBAL_H
