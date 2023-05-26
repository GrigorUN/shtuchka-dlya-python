from tkinter import *
import random 
window = Tk()
window.title('Поймай шарик!')
c = Canvas(window, width=600, height=600, bg='black')
p = Canvas(window, width=600, height=100, bg='white')
window.resizable(height = False, width = False)
c.pack()
p.pack()
colors = ['red', 'white', 'yellow', 'purple', 'blue', 'green']
count = 0

def ball():
    c.delete(ALL)
    x = random.randint(10, 580)
    y = random.randint(10, 580)
    r = 30
    new_ball = c.create_oval(x, y, x+r, y+r, fill=random.choice(colors), width= 0)
    c.tag_bind(new_ball, '<Button-1>', click_on_circle)
    window.after(1500,ball)

def click_on_circle(event):
    global count
    count = count + 1
    print(str(count))
    p.delete(ALL)
    p.create_text(80,30, font='Arial 18', text = 'Попаданий: ' )
    p.create_text(180,30, font='Arial 20', text = str(count))
ball()





window.mainloop()