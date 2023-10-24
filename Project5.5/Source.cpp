#include <iostream>

// Функція для обчислення кількості одиниць у двійковому представленні числа n
int countOnes(int n, int &recursionDepth) {
    if (n == 0) {
        return 0;
    }
    
    // Збільшуємо глибину рекурсії
    recursionDepth++;
    
    // Обчислюємо f(n) за рекурентним визначенням
    return 1 + countOnes(n & (n - 1), recursionDepth); 
    //Рекурсивний виклик функції countOnes, 
    //де n & (n - 1) - це операція побітового логічного множення, 
    //яка допомагає зменшувати n на одиницю, обнулюючи найменший встановлений біт. 
    //Після цього до результату додається 1.
}

int main() {
    int n;
    std::cout << "Введіть число n: ";
    std::cin >> n;
    
    int recursionDepth = 0; // Початкова глибина рекурсії
    int onesCount = countOnes(n, recursionDepth); //Виклик функції countOnes з передачею числа n 
    //та змінної recursionDepth для обчислення кількості одиниць у двійковому представленні числа n.
    
    std::cout << "Кількість одиниць в двійковому представленні числа " << n << " дорівнює " << onesCount << std::endl;
    std::cout << "Глибина рекурсії: " << recursionDepth << std::endl;
    
    return 0;
}
