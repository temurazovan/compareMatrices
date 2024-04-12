#include <iostream>
#include <vector>

//comparing matrices

void fillArray(int arr[4][4], int value) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> value;
            arr[i][j] = value;
        }
    }
}

void printArray(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool compareTwoMatrices(int arr[4][4], int arr2[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != arr2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {

    int arr[4][4];
    int arr2[4][4];
    int value = 0;

    fillArray(arr, value);
    fillArray(arr2, value);
    if (compareTwoMatrices(arr, arr2)) {
        std::cout << "Matrices are similar";
    } else {
        std::cout << "Matrices aren't similar";
        return 0;
    }

}
