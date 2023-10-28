Intuition - Binary search is a fast search algorithm with run time complexity of O(log N). This search algorithm works on the basis of "Divide and Conquer". For this algorithm to work properly, the array should be in sorted form.
Approach - Binary search looks for a particular item(or element) by comparing the middlemost element of the collection. If a match occurs, then the index of the element is returned. If the middle element is greater than the element to be found(target), then the element is searched in the sub-array to the left of the middle element. Otherwise, the element is searched in the sub-array to the right of the middle element.
Complexity
Time complexity: O(log N)
where N is the size of the array
Space complexity: O(1)

class Solution {
    public int search(int[] nums, int target) {
        
       int left = 0;
       int right = nums.length-1;
       return binarySearch_Recursive(nums,left,right,target);
    }

    int binarySearch_Recursive(int nums[], int left, int right, int target){
      if(left>right)
         return -1;

      else{
        int mid = left+(right-left)/2;

        if(nums[mid]<target)
        return binarySearch_Recursive(nums, mid+1,right,target);
      
        else if(nums[mid]>target)
        return binarySearch_Recursive(nums,left, mid-1,target);

        else
         return mid;
      }
    }
}
