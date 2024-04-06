#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;

class Matrix {
    int data[ROWS][COLS];
public:
    Matrix() {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                data[i][j] = 0;
            }
        }
    }

    void inputMatrix() {
        cout << "Enter matrix elements: " << endl;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cin >> data[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "Matrix: " << endl;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix addMatrices(Matrix& m1, Matrix& m2);
};

Matrix addMatrices(Matrix& m1, Matrix& m2) {
    Matrix result;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return result;
}

int main() {
    Matrix matrix1, matrix2, result;
    
    cout << "Enter elements for first matrix:" << endl;
    matrix1.inputMatrix();
    
    cout << "Enter elements for second matrix:" << endl;
    matrix2.inputMatrix();
    
    result = addMatrices(matrix1, matrix2);
    
    cout << "Resultant Matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}