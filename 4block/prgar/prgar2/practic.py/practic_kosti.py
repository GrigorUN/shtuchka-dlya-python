from tkinter import *
import random, time

def bros():
    x = random.choice(['a1.png', 'a2.png', 'a3.png', 'a4.png', 'a5.png', 'a6.png'])
    return x

def img(event):
    global a1, a2
    for i in range(10):
        a1 = PhotoImage(file= (bros()))
        a2 = PhotoImage(file= (bros()))
        lab1['image'] = a1
        lab2['image'] = a2
        time.sleep(0.1)
root = Tk()
root.geometry('400x200')
root.title("Кости. Сделай бросок!")
root.resizable(height = False, width = False)
root.iconphoto(True, PhotoImage (file = ('iconka.png')))
font = PhotoImage (file = ('home.png'))
Label(root, image = font).pack()           # упоковываем по центру
lab1 = Label(root)
lab1.place(relx =0.3, rely =0.5, anchor=CENTER )            # положение          
lab2 = Label(root)
lab2.place(relx =0.7, rely =0.5, anchor=CENTER )
root.bind('<1>', img)
root.mainloop()