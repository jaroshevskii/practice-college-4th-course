#
# Практика (4 курс коледжу)
# Практична робота 4: Завдання 2
#

import os

try:
    # Відкриття файлів для читання та запису
    with open("Input.txt", "r") as file_input, open("Output.txt", "w") as file_output:
        # Читання всіх чисел з файлу Input.txt
        numbers = list(map(int, file_input.read().split()))

        positive_count = 0  # Кількість додатніх чисел
        negative_count = 0  # Кількість від'ємних чисел

        # Підрахунок кількості додатніх та від'ємних чисел
        for number in numbers:
            if number >= 0:
                positive_count += 1
            else:
                negative_count += 1

        even_count = 0  # Кількість парних чисел
        odd_count = 0  # Кількість непарних чисел
        max_digit = float("-inf")  # Максимальна цифра
        min_digit = float("inf")  # Мінімальна цифра

        # Підрахунок кількості парних та непарних чисел та пошук максимальної та мінімальної цифр
        for number in numbers:
            if number % 2 == 0:
                even_count += 1
            else:
                odd_count += 1
            if number > max_digit:
                max_digit = number
            if number < min_digit:
                min_digit = number

        # Запис результатів в файл Output.txt
        file_output.write(f"""Number of positive numbers: {positive_count}
Number of negative numbers: {negative_count}
Number of even numbers: {even_count}
Number of odd numbers: {odd_count}
Maximum number: {max_digit}
Minimum number: {min_digit}
""")
        # Отримання повного шляху до файлу Output.txt з результатами та виведення його у консоль
        full_file_output_path = os.path.abspath(file_output.name)
        print(f"""
Results saved in '{full_file_output_path}'.
""")

except Exception as error:
    print(f"Error: {error}")
