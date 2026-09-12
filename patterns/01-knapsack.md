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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V33VBCY%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfCHBnPZCa2ggtb3TqzHPbyN23xgL%2FSVR%2Bx4r%2Bu5KdIAiEA9x8PxzjSANoRH5nHSI%2FMsqEju%2FCO%2B1457ezOm7vyNIAqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZSYSrEFUeGZRlRjSrcAyePZraTK7eCSzDiSQjxRL44SROyW8HA%2FxfX76pBxvvhXYaLGP%2BJeUNH9PxfGO8DYaDZ9jHbwhrldom0rgaCvBvYtkvCEcV9js6woQewEDLOVQJXURjfl6UIddufKvE4IjLWHytAw2F19gfIhY2LjavbbDpgvhTOSce%2BD4tuKMPmCJhvkMU51IZMQHG8nYf7MVp3bn63saqCJBJIlwiPnlJr%2FtAGV5dbltqNSv9MxhNJrVpyMCI%2FjCdTBxasu6f513iqryOJMHKxKG7BCclzljM3LxWLBdbqizZXbhXubjlKaur9GAU3I1kcPHWgdT1iQ609Piv3U8XHeYE860tPsXt3fGjpbBh9NHKMvuSXi%2FbLFXhwCptz12Wn3tbFyB%2FfBQlcY8GpxljvTCfx93zo9iABWVLvY00VcnYXRyPcqSh1FPu2WvO0WtTjTpZtEoW%2FBFyLAPxijZalE95aFDAj5GI8Z3q%2FD1DtqFlnuB5gf5Gpalw5gIe8AaQA%2FDgwDxCYC40YFnSyglCiOq3kY9WTgqzOhJZ2byngZrVwOue7%2F24D68SB3OxdEmKaCxmaIJo9HVjSQxjtvFKHe5RP5zrb3c34cqLu6hprTumy4Vwmu6JcTIn4YJUaQNm4m77KMNrPlNUGOqUBOXS9w0KHO2Qoipq%2Ffp1hE7LlOVeG3zPn4Bq6DxYMiHZmnj9dmzcNPZ8smi%2F7z90cu6qjrmxFVnIp1GAm1vKkeKNCNUkIh9hPBY4hqGzDd4n8mjAZ2Wj9rIrqa8%2BHFcBIhL1vIihzcPzg7l9EFm1g4UtmJJmwccId%2B%2BkvBuj0uPZFdmdrufMyd9GU1ap%2BWhAFIE6uKDmenpHoLx8bhvIXSm2pYt1b&X-Amz-Signature=f438e0a0d0e98835f0acabf35593fb4ee5d9c037e0f1054e7d4ae36db73483d4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V33VBCY%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfCHBnPZCa2ggtb3TqzHPbyN23xgL%2FSVR%2Bx4r%2Bu5KdIAiEA9x8PxzjSANoRH5nHSI%2FMsqEju%2FCO%2B1457ezOm7vyNIAqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZSYSrEFUeGZRlRjSrcAyePZraTK7eCSzDiSQjxRL44SROyW8HA%2FxfX76pBxvvhXYaLGP%2BJeUNH9PxfGO8DYaDZ9jHbwhrldom0rgaCvBvYtkvCEcV9js6woQewEDLOVQJXURjfl6UIddufKvE4IjLWHytAw2F19gfIhY2LjavbbDpgvhTOSce%2BD4tuKMPmCJhvkMU51IZMQHG8nYf7MVp3bn63saqCJBJIlwiPnlJr%2FtAGV5dbltqNSv9MxhNJrVpyMCI%2FjCdTBxasu6f513iqryOJMHKxKG7BCclzljM3LxWLBdbqizZXbhXubjlKaur9GAU3I1kcPHWgdT1iQ609Piv3U8XHeYE860tPsXt3fGjpbBh9NHKMvuSXi%2FbLFXhwCptz12Wn3tbFyB%2FfBQlcY8GpxljvTCfx93zo9iABWVLvY00VcnYXRyPcqSh1FPu2WvO0WtTjTpZtEoW%2FBFyLAPxijZalE95aFDAj5GI8Z3q%2FD1DtqFlnuB5gf5Gpalw5gIe8AaQA%2FDgwDxCYC40YFnSyglCiOq3kY9WTgqzOhJZ2byngZrVwOue7%2F24D68SB3OxdEmKaCxmaIJo9HVjSQxjtvFKHe5RP5zrb3c34cqLu6hprTumy4Vwmu6JcTIn4YJUaQNm4m77KMNrPlNUGOqUBOXS9w0KHO2Qoipq%2Ffp1hE7LlOVeG3zPn4Bq6DxYMiHZmnj9dmzcNPZ8smi%2F7z90cu6qjrmxFVnIp1GAm1vKkeKNCNUkIh9hPBY4hqGzDd4n8mjAZ2Wj9rIrqa8%2BHFcBIhL1vIihzcPzg7l9EFm1g4UtmJJmwccId%2B%2BkvBuj0uPZFdmdrufMyd9GU1ap%2BWhAFIE6uKDmenpHoLx8bhvIXSm2pYt1b&X-Amz-Signature=87950e46241640b6fb755de739dc026724853e86455c187138e239ee6ae4554e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V33VBCY%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfCHBnPZCa2ggtb3TqzHPbyN23xgL%2FSVR%2Bx4r%2Bu5KdIAiEA9x8PxzjSANoRH5nHSI%2FMsqEju%2FCO%2B1457ezOm7vyNIAqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGZSYSrEFUeGZRlRjSrcAyePZraTK7eCSzDiSQjxRL44SROyW8HA%2FxfX76pBxvvhXYaLGP%2BJeUNH9PxfGO8DYaDZ9jHbwhrldom0rgaCvBvYtkvCEcV9js6woQewEDLOVQJXURjfl6UIddufKvE4IjLWHytAw2F19gfIhY2LjavbbDpgvhTOSce%2BD4tuKMPmCJhvkMU51IZMQHG8nYf7MVp3bn63saqCJBJIlwiPnlJr%2FtAGV5dbltqNSv9MxhNJrVpyMCI%2FjCdTBxasu6f513iqryOJMHKxKG7BCclzljM3LxWLBdbqizZXbhXubjlKaur9GAU3I1kcPHWgdT1iQ609Piv3U8XHeYE860tPsXt3fGjpbBh9NHKMvuSXi%2FbLFXhwCptz12Wn3tbFyB%2FfBQlcY8GpxljvTCfx93zo9iABWVLvY00VcnYXRyPcqSh1FPu2WvO0WtTjTpZtEoW%2FBFyLAPxijZalE95aFDAj5GI8Z3q%2FD1DtqFlnuB5gf5Gpalw5gIe8AaQA%2FDgwDxCYC40YFnSyglCiOq3kY9WTgqzOhJZ2byngZrVwOue7%2F24D68SB3OxdEmKaCxmaIJo9HVjSQxjtvFKHe5RP5zrb3c34cqLu6hprTumy4Vwmu6JcTIn4YJUaQNm4m77KMNrPlNUGOqUBOXS9w0KHO2Qoipq%2Ffp1hE7LlOVeG3zPn4Bq6DxYMiHZmnj9dmzcNPZ8smi%2F7z90cu6qjrmxFVnIp1GAm1vKkeKNCNUkIh9hPBY4hqGzDd4n8mjAZ2Wj9rIrqa8%2BHFcBIhL1vIihzcPzg7l9EFm1g4UtmJJmwccId%2B%2BkvBuj0uPZFdmdrufMyd9GU1ap%2BWhAFIE6uKDmenpHoLx8bhvIXSm2pYt1b&X-Amz-Signature=f485b6da48c51d1c55dc8974fa4a42ae4b230af9c67514c1958d9e563b0e6f9c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYOCI4BB%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHrduOYyPm9v4q43pX0PmLl7r5hMtR8pliP1nccaXpdgAiB2P5ac%2F%2B8APT19RRqUHnDndN2QyYzKhDN9cHSx%2BReOcSqIBAi0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMQywU83F%2FMTh2Ut4YKtwD2bIhvG4iPstEaJgo6a1yVWkvUL8BSdjXbWSuZ1vRTZuRP1Rr%2F0L5TqtaYsy6bTuM5evtibmj9TH6zjopF1EM%2FO71%2BQOrVJEsLRfPMjxuznX8PSLzFZOdMguOLgd%2BtXJ3QBg8v8Ss3dye6gSX80%2B8h4iuHQkEUE3dGSxi6n8RytzRgjBV95YNw3SWvPTTeaUjh1l6PgHS5RdB0ktDRCIQA3WKFpcZ8DR2AvDCPi1%2BzugwXSaHsN7wmWFth2DWmp4vNl%2FU%2BaCfB8vpZqcww018gBgZJNa2KVTN9APiKI7o3ln5kZ4A7I%2Bw3BfSlgUU8zB0d1crcKzqoUZ6OUNiLWPsJ0QS6Pipi2vIu0PXjoG%2BQDfyKlKmJ4qYhFgA5qySpsrQhIZwUVBDXv%2F74pDBEZrRsDvftAayxVw7jFfN6RAyzmreVxSgS%2FDEjxmA8FGCnYOzqvZ%2FYQYs7eZILBtWz7hqQyMSJ%2B6mRZywJxjyjWdGzxfF5na4JGZTJ%2Fztb7XyMUPevqTKrXSlf31XyR2oz%2FKUEZPe22x%2B6ibhKurJ5DnBUyWGLnr%2BkRwXBkvvML2Puo2NYkDeHPQpddKD7%2BQeGRLcX6bCtLASFx0DHpwjya30S%2BefPsWlBM8T0%2BrN6vwwkdKU1QY6pgF2rcsHb2P8lDzmb7k%2F12nOm1GVlYcviFw586z7zi674r4tWW0JAE%2BKF7lAR1fC1IuztQUCuVfgxuER4CjSM5GkaPUwLPJh1WgNGCMmO%2FRBie1Na48N69zxJBuobdVcpcjqchfsyljQ6zjY8OBdcZCiWkRQR02fX6LRaRFGxDEr9OrljJC7k%2FSbsw2AVpMi%2BRSQyxip7pnu%2FdvBE3bF1VIXJmfoKORG&X-Amz-Signature=2898100deeffb363c9876d435a5e623ff9a4461980dcf147bf7f898dcbc2bf88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYOCI4BB%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHrduOYyPm9v4q43pX0PmLl7r5hMtR8pliP1nccaXpdgAiB2P5ac%2F%2B8APT19RRqUHnDndN2QyYzKhDN9cHSx%2BReOcSqIBAi0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMQywU83F%2FMTh2Ut4YKtwD2bIhvG4iPstEaJgo6a1yVWkvUL8BSdjXbWSuZ1vRTZuRP1Rr%2F0L5TqtaYsy6bTuM5evtibmj9TH6zjopF1EM%2FO71%2BQOrVJEsLRfPMjxuznX8PSLzFZOdMguOLgd%2BtXJ3QBg8v8Ss3dye6gSX80%2B8h4iuHQkEUE3dGSxi6n8RytzRgjBV95YNw3SWvPTTeaUjh1l6PgHS5RdB0ktDRCIQA3WKFpcZ8DR2AvDCPi1%2BzugwXSaHsN7wmWFth2DWmp4vNl%2FU%2BaCfB8vpZqcww018gBgZJNa2KVTN9APiKI7o3ln5kZ4A7I%2Bw3BfSlgUU8zB0d1crcKzqoUZ6OUNiLWPsJ0QS6Pipi2vIu0PXjoG%2BQDfyKlKmJ4qYhFgA5qySpsrQhIZwUVBDXv%2F74pDBEZrRsDvftAayxVw7jFfN6RAyzmreVxSgS%2FDEjxmA8FGCnYOzqvZ%2FYQYs7eZILBtWz7hqQyMSJ%2B6mRZywJxjyjWdGzxfF5na4JGZTJ%2Fztb7XyMUPevqTKrXSlf31XyR2oz%2FKUEZPe22x%2B6ibhKurJ5DnBUyWGLnr%2BkRwXBkvvML2Puo2NYkDeHPQpddKD7%2BQeGRLcX6bCtLASFx0DHpwjya30S%2BefPsWlBM8T0%2BrN6vwwkdKU1QY6pgF2rcsHb2P8lDzmb7k%2F12nOm1GVlYcviFw586z7zi674r4tWW0JAE%2BKF7lAR1fC1IuztQUCuVfgxuER4CjSM5GkaPUwLPJh1WgNGCMmO%2FRBie1Na48N69zxJBuobdVcpcjqchfsyljQ6zjY8OBdcZCiWkRQR02fX6LRaRFGxDEr9OrljJC7k%2FSbsw2AVpMi%2BRSQyxip7pnu%2FdvBE3bF1VIXJmfoKORG&X-Amz-Signature=c8660066015401180f35d7a15871d89d6671bceb4647a1384c4bdc33804ec6a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYOCI4BB%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHrduOYyPm9v4q43pX0PmLl7r5hMtR8pliP1nccaXpdgAiB2P5ac%2F%2B8APT19RRqUHnDndN2QyYzKhDN9cHSx%2BReOcSqIBAi0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMQywU83F%2FMTh2Ut4YKtwD2bIhvG4iPstEaJgo6a1yVWkvUL8BSdjXbWSuZ1vRTZuRP1Rr%2F0L5TqtaYsy6bTuM5evtibmj9TH6zjopF1EM%2FO71%2BQOrVJEsLRfPMjxuznX8PSLzFZOdMguOLgd%2BtXJ3QBg8v8Ss3dye6gSX80%2B8h4iuHQkEUE3dGSxi6n8RytzRgjBV95YNw3SWvPTTeaUjh1l6PgHS5RdB0ktDRCIQA3WKFpcZ8DR2AvDCPi1%2BzugwXSaHsN7wmWFth2DWmp4vNl%2FU%2BaCfB8vpZqcww018gBgZJNa2KVTN9APiKI7o3ln5kZ4A7I%2Bw3BfSlgUU8zB0d1crcKzqoUZ6OUNiLWPsJ0QS6Pipi2vIu0PXjoG%2BQDfyKlKmJ4qYhFgA5qySpsrQhIZwUVBDXv%2F74pDBEZrRsDvftAayxVw7jFfN6RAyzmreVxSgS%2FDEjxmA8FGCnYOzqvZ%2FYQYs7eZILBtWz7hqQyMSJ%2B6mRZywJxjyjWdGzxfF5na4JGZTJ%2Fztb7XyMUPevqTKrXSlf31XyR2oz%2FKUEZPe22x%2B6ibhKurJ5DnBUyWGLnr%2BkRwXBkvvML2Puo2NYkDeHPQpddKD7%2BQeGRLcX6bCtLASFx0DHpwjya30S%2BefPsWlBM8T0%2BrN6vwwkdKU1QY6pgF2rcsHb2P8lDzmb7k%2F12nOm1GVlYcviFw586z7zi674r4tWW0JAE%2BKF7lAR1fC1IuztQUCuVfgxuER4CjSM5GkaPUwLPJh1WgNGCMmO%2FRBie1Na48N69zxJBuobdVcpcjqchfsyljQ6zjY8OBdcZCiWkRQR02fX6LRaRFGxDEr9OrljJC7k%2FSbsw2AVpMi%2BRSQyxip7pnu%2FdvBE3bF1VIXJmfoKORG&X-Amz-Signature=ca39fe57c8b559982782c24aea57b9e02765941a2c78373c2b9dfcfc59509df2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYOCI4BB%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHrduOYyPm9v4q43pX0PmLl7r5hMtR8pliP1nccaXpdgAiB2P5ac%2F%2B8APT19RRqUHnDndN2QyYzKhDN9cHSx%2BReOcSqIBAi0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMQywU83F%2FMTh2Ut4YKtwD2bIhvG4iPstEaJgo6a1yVWkvUL8BSdjXbWSuZ1vRTZuRP1Rr%2F0L5TqtaYsy6bTuM5evtibmj9TH6zjopF1EM%2FO71%2BQOrVJEsLRfPMjxuznX8PSLzFZOdMguOLgd%2BtXJ3QBg8v8Ss3dye6gSX80%2B8h4iuHQkEUE3dGSxi6n8RytzRgjBV95YNw3SWvPTTeaUjh1l6PgHS5RdB0ktDRCIQA3WKFpcZ8DR2AvDCPi1%2BzugwXSaHsN7wmWFth2DWmp4vNl%2FU%2BaCfB8vpZqcww018gBgZJNa2KVTN9APiKI7o3ln5kZ4A7I%2Bw3BfSlgUU8zB0d1crcKzqoUZ6OUNiLWPsJ0QS6Pipi2vIu0PXjoG%2BQDfyKlKmJ4qYhFgA5qySpsrQhIZwUVBDXv%2F74pDBEZrRsDvftAayxVw7jFfN6RAyzmreVxSgS%2FDEjxmA8FGCnYOzqvZ%2FYQYs7eZILBtWz7hqQyMSJ%2B6mRZywJxjyjWdGzxfF5na4JGZTJ%2Fztb7XyMUPevqTKrXSlf31XyR2oz%2FKUEZPe22x%2B6ibhKurJ5DnBUyWGLnr%2BkRwXBkvvML2Puo2NYkDeHPQpddKD7%2BQeGRLcX6bCtLASFx0DHpwjya30S%2BefPsWlBM8T0%2BrN6vwwkdKU1QY6pgF2rcsHb2P8lDzmb7k%2F12nOm1GVlYcviFw586z7zi674r4tWW0JAE%2BKF7lAR1fC1IuztQUCuVfgxuER4CjSM5GkaPUwLPJh1WgNGCMmO%2FRBie1Na48N69zxJBuobdVcpcjqchfsyljQ6zjY8OBdcZCiWkRQR02fX6LRaRFGxDEr9OrljJC7k%2FSbsw2AVpMi%2BRSQyxip7pnu%2FdvBE3bF1VIXJmfoKORG&X-Amz-Signature=7f41f88bd7b183285bf2bb6ce9fb485ad8d38994a5720446fc599a452802f45a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGYHTOY2%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG3gDOsktEP%2B%2BP9DVL5QRVvS7mZsgCOG2oZZpKeMb%2FH3AiEAuPldUz6NIHimMFD9q1cVxZ27%2F5vlYMNCIi4ifEt8GMcqiAQItP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDLUgdrrt2IoDiMHfyrcAwpnBU3MW1uGz2FiwjyTKta9GKWa7WfXYS6E38hL0pHu%2FI%2FHZ%2BFO0ToNIeIdpF5m73dbkobxnuJ5%2FfsmvWHrxCMyf3VxNNcPcaUuhoiDsA%2FiCuDD2dBV0ruVjQKLc2GvrQ1cdesBTDj4q0fIbegWxqrO5kIBrQA9Ys3RooOlf6TvVcZEXT4BFxMKmMG5H%2Fa39OK%2FCDltR2Gj1%2B%2BZb7ufc87C7GuCrAj4pMG6tw03cy3ESpiK7rpSfZxUf%2FNGMR9xJom%2BYDW9MC6jdDmY%2FRK7duQTN535oj3659GZtadOl7WYoyd1YrpWGKjVmy7%2F4JhexIbsaYH4W2scJ6TwSrcNuiEDD37Uv9wmVOhOwAKnqdYPfRToTAqRxc9HQkXHmLoMMDBZ291ljWWQQHnEeftuvr9QAopulgVDc%2BExTMzm0KSbSKJDci0YUS5boQHpLrnd0DfchRlsy1eZZqb5j1DEi0OrKh2FhPXXOsMAxHk%2F7tXOFAagIqbHwnAWp%2FCth46P9emNNhKKWuekaAcMMmzPKRw8CR0cKVKmHB8ryHinVjJ0H8I2DvC0utO9KQl9t20tuOVXxKwldthCBAsggnfg9YMG5tYpBfgwXNwOjxkYOlhsDzKrX2ybTC6G8wDfMPLRlNUGOqUBjb80KpuPLvO9noB2H%2FGRD8GkEne9qRu%2BFwy0m6%2F04a7mx5XWNsQZktbnprbv0SeE40l%2BAIfKprWVhhiYIBcJBbmoLgSU9JXrrTifSEOF%2BEf2Ijm74z3mUdYpLE%2ByHyCKfYxL5hw7gD%2FGav8phLMPhHZ8y%2BcYXRLH%2F73SU193yd5D1edJHD0aZM6Scqf7GYRFkCpJY7Rk6MzI0q%2FC5tlfo6mw6PY%2F&X-Amz-Signature=2cf7f18de7f4bf25db3b5d73f9d5a7e14066bee11845a1c3f742e322c994ba37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PAD3JBT%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCQDR7l6NuwKijEzLpvR%2FGUO%2BwUm%2FlkApNeicuA1hxqfQIhAKmGw%2FFfaISCgeoZsOOZ4XXFd9PoZa99278L500NK%2FgxKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwfh5aykVbfvNrelIQq3AMZ0c0%2FN7W%2BbFgeh%2FUVN8RSRT7bYPqZy2tQ257wqPpXHJLkoHRpBCEu61ArIMeUF3NxOfw%2B3sqKJ2Mhj3slP9QwChNWy2zHlqnsFX7fVN2c1zvh4rLWi1o75wS6LpI3Ie2qjoOQpbQMTqZDlDCeF5rEwS6zkPxnsq0nPekwF0GJ8BApSKABBehiMEcfyZDwVSxr8LOjBi6jzSP6%2BzrvMsorSHPbKM9X0LAFVicwhbDZ6%2BIHk3%2BEtBevObLVUzQq4w5IWrHS9Ydd4Nwt8zFr%2FFDMNqQD7E51EQ%2FIVYME7I%2BYozXfta4V5HMSH%2BumXRfJkzs6hepuxoJ4xXsRTUBof25%2BGVVcyHBDSxnpZHY8AIpBuPHqWDje3U2G0txQ9DEz3qeCHG%2BG88Jy5CbAlQdwCfltoWx8KA2WrEli3JQfN%2BZE8RCn8%2FxYv17XpM3hJtFPRYId%2BQw7ji%2Bl%2BdMa15mUkz4VPyLIM%2BdcsyJPbkxYZ7aPxn8VFak%2FE16%2BMjrC%2BwP2lK7Oth2HLs2khQS6C0wPwOEnBHKRRxkPQTqI4WeMnqKDaoG6uOvupdugD9tYMbe9NKwbosI717pj51BuVN52U4WbBrlRZCmm7i6%2BlP42d%2BKjPXFKFfVXP4eXTGZU%2BzDrz5TVBjqkAR5SyFr4XZWeiR%2BnnObcxBrAskZs62%2BxV30j60zIOjlmKdiTZ%2B9ZxfczNlaYjjlrnnW%2Bx4fs4Da9SUC4VQvgXeIRpGJsDb0YuypW%2BaIJiVPYjFcWPLTf8IcCU%2BjcYcAFD9EqXG38IrQQAu5TWmbTT1ZXu%2FHJ88ZpSSN2yWE3YSLpcttefDPzYTI%2BfjLmHc1Az4GqFwlH4CusAKqWgfEubI6v5L4r&X-Amz-Signature=3953c9c45e4fd0d9b010a556373f2df8f264218b7432d3d6b60d5d7e28195546&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PAD3JBT%2F20260912%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260912T115842Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCQDR7l6NuwKijEzLpvR%2FGUO%2BwUm%2FlkApNeicuA1hxqfQIhAKmGw%2FFfaISCgeoZsOOZ4XXFd9PoZa99278L500NK%2FgxKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwfh5aykVbfvNrelIQq3AMZ0c0%2FN7W%2BbFgeh%2FUVN8RSRT7bYPqZy2tQ257wqPpXHJLkoHRpBCEu61ArIMeUF3NxOfw%2B3sqKJ2Mhj3slP9QwChNWy2zHlqnsFX7fVN2c1zvh4rLWi1o75wS6LpI3Ie2qjoOQpbQMTqZDlDCeF5rEwS6zkPxnsq0nPekwF0GJ8BApSKABBehiMEcfyZDwVSxr8LOjBi6jzSP6%2BzrvMsorSHPbKM9X0LAFVicwhbDZ6%2BIHk3%2BEtBevObLVUzQq4w5IWrHS9Ydd4Nwt8zFr%2FFDMNqQD7E51EQ%2FIVYME7I%2BYozXfta4V5HMSH%2BumXRfJkzs6hepuxoJ4xXsRTUBof25%2BGVVcyHBDSxnpZHY8AIpBuPHqWDje3U2G0txQ9DEz3qeCHG%2BG88Jy5CbAlQdwCfltoWx8KA2WrEli3JQfN%2BZE8RCn8%2FxYv17XpM3hJtFPRYId%2BQw7ji%2Bl%2BdMa15mUkz4VPyLIM%2BdcsyJPbkxYZ7aPxn8VFak%2FE16%2BMjrC%2BwP2lK7Oth2HLs2khQS6C0wPwOEnBHKRRxkPQTqI4WeMnqKDaoG6uOvupdugD9tYMbe9NKwbosI717pj51BuVN52U4WbBrlRZCmm7i6%2BlP42d%2BKjPXFKFfVXP4eXTGZU%2BzDrz5TVBjqkAR5SyFr4XZWeiR%2BnnObcxBrAskZs62%2BxV30j60zIOjlmKdiTZ%2B9ZxfczNlaYjjlrnnW%2Bx4fs4Da9SUC4VQvgXeIRpGJsDb0YuypW%2BaIJiVPYjFcWPLTf8IcCU%2BjcYcAFD9EqXG38IrQQAu5TWmbTT1ZXu%2FHJ88ZpSSN2yWE3YSLpcttefDPzYTI%2BfjLmHc1Az4GqFwlH4CusAKqWgfEubI6v5L4r&X-Amz-Signature=69c5679a0d373bf0758e8ffd4b2a101248c2bc32c1fde7f267b84d6e3c821397&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
