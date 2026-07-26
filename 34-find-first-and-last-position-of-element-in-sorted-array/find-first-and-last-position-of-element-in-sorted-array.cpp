class Solution {
public:
void first_occrence(vector<int> &nums , int target , vector<int> &ans  ){
int st = 0 ;
int end = nums.size() - 1 ;
int a = -1 ;
while(st <= end ){
    int mid = st + (end - st ) / 2 ;
    if(nums[mid] == target ){
        a = mid ;
        end = mid - 1 ;
    }
    else if(nums[mid] > target ){
        end = mid - 1 ;
    }
    else {
        st = mid + 1 ;
    }
}
ans.push_back(a) ;
// return ans ;
}

void last_occrence(vector<int> &nums , int target , vector<int> &ans  ){
int st = 0 ;
int end = nums.size() - 1 ;
int a = -1 ;
while(st <= end ){
    int mid = st + (end - st ) / 2 ;
    if(nums[mid] == target ){
        a = mid ;
        // end = mid + 1 ;
        st = mid + 1 ;
    }
    else if(nums[mid] > target ){
        end = mid - 1 ;
    }
    else {
        st = mid + 1 ;
    }
}
ans.push_back(a) ;
// return ans ;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ;
         first_occrence(nums ,target , ans  ) ;
         last_occrence(nums , target , ans  ) ;
        return ans ;
    }
};