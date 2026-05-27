class Solution:
    
    def setZeroes(self, matrix: List[List[int]]) -> None:
        hash=[];
        i=0;
        j=0;
        for row in matrix:
            for ele in row:
                if(ele==0):
                    hash.append([i,j])
                j+=1
            i+=1
            j=0;
        for jio in hash:
            for iter in range(0,len(matrix[jio[0]])):
                matrix[jio[0]][iter]=0;
            for coliter in range(0,len(matrix)):
                matrix[coliter][jio[1]]=0;
        