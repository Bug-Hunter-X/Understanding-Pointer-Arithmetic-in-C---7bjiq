int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  printf("%d \n", x); // Output: 20
  printf("Address of x: %p\n", &x); // Print the address of x
  printf("Value of ptr: %p\n", ptr); // Print the value of ptr (address of x)
  printf("Value pointed to by ptr: %d\n", *ptr); // Print the value pointed to by ptr
  return 0;
}