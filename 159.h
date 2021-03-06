class Solution {
public:
    /*
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> nums) {
        // write your code here

        // don't understand
        // int l = 0, r = nums.size();
        // int __min = nums[0];
        // while(l < r){
            
        //     int mid = l + ( r- l) / 2;
        //     // 右边有序
        //     // <= 是为了防止[2 1]这种情况
        //     if(nums[mid] <= nums[r-1]){
        //         __min = min(__min, nums[mid]);
        //         r = mid;
        //     }
        //     if(nums[mid] >= nums[l]){ // 左边有序
        //         __min = min(__min, nums[l]);
        //         l = mid + 1;
        //     }
        // }
        // return __min;

        int l = 0, r = nums.size();
        while( l + 2< r){
            cout << l << " " << r << endl;
            int mid = l + ( r- l) / 2;
            if(nums[mid] > nums[l] && nums[mid] < nums[r - 1])
                return nums[l];
            else if(nums[mid] < nums[r - 1])
                r = mid + 1;
            else
                l = mid + 1;
        }
        cout << l << " " << r << endl;
        if(l + 1 == nums.size()) return nums[l];
        return min(nums[l], nums[l + 1]);
    }
};