#include<iostream>

class Mylist
{
private:
    int *nums; //列表
    int numsCapacity = 10; // 列表容量
    int numsSize = 0;
    int extendRatio = 2; // 每次扩容的倍数
public:
    Mylist(/* args */);
    ~Mylist();

    int size(){
        return numsSize;
    }

    int capacity(){
        return numsCapacity;
    }

    int get(int index){
        if(index < 0 || index >= size())
            throw std::out_of_range("索引越界");
        return nums[index];        
    }

    void set(int index, int x){
        if(index < 0 || index >= size())
            throw std::out_of_range("索引越界");
        nums[index] = x;
    }

    void add(int x){
        if(size() == capacity()){
            extendCapacity();
        }
        nums[size()] = x;
        numsSize++;
    }

    void insert(int index, int x){
        if(index < 0 || index >= size())
            throw std::out_of_range("索引越界");
        if(size() == capacity())
            extendCapacity();
        for(int i = size() - 1; i >= index; i--){
            nums[i + 1] = nums[i];
        }
        nums[index] = x;
        numsSize++;
    }

    int remove(int index){
        if(index < 0 || index >= size())
            throw std::out_of_range("索引越界");
        int num = nums[index];
        for(int i = index; i < size() - 1; i++){
            nums[i] = nums[i + 1];
        }
        numsSize--;
        return num;
    }

    void extendCapacity(){
        int newCapacity = capacity() * extendRatio;
        int *tmp = nums;
        nums = new int[newCapacity];
        for(int i = 0; i < size(); i++){
            nums[i] = tmp[i];
        }
        delete[] tmp;
        numsCapacity = newCapacity;
    }
};

Mylist::Mylist(/* args */)
{
    nums = new int[numsCapacity];
}

Mylist::~Mylist()
{
    delete[] nums;
}
