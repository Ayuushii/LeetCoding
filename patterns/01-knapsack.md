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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ZLPJWPG%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBOUGkIiIENy5h6P9zqTxPCbK03GX%2FjwIyfgSg5jwBDuAiEAlpHQZvuQJ0D8NI0dHUxtcmGByo3d6PxfgWUSycFjaDoq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDEgYJ0AxV58%2BcxqxIircA%2B4FkDABf220MlQbo6ONqx3n3siyN1goDCLXZiiUmCabe8QElPgKh3jWOaoBcnru0SGLZnsxHG9attGtyZhIJocOue4xqKf33AZZZ52z%2FbDTKj3K9yBCC1WDhUUzRN%2BbBq40AA5rJTrz3fXF4ysH%2BKF3onU%2BytnJTMTBL7ImdnsB80dXCOBe0LKcia9dGo4XEPywctX0meykT2KYPvuFLk99znX6y4rfzFH7HE%2BvnJJ5kJQv6bgdlyBAIUfpXWrwbJarFk3uXb2YOAcuMI6ce8kfxrPKe25mXpHTfDm1bRK51rDWCl5%2F8xj2lp0j0Xxzz5S4Qe6sH6CKNhjx6wmmEIV01zXvYnab9rAUgvktRNjVxy%2BIkT44VSv1dPzdV2Cf%2BkeNSmbKmF7irXiPK1p7IKyJFMxbzS1eUVxKoyrI4sdDHvwwv%2BnlMbeKyDr0%2FK%2BdDhisO1QiGygRpof7o%2Br%2Ff%2B30%2FlMLUlNaIj8DKnhg28wXIc6w%2FoJG6o62lzQqAo7uadX4mfC5Lyvr0qvxDr%2BY4GdafZVkxKJzUbsmfcwCzvOyGez0bkB%2BxTDTVTtCm4lgQJxz7RnjifV9ujgyyViieg%2Fs6FS76fWH7%2F3UzvjerDdYlBmCSHg2qpduLTueMO%2Bdyc0GOqUBb1BgcXgBhNBmL41ETQugJ343TjiIYl7oipd2i5vXNDegsjTyfjZ7NC%2FPRx7GrNTcM%2B6DLmJZFDn7DXPu%2BXShXCPEUDCRyPKyglVdbLl6Fvn14EBdyhp2sOc4IRXrBHO%2BFqgqJj3r7av3O6MPaDSThWOADEMrscTc5ez%2BH%2B%2BEro1XePGP4nbWNLwF0OQgu9uWefA82rWOCZEnlZ6ZHeNSZ2NECgwE&X-Amz-Signature=4b8a6b0706f8e7d518dc8ec883e73d3177d030074bbcf5f521fb73cb4d3abc7d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ZLPJWPG%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBOUGkIiIENy5h6P9zqTxPCbK03GX%2FjwIyfgSg5jwBDuAiEAlpHQZvuQJ0D8NI0dHUxtcmGByo3d6PxfgWUSycFjaDoq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDEgYJ0AxV58%2BcxqxIircA%2B4FkDABf220MlQbo6ONqx3n3siyN1goDCLXZiiUmCabe8QElPgKh3jWOaoBcnru0SGLZnsxHG9attGtyZhIJocOue4xqKf33AZZZ52z%2FbDTKj3K9yBCC1WDhUUzRN%2BbBq40AA5rJTrz3fXF4ysH%2BKF3onU%2BytnJTMTBL7ImdnsB80dXCOBe0LKcia9dGo4XEPywctX0meykT2KYPvuFLk99znX6y4rfzFH7HE%2BvnJJ5kJQv6bgdlyBAIUfpXWrwbJarFk3uXb2YOAcuMI6ce8kfxrPKe25mXpHTfDm1bRK51rDWCl5%2F8xj2lp0j0Xxzz5S4Qe6sH6CKNhjx6wmmEIV01zXvYnab9rAUgvktRNjVxy%2BIkT44VSv1dPzdV2Cf%2BkeNSmbKmF7irXiPK1p7IKyJFMxbzS1eUVxKoyrI4sdDHvwwv%2BnlMbeKyDr0%2FK%2BdDhisO1QiGygRpof7o%2Br%2Ff%2B30%2FlMLUlNaIj8DKnhg28wXIc6w%2FoJG6o62lzQqAo7uadX4mfC5Lyvr0qvxDr%2BY4GdafZVkxKJzUbsmfcwCzvOyGez0bkB%2BxTDTVTtCm4lgQJxz7RnjifV9ujgyyViieg%2Fs6FS76fWH7%2F3UzvjerDdYlBmCSHg2qpduLTueMO%2Bdyc0GOqUBb1BgcXgBhNBmL41ETQugJ343TjiIYl7oipd2i5vXNDegsjTyfjZ7NC%2FPRx7GrNTcM%2B6DLmJZFDn7DXPu%2BXShXCPEUDCRyPKyglVdbLl6Fvn14EBdyhp2sOc4IRXrBHO%2BFqgqJj3r7av3O6MPaDSThWOADEMrscTc5ez%2BH%2B%2BEro1XePGP4nbWNLwF0OQgu9uWefA82rWOCZEnlZ6ZHeNSZ2NECgwE&X-Amz-Signature=7dc0333f13d51b774e2c799ff5fa46a3c6bf0c391c9156fbf910ad6db29fe6b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ZLPJWPG%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBOUGkIiIENy5h6P9zqTxPCbK03GX%2FjwIyfgSg5jwBDuAiEAlpHQZvuQJ0D8NI0dHUxtcmGByo3d6PxfgWUSycFjaDoq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDEgYJ0AxV58%2BcxqxIircA%2B4FkDABf220MlQbo6ONqx3n3siyN1goDCLXZiiUmCabe8QElPgKh3jWOaoBcnru0SGLZnsxHG9attGtyZhIJocOue4xqKf33AZZZ52z%2FbDTKj3K9yBCC1WDhUUzRN%2BbBq40AA5rJTrz3fXF4ysH%2BKF3onU%2BytnJTMTBL7ImdnsB80dXCOBe0LKcia9dGo4XEPywctX0meykT2KYPvuFLk99znX6y4rfzFH7HE%2BvnJJ5kJQv6bgdlyBAIUfpXWrwbJarFk3uXb2YOAcuMI6ce8kfxrPKe25mXpHTfDm1bRK51rDWCl5%2F8xj2lp0j0Xxzz5S4Qe6sH6CKNhjx6wmmEIV01zXvYnab9rAUgvktRNjVxy%2BIkT44VSv1dPzdV2Cf%2BkeNSmbKmF7irXiPK1p7IKyJFMxbzS1eUVxKoyrI4sdDHvwwv%2BnlMbeKyDr0%2FK%2BdDhisO1QiGygRpof7o%2Br%2Ff%2B30%2FlMLUlNaIj8DKnhg28wXIc6w%2FoJG6o62lzQqAo7uadX4mfC5Lyvr0qvxDr%2BY4GdafZVkxKJzUbsmfcwCzvOyGez0bkB%2BxTDTVTtCm4lgQJxz7RnjifV9ujgyyViieg%2Fs6FS76fWH7%2F3UzvjerDdYlBmCSHg2qpduLTueMO%2Bdyc0GOqUBb1BgcXgBhNBmL41ETQugJ343TjiIYl7oipd2i5vXNDegsjTyfjZ7NC%2FPRx7GrNTcM%2B6DLmJZFDn7DXPu%2BXShXCPEUDCRyPKyglVdbLl6Fvn14EBdyhp2sOc4IRXrBHO%2BFqgqJj3r7av3O6MPaDSThWOADEMrscTc5ez%2BH%2B%2BEro1XePGP4nbWNLwF0OQgu9uWefA82rWOCZEnlZ6ZHeNSZ2NECgwE&X-Amz-Signature=deaf17ee0d1b38145427efbfb1ea4c1076dd1605ccb7303da51818a39944b334&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLPX3XEF%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC5fq9NeNLiBb6BH00AoMJ32z7QmgZ7qo2HHiikO9q%2B0gIhAOnZbagKgxtSpkT5ub5kiwQyQB3SbAZau5FntdTu9b%2B%2FKv8DCG8QABoMNjM3NDIzMTgzODA1Igzqb1DSnzx14kP5aM4q3AOrZW8MwLk3Bl2g%2FtdXELZdxyvXbcKmND2L1nmJarw6AKrHhYM%2F6xJoMhMQXn00ueoHKjfTkva6sSAgoEzCJmM%2Bqt0fmOEk8J7x5sSHhW76bq4%2BT4d7S%2B%2FLrm%2BaSM8JyGzqN9ad2ieOMQvEmTWY6WPEnitwAd%2FHNLxOlLlZeCSKjo%2Briemtw7k1bcPU6Xv96GVO%2Fn0IDJtwxZhDlHHZtJKrNiXyNQoiUfnjKsF%2B8x%2F71j3fVEUYD0iKeZxj5dUs1%2F%2B1TKx2ajLnRus9kFlysj%2BNFEmhH7ZdjFu%2Fnkwb4tAFss1HH5xlCDM5HNeR13RL2j1pNvqMUdW75xUkYMEe6oSP7K93Z109hF7PxvYSGASxKuOOgLs2Z7nfImIe4hf0DA2HPmwcn4HLi9%2F6bvPV%2BKZOO33M8rfpsfDmfhRTgU%2FlkzDU6r%2FEDAC2Y%2BaB2imUWuzaPUzPrsvcbBNJX5JRDDVtAZaB56g2e3SEPXDvsASwavfTua329xZ7IarL9xJb%2B6dJtSYlWroUk6Q050ZPOZSXHIqUQM3gOu3HH59Xy5rNsQC4lZ0BzX8idhcz1fqLLSwdSEmhEvS5rQ05xlgvUq%2B6gLnKqqUGmBzhP3M4ozqblHver057Y0%2BHMhNOGjC%2FnsnNBjqkAWXk2809qqKEgUPhs1ZLa1XH23wsDJa6PipF9Z9uK2%2Fm3hPthM6PZExyy8Jh9NisLQvG4t5q%2BlfuhNenPxhAoU475Da2fC2liIxpD8KVBspibHYoW6kOOIDGRsdIDrJ3vPJcogIOu7M8mZ2ctLngA57EcsEE%2BQz8%2FQEGNrPufrrsWrJRmeAVap%2FegX5NhRQO0xWx8q8hBDm8w7XUqB4mMAJ6rrfG&X-Amz-Signature=b8282da756659dd655a62ad10e3c421513da8b74724d2280c10068a0471437ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLPX3XEF%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC5fq9NeNLiBb6BH00AoMJ32z7QmgZ7qo2HHiikO9q%2B0gIhAOnZbagKgxtSpkT5ub5kiwQyQB3SbAZau5FntdTu9b%2B%2FKv8DCG8QABoMNjM3NDIzMTgzODA1Igzqb1DSnzx14kP5aM4q3AOrZW8MwLk3Bl2g%2FtdXELZdxyvXbcKmND2L1nmJarw6AKrHhYM%2F6xJoMhMQXn00ueoHKjfTkva6sSAgoEzCJmM%2Bqt0fmOEk8J7x5sSHhW76bq4%2BT4d7S%2B%2FLrm%2BaSM8JyGzqN9ad2ieOMQvEmTWY6WPEnitwAd%2FHNLxOlLlZeCSKjo%2Briemtw7k1bcPU6Xv96GVO%2Fn0IDJtwxZhDlHHZtJKrNiXyNQoiUfnjKsF%2B8x%2F71j3fVEUYD0iKeZxj5dUs1%2F%2B1TKx2ajLnRus9kFlysj%2BNFEmhH7ZdjFu%2Fnkwb4tAFss1HH5xlCDM5HNeR13RL2j1pNvqMUdW75xUkYMEe6oSP7K93Z109hF7PxvYSGASxKuOOgLs2Z7nfImIe4hf0DA2HPmwcn4HLi9%2F6bvPV%2BKZOO33M8rfpsfDmfhRTgU%2FlkzDU6r%2FEDAC2Y%2BaB2imUWuzaPUzPrsvcbBNJX5JRDDVtAZaB56g2e3SEPXDvsASwavfTua329xZ7IarL9xJb%2B6dJtSYlWroUk6Q050ZPOZSXHIqUQM3gOu3HH59Xy5rNsQC4lZ0BzX8idhcz1fqLLSwdSEmhEvS5rQ05xlgvUq%2B6gLnKqqUGmBzhP3M4ozqblHver057Y0%2BHMhNOGjC%2FnsnNBjqkAWXk2809qqKEgUPhs1ZLa1XH23wsDJa6PipF9Z9uK2%2Fm3hPthM6PZExyy8Jh9NisLQvG4t5q%2BlfuhNenPxhAoU475Da2fC2liIxpD8KVBspibHYoW6kOOIDGRsdIDrJ3vPJcogIOu7M8mZ2ctLngA57EcsEE%2BQz8%2FQEGNrPufrrsWrJRmeAVap%2FegX5NhRQO0xWx8q8hBDm8w7XUqB4mMAJ6rrfG&X-Amz-Signature=50917bc96efd713b875559f24d686405c453f8ab7a6b4b272b32ff9f64151733&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLPX3XEF%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC5fq9NeNLiBb6BH00AoMJ32z7QmgZ7qo2HHiikO9q%2B0gIhAOnZbagKgxtSpkT5ub5kiwQyQB3SbAZau5FntdTu9b%2B%2FKv8DCG8QABoMNjM3NDIzMTgzODA1Igzqb1DSnzx14kP5aM4q3AOrZW8MwLk3Bl2g%2FtdXELZdxyvXbcKmND2L1nmJarw6AKrHhYM%2F6xJoMhMQXn00ueoHKjfTkva6sSAgoEzCJmM%2Bqt0fmOEk8J7x5sSHhW76bq4%2BT4d7S%2B%2FLrm%2BaSM8JyGzqN9ad2ieOMQvEmTWY6WPEnitwAd%2FHNLxOlLlZeCSKjo%2Briemtw7k1bcPU6Xv96GVO%2Fn0IDJtwxZhDlHHZtJKrNiXyNQoiUfnjKsF%2B8x%2F71j3fVEUYD0iKeZxj5dUs1%2F%2B1TKx2ajLnRus9kFlysj%2BNFEmhH7ZdjFu%2Fnkwb4tAFss1HH5xlCDM5HNeR13RL2j1pNvqMUdW75xUkYMEe6oSP7K93Z109hF7PxvYSGASxKuOOgLs2Z7nfImIe4hf0DA2HPmwcn4HLi9%2F6bvPV%2BKZOO33M8rfpsfDmfhRTgU%2FlkzDU6r%2FEDAC2Y%2BaB2imUWuzaPUzPrsvcbBNJX5JRDDVtAZaB56g2e3SEPXDvsASwavfTua329xZ7IarL9xJb%2B6dJtSYlWroUk6Q050ZPOZSXHIqUQM3gOu3HH59Xy5rNsQC4lZ0BzX8idhcz1fqLLSwdSEmhEvS5rQ05xlgvUq%2B6gLnKqqUGmBzhP3M4ozqblHver057Y0%2BHMhNOGjC%2FnsnNBjqkAWXk2809qqKEgUPhs1ZLa1XH23wsDJa6PipF9Z9uK2%2Fm3hPthM6PZExyy8Jh9NisLQvG4t5q%2BlfuhNenPxhAoU475Da2fC2liIxpD8KVBspibHYoW6kOOIDGRsdIDrJ3vPJcogIOu7M8mZ2ctLngA57EcsEE%2BQz8%2FQEGNrPufrrsWrJRmeAVap%2FegX5NhRQO0xWx8q8hBDm8w7XUqB4mMAJ6rrfG&X-Amz-Signature=5b98cf5bab00497fd26cdfa0da9eeab639b2897014512629d1a4d33ce9be3a7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLPX3XEF%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC5fq9NeNLiBb6BH00AoMJ32z7QmgZ7qo2HHiikO9q%2B0gIhAOnZbagKgxtSpkT5ub5kiwQyQB3SbAZau5FntdTu9b%2B%2FKv8DCG8QABoMNjM3NDIzMTgzODA1Igzqb1DSnzx14kP5aM4q3AOrZW8MwLk3Bl2g%2FtdXELZdxyvXbcKmND2L1nmJarw6AKrHhYM%2F6xJoMhMQXn00ueoHKjfTkva6sSAgoEzCJmM%2Bqt0fmOEk8J7x5sSHhW76bq4%2BT4d7S%2B%2FLrm%2BaSM8JyGzqN9ad2ieOMQvEmTWY6WPEnitwAd%2FHNLxOlLlZeCSKjo%2Briemtw7k1bcPU6Xv96GVO%2Fn0IDJtwxZhDlHHZtJKrNiXyNQoiUfnjKsF%2B8x%2F71j3fVEUYD0iKeZxj5dUs1%2F%2B1TKx2ajLnRus9kFlysj%2BNFEmhH7ZdjFu%2Fnkwb4tAFss1HH5xlCDM5HNeR13RL2j1pNvqMUdW75xUkYMEe6oSP7K93Z109hF7PxvYSGASxKuOOgLs2Z7nfImIe4hf0DA2HPmwcn4HLi9%2F6bvPV%2BKZOO33M8rfpsfDmfhRTgU%2FlkzDU6r%2FEDAC2Y%2BaB2imUWuzaPUzPrsvcbBNJX5JRDDVtAZaB56g2e3SEPXDvsASwavfTua329xZ7IarL9xJb%2B6dJtSYlWroUk6Q050ZPOZSXHIqUQM3gOu3HH59Xy5rNsQC4lZ0BzX8idhcz1fqLLSwdSEmhEvS5rQ05xlgvUq%2B6gLnKqqUGmBzhP3M4ozqblHver057Y0%2BHMhNOGjC%2FnsnNBjqkAWXk2809qqKEgUPhs1ZLa1XH23wsDJa6PipF9Z9uK2%2Fm3hPthM6PZExyy8Jh9NisLQvG4t5q%2BlfuhNenPxhAoU475Da2fC2liIxpD8KVBspibHYoW6kOOIDGRsdIDrJ3vPJcogIOu7M8mZ2ctLngA57EcsEE%2BQz8%2FQEGNrPufrrsWrJRmeAVap%2FegX5NhRQO0xWx8q8hBDm8w7XUqB4mMAJ6rrfG&X-Amz-Signature=57ccbd6e9cccd364d70067c7d9788198fc7638d259aac3f77882605eee2ec02c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662YCH2F6Y%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGwHHqF8fVM4U3BT8zj3V0uWeJPPk77TlrCqwpPZdTPQAiEAvRjJljPZIhauzxCsmwU725KoYZpStvZgVlqnGfUXroMq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDJ%2BmjOSe7nlKflIABircA5PUvTP212qcywLUQFFnfXrUFTy2qKNJRQW3FeOtTKJcEj%2BSYm8M9Hnqalz4CZvVO2n9GqbAhHS38XtE18FZ5mT0XNCapAMs%2F%2Fiak9ug30vYGpTN1Qg8W0UaDs29%2FzF1oGqyrAfa5Z7fTQfaQ6tpxUpvv98LdPFHfeM1ZGCELHldrxt9kDxdy%2FmxAJ0nDWuunJAVAORq%2FxgHiUHFkYy302FdMkWW4GrisaDzo8bLAUZ4wkAgezTHWvS%2FXDFN2r4hIMzBuaauRxGx4r9mcWv%2Fo60Bu9sogjegMxezCc9CxGWzWZmlvJo6WUG0WmkbcFONkqKUYFKxS9wnm5axg%2BvB84bq2XdNlESO5c%2FawMkRa9vuBViPCuRn3WGGMAoeZwpeUsMrl8Fy3YhUFdRN7X%2B5eRkd5JMo3K1xXl6x0xM6wFeeNg6OKUBEwkRDjnh5bXsz%2F%2F32s4puP0yej5YMSygKLcGN7cyqmv2Xa%2FBN%2BFflEOsxmw2sjqr2ys%2BCf3TT1yTanaqXIq8DdFcDFUrSNIKTI%2BL3vZE19gGM6h86eF2z3R5f4Uulj3ITn9zycPGqMgWWTOkF6lF%2B8qDp2IrOcrBFEJUC%2FCmb%2FYCH61dW6YkaIwR%2BDRRLGuYNnlj5WZFlMOCeyc0GOqUBrIwIpbuufkcY7lTHX1O7BLKlbc4bNh8aWaeIhR%2BXlhduRZq2N2NHn19B77m3pKh%2FTnRfTIMlmUUOxObEf%2Fn4bVx7NWCAiJjIWgPGCHJ2%2BwJJu22bpyfZipB8hEyaAOSyb2BHUS6A5Nb%2FmenhWdkhRlA%2BhGwlaEc0o1KqZRQ%2BSkq6zJjLmo72yMBRoy2Bb1uvHHPGl1asvNtRa7u3HrH7XZda4EsF&X-Amz-Signature=809a80f1c9569b541f75051f68bba0cea41c16190b109089066149643225a881&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJZ4U6NI%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpGl2m3fgn45djkiL7KaJ6F%2BVScjCqV0CQxfKaNJB%2BSgIgBIBcPEaDXWt3C6tuCkt2Dlr%2F%2Fpu%2FEHi3GqC7J82kGZYq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDOFqx1wjuwZ7QgjARCrcA45OYGj2QIFF1CQjU34V0pvAPTAA5CW6%2FmuoDaasrK7cgnjkQH1zw3WiqCfQO4kPJRfn3Ow%2FH0e%2BqIxGMa%2B2EbL%2FzrrpHL38%2FxLyc%2F06q3Cn9z8V046RBvKUwCdMEs0UQhpb97Hgm%2FhwDQptnVRoflIWFpdC0TzNvaT0v6oeAFcRlpSU2ckkNmqdeNG2a2jN71FIbNZoWpdpMu03p5RYTduSHaoM%2FEh5EFXRr0SVp7XL%2BGyUeEyHKg1cFe95LDp3gd3sUhZW4Y3lQc3%2Fj%2BkEHpduL3M%2BYfTeXYud7%2BPenMtl3IGNFd2L9YMx6yV8XRDJa9PclnWpOJ1VwTSC923ucoRqwyBKAREmfYu4yI43OsHUjXHNOlj5B6xDe0beXdecNWzQ3LHRPQ%2FCgS7fMqnaOaeJNuWC9BdCLvWbDbG3EUbdGhCWAHYn5zpsBLub7DnHa7ziajuk6v5cTnj4tuN3884Ydx37qhXeFf6S%2F%2BRCDmbsREGFOXj6cTaaD3vvYCpSut8%2FdysC2%2FztK189PyO%2Bfl%2BgpceLeu8Kd0NjVZ0QlB0uxu3xx6ezWkl0Evtah0aCJh52BUz%2FwahopRxzcf7rmgoRj%2BqTadN8bPA4sEtfcKuLsBLikpYt0A%2BZJxQOMOWfyc0GOqUBMRa2TU5jVwFapkXrKzDDoOS%2FcqwyMsaHn7ElTGvrsr8zXJvQq0mYHfULzyHVeva7hTY4FbEOlGlCD3C6CO1A%2BEId4%2BA5oo2jm1LHcg2TsyamG2MOQLlrS2bYu47mkwcy5%2BA4HLirePq2eSfz83KqCc%2FnWAV5VAsYL2yW8sbbG0TIQNosYEGvvaFuxCuIKxKmw50sDTtwh4lIH%2FJxPDGcUglFPv8F&X-Amz-Signature=113b6c518e03a62ac72e9b842a5e1f8dff1d523e03023f6425020393b26823aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJZ4U6NI%2F20260312%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260312T084125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpGl2m3fgn45djkiL7KaJ6F%2BVScjCqV0CQxfKaNJB%2BSgIgBIBcPEaDXWt3C6tuCkt2Dlr%2F%2Fpu%2FEHi3GqC7J82kGZYq%2FwMIbxAAGgw2Mzc0MjMxODM4MDUiDOFqx1wjuwZ7QgjARCrcA45OYGj2QIFF1CQjU34V0pvAPTAA5CW6%2FmuoDaasrK7cgnjkQH1zw3WiqCfQO4kPJRfn3Ow%2FH0e%2BqIxGMa%2B2EbL%2FzrrpHL38%2FxLyc%2F06q3Cn9z8V046RBvKUwCdMEs0UQhpb97Hgm%2FhwDQptnVRoflIWFpdC0TzNvaT0v6oeAFcRlpSU2ckkNmqdeNG2a2jN71FIbNZoWpdpMu03p5RYTduSHaoM%2FEh5EFXRr0SVp7XL%2BGyUeEyHKg1cFe95LDp3gd3sUhZW4Y3lQc3%2Fj%2BkEHpduL3M%2BYfTeXYud7%2BPenMtl3IGNFd2L9YMx6yV8XRDJa9PclnWpOJ1VwTSC923ucoRqwyBKAREmfYu4yI43OsHUjXHNOlj5B6xDe0beXdecNWzQ3LHRPQ%2FCgS7fMqnaOaeJNuWC9BdCLvWbDbG3EUbdGhCWAHYn5zpsBLub7DnHa7ziajuk6v5cTnj4tuN3884Ydx37qhXeFf6S%2F%2BRCDmbsREGFOXj6cTaaD3vvYCpSut8%2FdysC2%2FztK189PyO%2Bfl%2BgpceLeu8Kd0NjVZ0QlB0uxu3xx6ezWkl0Evtah0aCJh52BUz%2FwahopRxzcf7rmgoRj%2BqTadN8bPA4sEtfcKuLsBLikpYt0A%2BZJxQOMOWfyc0GOqUBMRa2TU5jVwFapkXrKzDDoOS%2FcqwyMsaHn7ElTGvrsr8zXJvQq0mYHfULzyHVeva7hTY4FbEOlGlCD3C6CO1A%2BEId4%2BA5oo2jm1LHcg2TsyamG2MOQLlrS2bYu47mkwcy5%2BA4HLirePq2eSfz83KqCc%2FnWAV5VAsYL2yW8sbbG0TIQNosYEGvvaFuxCuIKxKmw50sDTtwh4lIH%2FJxPDGcUglFPv8F&X-Amz-Signature=c64e7bb0d114eb6c90f1e764a7f262fe8c67027324531500e48ac100363fe460&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
