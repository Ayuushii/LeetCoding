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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JOA26JZ%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDpgaT5wRyKuVsG%2BIFoC96vdwgSzqsavDp3GcSukF964wIgEQhNUH2K0PI5kXcc13pzfHkWcqhpVHJCvtjM0LbCkGkqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLog5ySRY%2BpTGZy2fCrcA%2FDqfJV0e4aQJnLpAgcfVhfEmmccIoNrE9esJtIzRl5f0YURH2M65reBtTDMyogIoH0DpeZgtNmCzPHgO1rwkwd89S24qCxvlgnU03rNOFfMJ2PHEbG4GPDPJQk00jKYEo%2F5bsZaWJddBnQqtVfROpPwMKmtsCWJXJmFgznVqnB74gakIW2tWjbdLPY%2BL6fOI2EEFtqrBUksUdWx%2BbpWWy6YOBw8pZidiT4mxz8h0ztx1%2Bi2n0mdkP2cCKjxhKgx%2BzjQv%2FHiqLlr%2BzzprDD7kpCOVAfMB3DF22bsUdxD2hF3W21%2FD8Zxuj%2Fs0XEdJ%2BQ4g4cHIG2daECyClwBr3vVX6SWq5iqmgr6Rm9VZTKcPjpwgvmjdM4L9r6PGb2uX1F6jT7yu3OlPyB%2BjGkhkzL7l6tn3a5Kvk%2F24VOaczsBiWBic4aQHuZBs2FGJTuF6Qb9ES8FqD%2Fi3RfEW2dw7wRqNSJLySt7WioOFmfuEin%2BrLx5AIYYIvsWkt0%2Flmzd%2BAwVhkYCR562WSKYGm9s6NyzaD86UC2ieDsxqJHd7HwFa41Z8Js%2BtYeHPPZLaHaoAUTL%2FWWxk8XL4Ha9QgaS05PZajWHjnPZqrUdfYPHYb5tDBEjsRNsh2b8OcTU2wB8MIGspdQGOqUBaGbOllfXbaJMr%2FvN7CYUT%2FC4UoCM2OS4i9FP4IDXfJZcYuyt%2BNKQAp7LYFFyd%2Bmq4WT%2BDUswqAnGbo6s%2FAM%2B8lk3pCtiZ1kvMh59vMBChonhZ%2Bkd%2FnPALFkogcVls6xSZ0rgAN9raA2G7LSGQdAIQKjzE4PyxmzvgOO1Bu49plp89RbMiZCwL%2FJWY9UD3vJUTtLffRjMOgGCTk8huxdrvi1pJWlO&X-Amz-Signature=1f52c7151a74a60b6bcfbf561bd995ec1e0e931e752ef1215e0bbc42108a6fba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JOA26JZ%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDpgaT5wRyKuVsG%2BIFoC96vdwgSzqsavDp3GcSukF964wIgEQhNUH2K0PI5kXcc13pzfHkWcqhpVHJCvtjM0LbCkGkqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLog5ySRY%2BpTGZy2fCrcA%2FDqfJV0e4aQJnLpAgcfVhfEmmccIoNrE9esJtIzRl5f0YURH2M65reBtTDMyogIoH0DpeZgtNmCzPHgO1rwkwd89S24qCxvlgnU03rNOFfMJ2PHEbG4GPDPJQk00jKYEo%2F5bsZaWJddBnQqtVfROpPwMKmtsCWJXJmFgznVqnB74gakIW2tWjbdLPY%2BL6fOI2EEFtqrBUksUdWx%2BbpWWy6YOBw8pZidiT4mxz8h0ztx1%2Bi2n0mdkP2cCKjxhKgx%2BzjQv%2FHiqLlr%2BzzprDD7kpCOVAfMB3DF22bsUdxD2hF3W21%2FD8Zxuj%2Fs0XEdJ%2BQ4g4cHIG2daECyClwBr3vVX6SWq5iqmgr6Rm9VZTKcPjpwgvmjdM4L9r6PGb2uX1F6jT7yu3OlPyB%2BjGkhkzL7l6tn3a5Kvk%2F24VOaczsBiWBic4aQHuZBs2FGJTuF6Qb9ES8FqD%2Fi3RfEW2dw7wRqNSJLySt7WioOFmfuEin%2BrLx5AIYYIvsWkt0%2Flmzd%2BAwVhkYCR562WSKYGm9s6NyzaD86UC2ieDsxqJHd7HwFa41Z8Js%2BtYeHPPZLaHaoAUTL%2FWWxk8XL4Ha9QgaS05PZajWHjnPZqrUdfYPHYb5tDBEjsRNsh2b8OcTU2wB8MIGspdQGOqUBaGbOllfXbaJMr%2FvN7CYUT%2FC4UoCM2OS4i9FP4IDXfJZcYuyt%2BNKQAp7LYFFyd%2Bmq4WT%2BDUswqAnGbo6s%2FAM%2B8lk3pCtiZ1kvMh59vMBChonhZ%2Bkd%2FnPALFkogcVls6xSZ0rgAN9raA2G7LSGQdAIQKjzE4PyxmzvgOO1Bu49plp89RbMiZCwL%2FJWY9UD3vJUTtLffRjMOgGCTk8huxdrvi1pJWlO&X-Amz-Signature=f8f5c70b9f27e92ad442f7976b6fad65f8f763e2ca231f9162cfb2390c30b2fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JOA26JZ%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDpgaT5wRyKuVsG%2BIFoC96vdwgSzqsavDp3GcSukF964wIgEQhNUH2K0PI5kXcc13pzfHkWcqhpVHJCvtjM0LbCkGkqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLog5ySRY%2BpTGZy2fCrcA%2FDqfJV0e4aQJnLpAgcfVhfEmmccIoNrE9esJtIzRl5f0YURH2M65reBtTDMyogIoH0DpeZgtNmCzPHgO1rwkwd89S24qCxvlgnU03rNOFfMJ2PHEbG4GPDPJQk00jKYEo%2F5bsZaWJddBnQqtVfROpPwMKmtsCWJXJmFgznVqnB74gakIW2tWjbdLPY%2BL6fOI2EEFtqrBUksUdWx%2BbpWWy6YOBw8pZidiT4mxz8h0ztx1%2Bi2n0mdkP2cCKjxhKgx%2BzjQv%2FHiqLlr%2BzzprDD7kpCOVAfMB3DF22bsUdxD2hF3W21%2FD8Zxuj%2Fs0XEdJ%2BQ4g4cHIG2daECyClwBr3vVX6SWq5iqmgr6Rm9VZTKcPjpwgvmjdM4L9r6PGb2uX1F6jT7yu3OlPyB%2BjGkhkzL7l6tn3a5Kvk%2F24VOaczsBiWBic4aQHuZBs2FGJTuF6Qb9ES8FqD%2Fi3RfEW2dw7wRqNSJLySt7WioOFmfuEin%2BrLx5AIYYIvsWkt0%2Flmzd%2BAwVhkYCR562WSKYGm9s6NyzaD86UC2ieDsxqJHd7HwFa41Z8Js%2BtYeHPPZLaHaoAUTL%2FWWxk8XL4Ha9QgaS05PZajWHjnPZqrUdfYPHYb5tDBEjsRNsh2b8OcTU2wB8MIGspdQGOqUBaGbOllfXbaJMr%2FvN7CYUT%2FC4UoCM2OS4i9FP4IDXfJZcYuyt%2BNKQAp7LYFFyd%2Bmq4WT%2BDUswqAnGbo6s%2FAM%2B8lk3pCtiZ1kvMh59vMBChonhZ%2Bkd%2FnPALFkogcVls6xSZ0rgAN9raA2G7LSGQdAIQKjzE4PyxmzvgOO1Bu49plp89RbMiZCwL%2FJWY9UD3vJUTtLffRjMOgGCTk8huxdrvi1pJWlO&X-Amz-Signature=53573fe891fc15bb0da8935872ccd9ee92efed65e465cf6993b0b7a2633aa8f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MUJXVJR%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIaD%2BhQaM90%2F4lQYRvBynI8YKO6sSON3KmL%2FDINhpYNwIgSz0E67Xcdpm5WCdQUpyzGXqyxpQ4qLI9jroBvWoLH10qiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDxfJcrVTS7b2M0fzyrcA%2B1AgSnMPmVWgy9ygmJ3y1e4BBQjdfWHK4QYOwoiDLpRPdMbscm1gPcvAeO8xHiVKOkO1btx8n6NwF6aKio4IkrQTgaiJevHx%2FRXzsJxqrQ3GXerIO5uMCUeTeyQJY%2FQUA%2BUBGIIoWDqvwchdziQFM%2BWtasDvHS9wKWy0S%2BdNwGYXxQdfRrXC8hUCGY44nzPA6IHlNiy3bh6JsKKaSFv5IreQc0whY5SVHC88rkP%2BRiINgJqtHh61Dj0LarGQt5Tp8hdmyGoemfjbCCgMa3c8L93VoxkPdiF9OWaVh43R65wS3PG6k9Y%2BIs4aOXeGzA4TyIIhmUuD%2BybHUmZ%2BEZhcxAh6oz6TJeenjPzgfQmjg6Tskg59TrjIeaB6xa8B5BdC8uiqCZnJi8fDr9z8SL3wB5XcUgsKFm2E6vUdjtUVc%2BZ22yHOiIQAwZ2ki1E8atKZTp%2F%2BEMHjrpC723fZBE3%2FHhc8ZjUtAn3HxHYYaWnFOvqoBRw5Hs22BnnnYDgLVNThgzlIGSONwUQlcW8wpG3N8PBlvvDeLUhAJjq7eWObtIQZwg8VU1NAqLvtkdZGNQASE43jD1P0iUyEl13%2Bv1nwbdFJLTx2Wwx1pi4eUckQt2hJQs8rnzxXbRU9cJCMOSrpdQGOqUBtnn26DrGjUgMhauzg2Q%2FgW5Hy2fa4Rs7zoz%2FuaekbX2%2BpQCwKNqm6VYd%2F%2F3STtoU7kaY4UQgeSGVBc5aObOu0sOMu%2B%2BrrDRuI%2BGaMC0ARPikCUsgqE7OXQWzVzLqJlYstB1J9IR7WFH51rqP%2BUt3%2B%2BNIBS9gLgZ6NnTUjv5wGYNjNXj%2BFncmYwkx%2BAtCCy7yeFkKZNcz%2BhQscnBl1ZXAtcTH%2BsOP&X-Amz-Signature=0887c42626f2061a1142fb9111891840f79d1d9818c60c5d5c65b6acfb91a6fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MUJXVJR%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIaD%2BhQaM90%2F4lQYRvBynI8YKO6sSON3KmL%2FDINhpYNwIgSz0E67Xcdpm5WCdQUpyzGXqyxpQ4qLI9jroBvWoLH10qiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDxfJcrVTS7b2M0fzyrcA%2B1AgSnMPmVWgy9ygmJ3y1e4BBQjdfWHK4QYOwoiDLpRPdMbscm1gPcvAeO8xHiVKOkO1btx8n6NwF6aKio4IkrQTgaiJevHx%2FRXzsJxqrQ3GXerIO5uMCUeTeyQJY%2FQUA%2BUBGIIoWDqvwchdziQFM%2BWtasDvHS9wKWy0S%2BdNwGYXxQdfRrXC8hUCGY44nzPA6IHlNiy3bh6JsKKaSFv5IreQc0whY5SVHC88rkP%2BRiINgJqtHh61Dj0LarGQt5Tp8hdmyGoemfjbCCgMa3c8L93VoxkPdiF9OWaVh43R65wS3PG6k9Y%2BIs4aOXeGzA4TyIIhmUuD%2BybHUmZ%2BEZhcxAh6oz6TJeenjPzgfQmjg6Tskg59TrjIeaB6xa8B5BdC8uiqCZnJi8fDr9z8SL3wB5XcUgsKFm2E6vUdjtUVc%2BZ22yHOiIQAwZ2ki1E8atKZTp%2F%2BEMHjrpC723fZBE3%2FHhc8ZjUtAn3HxHYYaWnFOvqoBRw5Hs22BnnnYDgLVNThgzlIGSONwUQlcW8wpG3N8PBlvvDeLUhAJjq7eWObtIQZwg8VU1NAqLvtkdZGNQASE43jD1P0iUyEl13%2Bv1nwbdFJLTx2Wwx1pi4eUckQt2hJQs8rnzxXbRU9cJCMOSrpdQGOqUBtnn26DrGjUgMhauzg2Q%2FgW5Hy2fa4Rs7zoz%2FuaekbX2%2BpQCwKNqm6VYd%2F%2F3STtoU7kaY4UQgeSGVBc5aObOu0sOMu%2B%2BrrDRuI%2BGaMC0ARPikCUsgqE7OXQWzVzLqJlYstB1J9IR7WFH51rqP%2BUt3%2B%2BNIBS9gLgZ6NnTUjv5wGYNjNXj%2BFncmYwkx%2BAtCCy7yeFkKZNcz%2BhQscnBl1ZXAtcTH%2BsOP&X-Amz-Signature=e95c2a922e8e4dbaef8f415438d6c66317b09295d7c2422ab449144cbc986d0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MUJXVJR%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIaD%2BhQaM90%2F4lQYRvBynI8YKO6sSON3KmL%2FDINhpYNwIgSz0E67Xcdpm5WCdQUpyzGXqyxpQ4qLI9jroBvWoLH10qiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDxfJcrVTS7b2M0fzyrcA%2B1AgSnMPmVWgy9ygmJ3y1e4BBQjdfWHK4QYOwoiDLpRPdMbscm1gPcvAeO8xHiVKOkO1btx8n6NwF6aKio4IkrQTgaiJevHx%2FRXzsJxqrQ3GXerIO5uMCUeTeyQJY%2FQUA%2BUBGIIoWDqvwchdziQFM%2BWtasDvHS9wKWy0S%2BdNwGYXxQdfRrXC8hUCGY44nzPA6IHlNiy3bh6JsKKaSFv5IreQc0whY5SVHC88rkP%2BRiINgJqtHh61Dj0LarGQt5Tp8hdmyGoemfjbCCgMa3c8L93VoxkPdiF9OWaVh43R65wS3PG6k9Y%2BIs4aOXeGzA4TyIIhmUuD%2BybHUmZ%2BEZhcxAh6oz6TJeenjPzgfQmjg6Tskg59TrjIeaB6xa8B5BdC8uiqCZnJi8fDr9z8SL3wB5XcUgsKFm2E6vUdjtUVc%2BZ22yHOiIQAwZ2ki1E8atKZTp%2F%2BEMHjrpC723fZBE3%2FHhc8ZjUtAn3HxHYYaWnFOvqoBRw5Hs22BnnnYDgLVNThgzlIGSONwUQlcW8wpG3N8PBlvvDeLUhAJjq7eWObtIQZwg8VU1NAqLvtkdZGNQASE43jD1P0iUyEl13%2Bv1nwbdFJLTx2Wwx1pi4eUckQt2hJQs8rnzxXbRU9cJCMOSrpdQGOqUBtnn26DrGjUgMhauzg2Q%2FgW5Hy2fa4Rs7zoz%2FuaekbX2%2BpQCwKNqm6VYd%2F%2F3STtoU7kaY4UQgeSGVBc5aObOu0sOMu%2B%2BrrDRuI%2BGaMC0ARPikCUsgqE7OXQWzVzLqJlYstB1J9IR7WFH51rqP%2BUt3%2B%2BNIBS9gLgZ6NnTUjv5wGYNjNXj%2BFncmYwkx%2BAtCCy7yeFkKZNcz%2BhQscnBl1ZXAtcTH%2BsOP&X-Amz-Signature=fbaaa5e687bcd15c44ced4d0e35799eace94f4accdc3e6451c0261b824358641&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MUJXVJR%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082722Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIaD%2BhQaM90%2F4lQYRvBynI8YKO6sSON3KmL%2FDINhpYNwIgSz0E67Xcdpm5WCdQUpyzGXqyxpQ4qLI9jroBvWoLH10qiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDxfJcrVTS7b2M0fzyrcA%2B1AgSnMPmVWgy9ygmJ3y1e4BBQjdfWHK4QYOwoiDLpRPdMbscm1gPcvAeO8xHiVKOkO1btx8n6NwF6aKio4IkrQTgaiJevHx%2FRXzsJxqrQ3GXerIO5uMCUeTeyQJY%2FQUA%2BUBGIIoWDqvwchdziQFM%2BWtasDvHS9wKWy0S%2BdNwGYXxQdfRrXC8hUCGY44nzPA6IHlNiy3bh6JsKKaSFv5IreQc0whY5SVHC88rkP%2BRiINgJqtHh61Dj0LarGQt5Tp8hdmyGoemfjbCCgMa3c8L93VoxkPdiF9OWaVh43R65wS3PG6k9Y%2BIs4aOXeGzA4TyIIhmUuD%2BybHUmZ%2BEZhcxAh6oz6TJeenjPzgfQmjg6Tskg59TrjIeaB6xa8B5BdC8uiqCZnJi8fDr9z8SL3wB5XcUgsKFm2E6vUdjtUVc%2BZ22yHOiIQAwZ2ki1E8atKZTp%2F%2BEMHjrpC723fZBE3%2FHhc8ZjUtAn3HxHYYaWnFOvqoBRw5Hs22BnnnYDgLVNThgzlIGSONwUQlcW8wpG3N8PBlvvDeLUhAJjq7eWObtIQZwg8VU1NAqLvtkdZGNQASE43jD1P0iUyEl13%2Bv1nwbdFJLTx2Wwx1pi4eUckQt2hJQs8rnzxXbRU9cJCMOSrpdQGOqUBtnn26DrGjUgMhauzg2Q%2FgW5Hy2fa4Rs7zoz%2FuaekbX2%2BpQCwKNqm6VYd%2F%2F3STtoU7kaY4UQgeSGVBc5aObOu0sOMu%2B%2BrrDRuI%2BGaMC0ARPikCUsgqE7OXQWzVzLqJlYstB1J9IR7WFH51rqP%2BUt3%2B%2BNIBS9gLgZ6NnTUjv5wGYNjNXj%2BFncmYwkx%2BAtCCy7yeFkKZNcz%2BhQscnBl1ZXAtcTH%2BsOP&X-Amz-Signature=679516d6a6e01aa07c96002586f5ce4eef8e07e0cb7207a8a2a1313a1c750243&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665IOFSPL2%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBsxwly4ECw3YyhNhAa%2F8shlnJCa4oI3uJHR2nfLx0CyAiEA%2F1NDc5LtlpB0QJRAZaiB%2BL4WYJt4ch58m6LhbMDvPpwqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLzL5af%2BZM1Y01YQKCrcAxA7edxE0x%2BM1KeNVYqdw4YBjs9aTQ25asZXNIRZOe%2BHWAMEPBcrJwNWlfbKpuOm50E0mpdGHwX5dFrX%2BDERLu5J6T7Q4V545W7I3c0OPD5yJ3HkYnOK%2BeOveKMiHc9VM8Xw7BP0inE%2FeLTrWV1k7dLxtuNYacdo%2FtoVUc%2BT1sNv2a5rBMbgx7zoOSyEPZHwZ%2FADiiX%2FPkM36p27esFHWbaTQv6l3X9Qf10UqoH6JAjtJlogPyEZfdBlY3rdatogpP7urkdPvG29eZu533GlzJYSIfKiNb5gT3RO3y0%2Bp3JwEwhgdWNnMRpztGcpUxAWJjPxc2uTQSlWmIhnAFfCmAisiSW3I3rhtrETmMOTGq%2Bv3vCe2KAJAvHqJoyMJj6A6edpzmGag8KiLbhIfoUD4bbkqvbdZsmDbUJ%2F%2FUUB6ZwZVo2nDBsa5KQahgwa17n2OKrRuWg%2B5rLYMujNUiFNJBd73AotQ5AWMWs1cYxt1EeybaEXVetWXw76DQuESOguEaRd%2FN%2BQ2zONPPuc4rL3qTyVeg8bwkyNHNRl2o3HT9NWIGbxvbd6AxwMR4NMa7WIoQLSCXSznoSoP%2B4x6JYdJ7RdfhcC0Mb65nQ%2F%2BuWMyzjHO2A0%2FYaKU33OiSS5MPWspdQGOqUBM2lkkhUQ0tbUmyOxIHLe%2FHINYb61%2FW%2BusgM%2FbGtD4JAPVmsedfGqyOZO6hl%2FtIQBs%2F8Bh8NK4EwTOlnOr22pwOL2GRm%2F46a7GxcgPUKwY8vcpZ8gyMc25doke9s1pKuOIm1grQsGUa90itE0NrdSqKcVk2KusCblbDq1MPjOnDrtqllgnLJzkzBxjhIFYqi5mgJK0J2IHo1HASMNntcPnc0lnxhq&X-Amz-Signature=3b4ffa85bcdacab3b33578d92ebe64d0e1a82366e0e6a2727a6cce43c8415ef3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXR2S7BQ%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHO2KMHaymg9Mf2zTN4Zo5biwlcDbYAl1wWcIx7TE92cAiEA%2Byp0lc3T%2Fwx09A8S8DAxjTz2s2TuSUF%2FyYDmD6xmKccqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHGE8fKtP4bAZZlVyyrcA11C5gjglauLd%2FG3IQuTfGZySxOdcqvflcDMSyteBUdTyTj3zd39JIKmEZrYo2u0cPgzTbXvXVg7bvHBY97MqH4rnu3TsjFDJOZdOOGHCECJHHa%2BqNQ7RMGnPTVogq92ArQAWLZsvsr1UlQGWENnzLbr6o2lvr%2Bw76%2B8WtRzgnqaXWySV0kQLDcbLNjFedTZVokrqPb6%2Bm5BOvkYuFT1LzYHy9gUImSuDCbqIpcyIqj1viePQP7Zp5lyQPcxSntzT0cqle5u3EgwHxAQ9FyBny4797RuYYvkh7iTlb0uv6Rl%2Fji6z%2BTmslHuqBvZvw%2Fd1GYuK3wbRB0me7LdFh%2B3wzu6ZFriUkfiYRufX5RxvDbNeXuTp2EZuFwX%2FBx95n6L%2FkXHnXTiFiypxim%2FRQDZ%2FpgJgwyudCoB4s8g0ecpLnLdgMqdcO5qRr4yn7N5tNaK57ZNzLLhMeN3KTMCCg58Gt4j39FaA1m9iw4AkEEukkYxUyt6e%2FE7AQS9cy1vjC4%2B5NDQdrx1LfEfTZtg3JaPxE9CtfOl5ySVxVKHGpKZgJbqGZ65PhuX19kf4pHaqHPf5neKUEaA3d8JAbd2oLSN2loRC8txwAubgtWHBw4%2FVcdx%2B9H1Hzmz9iIHpwZWMPOupdQGOqUBYyyo1%2BxuFLzBd0dbsf6z3COCoCfKtVPb6TJXiLyLebO13mqhD5vRXKAqXS4cXq9tI9J6I4VOjyYHQBWIy92h7KHhLFympmDRtuLYVRkGp3xA7uZWngHaQJrT9vSqv6povsqANQApQN%2B%2FxfzM%2Fm4AM9MZb7eW1DBra3WCbmdxsAIsPOuAvMQjmiziQdspPE8bj%2FD2GT2pd7gnxc5GPbMcrpxLiDUb&X-Amz-Signature=9b5ef7c517975eddbb622af06d6d47c33a552c38da2c968c7110117af5fe336a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXR2S7BQ%2F20260822%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260822T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHO2KMHaymg9Mf2zTN4Zo5biwlcDbYAl1wWcIx7TE92cAiEA%2Byp0lc3T%2Fwx09A8S8DAxjTz2s2TuSUF%2FyYDmD6xmKccqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHGE8fKtP4bAZZlVyyrcA11C5gjglauLd%2FG3IQuTfGZySxOdcqvflcDMSyteBUdTyTj3zd39JIKmEZrYo2u0cPgzTbXvXVg7bvHBY97MqH4rnu3TsjFDJOZdOOGHCECJHHa%2BqNQ7RMGnPTVogq92ArQAWLZsvsr1UlQGWENnzLbr6o2lvr%2Bw76%2B8WtRzgnqaXWySV0kQLDcbLNjFedTZVokrqPb6%2Bm5BOvkYuFT1LzYHy9gUImSuDCbqIpcyIqj1viePQP7Zp5lyQPcxSntzT0cqle5u3EgwHxAQ9FyBny4797RuYYvkh7iTlb0uv6Rl%2Fji6z%2BTmslHuqBvZvw%2Fd1GYuK3wbRB0me7LdFh%2B3wzu6ZFriUkfiYRufX5RxvDbNeXuTp2EZuFwX%2FBx95n6L%2FkXHnXTiFiypxim%2FRQDZ%2FpgJgwyudCoB4s8g0ecpLnLdgMqdcO5qRr4yn7N5tNaK57ZNzLLhMeN3KTMCCg58Gt4j39FaA1m9iw4AkEEukkYxUyt6e%2FE7AQS9cy1vjC4%2B5NDQdrx1LfEfTZtg3JaPxE9CtfOl5ySVxVKHGpKZgJbqGZ65PhuX19kf4pHaqHPf5neKUEaA3d8JAbd2oLSN2loRC8txwAubgtWHBw4%2FVcdx%2B9H1Hzmz9iIHpwZWMPOupdQGOqUBYyyo1%2BxuFLzBd0dbsf6z3COCoCfKtVPb6TJXiLyLebO13mqhD5vRXKAqXS4cXq9tI9J6I4VOjyYHQBWIy92h7KHhLFympmDRtuLYVRkGp3xA7uZWngHaQJrT9vSqv6povsqANQApQN%2B%2FxfzM%2Fm4AM9MZb7eW1DBra3WCbmdxsAIsPOuAvMQjmiziQdspPE8bj%2FD2GT2pd7gnxc5GPbMcrpxLiDUb&X-Amz-Signature=6e8c29bd25ed5903294ee818a7123353aac39e5105aed4de73ada24f9a22b478&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
