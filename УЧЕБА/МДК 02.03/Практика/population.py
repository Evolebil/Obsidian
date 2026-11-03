# Логистическая модель роста числа пользователей сервиса
import numpy as np
import matplotlib.pyplot as plt
 
a = 1.8          # коэффициент прироста
K = 120_000.0    # ёмкость рынка
N0 = 10_000.0     # начальное число пользователей
T = 36           # горизонт моделирования, месяцев
 
N = np.zeros(T + 1)   # массив результатов: N[t] — пользователи к концу месяца t
N[0] = N0
 
# рекуррентное соотношение логистической модели
for t in range(T):
    N[t + 1] = N[t] + a * N[t] * (1.0 - N[t] / K)
 
# вывод контрольных значений для сверки с Excel и ручным расчётом
for t in (0, 1, 6, 12, 18, 24, 36):
    print(f"t = {t:2d}  N = {N[t]:10.6f}")
 
# график динамики
plt.figure(figsize=(8, 4.5))
plt.plot(range(T + 1), N, marker="o", ms=3)
plt.axhline(K, color="gray", ls="--", lw=1, label="Ёмкость рынка K")
plt.xlabel("Месяц t")
plt.ylabel("Число пользователей N(t)")
plt.title("Логистическая модель роста пользователей")
plt.legend()
plt.grid(alpha=0.3)
plt.tight_layout()
plt.show()