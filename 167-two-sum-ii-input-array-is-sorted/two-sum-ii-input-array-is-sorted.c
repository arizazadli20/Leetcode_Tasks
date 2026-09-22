/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    
    int left = 0;
    int right = numbersSize - 1;

    while (left < right) {
        
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            // Hədəfi tapdıq! İndi cavabı qaytarmaq üçün yaddaş ayırırıq:
            // 2 ədəd int ölçüsündə yaddaş (malloc) ayrılır
            int* result = (int*)malloc(2 * sizeof(int));
            
            // LeetCode indekslərin 1-dən başlamasını istədiyi üçün +1 edirik
            result[0] = left + 1;  
            result[1] = right + 1; 
            
            // LeetCode-a massivin ölçüsünün 2 olduğunu bildiririk
            *returnSize = 2;       
            
            // Massivi geri qaytarırıq
            return result;         
        } 
        else if (sum > target) {
            right--; // Cəm böyükdürsə, sağ barmağı kiçilt (sola sürüşdür)
        } 
        else {
            left++;  // Cəm kiçikdirsə, sol barmağı böyüt (sağa sürüşdür)
        }
    }
    
    // Əgər heç nə tapılmazsa (baxmayaraq ki şərtdə həmişə tapılacağı deyilir)
    *returnSize = 0;
    return NULL;
}