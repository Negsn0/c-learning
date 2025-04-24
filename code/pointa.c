#include <stdio.h>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p = arr;

//     for (int i = 0; i < 5; i++)
//     {
//         printf("arr[%d] = %d, *(p + %d) = %d \n",i,arr[i],i,*(p + i));
//     }
//     return 0;
// }

// void double_v(int *x){
//     *x = *x * 2;
// }

// int main(){
//     int a = 10;
//     int *x = &a;
//     double_v(x);

//     printf("%d",a);
//     return 0;
// }

// int arr_sum(int *arr,int size){
//     int val = 0;
//     for (int i = 0; i < size; i++)
//     {
//         val += *(arr + i);
//     }
//     return val;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr;
//     int sum = arr_sum(p,5);

//     printf("%d",sum);
//     return 0;
// }


struct Point
{
    int x;
    int y;
};

void move_point(struct Point *p, int dx, int dy){
    p -> x += dx;
    p -> y += dy;
}

int main(){
    struct Point p = {1, 2};
    int dx = 3, dy = 5;
    move_point(&p,dx,dy);
    printf("( x, y) = ( %d, %d)",p.x,p.y);
    return 0;
}

void move_all(struct Point *p,int size, int dx, int dy){
    for (int i = 0; i < size; i++)
    {
        p -> x += dx;
        p -> y += dy;
        p++;
    }
}

int main() {
    struct Point points[3] = {{1,2}, {3,4}, {5,6}};
    move_all(points, 3, 1, -1);
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", points[i].x, points[i].y);
    }
    return 0;
}