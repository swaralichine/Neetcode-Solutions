//Using priority queue(min heap) to store the highest element first
//Time Complexity=O(nlogk) (can be improved using binary search)
//Space Complexity=O(logk)
class Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int, vector<int>, greater<int>> pq;  //declaring min heap
        
        for(int num:nums)
        {
            pq.push(num);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();   //min heap top element will always be the kth largest element
    }
};


