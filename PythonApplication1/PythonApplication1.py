import numpy as np
import matplotlib.pyplot as plt


def f(x, love=50):#定义love函数
    y = x ** (2 / 3) + 0.9 * np.sqrt(3.3 - x ** 2) * np.sin(love * np.pi * x)
    return y

def show_love(numbers):#定义绘制love曲线
    for k in range(numbers):
        x = np.linspace(0, 2, 1500)
        y = [f(i, k) for i in x]
        plt.plot(x, y, color='red', linewidth=2)#红色，线的宽度
        plt.plot(-x, y, color='red', linewidth=3)
        plt.xlim(-2, 2)
        # python可视化库matplotlib的显示模式默认为阻塞（block）模式。
        # 就是在plt.show()之后，程序会暂停到那儿，并不会继续执行下去。如果需要继续执行程序，就要关闭图片。
        # 这就要使用plt.ion()这个函数，使matplotlib的显示模式转换为交互（interactive）模式。
        # 即使在脚本中遇到plt.show()，代码还是会继续执行。下面这段代码是展示两个不同的窗口
        plt.ion()
        plt.show()#显示
        plt.pause(0.1)#延迟
        plt.clf()#清除内容而不是关闭
show_love(100)

