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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSSPXNYP%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCk29CXZwUhc5QkWKkM3r0c5MAEGVyEaDwRXuia%2BmJD0wIgJ2PbbDpFdh3h4A%2B84WxNumRhZtFQd5bKyy2E9qxH5y4qiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGr%2B%2FuVrv2BYUmFmJyrcA6ri5sb0kpK0Vg0Kk6L7a0Yv545RmvDdJYppQSOg%2F6NbWKAGhlaDJt9mbHWLD%2FOz2Ypm9lLlMPd7dMfi%2FQO6MYRPlZ%2B%2BvqwW%2FQn3WbIf%2FjjiKki9ksqRhVLhBj20HDH3e%2FwT9RVfttsz7mQZgUbDwWsd6%2BsYJz6wnspFcmP%2FMVVJmN%2BGYKGslNbW83Anusd5RST%2BR%2FRS079tqF2azyJgPQNm4e8Lp111Sjmr6JbumkNsva4u7FYsTtn4Mgfb3zbR7RtU6QOcsc4Fbce7v8LXSRrjsaJPw1Cff%2BhffhFBwZplr1XIQSVJLRNFcoUc8FfWwTF6kHBwypEJTaik88wAQ2PtdNOEipEX2Itr%2BP2XLWSTOByKjVpAvgOx2ZxXTk3jv6gUTXR032xN6izwZ5LUoOyoUgA7JjMfXASTW1TF%2BXZglc6kG1zl3RtdswvO3JJHsTAHBUW9KvDLtfzqqoemJ%2F42SeLGrNACnaj8ZXepou4EEWTyK9pr15pecuDcWo9rJLeXzK9SyeMos7mSmjm497wEg0P%2FtPr1RP71qwIFmUAYZ1DV1k9H9X4NBoihiH0JvlUJr5MjwGnfDo5NR9dYaO0eHsOrC2Gtq0MgcLg7sJ%2F0HgTrMuOf%2BDaPNn%2FRMMeuodgGOqUBNcXAD%2BlzHqA0u94sV%2BSS9Yu6uYs5Y%2FnUUfzGzvuhQQFxeCERMgoorrc%2B1cJ1aY9hSUFKnAKvKJlgyjW88zBNo5JJTn5iAP%2BRkzNtqi7S2EHfO2%2BRDzKTiBd7b9kMcSMMmBUoU%2B1ueLPC1L%2Fi3bXtbgQUtoUqmvZZQgaFTr%2Fq6PIht5dlprAUjXCmrV5X5XEL%2BXrcHj%2F36LkupW96jiuxQMsFvn74&X-Amz-Signature=4417c7948a97e758bc1861964f7b0442549d0282b930cf8dfeec0dce5338b9e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSSPXNYP%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCk29CXZwUhc5QkWKkM3r0c5MAEGVyEaDwRXuia%2BmJD0wIgJ2PbbDpFdh3h4A%2B84WxNumRhZtFQd5bKyy2E9qxH5y4qiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGr%2B%2FuVrv2BYUmFmJyrcA6ri5sb0kpK0Vg0Kk6L7a0Yv545RmvDdJYppQSOg%2F6NbWKAGhlaDJt9mbHWLD%2FOz2Ypm9lLlMPd7dMfi%2FQO6MYRPlZ%2B%2BvqwW%2FQn3WbIf%2FjjiKki9ksqRhVLhBj20HDH3e%2FwT9RVfttsz7mQZgUbDwWsd6%2BsYJz6wnspFcmP%2FMVVJmN%2BGYKGslNbW83Anusd5RST%2BR%2FRS079tqF2azyJgPQNm4e8Lp111Sjmr6JbumkNsva4u7FYsTtn4Mgfb3zbR7RtU6QOcsc4Fbce7v8LXSRrjsaJPw1Cff%2BhffhFBwZplr1XIQSVJLRNFcoUc8FfWwTF6kHBwypEJTaik88wAQ2PtdNOEipEX2Itr%2BP2XLWSTOByKjVpAvgOx2ZxXTk3jv6gUTXR032xN6izwZ5LUoOyoUgA7JjMfXASTW1TF%2BXZglc6kG1zl3RtdswvO3JJHsTAHBUW9KvDLtfzqqoemJ%2F42SeLGrNACnaj8ZXepou4EEWTyK9pr15pecuDcWo9rJLeXzK9SyeMos7mSmjm497wEg0P%2FtPr1RP71qwIFmUAYZ1DV1k9H9X4NBoihiH0JvlUJr5MjwGnfDo5NR9dYaO0eHsOrC2Gtq0MgcLg7sJ%2F0HgTrMuOf%2BDaPNn%2FRMMeuodgGOqUBNcXAD%2BlzHqA0u94sV%2BSS9Yu6uYs5Y%2FnUUfzGzvuhQQFxeCERMgoorrc%2B1cJ1aY9hSUFKnAKvKJlgyjW88zBNo5JJTn5iAP%2BRkzNtqi7S2EHfO2%2BRDzKTiBd7b9kMcSMMmBUoU%2B1ueLPC1L%2Fi3bXtbgQUtoUqmvZZQgaFTr%2Fq6PIht5dlprAUjXCmrV5X5XEL%2BXrcHj%2F36LkupW96jiuxQMsFvn74&X-Amz-Signature=ed4a49519f7550498f7399700e453934e84f22e14fcd538b3268f838ba35ebf5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSSPXNYP%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCk29CXZwUhc5QkWKkM3r0c5MAEGVyEaDwRXuia%2BmJD0wIgJ2PbbDpFdh3h4A%2B84WxNumRhZtFQd5bKyy2E9qxH5y4qiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGr%2B%2FuVrv2BYUmFmJyrcA6ri5sb0kpK0Vg0Kk6L7a0Yv545RmvDdJYppQSOg%2F6NbWKAGhlaDJt9mbHWLD%2FOz2Ypm9lLlMPd7dMfi%2FQO6MYRPlZ%2B%2BvqwW%2FQn3WbIf%2FjjiKki9ksqRhVLhBj20HDH3e%2FwT9RVfttsz7mQZgUbDwWsd6%2BsYJz6wnspFcmP%2FMVVJmN%2BGYKGslNbW83Anusd5RST%2BR%2FRS079tqF2azyJgPQNm4e8Lp111Sjmr6JbumkNsva4u7FYsTtn4Mgfb3zbR7RtU6QOcsc4Fbce7v8LXSRrjsaJPw1Cff%2BhffhFBwZplr1XIQSVJLRNFcoUc8FfWwTF6kHBwypEJTaik88wAQ2PtdNOEipEX2Itr%2BP2XLWSTOByKjVpAvgOx2ZxXTk3jv6gUTXR032xN6izwZ5LUoOyoUgA7JjMfXASTW1TF%2BXZglc6kG1zl3RtdswvO3JJHsTAHBUW9KvDLtfzqqoemJ%2F42SeLGrNACnaj8ZXepou4EEWTyK9pr15pecuDcWo9rJLeXzK9SyeMos7mSmjm497wEg0P%2FtPr1RP71qwIFmUAYZ1DV1k9H9X4NBoihiH0JvlUJr5MjwGnfDo5NR9dYaO0eHsOrC2Gtq0MgcLg7sJ%2F0HgTrMuOf%2BDaPNn%2FRMMeuodgGOqUBNcXAD%2BlzHqA0u94sV%2BSS9Yu6uYs5Y%2FnUUfzGzvuhQQFxeCERMgoorrc%2B1cJ1aY9hSUFKnAKvKJlgyjW88zBNo5JJTn5iAP%2BRkzNtqi7S2EHfO2%2BRDzKTiBd7b9kMcSMMmBUoU%2B1ueLPC1L%2Fi3bXtbgQUtoUqmvZZQgaFTr%2Fq6PIht5dlprAUjXCmrV5X5XEL%2BXrcHj%2F36LkupW96jiuxQMsFvn74&X-Amz-Signature=d5009a938029abbe7cbf8d32c8589c2540ba10e28c9b7414227b351a5e032730&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S4LWXPDL%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDgmxe78fyE%2FBQxIpIMqzwMWtsKyCNwPiN3Xf7QFJwkRQIgfZrxGwigvW%2F9ijabm2y%2FDZj0n4NaAalH00R0YLsBGKMqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBR6X6M2SSmZpsDPkCrcAwS9fvc%2FmqXZULejECUQGl%2Fzwvr22CFE7bCxZgBdqSW4aqg8uw3rYEOvJLL2wAd6NrPA%2B5oFiyVkXfxvp6sNzCphaT3gcvC2C2OyOBtHFawkEWetHgSD7Bi%2FM5oPOcuY3WKOmC8m6V4tvzE5xnkHfi1BpHmS3Vswfkl8ivk9sSzPDwbczyOngDGmfXichME%2F6v%2B9hywPN%2F25mYfemBb%2FTo%2FKJGkHrIYe2FVAzzzGOGR0%2BroI3JPx3Ach7ey%2BbGERE5vJD1eir0l3QhIrdVxjrnQx9HxrXPkKXFn7DDJErftL03G5ydRq3Rg5QnW8LCwYSmmWRP%2Fete4eC2y%2Fu2lxVM%2BMc4%2FUJha%2Fl%2FjjMGH11qtkorNzwtNG8eFMRzncX2srw0yVFQaSieddvt13OoHIN%2B5m81n%2BOVnOwsmb4lWTUDzJfB0g16uU3izmKnJhRgkiCp2KOAtabCNMapm7oaQlSv%2Fug1%2FJoBg4ZwgI3mDhrE9G16QCPK9%2BvJKkgM1Zurta9pqJqyLAi2DYGwBlIvHYxz6BSOhkuhxvVFOdraWlJbaoDnAs4DX1YkBPJRp0Gm%2FJIN4e7yP%2FYMkI%2F6nx3yU1b6%2BBPoRNPmHkmmERg3ZUibm3WfMSy0tyXqyygU%2FFMKKtodgGOqUBYyKxLSHOyrYClf8mhNkKKIMkUMA7gWHd5QiEx1IGSakoY1uw75%2FtJ7p30MWH75tXdbyxR8lAcpqFlE%2BrmWD9Fj3UbqR9V3I%2BhOXB9km7xDV9NuPfNJ2CpPzJdwD0LxcRw47TtG0LFLm%2BzrRmVWdc4bxQ67t4ifzFzbOMDPVrtN3pOn%2F0nIul25Sz0eKsMBouus2spsZ4EcHjndjrDMDpW%2Fz7RCEb&X-Amz-Signature=79c31d77bc6c680c4931b17edcbf1209b3bb7b3516da0110a1c240aa606539aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S4LWXPDL%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDgmxe78fyE%2FBQxIpIMqzwMWtsKyCNwPiN3Xf7QFJwkRQIgfZrxGwigvW%2F9ijabm2y%2FDZj0n4NaAalH00R0YLsBGKMqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBR6X6M2SSmZpsDPkCrcAwS9fvc%2FmqXZULejECUQGl%2Fzwvr22CFE7bCxZgBdqSW4aqg8uw3rYEOvJLL2wAd6NrPA%2B5oFiyVkXfxvp6sNzCphaT3gcvC2C2OyOBtHFawkEWetHgSD7Bi%2FM5oPOcuY3WKOmC8m6V4tvzE5xnkHfi1BpHmS3Vswfkl8ivk9sSzPDwbczyOngDGmfXichME%2F6v%2B9hywPN%2F25mYfemBb%2FTo%2FKJGkHrIYe2FVAzzzGOGR0%2BroI3JPx3Ach7ey%2BbGERE5vJD1eir0l3QhIrdVxjrnQx9HxrXPkKXFn7DDJErftL03G5ydRq3Rg5QnW8LCwYSmmWRP%2Fete4eC2y%2Fu2lxVM%2BMc4%2FUJha%2Fl%2FjjMGH11qtkorNzwtNG8eFMRzncX2srw0yVFQaSieddvt13OoHIN%2B5m81n%2BOVnOwsmb4lWTUDzJfB0g16uU3izmKnJhRgkiCp2KOAtabCNMapm7oaQlSv%2Fug1%2FJoBg4ZwgI3mDhrE9G16QCPK9%2BvJKkgM1Zurta9pqJqyLAi2DYGwBlIvHYxz6BSOhkuhxvVFOdraWlJbaoDnAs4DX1YkBPJRp0Gm%2FJIN4e7yP%2FYMkI%2F6nx3yU1b6%2BBPoRNPmHkmmERg3ZUibm3WfMSy0tyXqyygU%2FFMKKtodgGOqUBYyKxLSHOyrYClf8mhNkKKIMkUMA7gWHd5QiEx1IGSakoY1uw75%2FtJ7p30MWH75tXdbyxR8lAcpqFlE%2BrmWD9Fj3UbqR9V3I%2BhOXB9km7xDV9NuPfNJ2CpPzJdwD0LxcRw47TtG0LFLm%2BzrRmVWdc4bxQ67t4ifzFzbOMDPVrtN3pOn%2F0nIul25Sz0eKsMBouus2spsZ4EcHjndjrDMDpW%2Fz7RCEb&X-Amz-Signature=2412428ef33993ee667c7255746ed948acbea001a66f13028ad2f8b9a1fd6136&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S4LWXPDL%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDgmxe78fyE%2FBQxIpIMqzwMWtsKyCNwPiN3Xf7QFJwkRQIgfZrxGwigvW%2F9ijabm2y%2FDZj0n4NaAalH00R0YLsBGKMqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBR6X6M2SSmZpsDPkCrcAwS9fvc%2FmqXZULejECUQGl%2Fzwvr22CFE7bCxZgBdqSW4aqg8uw3rYEOvJLL2wAd6NrPA%2B5oFiyVkXfxvp6sNzCphaT3gcvC2C2OyOBtHFawkEWetHgSD7Bi%2FM5oPOcuY3WKOmC8m6V4tvzE5xnkHfi1BpHmS3Vswfkl8ivk9sSzPDwbczyOngDGmfXichME%2F6v%2B9hywPN%2F25mYfemBb%2FTo%2FKJGkHrIYe2FVAzzzGOGR0%2BroI3JPx3Ach7ey%2BbGERE5vJD1eir0l3QhIrdVxjrnQx9HxrXPkKXFn7DDJErftL03G5ydRq3Rg5QnW8LCwYSmmWRP%2Fete4eC2y%2Fu2lxVM%2BMc4%2FUJha%2Fl%2FjjMGH11qtkorNzwtNG8eFMRzncX2srw0yVFQaSieddvt13OoHIN%2B5m81n%2BOVnOwsmb4lWTUDzJfB0g16uU3izmKnJhRgkiCp2KOAtabCNMapm7oaQlSv%2Fug1%2FJoBg4ZwgI3mDhrE9G16QCPK9%2BvJKkgM1Zurta9pqJqyLAi2DYGwBlIvHYxz6BSOhkuhxvVFOdraWlJbaoDnAs4DX1YkBPJRp0Gm%2FJIN4e7yP%2FYMkI%2F6nx3yU1b6%2BBPoRNPmHkmmERg3ZUibm3WfMSy0tyXqyygU%2FFMKKtodgGOqUBYyKxLSHOyrYClf8mhNkKKIMkUMA7gWHd5QiEx1IGSakoY1uw75%2FtJ7p30MWH75tXdbyxR8lAcpqFlE%2BrmWD9Fj3UbqR9V3I%2BhOXB9km7xDV9NuPfNJ2CpPzJdwD0LxcRw47TtG0LFLm%2BzrRmVWdc4bxQ67t4ifzFzbOMDPVrtN3pOn%2F0nIul25Sz0eKsMBouus2spsZ4EcHjndjrDMDpW%2Fz7RCEb&X-Amz-Signature=bc652a3d8a3a953f8b08a59f8f0341696647e6e338e86a48c438cbdc6a90029f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S4LWXPDL%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDgmxe78fyE%2FBQxIpIMqzwMWtsKyCNwPiN3Xf7QFJwkRQIgfZrxGwigvW%2F9ijabm2y%2FDZj0n4NaAalH00R0YLsBGKMqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBR6X6M2SSmZpsDPkCrcAwS9fvc%2FmqXZULejECUQGl%2Fzwvr22CFE7bCxZgBdqSW4aqg8uw3rYEOvJLL2wAd6NrPA%2B5oFiyVkXfxvp6sNzCphaT3gcvC2C2OyOBtHFawkEWetHgSD7Bi%2FM5oPOcuY3WKOmC8m6V4tvzE5xnkHfi1BpHmS3Vswfkl8ivk9sSzPDwbczyOngDGmfXichME%2F6v%2B9hywPN%2F25mYfemBb%2FTo%2FKJGkHrIYe2FVAzzzGOGR0%2BroI3JPx3Ach7ey%2BbGERE5vJD1eir0l3QhIrdVxjrnQx9HxrXPkKXFn7DDJErftL03G5ydRq3Rg5QnW8LCwYSmmWRP%2Fete4eC2y%2Fu2lxVM%2BMc4%2FUJha%2Fl%2FjjMGH11qtkorNzwtNG8eFMRzncX2srw0yVFQaSieddvt13OoHIN%2B5m81n%2BOVnOwsmb4lWTUDzJfB0g16uU3izmKnJhRgkiCp2KOAtabCNMapm7oaQlSv%2Fug1%2FJoBg4ZwgI3mDhrE9G16QCPK9%2BvJKkgM1Zurta9pqJqyLAi2DYGwBlIvHYxz6BSOhkuhxvVFOdraWlJbaoDnAs4DX1YkBPJRp0Gm%2FJIN4e7yP%2FYMkI%2F6nx3yU1b6%2BBPoRNPmHkmmERg3ZUibm3WfMSy0tyXqyygU%2FFMKKtodgGOqUBYyKxLSHOyrYClf8mhNkKKIMkUMA7gWHd5QiEx1IGSakoY1uw75%2FtJ7p30MWH75tXdbyxR8lAcpqFlE%2BrmWD9Fj3UbqR9V3I%2BhOXB9km7xDV9NuPfNJ2CpPzJdwD0LxcRw47TtG0LFLm%2BzrRmVWdc4bxQ67t4ifzFzbOMDPVrtN3pOn%2F0nIul25Sz0eKsMBouus2spsZ4EcHjndjrDMDpW%2Fz7RCEb&X-Amz-Signature=854062be7881e361a3228982c5e579b8a3f79c58d2b30fe9b974ad603f59994f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6ZAVQG4%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGOP3biUEjDeuB6OdDHpvRgiKfNNP1dM2og51vhTeXOwAiBqTwK7medGeJDcatc241c%2FKjvopC2LxLf6bagU95c9CyqIBAi%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMSJzdI8t55BObgjl%2BKtwDKJhs1LPA873Kl58EvB%2F2Tg1Lp8jH%2B%2BDz%2FNybyHXt29J1FudiTDhzRtYFnBdu9sMfLsLSZOtkmwYj5VpBWTEvAR03kY2dyHoc1NpeeQ3BMBU%2BoYkmMSK4d8eO812mZRq2fuGW78N6571FQ6kufDHuCGv7i0a9Ctugv%2BaVktOmashbkeyjz6%2F5nQe%2FsdCoZsdnBvIhU9KPPxeXgyy2%2BRp9Nmk6FzxINRhT5zGCBrLiKTBKbU4rdY%2F2oneZ58F%2FZlpmAE%2BHZkmyqwtwD8w7z4FjTDoRKWcscm7uBMHOCG2N7dIMJ6kqxyBVi1WhnKEbapXmz8x7jW4b0qz4GtXyDGqd0TFUGJYUJPE8q94KYwmysmjjuNMsrnbN9a6DcOYSynWVWhce4gMSFQey4GXUz4g%2BHLDi4X6%2B9ZsrnMlln1MFimbpi2Tc2K8ql%2FXspdSqUL77qiNapmjcevedPkPj%2FSSByFVXMVE5HzBDAh%2Fm7yc57SP7lTY6gjNvmn7RVdiK%2FuGPIPbark3gulzK4nZl4BR4Qv4mMc9HcLG3ysweNcYQVQfOlHaa9qrxB30k9A17gk8Sqgs4M9jNMW8%2FD%2FsodXZKU0fGKofTn1L%2FiRhYITRP%2BIAT2CaGrBjaiQmhiVUwqPmg2AY6pgGvpmhOwnKNSZfB0FeBHAqE5wZoWut2oUXLbOnqnnDMK7Piws%2FLhRxJjzMaWgM49NJ7ITFe6%2FnkEnR0joVoNnuqIS87cExx67g19QRN6Yaa39gq33aw4khw%2FEuf1ATrIAg9t%2BbW2OJGNowPtLOGVHy3s%2Fd8yCsZVlEVQyF7%2Bwjbo%2FiTNNNCWFkR5o3N9yY2alOVEszXbxWBs4zwaJS8TRsj0AZZbaWg&X-Amz-Signature=793073da7444d3ddf06a153ec7da77981dae48687c7f298ed435064fa00cb799&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OMOZ337%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcXaRFYvQ7d5JRBcLgwegaADKmvKX8CGa0TF%2FBmn4Z2gIhAJxuIJSeII8dAshBR%2FzRlZW7ZGq4IAncWAw55KlvNzg4KogECMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz9f7aiiKIW4rTTzbcq3ANvdvf3p7H%2BwFi2UW2%2B6ETw0GIBOgclnRV86my6ni9YIa42waQGGjZkKJFpuuCf0%2F2fBuxDEesDF8kqNOJ0cVsAK04LippRQbN52WNG%2BBd8Kht8sYC8WRnNb1AqWDaat0PNLKxbG6khZWWoIyNUv57XhDupAZ5xWl3gsLSVo4s4cdLpNYC3U2BM3P4QyEETbib6ANYcXsUhi0nIcJoa71TOieDOa9icZnthoNmP2flzV2vVY6LmfijBZ3l4MARPjMYscrdY0pYxMFvfBd8f0CCRHDDSgrBDah41EjfJgT2e%2BcCwEdKX1fBYJHY9GtRs1I8o10uSKFkC5jriPsKjDAbWIYe3lptdAVrED%2BdExd5MjS7KWfasZezWyV%2BGSdnFvvtES%2Fva6LpM1Vzgfp2UL1r0vH8oW45Jner27WzW5w4t0o587juqvrdEZIKXhqSalLnPrDQVWeWokt13ooCfJnXqSd81OX1UtNPdtlhPd7Byb8k9UMtIf0Tb7geOMmk5z2iKAu1t7m6%2BJScwdwP7pSIMI1CztfFBOr84iP6MLTZ7XBtKC1v86GWX00gUiIF1B9VeEJ23aJNbTkVd4198rE49AQWIUKbDK2fK%2FkcwB5IIxaYul%2F4IFFyy5fCkPTCgraHYBjqkATadj%2BhRW%2BHzPsei6X0ZleiCItGROnPjUE6EW0CkCTCQRHfYz7%2BH2Oqw31b03SU7XqKiAT22O9G9gpNzGPVCEPhSs7CKOdhBl6o%2F2cFhKZ9g3x7PryOQD9Yf8zOWQdZyg6Sy2x%2BvBqC93W1bY7ZchKSNC9Ro%2Bug2XCb2BlM2SIZlF9r0g5WfjCxro%2BzgtYAAgnARfTXMGp6jmevMyxSRbfrbA5eH&X-Amz-Signature=562a34a41a1da3d28ba9aa1637472576dbd168950b2217d43849e13cf19c4ee7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OMOZ337%2F20261126%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261126T180751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcXaRFYvQ7d5JRBcLgwegaADKmvKX8CGa0TF%2FBmn4Z2gIhAJxuIJSeII8dAshBR%2FzRlZW7ZGq4IAncWAw55KlvNzg4KogECMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz9f7aiiKIW4rTTzbcq3ANvdvf3p7H%2BwFi2UW2%2B6ETw0GIBOgclnRV86my6ni9YIa42waQGGjZkKJFpuuCf0%2F2fBuxDEesDF8kqNOJ0cVsAK04LippRQbN52WNG%2BBd8Kht8sYC8WRnNb1AqWDaat0PNLKxbG6khZWWoIyNUv57XhDupAZ5xWl3gsLSVo4s4cdLpNYC3U2BM3P4QyEETbib6ANYcXsUhi0nIcJoa71TOieDOa9icZnthoNmP2flzV2vVY6LmfijBZ3l4MARPjMYscrdY0pYxMFvfBd8f0CCRHDDSgrBDah41EjfJgT2e%2BcCwEdKX1fBYJHY9GtRs1I8o10uSKFkC5jriPsKjDAbWIYe3lptdAVrED%2BdExd5MjS7KWfasZezWyV%2BGSdnFvvtES%2Fva6LpM1Vzgfp2UL1r0vH8oW45Jner27WzW5w4t0o587juqvrdEZIKXhqSalLnPrDQVWeWokt13ooCfJnXqSd81OX1UtNPdtlhPd7Byb8k9UMtIf0Tb7geOMmk5z2iKAu1t7m6%2BJScwdwP7pSIMI1CztfFBOr84iP6MLTZ7XBtKC1v86GWX00gUiIF1B9VeEJ23aJNbTkVd4198rE49AQWIUKbDK2fK%2FkcwB5IIxaYul%2F4IFFyy5fCkPTCgraHYBjqkATadj%2BhRW%2BHzPsei6X0ZleiCItGROnPjUE6EW0CkCTCQRHfYz7%2BH2Oqw31b03SU7XqKiAT22O9G9gpNzGPVCEPhSs7CKOdhBl6o%2F2cFhKZ9g3x7PryOQD9Yf8zOWQdZyg6Sy2x%2BvBqC93W1bY7ZchKSNC9Ro%2Bug2XCb2BlM2SIZlF9r0g5WfjCxro%2BzgtYAAgnARfTXMGp6jmevMyxSRbfrbA5eH&X-Amz-Signature=afc69ce226a11e9732725cb69c690cfaf0d2adf338eec460a0e48102cd9256b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
