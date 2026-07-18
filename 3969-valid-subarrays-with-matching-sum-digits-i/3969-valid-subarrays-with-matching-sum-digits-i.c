int countValidSubarrays(int* nums, int numsSize, int x) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        long long sum = 0;

        for (int j = i; j < numsSize; j++) {
            sum += nums[j];

            long long temp = sum;
            if (temp < 0) temp = -temp;

            int last_digit = temp % 10;

            long long first_digit = temp;
            while (first_digit >= 10) {
                first_digit /= 10;
            }

            if (first_digit == x && last_digit == x) {
                count++;
            }
        }
    }

    return count;
}