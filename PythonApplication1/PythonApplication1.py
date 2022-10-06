import numpy as np
import matplotlib.pyplot as plt


def f(x, love=50):#����love����
    y = x ** (2 / 3) + 0.9 * np.sqrt(3.3 - x ** 2) * np.sin(love * np.pi * x)
    return y

def show_love(numbers):#�������love����
    for k in range(numbers):
        x = np.linspace(0, 2, 1500)
        y = [f(i, k) for i in x]
        plt.plot(x, y, color='red', linewidth=2)#��ɫ���ߵĿ��
        plt.plot(-x, y, color='red', linewidth=3)
        plt.xlim(-2, 2)
        # python���ӻ���matplotlib����ʾģʽĬ��Ϊ������block��ģʽ��
        # ������plt.show()֮�󣬳������ͣ���Ƕ������������ִ����ȥ�������Ҫ����ִ�г��򣬾�Ҫ�ر�ͼƬ��
        # ���Ҫʹ��plt.ion()���������ʹmatplotlib����ʾģʽת��Ϊ������interactive��ģʽ��
        # ��ʹ�ڽű�������plt.show()�����뻹�ǻ����ִ�С�������δ�����չʾ������ͬ�Ĵ���
        plt.ion()
        plt.show()#��ʾ
        plt.pause(0.1)#�ӳ�
        plt.clf()#������ݶ����ǹر�
show_love(100)

