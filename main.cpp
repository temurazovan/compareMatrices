#include <iostream>
#include <vector>

//comparing matrices

void fillArray(int arr[4][4]) {
    int symbol;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> symbol;
            arr[i][j] = symbol;
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

void diagonalMatrix(int arr[4][4]){
    arr[0][1] = 0;
    arr[0][2] = 0;
    arr[0][3] = 0;
    arr[1][2] = 0;
    arr[1][3] = 0;
    arr[2][3] = 0;
}

int main() {

    int arr[4][4];
    int arr2[4][4];

    std::cout << "Input elements in matrix: ";
    fillArray(arr);
    std::cout << "Input elements in matrix: ";
    fillArray(arr2);
    if (compareTwoMatrices(arr, arr2)) {
        std::cout << "Matrices are similar" << std::endl;
    } else {
        std::cout << "Matrices aren't similar" << std::endl;
        return 0;
    }
    diagonalMatrix(arr);
    printArray(arr);
}
