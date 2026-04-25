# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPBIVT4D%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwNl5x4KHnpnrrmXKDsymonGYaJhA0BaerqNzTAzigSAiBkjGw8CYBsAnjaLo%2BS6kS5jzvPa3LOBDD40heHrK9biyqIBAiQ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMw3wjTWM%2ButrCAc%2FHKtwDGa8Unm67VRX08EZCb%2Bm5gU9telbt%2FrXex17yOay0QSeOl8ZqOr2TBu2ta6It8ldqjs2WZxiDOsL%2B3m65OEv5axZI2tlQgU%2BXZz55b3iTrA5wtLD%2FdzAsgYDzceKYpPBjMMCdaPD88d1%2BwYR4%2FcfEo2YsdbkPccya0O3L5iIDML7Xhvon53Uh3RJ4p6Ypnl8dBbzpNd4jqgJkcmOLU1qkjcekzh6MJl6n5qte7rrjfIz43GjFjpFsxsyW93WEBqTRI%2FwsgZLzdtBPpcWEuVlPqhfeiMS76KMmG9%2FVzOX58GbrOP9QhtwDz4YPAxKZqzZXRklIRoxPLDDaNiAAH4h8ILGcHG2QfVywGSY%2BcY1Bnnfihj5YKkT4sHG6yVC6MA%2Bt%2F%2FhNVnURbtNFJai9pu73BBH3Je0J5N3h%2FMSHTjt6ZYf981fbt1GdE0Nc8MOo4aAx7BhPzCsJ7DjTz5fcDL0GqOQQix%2BTJKiiu%2FHJ%2BsA3ooarM1C3F84%2FWloDC0VWZD5dJdFtRUZqjiLlE63mi2miZleu2PQW0QX6A%2F%2F2VWu8Ac%2FWWNpt9tNNf7WO1AdV7XfoZE4Prp4PkdhFmH6JXOZemvrvKHnUEjEOSdQzDQosz1MlF7BkCpeNRZiQdAww8dCxzwY6pgHnz72IdhbSGSxCUcBa%2B9ImnQHfeqzZfJhAwi3jtR8zqgBjuRFAnxlweD%2FJF5ia1uYrEA%2B%2BJX49BRITbLDtAR9%2B%2FG6DSBrCVo0yzRMSKFoBg91IDyHcDsN3ranBNvf2nPF13AZaB%2FI8WzU0mxt0Mo4LLK5v%2BRGQ0h60u283Zw%2BtGFmaxmpUzchvC%2B5g7r3Zpejw%2FSuetHihzcUT%2FXoFdYMT54U2Ps%2Bn&X-Amz-Signature=e3793f326781dfe23b500b908f48e8e670e1894e4c717250701aac965425106c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPBIVT4D%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwNl5x4KHnpnrrmXKDsymonGYaJhA0BaerqNzTAzigSAiBkjGw8CYBsAnjaLo%2BS6kS5jzvPa3LOBDD40heHrK9biyqIBAiQ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMw3wjTWM%2ButrCAc%2FHKtwDGa8Unm67VRX08EZCb%2Bm5gU9telbt%2FrXex17yOay0QSeOl8ZqOr2TBu2ta6It8ldqjs2WZxiDOsL%2B3m65OEv5axZI2tlQgU%2BXZz55b3iTrA5wtLD%2FdzAsgYDzceKYpPBjMMCdaPD88d1%2BwYR4%2FcfEo2YsdbkPccya0O3L5iIDML7Xhvon53Uh3RJ4p6Ypnl8dBbzpNd4jqgJkcmOLU1qkjcekzh6MJl6n5qte7rrjfIz43GjFjpFsxsyW93WEBqTRI%2FwsgZLzdtBPpcWEuVlPqhfeiMS76KMmG9%2FVzOX58GbrOP9QhtwDz4YPAxKZqzZXRklIRoxPLDDaNiAAH4h8ILGcHG2QfVywGSY%2BcY1Bnnfihj5YKkT4sHG6yVC6MA%2Bt%2F%2FhNVnURbtNFJai9pu73BBH3Je0J5N3h%2FMSHTjt6ZYf981fbt1GdE0Nc8MOo4aAx7BhPzCsJ7DjTz5fcDL0GqOQQix%2BTJKiiu%2FHJ%2BsA3ooarM1C3F84%2FWloDC0VWZD5dJdFtRUZqjiLlE63mi2miZleu2PQW0QX6A%2F%2F2VWu8Ac%2FWWNpt9tNNf7WO1AdV7XfoZE4Prp4PkdhFmH6JXOZemvrvKHnUEjEOSdQzDQosz1MlF7BkCpeNRZiQdAww8dCxzwY6pgHnz72IdhbSGSxCUcBa%2B9ImnQHfeqzZfJhAwi3jtR8zqgBjuRFAnxlweD%2FJF5ia1uYrEA%2B%2BJX49BRITbLDtAR9%2B%2FG6DSBrCVo0yzRMSKFoBg91IDyHcDsN3ranBNvf2nPF13AZaB%2FI8WzU0mxt0Mo4LLK5v%2BRGQ0h60u283Zw%2BtGFmaxmpUzchvC%2B5g7r3Zpejw%2FSuetHihzcUT%2FXoFdYMT54U2Ps%2Bn&X-Amz-Signature=44a89bc47a583fae7b042da3057ce0002f12708210e70e0b4a963e388ec5499f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPBIVT4D%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwNl5x4KHnpnrrmXKDsymonGYaJhA0BaerqNzTAzigSAiBkjGw8CYBsAnjaLo%2BS6kS5jzvPa3LOBDD40heHrK9biyqIBAiQ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMw3wjTWM%2ButrCAc%2FHKtwDGa8Unm67VRX08EZCb%2Bm5gU9telbt%2FrXex17yOay0QSeOl8ZqOr2TBu2ta6It8ldqjs2WZxiDOsL%2B3m65OEv5axZI2tlQgU%2BXZz55b3iTrA5wtLD%2FdzAsgYDzceKYpPBjMMCdaPD88d1%2BwYR4%2FcfEo2YsdbkPccya0O3L5iIDML7Xhvon53Uh3RJ4p6Ypnl8dBbzpNd4jqgJkcmOLU1qkjcekzh6MJl6n5qte7rrjfIz43GjFjpFsxsyW93WEBqTRI%2FwsgZLzdtBPpcWEuVlPqhfeiMS76KMmG9%2FVzOX58GbrOP9QhtwDz4YPAxKZqzZXRklIRoxPLDDaNiAAH4h8ILGcHG2QfVywGSY%2BcY1Bnnfihj5YKkT4sHG6yVC6MA%2Bt%2F%2FhNVnURbtNFJai9pu73BBH3Je0J5N3h%2FMSHTjt6ZYf981fbt1GdE0Nc8MOo4aAx7BhPzCsJ7DjTz5fcDL0GqOQQix%2BTJKiiu%2FHJ%2BsA3ooarM1C3F84%2FWloDC0VWZD5dJdFtRUZqjiLlE63mi2miZleu2PQW0QX6A%2F%2F2VWu8Ac%2FWWNpt9tNNf7WO1AdV7XfoZE4Prp4PkdhFmH6JXOZemvrvKHnUEjEOSdQzDQosz1MlF7BkCpeNRZiQdAww8dCxzwY6pgHnz72IdhbSGSxCUcBa%2B9ImnQHfeqzZfJhAwi3jtR8zqgBjuRFAnxlweD%2FJF5ia1uYrEA%2B%2BJX49BRITbLDtAR9%2B%2FG6DSBrCVo0yzRMSKFoBg91IDyHcDsN3ranBNvf2nPF13AZaB%2FI8WzU0mxt0Mo4LLK5v%2BRGQ0h60u283Zw%2BtGFmaxmpUzchvC%2B5g7r3Zpejw%2FSuetHihzcUT%2FXoFdYMT54U2Ps%2Bn&X-Amz-Signature=ab5578105abcca83d9f7de1bb282d707e840e1c8d65770545097f5d5b9def1ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q66XCAJE%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHY%2Fw4RKATQrUVKhsQcfUvWckXqlGu4hJFGMq3OJFyiwAiEA1cmg7k4XifJ2VUQ%2BN0gnZd%2F1%2Fd31xpR2mY68CyToiYIqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcy6QPC6cC0fBmLZyrcA05nk%2Bjl3bef9%2BOISc7Ax2h6t01A7CgvdhlBir8EMn8Tua2nIih3wde5TWHl2AfBGwliNhpCA8H7uXfOG5SyRxUjp4ETMYXjBkSD4w5uSjDamHVAWl0NuRHfwVfJmQJRg%2FJSwm7k7UsKP1IitoKGBtQUuWckU8A5nUEnJgBk%2BdjhAeH4CCTXa6i%2FRL4qYY9oIpDwW2zH832jwV0gbxWeyf%2FL%2FCVTWTlvtQmpsZ6TPkxTypBzZqryIO7mvvSLYc5SSFw6sQWHcEPv9PJEpGP1ltdXVtUdS52K9NkNaKetSo7UUinD%2FlzNCd9Iu%2F2CWFqnjuKWT3pBqxQnYXpMiTsErFQCNSElQsXmK19OFMc0DE%2BryphSkcMZx0r0XQ5mwjOpOpQOHEbN8rmJbTrMlB%2F5DhYCL85nLE%2B%2Bs9VawtmwuqAgwBEHBPqWr1zCHvb9Y7u2GiNbUtbnnp0H001uasjssvpAG55UYYPm07M8oGdTC1O9WPmEqxSC6d32hYsiVcsYWDgTwanmGSgcamom5VGOQ%2FwrWWpmcT8xu0Vy2zXOyOn6YhZWvU2R7nd3VT7cMA7mtHgfveF1z%2BVpIP140g44OS95PcgXCf9sj8fATBCoHNnxDJYWOFn3sTvW6jERMIjSsc8GOqUBireGE%2Bou2TM0nEZuOiEiHRuRYQuagSvg0H4DWLcSWOgB5eW5kC%2F3I30cNbomFFl0yrIIlqc8rzD9%2Fd7Rj8fY%2F6hlXL6UQqoOIPm4zI%2Fo79Y1xoGzHKhMQUOAYSh7SOfr32FCXuSnYBxHCl5UKuhnVKbgOQGP8l1Np4%2Fq4NVZu27dHiKXfnUl7%2FlWglc36nTjOX6mY%2F9tJBLjHyuG6sRxey8YTeL9&X-Amz-Signature=bbf03ca24b4edb1885af8e203daeba642bc147ff76aeb96429e0d57f5719b052&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q66XCAJE%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHY%2Fw4RKATQrUVKhsQcfUvWckXqlGu4hJFGMq3OJFyiwAiEA1cmg7k4XifJ2VUQ%2BN0gnZd%2F1%2Fd31xpR2mY68CyToiYIqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcy6QPC6cC0fBmLZyrcA05nk%2Bjl3bef9%2BOISc7Ax2h6t01A7CgvdhlBir8EMn8Tua2nIih3wde5TWHl2AfBGwliNhpCA8H7uXfOG5SyRxUjp4ETMYXjBkSD4w5uSjDamHVAWl0NuRHfwVfJmQJRg%2FJSwm7k7UsKP1IitoKGBtQUuWckU8A5nUEnJgBk%2BdjhAeH4CCTXa6i%2FRL4qYY9oIpDwW2zH832jwV0gbxWeyf%2FL%2FCVTWTlvtQmpsZ6TPkxTypBzZqryIO7mvvSLYc5SSFw6sQWHcEPv9PJEpGP1ltdXVtUdS52K9NkNaKetSo7UUinD%2FlzNCd9Iu%2F2CWFqnjuKWT3pBqxQnYXpMiTsErFQCNSElQsXmK19OFMc0DE%2BryphSkcMZx0r0XQ5mwjOpOpQOHEbN8rmJbTrMlB%2F5DhYCL85nLE%2B%2Bs9VawtmwuqAgwBEHBPqWr1zCHvb9Y7u2GiNbUtbnnp0H001uasjssvpAG55UYYPm07M8oGdTC1O9WPmEqxSC6d32hYsiVcsYWDgTwanmGSgcamom5VGOQ%2FwrWWpmcT8xu0Vy2zXOyOn6YhZWvU2R7nd3VT7cMA7mtHgfveF1z%2BVpIP140g44OS95PcgXCf9sj8fATBCoHNnxDJYWOFn3sTvW6jERMIjSsc8GOqUBireGE%2Bou2TM0nEZuOiEiHRuRYQuagSvg0H4DWLcSWOgB5eW5kC%2F3I30cNbomFFl0yrIIlqc8rzD9%2Fd7Rj8fY%2F6hlXL6UQqoOIPm4zI%2Fo79Y1xoGzHKhMQUOAYSh7SOfr32FCXuSnYBxHCl5UKuhnVKbgOQGP8l1Np4%2Fq4NVZu27dHiKXfnUl7%2FlWglc36nTjOX6mY%2F9tJBLjHyuG6sRxey8YTeL9&X-Amz-Signature=325f77ccd088766050b281da9ee7927505132a76f3e46e646f0e3d3101826e4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q66XCAJE%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHY%2Fw4RKATQrUVKhsQcfUvWckXqlGu4hJFGMq3OJFyiwAiEA1cmg7k4XifJ2VUQ%2BN0gnZd%2F1%2Fd31xpR2mY68CyToiYIqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcy6QPC6cC0fBmLZyrcA05nk%2Bjl3bef9%2BOISc7Ax2h6t01A7CgvdhlBir8EMn8Tua2nIih3wde5TWHl2AfBGwliNhpCA8H7uXfOG5SyRxUjp4ETMYXjBkSD4w5uSjDamHVAWl0NuRHfwVfJmQJRg%2FJSwm7k7UsKP1IitoKGBtQUuWckU8A5nUEnJgBk%2BdjhAeH4CCTXa6i%2FRL4qYY9oIpDwW2zH832jwV0gbxWeyf%2FL%2FCVTWTlvtQmpsZ6TPkxTypBzZqryIO7mvvSLYc5SSFw6sQWHcEPv9PJEpGP1ltdXVtUdS52K9NkNaKetSo7UUinD%2FlzNCd9Iu%2F2CWFqnjuKWT3pBqxQnYXpMiTsErFQCNSElQsXmK19OFMc0DE%2BryphSkcMZx0r0XQ5mwjOpOpQOHEbN8rmJbTrMlB%2F5DhYCL85nLE%2B%2Bs9VawtmwuqAgwBEHBPqWr1zCHvb9Y7u2GiNbUtbnnp0H001uasjssvpAG55UYYPm07M8oGdTC1O9WPmEqxSC6d32hYsiVcsYWDgTwanmGSgcamom5VGOQ%2FwrWWpmcT8xu0Vy2zXOyOn6YhZWvU2R7nd3VT7cMA7mtHgfveF1z%2BVpIP140g44OS95PcgXCf9sj8fATBCoHNnxDJYWOFn3sTvW6jERMIjSsc8GOqUBireGE%2Bou2TM0nEZuOiEiHRuRYQuagSvg0H4DWLcSWOgB5eW5kC%2F3I30cNbomFFl0yrIIlqc8rzD9%2Fd7Rj8fY%2F6hlXL6UQqoOIPm4zI%2Fo79Y1xoGzHKhMQUOAYSh7SOfr32FCXuSnYBxHCl5UKuhnVKbgOQGP8l1Np4%2Fq4NVZu27dHiKXfnUl7%2FlWglc36nTjOX6mY%2F9tJBLjHyuG6sRxey8YTeL9&X-Amz-Signature=3474f87eb21cab98a57a21a0f8f931bb3884277337cb2e0e9960206d53298346&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q66XCAJE%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHY%2Fw4RKATQrUVKhsQcfUvWckXqlGu4hJFGMq3OJFyiwAiEA1cmg7k4XifJ2VUQ%2BN0gnZd%2F1%2Fd31xpR2mY68CyToiYIqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcy6QPC6cC0fBmLZyrcA05nk%2Bjl3bef9%2BOISc7Ax2h6t01A7CgvdhlBir8EMn8Tua2nIih3wde5TWHl2AfBGwliNhpCA8H7uXfOG5SyRxUjp4ETMYXjBkSD4w5uSjDamHVAWl0NuRHfwVfJmQJRg%2FJSwm7k7UsKP1IitoKGBtQUuWckU8A5nUEnJgBk%2BdjhAeH4CCTXa6i%2FRL4qYY9oIpDwW2zH832jwV0gbxWeyf%2FL%2FCVTWTlvtQmpsZ6TPkxTypBzZqryIO7mvvSLYc5SSFw6sQWHcEPv9PJEpGP1ltdXVtUdS52K9NkNaKetSo7UUinD%2FlzNCd9Iu%2F2CWFqnjuKWT3pBqxQnYXpMiTsErFQCNSElQsXmK19OFMc0DE%2BryphSkcMZx0r0XQ5mwjOpOpQOHEbN8rmJbTrMlB%2F5DhYCL85nLE%2B%2Bs9VawtmwuqAgwBEHBPqWr1zCHvb9Y7u2GiNbUtbnnp0H001uasjssvpAG55UYYPm07M8oGdTC1O9WPmEqxSC6d32hYsiVcsYWDgTwanmGSgcamom5VGOQ%2FwrWWpmcT8xu0Vy2zXOyOn6YhZWvU2R7nd3VT7cMA7mtHgfveF1z%2BVpIP140g44OS95PcgXCf9sj8fATBCoHNnxDJYWOFn3sTvW6jERMIjSsc8GOqUBireGE%2Bou2TM0nEZuOiEiHRuRYQuagSvg0H4DWLcSWOgB5eW5kC%2F3I30cNbomFFl0yrIIlqc8rzD9%2Fd7Rj8fY%2F6hlXL6UQqoOIPm4zI%2Fo79Y1xoGzHKhMQUOAYSh7SOfr32FCXuSnYBxHCl5UKuhnVKbgOQGP8l1Np4%2Fq4NVZu27dHiKXfnUl7%2FlWglc36nTjOX6mY%2F9tJBLjHyuG6sRxey8YTeL9&X-Amz-Signature=68c4c8834a7a7b3270b67d1f28d1da295228aec23790eb016f811eace0d2107c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QIJJBFAL%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGNplpy8AA9LHQEje8L%2BcX6dJvsEFsPsOZMEzHMXbpQtAiEAw5pu%2Ftrw95Y6swoBytH94hlKBOn0FlNCGa5EICh84aAqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKVjaF2Sk%2FGHQcH3SSrcA6t8QxE%2FHo%2Bm6ciK5RLoiRg31aly4D54ePVb3iCi3BXgattLCsiu0SDueW5wHKvtfxt79O1kQj6cqGlKJJUZNZ7JmSC%2BHAFKbL0Bg0Q6lGGDiS%2FbonwVyeyIL%2BXQMYe69FaMXmy1meEy%2F5C%2B6Q6AizFXTQUUhtT4bZAnSYR%2BgPPP04k%2F6JSSlzYrtcy49joz3FdV8K4SvE2Gea8eC%2Bl7p%2BBfej%2Fk%2BFrwiBvB2B4cW3isg341xTS7aHCfa0bVMTK7I93uFYEtTRm85LUMo%2B4x1QJGoBqvSPcWS9Gs4GzpNaBfq6QuQWyxaBvoVMCpexM%2Fw71fBH%2BLgk14Zotw%2BXSODxY5L0jo5DfD6rxXngqjbtoeDR5uRxfX6a0S%2Bn3RcvyJxBHWdfpUVJrpHs07VnJVwUiJyRxLLdowFzs6Tf8uafgDkAA3gmd3Lq9U6tGEsECgGK2%2BIgabJOJQGjboPiP3htiiCic4kFZUGQTj8skh%2B3Zzu96pxDLJ3YJBhXhzzwWfjoMJE%2Bdp%2Fk0%2BsMrm8kFGHte427oAhBp0AM%2FIfubQhqlo%2F%2FCVxTpGILZZFKoHPgIbuQS1JHWJV0cdG%2BDBiGQ7gWc1ydpveG6hFcInEDfZMKkEwijW9uHBSKLIM44dMJ3Ssc8GOqUBM7YpLgE3BRan40eBSvgXlLKacrrhsSdfXAQwgt%2Bl%2Fv%2FXdbleI5%2FH6HFfljzTz%2FFyAUzy6uYAIXn0zrFpzI6TJnr8MV%2BK1czVw5Y1Ea5NyWLYBNkzTh1WxKe5%2Fa8GSSZK22d8rtmQ52NiW%2BOJTmV5LT5UiL7PzDF6EhnNUrzr3sMpGEXtNkEFyWlpvJ1N7UBg4sXIgkluaWBuQxh6FgLqFzWRtXVh&X-Amz-Signature=96a543f1d8d613fdd6f8ec38161ba5f16a2bb0566e45afa3cbb83c48fd00eda6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466THWIK6DI%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDc77AZuflvi97YX1LPCseY7tysKoc5Gon9OZ7LVx1PYAIgbboS6DL4XPKcVzghBe16yLKBLL9LoaHNRtJxdY124vAqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAOCfEIdx5jVTqvdWircAw%2FUQojK69gqoF21h1m8pO7wly8x%2BdA6ywniBmnFjVbhHMP7xvdq6Hy18TZUY3bPRGNFb03SuHv3nS%2FmjGgWssjD6lNwwTA7QdbqW5Cn9YK38du9X6Oz6bupEOpB1nU5KV0Z7fHnNm4ev%2B8F2d2sshUZ2nwd81nCsfOCDFLR2LO6VQennN95Mv3MF8GIU5kdc0483KJc2qlrxt1jr3uoPh6Iinay0FlHj43pzyvU2PGv%2BVSEd2L3nbk8FLBBDnXDvgVTNsZr9khfCFztIqcW8VSKDSfDBijoxr3txQ61RkR1dRbYgjKpK0lKcdqROCkIfCBrK44Gk6qWkDFOH3QbSg1BEXjgBtDaaux8ctBMwMo7Okc5%2BDZKlsR551OILqBGOEtU1xQc%2FId7C%2B7bWmuhUB8Lr328sI54ra62oc8a06fx%2FutAOCcpeUjuYiLqU%2FI1n9Pw%2BFVKJ2Sj%2BI3TVF193iYDE76CedeF9sNocn22g2gJbi3SYDJcpkDOBDpbLQNFkRdh5dAw13RJsG5xF6XL9vWZeZn828pFBx0etj5tBx0r0s3q21q9kTGs1rC%2FDIl8PaO4lzNcYZCUviUoTmggKdm0f%2Bua5Kdc4Vbw%2FIDRGs7SeMOAhrpx7m8qwvGWMNvRsc8GOqUBOUWQ1Xvo8RNMsORk4KdtISwy4pf1NEVPpJ28w9m0yKblgLxkqZkSrtPOifxp1BOJFYHp36xbnjxgn4Jus8XuX5H8RkdZipLqrXKDcDc%2F9G1ULAS5d9IQa9b8f4Kvu3pyalW%2FTQ390SzBwhScIFGOEitS5qvP%2BS1yKsz5LvQMRwewG8HTRk7MQC74t0rbrvjVLtF%2FbWKcNz6EmbPDXDRBYUiuf6of&X-Amz-Signature=94a1b84c433b2c2b951cf251cc1552c6e49bcd803e6ff1e08a0093ad51d7277d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466THWIK6DI%2F20260425%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260425T085201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDc77AZuflvi97YX1LPCseY7tysKoc5Gon9OZ7LVx1PYAIgbboS6DL4XPKcVzghBe16yLKBLL9LoaHNRtJxdY124vAqiAQIkP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAOCfEIdx5jVTqvdWircAw%2FUQojK69gqoF21h1m8pO7wly8x%2BdA6ywniBmnFjVbhHMP7xvdq6Hy18TZUY3bPRGNFb03SuHv3nS%2FmjGgWssjD6lNwwTA7QdbqW5Cn9YK38du9X6Oz6bupEOpB1nU5KV0Z7fHnNm4ev%2B8F2d2sshUZ2nwd81nCsfOCDFLR2LO6VQennN95Mv3MF8GIU5kdc0483KJc2qlrxt1jr3uoPh6Iinay0FlHj43pzyvU2PGv%2BVSEd2L3nbk8FLBBDnXDvgVTNsZr9khfCFztIqcW8VSKDSfDBijoxr3txQ61RkR1dRbYgjKpK0lKcdqROCkIfCBrK44Gk6qWkDFOH3QbSg1BEXjgBtDaaux8ctBMwMo7Okc5%2BDZKlsR551OILqBGOEtU1xQc%2FId7C%2B7bWmuhUB8Lr328sI54ra62oc8a06fx%2FutAOCcpeUjuYiLqU%2FI1n9Pw%2BFVKJ2Sj%2BI3TVF193iYDE76CedeF9sNocn22g2gJbi3SYDJcpkDOBDpbLQNFkRdh5dAw13RJsG5xF6XL9vWZeZn828pFBx0etj5tBx0r0s3q21q9kTGs1rC%2FDIl8PaO4lzNcYZCUviUoTmggKdm0f%2Bua5Kdc4Vbw%2FIDRGs7SeMOAhrpx7m8qwvGWMNvRsc8GOqUBOUWQ1Xvo8RNMsORk4KdtISwy4pf1NEVPpJ28w9m0yKblgLxkqZkSrtPOifxp1BOJFYHp36xbnjxgn4Jus8XuX5H8RkdZipLqrXKDcDc%2F9G1ULAS5d9IQa9b8f4Kvu3pyalW%2FTQ390SzBwhScIFGOEitS5qvP%2BS1yKsz5LvQMRwewG8HTRk7MQC74t0rbrvjVLtF%2FbWKcNz6EmbPDXDRBYUiuf6of&X-Amz-Signature=a7a4926315982859c87683556cf98595f3b34fd2127e59c926c4d4db2cfe614f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
