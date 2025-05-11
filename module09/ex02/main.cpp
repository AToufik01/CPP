#include "PmergeMe.hpp"
#include <sys/time.h>
int main(int arc,char **arv) {
    PmergeMe Pmerge(arc,arv);
    struct timeval start,end;
    gettimeofday(&start,NULL); 
    Pmerge.fordJohsonSortVector();
    gettimeofday(&end,NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    long duration1 = seconds * 1000000 + microseconds;
    gettimeofday(&start,NULL); 
    Pmerge.fordJohsonSortDeque();
    gettimeofday(&end,NULL);
    seconds = end.tv_sec - start.tv_sec;
    microseconds = end.tv_usec - start.tv_usec;
    long duration = seconds * 1000000 + microseconds;
    std::cout <<"After:   ";
    Pmerge.printSortDeque(1);
    // Pmerge.printSortVector();
    std::cout <<"Time to process a range of "<< (arc - 1) <<" elements with std::vector : "<<duration1<<" us"<<std::endl;
    std::cout <<"Time to process a range of "<< (arc - 1) <<" elements with std::deque : "<<duration<<" us"<<std::endl;
    return (0);
}