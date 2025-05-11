#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>

class PmergeMe
{
    private:
        bool pair;
        int unpair;
        std::vector<int> _MainChainVector;
        std::deque<int> _MainChainDeque;
        std::vector<std::pair<int,int> > _Mvect;
        std::deque<std::pair<int,int> > _Mdeq;
    public:
        PmergeMe();
        PmergeMe(int size,char **av);
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        void fordJohsonSortVector();
        std::vector<std::pair<int,int> > mergeSort(std::vector<std::pair<int,int> >&larg);
        std::vector<std::pair<int,int> > sortlist(std::vector<std::pair<int,int> >&left,std::vector<std::pair<int,int> >&right);
        std::vector<int> fillMainChain();
        std::vector<int> fillPendChain();
        std::vector<int> generetlist(size_t n);
        std::vector<int>::iterator my_lower_bound(std::vector<int>& lst, int value);
        void printSortVector();

        void fordJohsonSortDeque();
        std::deque<std::pair<int,int> > mergeSort(std::deque<std::pair<int,int> >&larg);
        std::deque<std::pair<int,int> > sortlist(std::deque<std::pair<int,int> >&left,std::deque<std::pair<int,int> >&right);
        std::deque<int> fillMainChain(int);
        std::deque<int> fillPendChain(int);
        std::deque<int> generetlist(size_t n,int);
        std::deque<int>::iterator my_lower_bound(std::deque<int>& lst, int value,int);
        void printSortDeque(int);
};
#endif