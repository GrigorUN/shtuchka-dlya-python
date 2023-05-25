# class Dog():
#     def set_name(self):
#         self.name = "Шарик"
#     pass

# my_dog = Dog()
# my_dog.set_name()
# print(my_dog.name)


class Dog():
  def set_name(self, new_name):
    self.name = new_name
  pass

my_dog = Dog()
new_name = input("Введите имя собаки: ")
my_dog.set_name(new_name)
print(f"Вашего питомца зовут {my_dog.name}")