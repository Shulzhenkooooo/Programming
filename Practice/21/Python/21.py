def bmi(weight: float, height: float) -> float:
    return weight / (height * height)
def print_bmi(bmi: float) -> float:
    if (bmi < 18.5):
        print('Underweight')
    if (18.5 <= bmi < 25):
        print("Normal weight")
    if (25 <= bmi < 30):
        print("Overweight")
    if (bmi >= 30):
        print("Obesity")
print("Введите ваш вес и рост")  
w, h = map(float,input().split())
BMI = bmi(w, h)
print_bmi(BMI)
