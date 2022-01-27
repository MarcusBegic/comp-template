 
void printArr(int arr[]){
    for (int i = 0; i < sizeof(&arr); i++) {
        std::cout << arr[i] << ' ';
    }
}
