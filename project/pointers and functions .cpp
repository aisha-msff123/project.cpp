#include <iostream>
using namespace std;

// --- تعريف الدوال المطلوبة ---

// 1. دالة تستقبل مؤشرين وترجع مجموعهما
int sumTwoPointers(int *ptr1, int *ptr2)
{
    return (*ptr1 + *ptr2);
}

// 2. دالة تعدل قيمة متغير باستخدام مؤشر كمعامل
void modifyValue(int *ptr, int newValue)
{
    *ptr = newValue;
}

// 3. دالة تبدل بين رقمين باستخدام المؤشرات
void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 4. دالة تضبط جميع عناصر المصفوفة لتصبح صفراً باستخدام المؤشرات
void setArrayToZero(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = 0; // استخدام حساب المؤشرات للوصول لكل عنصر وتصفيره
    }
}

// 5. برنامج لاختبار جميع الدوال السابقة
int main()
{
    // تعريف متغيرات ومصفوفة للاختبار
    int num1 = 15;
    int num2 = 25;
    int myArr[5] = {10, 20, 30, 40, 50};

    cout << "--- Testing Question 3 Functions ---" << endl
         << endl;

    // اختبار الدالة رقم 1: الجمع

    cout << "1. Sum of " << num1 << " and " << num2 << " is: " << sumTwoPointers(&num1, &num2) << endl;

    // اختبار الدالة رقم 2: تعديل القيمة
    cout << "2. Original num1: " << num1;
    modifyValue(&num1, 100);
    cout << " | After modification: " << num1 << endl;

    // اختبار الدالة رقم 3: التبديل
    cout << "3. Before Swap: a = " << num1 << ", b = " << num2 << endl;
    swapValues(&num1, &num2);
    cout << "   After Swap:  a = " << num1 << ", b = " << num2 << endl;

    // اختبار الدالة رقم 4: تصفير المصفوفة
    cout << "4. Array before zeroing: ";
    for (int i = 0; i < 5; i++)
        cout << myArr[i] << " ";

    setArrayToZero(myArr, 5); // تمرير اسم المصفوفة (الذي هو عنوان أول عنصر)

    cout << "\n   Array after zeroing:  ";
    for (int i = 0; i < 5; i++)
        cout << *(myArr + i) << " ";
    cout << endl;

    return 0;
}