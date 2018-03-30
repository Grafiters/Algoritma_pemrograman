# Algortima_pemrograman

make a new project
use code block

- click new project
- use a console appliction
- change a place for save the project
- finish you has a new project

make 3 file on your project
- main.c = file for run you project
```
#include "pustaka.h" ///use library for make himself

int main{
  cetakarray(data,5);
  printf("hello world");
  retrun 0;
}

```
- pustaka.c = for the function of your code
```
#include "pustaka.h" ///use library for make himself

int cetakarray(int dtaa[], int jml_data){
  int i=0;///I use metode while for my looping
  while (i<jml_data) {
    printf("%d\n", data[i]);
    i++;
  }
}
```
- pustaka.h = for header your code
```
#include <stdlib.h> ///use library from code
#include <stdio.h> ///use library from code

int cetakarray(int data[], int jml_data);
```
