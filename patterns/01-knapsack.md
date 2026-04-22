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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGZMOD6V%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091933Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJHMEUCIQCODfV28yue%2Bh4KIkoGVc6e5yFMkGmNRLwskr7S284J3gIgSWCbWz3CFjf3nr7i2KPq4%2FcQNulWffEu59%2FUGqimWqEq%2FwMIRxAAGgw2Mzc0MjMxODM4MDUiDEGTa2FSVOgNMcLzBCrcAxoyONUt7BNRD3Fit0H9uJUs8IS%2BWVMG9EpLak4s5Nio%2BQiH6px4%2F4ZPLdytAI%2B3tlmR5Pc2JMjCIm%2Fvf6FN1BSD%2BTPFC2mI8Ut%2F2mZiZowI2MNvN5dDck7PoIFIdmocpcw0wB4v6tepcTHUkMCZZ73Rd7nSoifTojUx74m%2FrKIOU5Gy1zvAZKt4lfw%2BTTFr2Jenv1qjFYd2F5CP7DwLGjXhnWOaIl6TVxX4vSO3JiWGojmKqLxOKz34pTxmwYJSh1ezdJBRYZB1TlLKH3meVnUpfcol6nQg0ARNNiRjB80bdr59G%2B4Zv7Yfw784pOeIrwXURmM9b2I6UazOr8tkclkPaEWL6mvFyMMyD0QFh3gtF%2FEqXy5A6%2BjntDhx3GLkmwPUOgNygP%2BRyJBOHz5z1B7XFJ3mu4o5eDh%2Fr3w03pobLq2ixuV1lZ53iyEQ9pm8PxgV2PuyqUoOgOFoEuePQ2WC4ir3en9DLv3z3WoeEcPM%2FRaBi3DhIUMlE5I6ubH%2BT%2FIqxOXf2MtHj%2BXGj46r%2F%2FENSB%2BO3AgWYNZ%2B%2FjZjkM5h9HWEgkueLdY1UKxdXC0NKne4NS1f8tZpFwiGQgpuuJUnfW1tU0obS9hP0q74rBgnSDt4HAQFZXFS0bPhMMu%2Boc8GOqUBtqWsoAXo9sU%2BvUcgfqH%2FdA4LqFRoOj0lzD5q04f6L2QTGp3itW5Hv9EKVf4lWi3OVw4x50CLgCM2KSxbyHJqzqKaxY4%2FLgvmBr%2BQk6WjYLlAGMdRdlmnrQxfPK5yJ%2FHMq%2F9zG%2FQMX%2FlIO%2BDfq2eGeekJ92HDXvsaADg62nfcWTvZEEMaApXw17PQDs5S9oHnfnp2BewfdpsrEfge1RTBAcr93rzx&X-Amz-Signature=278b990aaad56df44b42020db8559fc0da6f65b93d1a2b931cd0001d5ae133ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGZMOD6V%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091933Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJHMEUCIQCODfV28yue%2Bh4KIkoGVc6e5yFMkGmNRLwskr7S284J3gIgSWCbWz3CFjf3nr7i2KPq4%2FcQNulWffEu59%2FUGqimWqEq%2FwMIRxAAGgw2Mzc0MjMxODM4MDUiDEGTa2FSVOgNMcLzBCrcAxoyONUt7BNRD3Fit0H9uJUs8IS%2BWVMG9EpLak4s5Nio%2BQiH6px4%2F4ZPLdytAI%2B3tlmR5Pc2JMjCIm%2Fvf6FN1BSD%2BTPFC2mI8Ut%2F2mZiZowI2MNvN5dDck7PoIFIdmocpcw0wB4v6tepcTHUkMCZZ73Rd7nSoifTojUx74m%2FrKIOU5Gy1zvAZKt4lfw%2BTTFr2Jenv1qjFYd2F5CP7DwLGjXhnWOaIl6TVxX4vSO3JiWGojmKqLxOKz34pTxmwYJSh1ezdJBRYZB1TlLKH3meVnUpfcol6nQg0ARNNiRjB80bdr59G%2B4Zv7Yfw784pOeIrwXURmM9b2I6UazOr8tkclkPaEWL6mvFyMMyD0QFh3gtF%2FEqXy5A6%2BjntDhx3GLkmwPUOgNygP%2BRyJBOHz5z1B7XFJ3mu4o5eDh%2Fr3w03pobLq2ixuV1lZ53iyEQ9pm8PxgV2PuyqUoOgOFoEuePQ2WC4ir3en9DLv3z3WoeEcPM%2FRaBi3DhIUMlE5I6ubH%2BT%2FIqxOXf2MtHj%2BXGj46r%2F%2FENSB%2BO3AgWYNZ%2B%2FjZjkM5h9HWEgkueLdY1UKxdXC0NKne4NS1f8tZpFwiGQgpuuJUnfW1tU0obS9hP0q74rBgnSDt4HAQFZXFS0bPhMMu%2Boc8GOqUBtqWsoAXo9sU%2BvUcgfqH%2FdA4LqFRoOj0lzD5q04f6L2QTGp3itW5Hv9EKVf4lWi3OVw4x50CLgCM2KSxbyHJqzqKaxY4%2FLgvmBr%2BQk6WjYLlAGMdRdlmnrQxfPK5yJ%2FHMq%2F9zG%2FQMX%2FlIO%2BDfq2eGeekJ92HDXvsaADg62nfcWTvZEEMaApXw17PQDs5S9oHnfnp2BewfdpsrEfge1RTBAcr93rzx&X-Amz-Signature=3fad635840a9018aba15f93417b1507e490ebb4e6ae2f5b81309b5b4fca3c256&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGZMOD6V%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091933Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJHMEUCIQCODfV28yue%2Bh4KIkoGVc6e5yFMkGmNRLwskr7S284J3gIgSWCbWz3CFjf3nr7i2KPq4%2FcQNulWffEu59%2FUGqimWqEq%2FwMIRxAAGgw2Mzc0MjMxODM4MDUiDEGTa2FSVOgNMcLzBCrcAxoyONUt7BNRD3Fit0H9uJUs8IS%2BWVMG9EpLak4s5Nio%2BQiH6px4%2F4ZPLdytAI%2B3tlmR5Pc2JMjCIm%2Fvf6FN1BSD%2BTPFC2mI8Ut%2F2mZiZowI2MNvN5dDck7PoIFIdmocpcw0wB4v6tepcTHUkMCZZ73Rd7nSoifTojUx74m%2FrKIOU5Gy1zvAZKt4lfw%2BTTFr2Jenv1qjFYd2F5CP7DwLGjXhnWOaIl6TVxX4vSO3JiWGojmKqLxOKz34pTxmwYJSh1ezdJBRYZB1TlLKH3meVnUpfcol6nQg0ARNNiRjB80bdr59G%2B4Zv7Yfw784pOeIrwXURmM9b2I6UazOr8tkclkPaEWL6mvFyMMyD0QFh3gtF%2FEqXy5A6%2BjntDhx3GLkmwPUOgNygP%2BRyJBOHz5z1B7XFJ3mu4o5eDh%2Fr3w03pobLq2ixuV1lZ53iyEQ9pm8PxgV2PuyqUoOgOFoEuePQ2WC4ir3en9DLv3z3WoeEcPM%2FRaBi3DhIUMlE5I6ubH%2BT%2FIqxOXf2MtHj%2BXGj46r%2F%2FENSB%2BO3AgWYNZ%2B%2FjZjkM5h9HWEgkueLdY1UKxdXC0NKne4NS1f8tZpFwiGQgpuuJUnfW1tU0obS9hP0q74rBgnSDt4HAQFZXFS0bPhMMu%2Boc8GOqUBtqWsoAXo9sU%2BvUcgfqH%2FdA4LqFRoOj0lzD5q04f6L2QTGp3itW5Hv9EKVf4lWi3OVw4x50CLgCM2KSxbyHJqzqKaxY4%2FLgvmBr%2BQk6WjYLlAGMdRdlmnrQxfPK5yJ%2FHMq%2F9zG%2FQMX%2FlIO%2BDfq2eGeekJ92HDXvsaADg62nfcWTvZEEMaApXw17PQDs5S9oHnfnp2BewfdpsrEfge1RTBAcr93rzx&X-Amz-Signature=ba8b5465d4016ef2833d8a75ea29d6fcf7533b0a167a66de5230982df86519d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7ZQWVJC%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJGMEQCIDo%2FUexmnCnEQMEuDtHaTMUgfJq1uXtXNqAK22GrV8dAAiB%2FioddALirhzawksZOognYiiTqiSpI8vKTPyXB9fnnKSr%2FAwhHEAAaDDYzNzQyMzE4MzgwNSIMaZ0XUPNRGbmpd07ZKtwDKkSLmCwrgyt00BiwVTOo%2Bkncta%2B5FtEBatsbfS8uvnE%2BxD3ovNlhxZtG7vnnWlEsgCHaEy%2BoW5s3GeS4x8HHVhrzAfBcWsOLbr54JKtU43dEVvhZNtrJV9L7e16YtzPocaxb7HYQq3uEKEjwppObCTdCSEIuFOM9fLHJStV2FVqgSubXhhcSLHBhaLdOtPN7xAEr3IXR6tntuHukrgRhCNYpME5zy5%2Fz03UaxTFx9dyjMCrGs82ZkQ0f%2FMpWFjzmjn5Iki5wxI%2F5avALVp0FDHvNUwN2tGU27o1%2Bucy1VVPZC2URxB0MEDLWKASYoyZX1p3qXcPampkqYFm%2B%2BP7JU%2Bg7e65MTjspGLhNTAWkjsczf0Utso%2BuD9ZXPUi3w%2B5ikC%2FRPonOJfhzsXylcbXeZeDwlYEyjFJjE70m6RH3siiw0ZPkrGgb%2BNlLWno0hp8V2Rvl3pbryt%2F%2BEFfqysoVKyXrrAj1Wbn%2FxF%2Bo%2Bi3%2B9xuVE0cfyk%2F5%2BxYIbjrA06Dll7cSz7PPFhOtoVb5DMeCJU%2BXQ5IQclsFxk7f%2FhIvqndoZmbswbU9c%2FXJKVuS7Ws0f%2BWSUMMkErlWXd8ZrS%2BbIhCK5QpcplFfQvSMlfFyZR9%2BrRJVLlRkYprkpZMwrryhzwY6pgFUIJ4Ppdjw5a3edK9JL5L0dHf2XdiMkd7l%2BbtMpRk4b91kUBqFcCr1LUTUzT0Io12hDMihFri2GtyH6UEOnMGycwCbNhm9U4inpyDGgJFq4WkmDB3eyiA%2BAoXXkqkmqmsSQyUfg9GLsJb8VUxyIsxcMvfRN7rUAcOU8CH5m1qMDZlidURChXUBgDNf%2Bbn4zehV7tuivaqFOQwDfbfLzK2wX1lLbpaV&X-Amz-Signature=b25e0d6c4d80048f82273d41eed0c31240dce3c1319d9582e1ff42db14df00cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7ZQWVJC%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJGMEQCIDo%2FUexmnCnEQMEuDtHaTMUgfJq1uXtXNqAK22GrV8dAAiB%2FioddALirhzawksZOognYiiTqiSpI8vKTPyXB9fnnKSr%2FAwhHEAAaDDYzNzQyMzE4MzgwNSIMaZ0XUPNRGbmpd07ZKtwDKkSLmCwrgyt00BiwVTOo%2Bkncta%2B5FtEBatsbfS8uvnE%2BxD3ovNlhxZtG7vnnWlEsgCHaEy%2BoW5s3GeS4x8HHVhrzAfBcWsOLbr54JKtU43dEVvhZNtrJV9L7e16YtzPocaxb7HYQq3uEKEjwppObCTdCSEIuFOM9fLHJStV2FVqgSubXhhcSLHBhaLdOtPN7xAEr3IXR6tntuHukrgRhCNYpME5zy5%2Fz03UaxTFx9dyjMCrGs82ZkQ0f%2FMpWFjzmjn5Iki5wxI%2F5avALVp0FDHvNUwN2tGU27o1%2Bucy1VVPZC2URxB0MEDLWKASYoyZX1p3qXcPampkqYFm%2B%2BP7JU%2Bg7e65MTjspGLhNTAWkjsczf0Utso%2BuD9ZXPUi3w%2B5ikC%2FRPonOJfhzsXylcbXeZeDwlYEyjFJjE70m6RH3siiw0ZPkrGgb%2BNlLWno0hp8V2Rvl3pbryt%2F%2BEFfqysoVKyXrrAj1Wbn%2FxF%2Bo%2Bi3%2B9xuVE0cfyk%2F5%2BxYIbjrA06Dll7cSz7PPFhOtoVb5DMeCJU%2BXQ5IQclsFxk7f%2FhIvqndoZmbswbU9c%2FXJKVuS7Ws0f%2BWSUMMkErlWXd8ZrS%2BbIhCK5QpcplFfQvSMlfFyZR9%2BrRJVLlRkYprkpZMwrryhzwY6pgFUIJ4Ppdjw5a3edK9JL5L0dHf2XdiMkd7l%2BbtMpRk4b91kUBqFcCr1LUTUzT0Io12hDMihFri2GtyH6UEOnMGycwCbNhm9U4inpyDGgJFq4WkmDB3eyiA%2BAoXXkqkmqmsSQyUfg9GLsJb8VUxyIsxcMvfRN7rUAcOU8CH5m1qMDZlidURChXUBgDNf%2Bbn4zehV7tuivaqFOQwDfbfLzK2wX1lLbpaV&X-Amz-Signature=c04a4ef084e64615e798d0e8d7c3da2bb2c1e719318175053b5d1c707b5ddf7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7ZQWVJC%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJGMEQCIDo%2FUexmnCnEQMEuDtHaTMUgfJq1uXtXNqAK22GrV8dAAiB%2FioddALirhzawksZOognYiiTqiSpI8vKTPyXB9fnnKSr%2FAwhHEAAaDDYzNzQyMzE4MzgwNSIMaZ0XUPNRGbmpd07ZKtwDKkSLmCwrgyt00BiwVTOo%2Bkncta%2B5FtEBatsbfS8uvnE%2BxD3ovNlhxZtG7vnnWlEsgCHaEy%2BoW5s3GeS4x8HHVhrzAfBcWsOLbr54JKtU43dEVvhZNtrJV9L7e16YtzPocaxb7HYQq3uEKEjwppObCTdCSEIuFOM9fLHJStV2FVqgSubXhhcSLHBhaLdOtPN7xAEr3IXR6tntuHukrgRhCNYpME5zy5%2Fz03UaxTFx9dyjMCrGs82ZkQ0f%2FMpWFjzmjn5Iki5wxI%2F5avALVp0FDHvNUwN2tGU27o1%2Bucy1VVPZC2URxB0MEDLWKASYoyZX1p3qXcPampkqYFm%2B%2BP7JU%2Bg7e65MTjspGLhNTAWkjsczf0Utso%2BuD9ZXPUi3w%2B5ikC%2FRPonOJfhzsXylcbXeZeDwlYEyjFJjE70m6RH3siiw0ZPkrGgb%2BNlLWno0hp8V2Rvl3pbryt%2F%2BEFfqysoVKyXrrAj1Wbn%2FxF%2Bo%2Bi3%2B9xuVE0cfyk%2F5%2BxYIbjrA06Dll7cSz7PPFhOtoVb5DMeCJU%2BXQ5IQclsFxk7f%2FhIvqndoZmbswbU9c%2FXJKVuS7Ws0f%2BWSUMMkErlWXd8ZrS%2BbIhCK5QpcplFfQvSMlfFyZR9%2BrRJVLlRkYprkpZMwrryhzwY6pgFUIJ4Ppdjw5a3edK9JL5L0dHf2XdiMkd7l%2BbtMpRk4b91kUBqFcCr1LUTUzT0Io12hDMihFri2GtyH6UEOnMGycwCbNhm9U4inpyDGgJFq4WkmDB3eyiA%2BAoXXkqkmqmsSQyUfg9GLsJb8VUxyIsxcMvfRN7rUAcOU8CH5m1qMDZlidURChXUBgDNf%2Bbn4zehV7tuivaqFOQwDfbfLzK2wX1lLbpaV&X-Amz-Signature=059e1778d6aab9cda00ae3655dd2620e65d27fa7545307a75817e22ebc97f554&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7ZQWVJC%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJGMEQCIDo%2FUexmnCnEQMEuDtHaTMUgfJq1uXtXNqAK22GrV8dAAiB%2FioddALirhzawksZOognYiiTqiSpI8vKTPyXB9fnnKSr%2FAwhHEAAaDDYzNzQyMzE4MzgwNSIMaZ0XUPNRGbmpd07ZKtwDKkSLmCwrgyt00BiwVTOo%2Bkncta%2B5FtEBatsbfS8uvnE%2BxD3ovNlhxZtG7vnnWlEsgCHaEy%2BoW5s3GeS4x8HHVhrzAfBcWsOLbr54JKtU43dEVvhZNtrJV9L7e16YtzPocaxb7HYQq3uEKEjwppObCTdCSEIuFOM9fLHJStV2FVqgSubXhhcSLHBhaLdOtPN7xAEr3IXR6tntuHukrgRhCNYpME5zy5%2Fz03UaxTFx9dyjMCrGs82ZkQ0f%2FMpWFjzmjn5Iki5wxI%2F5avALVp0FDHvNUwN2tGU27o1%2Bucy1VVPZC2URxB0MEDLWKASYoyZX1p3qXcPampkqYFm%2B%2BP7JU%2Bg7e65MTjspGLhNTAWkjsczf0Utso%2BuD9ZXPUi3w%2B5ikC%2FRPonOJfhzsXylcbXeZeDwlYEyjFJjE70m6RH3siiw0ZPkrGgb%2BNlLWno0hp8V2Rvl3pbryt%2F%2BEFfqysoVKyXrrAj1Wbn%2FxF%2Bo%2Bi3%2B9xuVE0cfyk%2F5%2BxYIbjrA06Dll7cSz7PPFhOtoVb5DMeCJU%2BXQ5IQclsFxk7f%2FhIvqndoZmbswbU9c%2FXJKVuS7Ws0f%2BWSUMMkErlWXd8ZrS%2BbIhCK5QpcplFfQvSMlfFyZR9%2BrRJVLlRkYprkpZMwrryhzwY6pgFUIJ4Ppdjw5a3edK9JL5L0dHf2XdiMkd7l%2BbtMpRk4b91kUBqFcCr1LUTUzT0Io12hDMihFri2GtyH6UEOnMGycwCbNhm9U4inpyDGgJFq4WkmDB3eyiA%2BAoXXkqkmqmsSQyUfg9GLsJb8VUxyIsxcMvfRN7rUAcOU8CH5m1qMDZlidURChXUBgDNf%2Bbn4zehV7tuivaqFOQwDfbfLzK2wX1lLbpaV&X-Amz-Signature=30fb288757b5bce2b97ab5a0ed268b4b5297a64ec41a1e1e4cc7ba541645bcde&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VA625JVI%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEH4aCXVzLXdlc3QtMiJIMEYCIQDzYAWFsgoExfTxWAADhxIb3%2Bp5Cd9yBJQsb2BK826%2FdwIhAN0MD0QPFk45qQbWnOlcw3Ye05njr%2FF47VlqT3xknj7jKv8DCEcQABoMNjM3NDIzMTgzODA1IgzZ0Lm7sUUAzdCzu44q3APYP3OiUM9ZVrJuu34iMAoH4Gf7cdqkE0YrAKh6BZsYgXoVNRIixOGMPeaW7NZyjlzeoKN3bN0bzWyiwnkcLiZ%2F%2F3NPr70LKrFJSeqQZ1Zpg3KR%2FdU9yFqJUz%2F2SZqZH3MKKzZXWaj8Go%2FZalbXRzrb0vgv8AlJpvwCAewnD8IXUYitL%2FLPZoS7C2xgmxbkDQN5z4DnqbAKLkq4NeK%2BnPSXl7QmgBVlgEvoGeEyV4fU6bOmeGgrz6DL8M1y5XTmviYC5xOznnwR82vj3OGsI%2BSqW9iU8eKdCah1zG%2BqsDT7OnDyiQB2sL9y0wJnesTqvP1eH0NrAcIFqUjMHPFbQyOOyuRiOwKqZ6djxhfvnhk5iE8CmFTAotbaOv6hzujFp%2Fs4iQMmGECPUawBUN7tQnULkGtzlEiyeN%2BgYMpbJfvlxrwHStmQO7PcJpq8xha%2BVGOTH7ETq7oGu0vJdEDAyh0SXx7dCb%2FCvUbNvDopKz1C%2Bd0hMeMO38y2H%2BY9EaI1gN%2Bc1JkaM5im%2FWbwLakvoYfm%2BahWVXBQyxkh4GQiYSrnpN9FdF05UvROuh%2BnIjQ33vMGer%2BJIrBWcd5lE%2B2RAczYCeMCIJyO3JzhV240KolfafedaKqs%2FbtdPn8WpjDbvaHPBjqkAVJfOFPR4Ek3F2A75P8G2KzEnyoBjIQH8FyCpPYbfhXsPGkfr1q6O4Y%2BKzb2ZzS%2FPnOpgNxqkeYUeuulQRds1kTVhBwLhpb2TRJ7i955ePYP%2BpJ3TPWHbGPW3w54LQ2HtG0lcForQhPg7Bw%2FGxozjTc9f3pG7uoQDb9B%2Fkz%2FehHXYVMyg2j3qyFmYTsdUAjQ2mmdTXr6xizd3sR9HtbC66qB91pH&X-Amz-Signature=1a47102ef6efb9fafbe8c8fadb012070389bd780566514ac39e9721d9c04a17d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZD6PGNV%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHVhLSdtRVRN%2BLNdflbhSeDcZHIMwEGlbv3Z3852gZrWAiEAwzDIySrgTeVFBRwyoHg76Kc413d854yaHzcPzdop1T8q%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDN5Zoja1KlgSU2XCcCrcA64BuRrOHwwirvHN5zCrVMfZhPgI4HyorLDZPmyeZ8htHcqnIFqcsYHdbNhK7JC%2FIDbwoq1A3%2FwsFh9ShY9g9dhKFyCTDTbRJz3nWKOA4muYiXtFxrFv4hLPBBX0M3UErei7QO6Chv%2BCqBJyesNXnfFOQZQLPJ208Jwq7JCVn02dPw7PpnaMdWbssLyzO8etQFiLz3hXaR%2BkLD%2F3sPPZUsXQfGjcfHeK3MdVrShaLeWH5ZOG2dpCzCFTQFbW3wKIqEpge83C6KjnwpTGRX79EkDUbFuWO8lCPl2EioREfjMrw2651fSYosF0AS9TaPMdwIf6SJ4qpz%2BhqrK6YngH3yw6ihfPFxQ6bCnu%2FEKTW2ZAIttUOrac%2FSQ77lQigOhBxWMFHrmIrpxg627iHYR4R1O%2F39rxh8yi0cH1jpVFnA%2B1nvuLMGticp7UGVq4ioU8mqlt%2FfhJcaqYvr1KULPCuXUBTzDXTpvkgVUjTAKSJbqu8cqKq8AHatO85a5FoWvvrlDCTgHFtBxyJRRvY6t00233B98RUWPstIxEuDrCPluJNtjB6fy8kZHiUYkD%2F3c%2FpMsg1lSxmq9LAFH%2FFcjpMTb%2FTogfAMlmaVlSmMbnT6LfmsYG6zgKvzbVLJolMIyZos8GOqUBaGFBvH9wt5zyZ0JddPhvj98g3RuC9oF58VeB7lPh8kpTK3nLPK56KoQRgcxI7WZvO2kpZNW%2Fb9GBM6HA%2FOG1wz1lzSjFzbCNUaaCpUCqOx8umkLIdiExXsGO%2BJO2o3HdXQUR8pcSvCbqK5vlc3iarI5fN5PDfZpPrr6TETBpanS7LsH3Ir0LeUVdKUVelikOY4v6YnMUkdgXNcK20pZ5H97MnlXB&X-Amz-Signature=04390d1ebc2ef77ff3f43e447ce4c3db424e73a91118f13c0a09757fa5516862&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZD6PGNV%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T091934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHVhLSdtRVRN%2BLNdflbhSeDcZHIMwEGlbv3Z3852gZrWAiEAwzDIySrgTeVFBRwyoHg76Kc413d854yaHzcPzdop1T8q%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDN5Zoja1KlgSU2XCcCrcA64BuRrOHwwirvHN5zCrVMfZhPgI4HyorLDZPmyeZ8htHcqnIFqcsYHdbNhK7JC%2FIDbwoq1A3%2FwsFh9ShY9g9dhKFyCTDTbRJz3nWKOA4muYiXtFxrFv4hLPBBX0M3UErei7QO6Chv%2BCqBJyesNXnfFOQZQLPJ208Jwq7JCVn02dPw7PpnaMdWbssLyzO8etQFiLz3hXaR%2BkLD%2F3sPPZUsXQfGjcfHeK3MdVrShaLeWH5ZOG2dpCzCFTQFbW3wKIqEpge83C6KjnwpTGRX79EkDUbFuWO8lCPl2EioREfjMrw2651fSYosF0AS9TaPMdwIf6SJ4qpz%2BhqrK6YngH3yw6ihfPFxQ6bCnu%2FEKTW2ZAIttUOrac%2FSQ77lQigOhBxWMFHrmIrpxg627iHYR4R1O%2F39rxh8yi0cH1jpVFnA%2B1nvuLMGticp7UGVq4ioU8mqlt%2FfhJcaqYvr1KULPCuXUBTzDXTpvkgVUjTAKSJbqu8cqKq8AHatO85a5FoWvvrlDCTgHFtBxyJRRvY6t00233B98RUWPstIxEuDrCPluJNtjB6fy8kZHiUYkD%2F3c%2FpMsg1lSxmq9LAFH%2FFcjpMTb%2FTogfAMlmaVlSmMbnT6LfmsYG6zgKvzbVLJolMIyZos8GOqUBaGFBvH9wt5zyZ0JddPhvj98g3RuC9oF58VeB7lPh8kpTK3nLPK56KoQRgcxI7WZvO2kpZNW%2Fb9GBM6HA%2FOG1wz1lzSjFzbCNUaaCpUCqOx8umkLIdiExXsGO%2BJO2o3HdXQUR8pcSvCbqK5vlc3iarI5fN5PDfZpPrr6TETBpanS7LsH3Ir0LeUVdKUVelikOY4v6YnMUkdgXNcK20pZ5H97MnlXB&X-Amz-Signature=cb6db554be05f59d4577f77aed0d068e7979b77d93fe4c38231d4018b2b1d920&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
