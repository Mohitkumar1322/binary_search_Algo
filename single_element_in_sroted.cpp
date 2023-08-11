    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is an even index to ensure we have a valid pair of elements
        if (mid % 2 == 1) {
            mid--;
        }

        // If adjacent elements are equal, the single element lies on the right side
        if (nums[mid] == nums[mid + 1]) {
            left = mid + 2;
        }
        // If adjacent elements are not equal, the single element lies on the left side
        else {
            right = mid;
        }
    }

    return nums[left];
}

int main() {
    std::vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int singleElement = findSingleElement(nums);
    std::cout << "The single element is: " << singleElement << std::endl;

    return 0;
}
In this code, the findSingleElement function uses a binary search approach to locate the single element in the sorted array. It considers the even indices to ensure that we're dealing with a valid pair of elements. If the adjacent elements are equal, the single element must lie on the right side; otherwise, it lies on the left side. This approach halves the search space in each iteration, making it efficient.

Remember to adjust the input array (nums in this case) to match your specific input data.





