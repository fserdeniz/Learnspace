Write a program in C that calculates the average exam grade for a class of 10 students.
Note That:
- You must only use WHILE loop.
- You must declare an array called as �grd� for the inputs.
- You must declare a variable called as �avr� with data type of double that includes the average value.
- Display the average value with two decimal places.
- The output is like below for example:
```c
```c
The Average of ten grades is 36.45
```
```


### Answer
```c
int main(int argc, char *argv[]) {
int i=0,grd[10],sum=0;
double avr;
while(i<10)
{
printf("Enter the grade %d=",i+1);
scanf("%d",&grd[i]);
sum+=grd[i];
i++;
}
avr=sum/10.0;
printf("The Average of ten grades is %.2f",avr);
return 0;
}
```