 #include <stdio.h>

/*
 *
    #4 Задание:
    Измените программу из третьего задания таким образом, чтобы массив заполнялся,
    начиная с конца, т.е:
    22 23 24 25 26 27 28 
    21 20 19 18 17 16 15 
    8  9  10 11 12 13 14 
    7  6  5  4  3  2  1
    И выведите его на экран.
 */

int main() {
    int i, j;              // для цикла
    int col = 7, row = 4;  // количество столбцов и строк в массиве
    int array[row][col];   // сам массив
    int number = 28;       // точка отсчета чисел

    // Бежим по массиву и заполняем его числами
    for(i = 0; i < row; i++)
    {
        for(j = col - 1; j >= 0; j--)
        {
	      array[i][j] = number--;
        }
    }

    // Выводим на печать наш массив
   for( i = 0; i < row; i++)
   {
      if((i % 2) == 0)
      {
	for(j = 0; j < col; j++)
	{
	  printf("%-3d", array[i][j]); 
	}
	printf("\n");
     }
     else
     {
       for( j = col - 1; j >= 0; j--) 
	{ 
	  printf("%-3d", array[i][j]); 
	}
	printf("\n");
     }
	
   }
        
   return 0;
}
