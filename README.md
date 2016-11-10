# C-snippets
c++ snippents

###Arrays

##### **ИНВЕРСИЯ:**  Переставить элементы массива в обратном порядке.
##### **УСЕЧЕННОЕ СРЕДНЕЕ:** Найти среднее арифметическое тех элементов массива, которые не совпадают ни с минимальным, ни с максимальным из его элементов. Например, для массива  ```int x[]= {5,7,3,-1,4,-1,7};``` результат ```= (5+3+4)/3 = 4```
##### **ДОХОДЫ:** Вводятся уровни доходов за N месяцев. Нужно вывести номера месяцев, когда уровень доходов был выше его среднего значения.
##### **СЖАТИЕ:** Удалить из массива все повторяющиеся элементы, оставив каждый элемент по одному разу.
##### **ДНИ РОЖДЕНИЯ:** Вводятся номера дней недели, на которые приходятся дни рождения N из Ваших знакомых в этом году (0-воскр.,1-понедельник,...6-субб.). Определить : 	 а) количество дней рождений, приходящихся на каждый из дней недели; 	 б) номер дня недели, на который приходится максимальное число дней рождения
##### **ДЛИННАЯ ЦЕПОЧКА НУЛЕЙ:** Определить максимальное число подряд идущих нулей числового массива.
##### **ФОРМИРОВАНИЕ УПОРЯДОЧЕННОГО МАССИВА ВСТАВКАМИ:**Вводятся числа, которые нужно помещать в массив по возрастанию их значений, определяя место вставки нового числа в уже сформированную часть массива путем ее просмотра.
##### **УПОРЯДОЧЕНИЕ РАСХОДОВ:** Известны суммы оплаты за электроэнергию за несколько месяцев. Необходимо вывести список номеров месяцев по убыванию оплаты.
##### **ТИХИЙ ДОМ:** Вводятся координаты (вдоль улицы) для N домов и M источников шума Требуется найти дом, наиболее удаленный от ближайшего к нему источника шума.
##### **ДЛИТЕЛЬНОСТИ РАЗГОВОРОВ:** Есть список длительностей телефонных разговоров, включающий номера телефонов и длительности разговоров. Номера телефонов могут повторяться. Определить суммарное время разговора с каждого из телефонных номеров.
##### **АКТУАЛЬНЫЕ ТЕЛЕФОНЫ:** Имеется список старых телефонов предприятий коммунального обслуживания. Задан также список устаревших телефонов. Составить список телефонов, которые сохранились, исключив устаревшие.
##### **ЛОТЕРЕЯ:**  В двумерном массиве P[i][j] содержатся прогнозы результатов розыгрыша с двумя различными целочисленными результатами (со значениями) от 0 до 99, присланные его участниками, где i – номер участника (i=0,1,..,N-1), а j – номер числового результата (j = 0,1). Программа должна провести розыгрыш, случайно выбрав в указанном диапазоне два числа r1, r2 (r1 != r2) и определить количество участников, угадавших 0, 1 или оба числа. Порядок следования чисел в прогнозе значения не имеет.
##### **БЫСТРЫЙ ПОИСК:\***  Написать программу поиска значения Dat в упорядоченном по возрастанию массиве d[i] (i=0,...,N-1) не прибегая к полному перебору его элементов.
##### **ГИРИ:\***  Имеется набор гирь известного веса. Разложить гири по двум чашам весов так, чтобы разница в весе оказалась минимальной.
##### **ТОМА:\***  Имеется N отчетов, расположенных в хронологическом порядке, известно количество страниц в каждом. Программа должна определить способ их группировки в K томов, чтобы не нарушался порядок следования отчетов, они не разделялись на части, и размер наибольшего тома минимально отличался от размеров наименьшего. Вначале предложить решение для N=3, затем – для произвольного N.


#### **ТИПОВЫЕ ОПЕРАЦИИ С МАССИВАМИ**
1. Вставить в указанную позицию j числового массива, содержащего N чисел 
(j < N), заданное число (количество элементов должно стать равным N+1).
2. Выяснить, содержится ли в массиве из N элементов заданное значение, и если содержится, то в элементе с каким номером(можно определять номер первого элемента с искомым числом, а можно номер последнего такого элемента).   
3. Удалить из массива j-й элемент со сдвигом (и сохранением порядка следования) последующих элементов.
4. Удалить из массива первый элемент, содержащий заданное число.
5. Удалить из массива последний элемент, содержащий заданное число.
6. Перестановка элементов массива в обратном порядке.
7. Упорядочение элементов по возрастанию, по убыванию.
8. Устранение в массиве повторяющихся элементов.
9. В двух массивах выделить общие элементы.
10. Исключить из массива элементы, содержащиеся во втором массиве.
11. Добавить в первый массив те элементы из второго, которых не было в первом. 

