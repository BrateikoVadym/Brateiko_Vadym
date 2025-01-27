#include "student.h"

int main() {
    Student group;

    // Додавання студентів
    group.addStudent(1, "Нестор Руслан", 1);
    group.addStudent(2, "Брезвин Ростислав", 3);
    group.addStudent(3, "Савчак Роман", 2);

    // Виведення списку студентів
    std::cout << "\nПоточний список студентів:\n";
    group.printStudents();

    // Оновлення курсу студента
    std::cout << "\nОновлення курсу студента з ID 2:\n";
    group.updateStudentCourse(2, 4);

    // Видалення студента
    std::cout << "\nВидалення студента з ID 1:\n";
    group.removeStudent(1);

    // Виведення оновленого списку
    std::cout << "\nОновлений список студентів:\n";
    group.printStudents();

    // Очищення списку студентів
    std::cout << "\nОчищення списку студентів:\n";
    group.clearStudents();

    return 0;
}
