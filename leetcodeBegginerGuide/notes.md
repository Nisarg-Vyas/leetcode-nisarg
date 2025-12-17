-> 1672
Q) how to get the size of a matrix of vector in cpp?

Ans) In C++, the answer depends on what container you’re using for the matrix. Most commonly, a “matrix of vectors” means a std::vector<std::vector<T>>.
1. Matrix as std::vector<std::vector<T>>
#include <vector>
#include <iostream>

std::vector<std::vector<int>> matrix;
Number of rows
size_t rows = matrix.size();
Number of columns (for a non-empty matrix)
size_t cols = matrix[0].size();
Example
std::vector<std::vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6}
};

size_t rows = matrix.size();        // 2
size_t cols = matrix[0].size();     // 3

std::cout << rows << " x " << cols << std::endl;
2. Handling empty matrices safely ⚠️
Always check before accessing matrix[0]:
size_t rows = matrix.size();
size_t cols = rows > 0 ? matrix[0].size() : 0;
3. If rows may have different sizes (jagged matrix)
for (size_t i = 0; i < matrix.size(); ++i) {
    std::cout << "Row " << i
              << " has " << matrix[i].size()
              << " columns\n";
}
4. Matrix of vectors (more generic example)
std::vector<std::vector<double>> mat;
Same logic applies:
mat.size() → number of vectors (rows)
mat[i].size() → size of vector i
5. If you meant a static 2D array instead
int arr[3][4];
size_t rows = sizeof(arr) / sizeof(arr[0]);
size_t cols = sizeof(arr[0]) / sizeof(arr[0][0]);
Summary
Structure	Rows	Columns
vector<vector<T>>	matrix.size()	matrix[i].size()
Static array	sizeof(arr)/sizeof(arr[0])	sizeof(arr[0])/sizeof(arr[0][0])
If you want, tell me:
whether your matrix is dynamic or static
or show your actual code
and I can tailor the answer exactly to your case.


Q)how to access all the elements of each row and each column?

Ans) Assuming your matrix is a std::vector<std::vector<T>>, here are the common and correct ways to access all elements by rows and by columns.
1. Access all elements row by row (most common)
for (size_t i = 0; i < matrix.size(); ++i) {          // rows
    for (size_t j = 0; j < matrix[i].size(); ++j) {   // columns
        std::cout << matrix[i][j] << " ";
    }
    std::cout << '\n';
}
Range-based for (clean & modern)
for (const auto& row : matrix) {
    for (const auto& element : row) {
        std::cout << element << " ";
    }
    std::cout << '\n';
}
2. Access all elements column by column
This assumes a rectangular matrix (same number of columns in each row).
if (!matrix.empty()) {
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();

    for (size_t j = 0; j < cols; ++j) {        // columns
        for (size_t i = 0; i < rows; ++i) {    // rows
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}
3. If the matrix is jagged (rows of different sizes)
You must check column bounds:
size_t maxCols = 0;
for (const auto& row : matrix)
    maxCols = std::max(maxCols, row.size());

for (size_t j = 0; j < maxCols; ++j) {
    for (size_t i = 0; i < matrix.size(); ++i) {
        if (j < matrix[i].size()) {
            std::cout << matrix[i][j] << " ";
        }
    }
    std::cout << '\n';
}
4. Access a specific row or column
Entire row
size_t r = 1;
for (int val : matrix[r]) {
    std::cout << val << " ";
}
Entire column
size_t c = 2;
for (size_t i = 0; i < matrix.size(); ++i) {
    std::cout << matrix[i][c] << " ";
}
5. Modify elements
for (auto& row : matrix) {
    for (auto& element : row) {
        element *= 2;   // modify
    }
}
Summary
Task	Loop Order
Row-wise	i → j
Column-wise	j → i
Safe jagged access	Check j < matrix[i].size()



-> 