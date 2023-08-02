using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace Problem
{
    // *****************************************
    // DON'T CHANGE CLASS OR FUNCTION NAME
    // YOU CAN ADD FUNCTIONS IF YOU NEED TO
    // *****************************************
    public static class MatrixMultiplication
    {
        #region YOUR CODE IS HERE

        //Your Code is Here:
        //==================
        /// <summary>
        /// Multiply 2 square matrices in an efficient way [Strassen's Method]
        /// </summary>
        /// <param name="M1">First square matrix</param>
        /// <param name="M2">Second square matrix</param>
        /// <param name="N">Dimension (power of 2)</param>
        /// <returns>Resulting square matrix</returns>
        /// 

        static public int[,] addMatrices(int[,] v1, int[,] v2, int n)
        {
            int[,] ans = new int[n, n];
            Parallel.For(0, n, i => {
                for(int j= 0;j<n;j++) {
                    ans[i, j] = v1[i, j] + v2[i, j];
                } 
            });
            return ans;
        }

        static public int[,] subtractMatrices(int[,] v1, int[,] v2, int n)
        {
            int[,] ans = new int[n, n];
            Parallel.For(0, n, i => {
                for (int j = 0; j < n; j++)
                {
                    ans[i, j] = v1[i, j] - v2[i, j];
                }
            });
            return ans;
        }

        static public int[,] NaiveMatrixMultiply(int[,] M1, int[,] M2, int N)
        {
            //REMOVE THIS LINE BEFORE START CODING
            //throw new NotImplementedException();

           /* Parallel.For(0, N, j => {

            });*/

            int[,] ans = new int[N, N];
            Parallel.For(0, N, i => {
                for(int j=0;j <N;j++) {
                    for (int k = 0; k < N; k++)
                    {
                        ans[i, j] += M1[i, k] * M2[k, j];
                    }
                }
            });
            
            return ans;
        }

        static public int[,] multiMatrices(int[,] v1, int[,] v2)
        {
            int matrixSize = v1.GetLength(0);
            int[,] ans = new int[matrixSize, matrixSize];
            if (matrixSize <= 64)
            {
                // base case 
               /* int[,] anss = new int[1, 1];
                anss[0, 0] = v1[0, 0] * v2[0, 0];
                return anss;*/
               return NaiveMatrixMultiply(v1, v2, matrixSize);
            }
            int newSize = matrixSize / 2;

            int[,] A11 = new int[newSize, newSize];
            int[,] A12 = new int[newSize, newSize];
            int[,] A21 = new int[newSize, newSize];
            int[,] A22 = new int[newSize, newSize];

            int[,] B11 = new int[newSize, newSize];
            int[,] B12 = new int[newSize, newSize];
            int[,] B21 = new int[newSize, newSize];
            int[,] B22 = new int[newSize, newSize];

            int[,] C11 = new int[newSize, newSize];
            int[,] C12 = new int[newSize, newSize];
            int[,] C21 = new int[newSize, newSize];
            int[,] C22 = new int[newSize, newSize];

           // int[,] S1 = new int[newSize, newSize];
           // int[,] S2 = new int[newSize, newSize];
           // int[,] S3 = new int[newSize, newSize];
           // int[,] S4 = new int[newSize, newSize];
           // int[,] S5 = new int[newSize, newSize];
           // int[,] S6 = new int[newSize, newSize];
           // int[,] S7 = new int[newSize, newSize];
           // int[,] S8 = new int[newSize, newSize];
           // int[,] S9 = new int[newSize, newSize];
           // int[,] S10 = new int[newSize, newSize];

            int[,] P1 = new int[newSize, newSize];
            int[,] P2 = new int[newSize, newSize];
            int[,] P3 = new int[newSize, newSize];
            int[,] P4 = new int[newSize, newSize];
            int[,] P5 = new int[newSize, newSize];
            int[,] P6 = new int[newSize, newSize];
            int[,] P7 = new int[newSize, newSize];

            int[,] tmpA = new int[newSize, newSize];
            int[,] tmpB = new int[newSize, newSize];

            Parallel.For(0, newSize, i => {
               for(int j = 0; j<newSize; j++) {
                    A11[i, j] = v1[i, j];
                    A12[i, j] = v1[i, j + newSize];
                    A21[i, j] = v1[i + newSize, j];
                    A22[i, j] = v1[i + newSize, j + newSize];

                    B11[i, j] = v2[i, j];
                    B12[i, j] = v2[i, j + newSize];
                    B21[i, j] = v2[i + newSize, j];
                    B22[i, j] = v2[i + newSize, j + newSize];
               }
            });

            // S1 = subtractMatrices(B12, B22, newSize);
            // S2 = addMatrices(A11, A12, newSize);
            // S3 = addMatrices(A21, A22, newSize);
            // S4 = subtractMatrices(B21, B11, newSize);
            // S5 = addMatrices(A11, A22, newSize);
            // S6 = addMatrices(B11, B22, newSize);
            // S7 = subtractMatrices(A12, A22, newSize);
            // S8 = addMatrices(B21, B22, newSize);
            // S9 = subtractMatrices(A11, A21, newSize);
            // S10 = addMatrices(B11, B12, newSize);

            P1 = multiMatrices(A11, subtractMatrices(B12, B22, newSize));
            P2 = multiMatrices(addMatrices(A11, A12, newSize), B22);
            P3 = multiMatrices(addMatrices(A21, A22, newSize), B11);
            P4 = multiMatrices(A22, subtractMatrices(B21, B11, newSize));
            P5 = multiMatrices(addMatrices(A11, A22, newSize), addMatrices(B11, B22, newSize));
            P6 = multiMatrices(subtractMatrices(A12, A22, newSize), addMatrices(B21, B22, newSize));
            P7 = multiMatrices(subtractMatrices(A11, A21, newSize), addMatrices(B11, B12, newSize));

            //tmpA = addMatrices(P5, P4, newSize);
            //tmpB = subtractMatrices(tmpA, P2, newSize);
            C11 = addMatrices(subtractMatrices(addMatrices(P5, P4, newSize), P2, newSize), P6, newSize);

            C12 = addMatrices(P1, P2, newSize);
            C21 = addMatrices(P3, P4, newSize);

            //tmpA = addMatrices(P5, P1, newSize);
            //tmpB = subtractMatrices(tmpA, P3, newSize);
            C22 = subtractMatrices(subtractMatrices(addMatrices(P5, P1, newSize), P3, newSize), P7, newSize);


            Parallel.For(0, newSize, i => {
                for(int j= 0; j <newSize;j++){
                    ans[i, j] = C11[i, j];
                    ans[i, j + newSize] = C12[i, j];
                    ans[i + newSize, j] = C21[i, j];
                    ans[i + newSize, j + newSize] = C22[i, j];
                }
            });
            return ans;
        }

        static public int[,] MatrixMultiply(int[,] M1, int[,] M2, int N)
        {
            //REMOVE THIS LINE BEFORE START CODING
            //Throw new NotImplementedException();
            return multiMatrices(M1, M2);
        }
        #endregion
    }
}
