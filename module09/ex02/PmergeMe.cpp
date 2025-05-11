#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}
bool argdigit(std::string str)
{
    size_t i = 0;
    if (str[0]=='-')
        return false;
    if (str[0]=='+')
        i++;
    while (i < str.length())
    {
        if (!isdigit(str[i])) {
            return false;
        }
        i++;
    }
    return true;
}
PmergeMe::PmergeMe(int size,char **arv):pair(true),unpair(0)
{
    int first;
    int secand;
    int i = 1;
    while(i +1 < size) {
        if (argdigit(arv[i])) {
            first = std::atoi(arv[i]);
            secand = std::atoi(arv[i + 1]);
            if (first > secand) {
                this->_Mvect.push_back(std::make_pair(first,secand));
                this->_Mdeq.push_back(std::make_pair(first,secand));
            } else {
                this->_Mvect.push_back(std::make_pair(secand,first));
                this->_Mdeq.push_back(std::make_pair(secand,first));
            }
        } else {
            std::cerr<<"Error"<<std::endl;
            exit(0);
        }
        i+=2;
    }
    std::cout <<"Before:  ";
    std::cout<<"\n"<<this->_Mvect.size()<<std::endl;
    for (size_t i = 0; i < this->_Mvect.size(); i++) {
        std::cout<<" "<<this->_Mvect[i].second<<" "<<this->_Mvect[i].first;
    }
    
    if (size% 2 == 0) {
        this->pair = false;
        this->unpair = std::atoi(arv[size - 1]);
        std::cout <<" "<<this->unpair;
    }
    std::cout<<std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    (void)copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    (void)other;
    return (*this);
}

PmergeMe::~PmergeMe()
{

}
//--------------------sort vector-------------------------
std::vector<int>::iterator PmergeMe:: my_lower_bound(std::vector<int>& lst, int value) {
    std::vector<int>::iterator itlow = lst.begin();
    std::vector<int>::iterator ithigh = lst.end();
    while (itlow < ithigh)
    {
        std::vector<int>::iterator mid = itlow + (ithigh - itlow) / 2;
        if (*mid == value)
            return mid;
        else if (*mid < value)
            itlow = mid + 1;
        else
            ithigh = mid;
    }
    return itlow;
}
std::vector<int> PmergeMe:: generetlist(size_t n)
{
    std::vector<int> order;
    std::vector<int> jaco;
    jaco.push_back(0);
    jaco.push_back(1);
    if (n>=1)
         order.push_back(0);
    if (n>=2)
         order.push_back(1);
    size_t i = 2;
    while (i < n)
    {
        size_t value = jaco.back() + 2 *jaco.front();
        if (value > n)
            break;
        if (value == 1) {
            jaco.push_back(value);
            jaco.erase(jaco.begin());
            continue;
        }
        order.push_back(value);
        jaco.push_back(value);
        jaco.erase(jaco.begin());
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (std::find(order.begin(),order.end(),i)==order.end()) {
            std::vector<int >::iterator it = std::lower_bound(order.begin(), order.end(), i);
            if (it != order.end())it++;
            order.insert(it, i);
        }
        i++;
    }
    return order;
}
std::vector<std::pair<int,int> > PmergeMe:: sortlist(std::vector<std::pair<int,int> >&left,std::vector<std::pair<int,int> >&right)
{
    std::vector<std::pair<int,int> > result;
    size_t i = 0;
   size_t j = 0;
    while (i!=left.size() &&j!=right.size() )
    {
        if (left[i].first < right[j].first) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i!=left.size())
    {
        result.push_back(left[i]);
        i++;
    }
    while (j!=right.size() )
    {
        result.push_back(right[j]);
        j++;
    }
    return result;
}

std::vector<std::pair<int,int> > PmergeMe:: mergeSort(std::vector<std::pair<int,int> >&larg)
{
    if (larg.size()<=1) {
        return larg;
    }
    std::vector<std::pair<int,int> >::iterator mid = larg.begin();
    std::advance(mid, larg.size() / 2);
    std::vector<std::pair<int,int> > left (larg.begin(),mid);
    std::vector<std::pair<int,int> > right (mid,larg.end());
    right = mergeSort(right);
    left = mergeSort(left);
    return sortlist(left,right);
}
std::vector<int> PmergeMe:: fillMainChain()
{
    std::vector<int> mainchain;
    for (size_t i = 0; i < this->_Mvect.size(); i++) {
        mainchain.push_back(this->_Mvect[i].first);
    }
    return mainchain;
}
std::vector<int> PmergeMe:: fillPendChain()
{
    std::vector<int> pendant;
    for (size_t i = 0; i < this->_Mvect.size(); i++) {
        pendant.push_back(this->_Mvect[i].second);
    }
    return pendant;  
}
void    PmergeMe:: fordJohsonSortVector()
{
    std::vector<int>  PendChain;
    this->_Mvect = mergeSort(this->_Mvect);
    this->_MainChainVector = fillMainChain();
    PendChain = fillPendChain();
    std::vector<int> order_list = generetlist(PendChain.size());
    for (std::vector<int>::iterator it = order_list.begin();it != order_list.end();it++) {
        if (*it >= 0 && *it < (int)PendChain.size()) {
            int value  = PendChain[*it];
            std::vector<int>::iterator  pos = my_lower_bound(this->_MainChainVector, value);
            this->_MainChainVector.insert(pos, value);
        }
    }
    if (this->pair == false) {
        std::vector<int>::iterator  pos = my_lower_bound(this->_MainChainVector, unpair);
        this->_MainChainVector.insert(pos, this->unpair);
    }
}

//--------------------------------------------------
//-------------------------sort deque-------------------------

std::deque<int>::iterator PmergeMe:: my_lower_bound(std::deque<int>& lst, int value,int) {
    std::deque<int>::iterator itlow = lst.begin();
    std::deque<int>::iterator ithigh = lst.end();
    while (itlow < ithigh)
    {
        std::deque<int>::iterator mid = itlow + (ithigh - itlow) / 2;
        if (*mid == value)
            return mid;
        else if (*mid < value)
            itlow = mid + 1;
        else
            ithigh = mid;
    }
    return itlow;
}
std::deque<std::pair<int,int> > PmergeMe:: sortlist(std::deque<std::pair<int,int> >&left,std::deque<std::pair<int,int> >&right)
{
    std::deque<std::pair<int,int> > result;
    size_t i = 0;
    size_t j = 0;
    while (i!=left.size() &&j!=right.size() )
    {
        if (left[i].first < right[j].first) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i!=left.size())
    {
        result.push_back(left[i]);
        i++;
    }
    while (j!=right.size() )
    {
        result.push_back(right[j]);
        j++;
    }
    return result;
}
std::deque<std::pair<int,int> > PmergeMe:: mergeSort(std::deque<std::pair<int,int> >&larg)
{
    if (larg.size()<=1) {
        return larg;
    }
    std::deque<std::pair<int,int> >::iterator mid = larg.begin();
    std::advance(mid, larg.size() / 2);
    std::deque<std::pair<int,int> > left (larg.begin(),mid);
    std::deque<std::pair<int,int> > right (mid,larg.end());
    right = mergeSort(right);
    left = mergeSort(left);
    return sortlist(left,right);
}
std::deque<int> PmergeMe:: generetlist(size_t n,int)
{
    std::deque<int> order;
    std::deque<int> jaco;
    jaco.push_back(0);
    jaco.push_back(1);
    if (n>=1)
         order.push_back(0);
    if (n>=2)
         order.push_back(1);
    size_t i = 2;
    while (i < n)
    {
        size_t value = jaco.back() + 2 *jaco.front();
        if (value > n)
            break;
        if (value == 1) {
            jaco.push_back(value);
            jaco.erase(jaco.begin());
            continue;
        }
        order.push_back(value);
        jaco.push_back(value);
        jaco.erase(jaco.begin());
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (std::find(order.begin(),order.end(),i)==order.end()) {
            std::deque<int>::iterator it = std::lower_bound(order.begin(), order.end(), i);
            if (it != order.end())it++;
            order.insert(it, i);
        }
        i++;
    }
    return order;
}
std::deque<int>  PmergeMe:: fillMainChain(int)
{
    std::deque<int>  mainchain;
    for (size_t i = 0; i < this->_Mdeq.size(); i++) {
        mainchain.push_back(this->_Mdeq[i].first);
    }
    return mainchain;
}
std::deque<int>  PmergeMe:: fillPendChain(int)
{
    std::deque<int>  pendant;
    for (size_t i = 0; i < this->_Mdeq.size(); i++) {
        pendant.push_back(this->_Mdeq[i].second);
    }
    return pendant;  
}

void    PmergeMe:: fordJohsonSortDeque()
{
    std::deque<int>  PendChain;
    this->_Mdeq = mergeSort(this->_Mdeq);
    this->_MainChainDeque = fillMainChain(1);
    PendChain = fillPendChain(1);
    std::deque<int>  order_list = generetlist(PendChain.size(),1);
    for (std::deque<int>::iterator it = order_list.begin();it != order_list.end();it++) {
        if (*it >= 0 && *it < (int)PendChain.size()) {
            int value  = PendChain[*it];
            std::deque<int>::iterator  pos = my_lower_bound(this->_MainChainDeque, value,1);
            this->_MainChainDeque.insert(pos, value);
        }
    }
    if (this->pair == false) {
        std::deque<int>::iterator  pos = my_lower_bound(this->_MainChainDeque, unpair,1);
        this->_MainChainDeque.insert(pos, this->unpair);
    }
}
//--------------------------------------------------
void PmergeMe::printSortVector()
{
    for (size_t i = 0; i < this->_MainChainVector.size(); i++) {
        std::cout <<" "<<this->_MainChainVector[i];
    }
    std::cout<<std::endl;
}

void PmergeMe::printSortDeque(int)
{
    for (size_t i = 0; i < this->_MainChainDeque.size(); i++) {
        std::cout <<" "<<this->_MainChainDeque[i];
    }
    std::cout<<std::endl;
}