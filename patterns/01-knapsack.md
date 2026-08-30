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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLC7WPLG%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICksQhsv5Iz87ziF3eUypAosBjwuEzdgPKOsx6F0ASBzAiBIkvW3auiDADoyfbnsColfEdBIYTBeu%2FjZOkrgxj7Q7ir%2FAwh%2BEAAaDDYzNzQyMzE4MzgwNSIMjjmMEl5QTnC4xswGKtwDbVfOkR1OJN%2BhZh9q6RXAv%2FOlXQS77ckvbezz%2B9UOrbR3YnkYu%2B2H6lSodUlWcxlXdkMzSytfySESnTxq%2FMVSyInXhmLZy6Om3Vo0ON0J6SgtT0%2BMvz8la7wEURpdIyPCwElC3EKcl5XmrQQ%2BjrzxsoXCxnKTJOMSGdJRwfi0p%2FpaeRf%2FkQofh1kWGql3wB%2B1QPhGZ5UGiOXYOYbBuHkm7oS9QPS%2BUZGNabi6ZQIjhSfHN554CkVwYnUURjGFy4bFVJ2udQ1WW8mNJyqpyD3r61%2Bvdu1liDRtjdeWetkCZ3atEbhlIi7VFd5%2Bp5bq%2FKZu9Z21qt7EjGg9zyAYOY2qTMyFOuvlpa7woD15pfqCq6VOX7AO010NiC0ByuRzSUe1Vj%2BQ%2FHVajguBjv5q3qdj5FFEdljuSQNmufafJBt7I1rbMAEjx72Y8yrH6iiBslPCZo3qg449%2B2eIT%2FH%2B%2BAOH8Jhu8hbv4U%2B95Qqp8emQeI8wgCJgUcZUiuJKtvzav4zMe8HKaF58zwipPf9ZxASRBXxYYbFleOOCelFFpqm41M2td8%2BYxIsmU0h2oRuEJYPkfdet5tuj4RnQNUDmBNRVkzZqg6YgyAye35LaYv8Z9L9WTBh3ZKGXofrQ4%2F8wydTQ1AY6pgEkZjWu4eulkkedMsnc8o5pEdg5GgSz%2FsOZT19cG6XlrGtwbZnDOskSge%2B4%2FL1jwfx1XhpO4R3S6jPa3UAV31YdtRjU3HQcz4wbtjHpHd80CGbf7uqu%2FodoKChr1PUjcxmg%2BbzAfF0sZxP5GX%2BczCGpag7w4J94HOJrWSODDDWSm2KKp5AmteyUp6kb4TLWS55U3ziuE7OH3NkswkC2bVKDDxShXT41&X-Amz-Signature=e5720183a9f9ce2d59db46acc5b0e9cd43f5d678c140f9c50399110e52c4c2e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLC7WPLG%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICksQhsv5Iz87ziF3eUypAosBjwuEzdgPKOsx6F0ASBzAiBIkvW3auiDADoyfbnsColfEdBIYTBeu%2FjZOkrgxj7Q7ir%2FAwh%2BEAAaDDYzNzQyMzE4MzgwNSIMjjmMEl5QTnC4xswGKtwDbVfOkR1OJN%2BhZh9q6RXAv%2FOlXQS77ckvbezz%2B9UOrbR3YnkYu%2B2H6lSodUlWcxlXdkMzSytfySESnTxq%2FMVSyInXhmLZy6Om3Vo0ON0J6SgtT0%2BMvz8la7wEURpdIyPCwElC3EKcl5XmrQQ%2BjrzxsoXCxnKTJOMSGdJRwfi0p%2FpaeRf%2FkQofh1kWGql3wB%2B1QPhGZ5UGiOXYOYbBuHkm7oS9QPS%2BUZGNabi6ZQIjhSfHN554CkVwYnUURjGFy4bFVJ2udQ1WW8mNJyqpyD3r61%2Bvdu1liDRtjdeWetkCZ3atEbhlIi7VFd5%2Bp5bq%2FKZu9Z21qt7EjGg9zyAYOY2qTMyFOuvlpa7woD15pfqCq6VOX7AO010NiC0ByuRzSUe1Vj%2BQ%2FHVajguBjv5q3qdj5FFEdljuSQNmufafJBt7I1rbMAEjx72Y8yrH6iiBslPCZo3qg449%2B2eIT%2FH%2B%2BAOH8Jhu8hbv4U%2B95Qqp8emQeI8wgCJgUcZUiuJKtvzav4zMe8HKaF58zwipPf9ZxASRBXxYYbFleOOCelFFpqm41M2td8%2BYxIsmU0h2oRuEJYPkfdet5tuj4RnQNUDmBNRVkzZqg6YgyAye35LaYv8Z9L9WTBh3ZKGXofrQ4%2F8wydTQ1AY6pgEkZjWu4eulkkedMsnc8o5pEdg5GgSz%2FsOZT19cG6XlrGtwbZnDOskSge%2B4%2FL1jwfx1XhpO4R3S6jPa3UAV31YdtRjU3HQcz4wbtjHpHd80CGbf7uqu%2FodoKChr1PUjcxmg%2BbzAfF0sZxP5GX%2BczCGpag7w4J94HOJrWSODDDWSm2KKp5AmteyUp6kb4TLWS55U3ziuE7OH3NkswkC2bVKDDxShXT41&X-Amz-Signature=70945385eb6a8fae6d4f27c5fd1c02640b72f2af2f1e0b1e5e6847c98aba0d4a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLC7WPLG%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICksQhsv5Iz87ziF3eUypAosBjwuEzdgPKOsx6F0ASBzAiBIkvW3auiDADoyfbnsColfEdBIYTBeu%2FjZOkrgxj7Q7ir%2FAwh%2BEAAaDDYzNzQyMzE4MzgwNSIMjjmMEl5QTnC4xswGKtwDbVfOkR1OJN%2BhZh9q6RXAv%2FOlXQS77ckvbezz%2B9UOrbR3YnkYu%2B2H6lSodUlWcxlXdkMzSytfySESnTxq%2FMVSyInXhmLZy6Om3Vo0ON0J6SgtT0%2BMvz8la7wEURpdIyPCwElC3EKcl5XmrQQ%2BjrzxsoXCxnKTJOMSGdJRwfi0p%2FpaeRf%2FkQofh1kWGql3wB%2B1QPhGZ5UGiOXYOYbBuHkm7oS9QPS%2BUZGNabi6ZQIjhSfHN554CkVwYnUURjGFy4bFVJ2udQ1WW8mNJyqpyD3r61%2Bvdu1liDRtjdeWetkCZ3atEbhlIi7VFd5%2Bp5bq%2FKZu9Z21qt7EjGg9zyAYOY2qTMyFOuvlpa7woD15pfqCq6VOX7AO010NiC0ByuRzSUe1Vj%2BQ%2FHVajguBjv5q3qdj5FFEdljuSQNmufafJBt7I1rbMAEjx72Y8yrH6iiBslPCZo3qg449%2B2eIT%2FH%2B%2BAOH8Jhu8hbv4U%2B95Qqp8emQeI8wgCJgUcZUiuJKtvzav4zMe8HKaF58zwipPf9ZxASRBXxYYbFleOOCelFFpqm41M2td8%2BYxIsmU0h2oRuEJYPkfdet5tuj4RnQNUDmBNRVkzZqg6YgyAye35LaYv8Z9L9WTBh3ZKGXofrQ4%2F8wydTQ1AY6pgEkZjWu4eulkkedMsnc8o5pEdg5GgSz%2FsOZT19cG6XlrGtwbZnDOskSge%2B4%2FL1jwfx1XhpO4R3S6jPa3UAV31YdtRjU3HQcz4wbtjHpHd80CGbf7uqu%2FodoKChr1PUjcxmg%2BbzAfF0sZxP5GX%2BczCGpag7w4J94HOJrWSODDDWSm2KKp5AmteyUp6kb4TLWS55U3ziuE7OH3NkswkC2bVKDDxShXT41&X-Amz-Signature=6073635a0c2242e8b0e53e9158a38b26a157735e680473884f29efd61d5036d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UL5WS3W%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGG86m2tQg9wgka0L9ej9xZzHUknNmWXNgu3A%2B4Geaz9AiEAkD7wNtZC7ayJmXTHiV0enoyAV64UTIfSU3qBGpNY7JIq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDCxgOTdsUCgj9OW2TyrcA9Fz1Pu6fvIMqOO1U9WTVj68P7GbQBnN2r1icw%2BpcPOjG5VbiNa5faO%2FFk9E9rtQDY7V50GIPxlbJE3E%2FYBQgSPPzvN2hZxde%2BwnIKFWSz5sgW%2BY8o91J3o5rZURxfBrMdIvZqYH62TknqCa%2BzGJYBIQafWvJTSdHI2aBeWiNri73RquUiK221V9qmAp0bJ18CVz6NW6p29qhH08aYEl2sZ7rmKYP3AsAiSrAFHHwABJplB5mhM6ZShHjzh%2BjEZagpoZFEfW9C%2BYQyoMXxDnC0NJFEbPRDd4KBpCIKBhIUAlJZLFlm2QijPKZqBqV0rPUE%2BGO6RwBZo0ZzrRb41dy4xsGERO9UNwK9jEQSFeBoiyjropoEnLBeR%2BnXmMTSzmon2g2VVayrvqyqLg%2BI0HBLOSZJfhbBj4NIo0n3tNH5hAGlYzJ31A9VFQ2WTS50PsYJ4F9GE%2FnqS9JRoHsYTxZ0A%2BbRVrnbGhoLahxt%2BDAUzzvcWMLvZoV6V%2BRObScg6yV5H34MKXc1XmJ%2FIRjlfPhAKRhDLFZcktUiAohP7sWpM09Fxe8237fsc%2ByjXIBm%2FKSMa4BxRLJ0IPgN99FqceQTbypjOHk3J140YkzT9tWUAYGPnc2gwxee5svh0tMKrT0NQGOqUB89crghU44VRFwHQgEUGzpaNu8xXOsH7684sfsIG9sfMltU6xFyivI1BGMBM%2FpgRjIyTTVxVvOPzNucRxHBzXT0VAlVb1lL%2BYs4Ghx4qc2YVbNe3LOWXQX8Ngt9q2Se%2Bg9SlmbaQc1VazTFVngwgkD9Usk%2BKD6SLR7LtT6sBEm2%2B1ifONApvd3GH5Fp12TXzC9zGSpBWv2p7HbTThL7rO8eenpER9&X-Amz-Signature=f205d7e75de47827b83478e14ad20e8c3007073e7e0c7d59c15a4c1266c2b393&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UL5WS3W%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGG86m2tQg9wgka0L9ej9xZzHUknNmWXNgu3A%2B4Geaz9AiEAkD7wNtZC7ayJmXTHiV0enoyAV64UTIfSU3qBGpNY7JIq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDCxgOTdsUCgj9OW2TyrcA9Fz1Pu6fvIMqOO1U9WTVj68P7GbQBnN2r1icw%2BpcPOjG5VbiNa5faO%2FFk9E9rtQDY7V50GIPxlbJE3E%2FYBQgSPPzvN2hZxde%2BwnIKFWSz5sgW%2BY8o91J3o5rZURxfBrMdIvZqYH62TknqCa%2BzGJYBIQafWvJTSdHI2aBeWiNri73RquUiK221V9qmAp0bJ18CVz6NW6p29qhH08aYEl2sZ7rmKYP3AsAiSrAFHHwABJplB5mhM6ZShHjzh%2BjEZagpoZFEfW9C%2BYQyoMXxDnC0NJFEbPRDd4KBpCIKBhIUAlJZLFlm2QijPKZqBqV0rPUE%2BGO6RwBZo0ZzrRb41dy4xsGERO9UNwK9jEQSFeBoiyjropoEnLBeR%2BnXmMTSzmon2g2VVayrvqyqLg%2BI0HBLOSZJfhbBj4NIo0n3tNH5hAGlYzJ31A9VFQ2WTS50PsYJ4F9GE%2FnqS9JRoHsYTxZ0A%2BbRVrnbGhoLahxt%2BDAUzzvcWMLvZoV6V%2BRObScg6yV5H34MKXc1XmJ%2FIRjlfPhAKRhDLFZcktUiAohP7sWpM09Fxe8237fsc%2ByjXIBm%2FKSMa4BxRLJ0IPgN99FqceQTbypjOHk3J140YkzT9tWUAYGPnc2gwxee5svh0tMKrT0NQGOqUB89crghU44VRFwHQgEUGzpaNu8xXOsH7684sfsIG9sfMltU6xFyivI1BGMBM%2FpgRjIyTTVxVvOPzNucRxHBzXT0VAlVb1lL%2BYs4Ghx4qc2YVbNe3LOWXQX8Ngt9q2Se%2Bg9SlmbaQc1VazTFVngwgkD9Usk%2BKD6SLR7LtT6sBEm2%2B1ifONApvd3GH5Fp12TXzC9zGSpBWv2p7HbTThL7rO8eenpER9&X-Amz-Signature=70a3d0f9bf5348f0938491a4127cf8739e84cab18e3b8e12af96c56591837746&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UL5WS3W%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGG86m2tQg9wgka0L9ej9xZzHUknNmWXNgu3A%2B4Geaz9AiEAkD7wNtZC7ayJmXTHiV0enoyAV64UTIfSU3qBGpNY7JIq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDCxgOTdsUCgj9OW2TyrcA9Fz1Pu6fvIMqOO1U9WTVj68P7GbQBnN2r1icw%2BpcPOjG5VbiNa5faO%2FFk9E9rtQDY7V50GIPxlbJE3E%2FYBQgSPPzvN2hZxde%2BwnIKFWSz5sgW%2BY8o91J3o5rZURxfBrMdIvZqYH62TknqCa%2BzGJYBIQafWvJTSdHI2aBeWiNri73RquUiK221V9qmAp0bJ18CVz6NW6p29qhH08aYEl2sZ7rmKYP3AsAiSrAFHHwABJplB5mhM6ZShHjzh%2BjEZagpoZFEfW9C%2BYQyoMXxDnC0NJFEbPRDd4KBpCIKBhIUAlJZLFlm2QijPKZqBqV0rPUE%2BGO6RwBZo0ZzrRb41dy4xsGERO9UNwK9jEQSFeBoiyjropoEnLBeR%2BnXmMTSzmon2g2VVayrvqyqLg%2BI0HBLOSZJfhbBj4NIo0n3tNH5hAGlYzJ31A9VFQ2WTS50PsYJ4F9GE%2FnqS9JRoHsYTxZ0A%2BbRVrnbGhoLahxt%2BDAUzzvcWMLvZoV6V%2BRObScg6yV5H34MKXc1XmJ%2FIRjlfPhAKRhDLFZcktUiAohP7sWpM09Fxe8237fsc%2ByjXIBm%2FKSMa4BxRLJ0IPgN99FqceQTbypjOHk3J140YkzT9tWUAYGPnc2gwxee5svh0tMKrT0NQGOqUB89crghU44VRFwHQgEUGzpaNu8xXOsH7684sfsIG9sfMltU6xFyivI1BGMBM%2FpgRjIyTTVxVvOPzNucRxHBzXT0VAlVb1lL%2BYs4Ghx4qc2YVbNe3LOWXQX8Ngt9q2Se%2Bg9SlmbaQc1VazTFVngwgkD9Usk%2BKD6SLR7LtT6sBEm2%2B1ifONApvd3GH5Fp12TXzC9zGSpBWv2p7HbTThL7rO8eenpER9&X-Amz-Signature=dcbf91875223937f6e585b9392f557bbd8519714b747d7463c64f093e6a65a28&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UL5WS3W%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133346Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGG86m2tQg9wgka0L9ej9xZzHUknNmWXNgu3A%2B4Geaz9AiEAkD7wNtZC7ayJmXTHiV0enoyAV64UTIfSU3qBGpNY7JIq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDCxgOTdsUCgj9OW2TyrcA9Fz1Pu6fvIMqOO1U9WTVj68P7GbQBnN2r1icw%2BpcPOjG5VbiNa5faO%2FFk9E9rtQDY7V50GIPxlbJE3E%2FYBQgSPPzvN2hZxde%2BwnIKFWSz5sgW%2BY8o91J3o5rZURxfBrMdIvZqYH62TknqCa%2BzGJYBIQafWvJTSdHI2aBeWiNri73RquUiK221V9qmAp0bJ18CVz6NW6p29qhH08aYEl2sZ7rmKYP3AsAiSrAFHHwABJplB5mhM6ZShHjzh%2BjEZagpoZFEfW9C%2BYQyoMXxDnC0NJFEbPRDd4KBpCIKBhIUAlJZLFlm2QijPKZqBqV0rPUE%2BGO6RwBZo0ZzrRb41dy4xsGERO9UNwK9jEQSFeBoiyjropoEnLBeR%2BnXmMTSzmon2g2VVayrvqyqLg%2BI0HBLOSZJfhbBj4NIo0n3tNH5hAGlYzJ31A9VFQ2WTS50PsYJ4F9GE%2FnqS9JRoHsYTxZ0A%2BbRVrnbGhoLahxt%2BDAUzzvcWMLvZoV6V%2BRObScg6yV5H34MKXc1XmJ%2FIRjlfPhAKRhDLFZcktUiAohP7sWpM09Fxe8237fsc%2ByjXIBm%2FKSMa4BxRLJ0IPgN99FqceQTbypjOHk3J140YkzT9tWUAYGPnc2gwxee5svh0tMKrT0NQGOqUB89crghU44VRFwHQgEUGzpaNu8xXOsH7684sfsIG9sfMltU6xFyivI1BGMBM%2FpgRjIyTTVxVvOPzNucRxHBzXT0VAlVb1lL%2BYs4Ghx4qc2YVbNe3LOWXQX8Ngt9q2Se%2Bg9SlmbaQc1VazTFVngwgkD9Usk%2BKD6SLR7LtT6sBEm2%2B1ifONApvd3GH5Fp12TXzC9zGSpBWv2p7HbTThL7rO8eenpER9&X-Amz-Signature=efdb07bc77d507c2b0b2514b781cf50b25b075badc3ea5bed5e97ff8605d2ee7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UG6ZHWX4%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133347Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDGoDLwzXriLibdkH%2BEmu3Wr1zFcL1WQAviHIDt%2BCY4cQIhAM3ewpFyx7K3NMDWEUoi21ZsJUGmzxYJB8eo79ehPC2ZKv8DCH4QABoMNjM3NDIzMTgzODA1IgwQeM9kvvtEUHgkN90q3AM78Cwt2rc5wymqgimNQVzGt1y0rjrUq2Gz992Sgk0yYtmoK305IN4RPS2zocdJXo1PlKg3IaAZDURUGUMq%2BpSX3kvnHzDSbtqRMV8%2FkrBNN%2Fh%2FKhVsOKphcHI48j%2FWiLaYSG0bh3WMI53dbhCIZ7b9RFqGRryhg4vZ8rB%2FuJFwBuFjpeTusw%2BK2hDi2MXa1egoggg6p8VE9dwNwGHa5dzbIvQGMVUXTFZ%2BGkzaXJB4gNuFgVmZENwtEXa7noeontuqVDr53Dt8T4Ks52pJhOFGmF%2Bb3UGnLkTnguK0YTjuoyZX0EE3GhsCLF0Cwb%2BZuo0OW3amvESnI5Cg2hpnwsggadLIruHrRNWA4zWg7tnBXE2qyKnCJkB4brtZfEQnjiA8yOegByiQ6SAULTlKFUbFdfsvqI1UqYZ9BAKjPTaKZk26Lry59a7QJV8oq8j7IDV0357BCzs3q7BC4NSV6KICQ49uuoFCoA481jf99%2BZ%2BZp5fiXKV9XrkqBTHauew9M0KdLIPjC7oa8GVETJQx1WVRzjdU2JfC6%2BMaoKFepRM%2FiePfTbJl6dkI%2Bs%2F3eAsnhCIMiqIH72HTvaR2w%2FErqvc4dRNGmCq8dNL14ZpJq7Poe81G2iwuxkH%2BlXh1DC%2FzdDUBjqkARNfzdgbdb5M%2FqS6iAXUYk5pjbBd487fpvvJg1Uwl4G2EpPyZth1aMBRPbqJhrwjcH3IYdK1v5cOJjfKxmHYaDh%2BasgZxJdkiZEf2V8R9jhAm7%2B4Zz1x%2B361lzBoHoLsNuO1VK%2B6I7SphSfpG8yu6jmUMPas3k5GD72Gq3zH2zdmsIbyh0CpiQkGQrWbpW6zOltEdETwprdRX22PPdn0Gi%2FR7xDf&X-Amz-Signature=585ff462e08969b0cd8e45a2d096e134342e10bb27be56fb3548d5393b946648&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662JYPXGZ7%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133347Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDMZ4ziLZdPZ7CD%2BVjb1KA33w43bCLGnxwBuhbQVv79lAIgLAx3qzxOLdefLUGZyFaKthkWic2XM4mRcHRJP%2Fi7KAcq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDGZFJrZ5RpYt58zpMircA43gY37YBoT0x95Sf48hF0bjJI3FMzr%2FXpC6AhRHEkDwbceusb1Unij2wxcSxXTBivNEEBJBcAF9dZBwBNB7CxkoC%2FKszRzyTU6K%2FOKFMNIGLS4U%2FszIZdUI8%2BzSBVgH%2B7tGERieoFMRXRsaKFy8aF9UksjbPYiSqI2ws39NVn8%2BhhAoXDl43sRWjfMpyXR6dPBK%2BgbIZxUWqks1Gfkzl9SzE2udsgDUtoVkVmqNm9GfNVkt02djURUjgd7cvSnZVr7u5Re0XarHjFIe6nJbydmN92xtrLtZm0I2WaHjzGXk%2BV%2BYB%2BWFP%2BUK4l1NCiCVE7GclwNZ77Xo0UTMJ2GDdlvye7g8wiR4sLlzUyA2%2FUUqmWeaJTs6l%2FauZ0R5%2By4635skP9216QgI%2FQdlk9KD3NxU0uVuRXPikJOxWrvAD5PyV%2B%2FjqlSR7lC0LjiTNzkMQgjBlUj6e3mrUp%2Btc%2Fzkky3l5pLP9t5n83ll2jvS5Uhu9EpqFJl6IhIWt67NgRTshlk6x3FVlTIEPcNW5tqY7ibiWl2732UV96jM8fIjh9mtM71pDMFouGVyPFBUk0y5FuAqxUmPhPe6uRYG1Ri1D48suxAqar6rm%2FYaI7i8vz5vPkv6vXfpbYEfHFb7MJjO0NQGOqUBSDDDlO2Bznl%2FvBuJFWRGdZ2M7PCaugAl%2Bl1lpNPgnIJwOE82SqpPo9MyFihRDAnM23LQqkxWqKP0MsHQyTre%2B1UdQwEjIPvgbWgOBYFGXpzbdneWE6oWsno7s5qIYJZ%2FPGhL%2BsSjrprN3zJbj2d5PlipkxlNt29XXL7iLAYS1KGhI%2FhPKejWi6kDXJImMg16wWirATsSUUykBCi846hzOobGxO%2FQ&X-Amz-Signature=68b24934c6e42ddcbac16086442ec5cda2b4fd68207c9166f0ee64ca88c9b063&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662JYPXGZ7%2F20260830%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260830T133347Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDMZ4ziLZdPZ7CD%2BVjb1KA33w43bCLGnxwBuhbQVv79lAIgLAx3qzxOLdefLUGZyFaKthkWic2XM4mRcHRJP%2Fi7KAcq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDGZFJrZ5RpYt58zpMircA43gY37YBoT0x95Sf48hF0bjJI3FMzr%2FXpC6AhRHEkDwbceusb1Unij2wxcSxXTBivNEEBJBcAF9dZBwBNB7CxkoC%2FKszRzyTU6K%2FOKFMNIGLS4U%2FszIZdUI8%2BzSBVgH%2B7tGERieoFMRXRsaKFy8aF9UksjbPYiSqI2ws39NVn8%2BhhAoXDl43sRWjfMpyXR6dPBK%2BgbIZxUWqks1Gfkzl9SzE2udsgDUtoVkVmqNm9GfNVkt02djURUjgd7cvSnZVr7u5Re0XarHjFIe6nJbydmN92xtrLtZm0I2WaHjzGXk%2BV%2BYB%2BWFP%2BUK4l1NCiCVE7GclwNZ77Xo0UTMJ2GDdlvye7g8wiR4sLlzUyA2%2FUUqmWeaJTs6l%2FauZ0R5%2By4635skP9216QgI%2FQdlk9KD3NxU0uVuRXPikJOxWrvAD5PyV%2B%2FjqlSR7lC0LjiTNzkMQgjBlUj6e3mrUp%2Btc%2Fzkky3l5pLP9t5n83ll2jvS5Uhu9EpqFJl6IhIWt67NgRTshlk6x3FVlTIEPcNW5tqY7ibiWl2732UV96jM8fIjh9mtM71pDMFouGVyPFBUk0y5FuAqxUmPhPe6uRYG1Ri1D48suxAqar6rm%2FYaI7i8vz5vPkv6vXfpbYEfHFb7MJjO0NQGOqUBSDDDlO2Bznl%2FvBuJFWRGdZ2M7PCaugAl%2Bl1lpNPgnIJwOE82SqpPo9MyFihRDAnM23LQqkxWqKP0MsHQyTre%2B1UdQwEjIPvgbWgOBYFGXpzbdneWE6oWsno7s5qIYJZ%2FPGhL%2BsSjrprN3zJbj2d5PlipkxlNt29XXL7iLAYS1KGhI%2FhPKejWi6kDXJImMg16wWirATsSUUykBCi846hzOobGxO%2FQ&X-Amz-Signature=4ac2fab8c82d9c071531cb1ae4df9677b9ff0a32bee20a25772024ffc1233dc9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
