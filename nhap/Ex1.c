#include <stdio.h>

// Hàm tìm kiếm nhị phân
int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Kiểm tra xem mục tiêu có ở vị trí mid không
        if (arr[mid] == target) {
            return mid;
        }

        // Nếu mục tiêu lớn hơn, loại bỏ nửa trái
        else if (arr[mid] < target) {
            low = mid + 1;
        }

        // Nếu mục tiêu nhỏ hơn, loại bỏ nửa phải
        else {
            high = mid - 1;
        }
    }

    // Nếu mục tiêu không có trong mảng
    return -1;
}

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng theo thứ tự tăng dần:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Nhập số mục tiêu cần tìm: ");
    scanf("%d", &target);

    // Gọi hàm binary_search và in kết quả
    int position = binary_search(arr, n, target);
    if (position != -1) {
        printf("Phần tử %d được tìm thấy tại vị trí %d.\n", target, position);
    } else {
        printf("Phần tử không có trong mảng.\n");
    }

    return 0;
}
