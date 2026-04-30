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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663MA35FKI%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQCLjiJtfiv5dE1s3m8jKLw3HskENHcerx4RUvdcbk1MNQIgFtZDmiHxYbUGZ7VKirwIi5gw9BhNC6EFi%2BxT7J%2BnL2Yq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDIp7%2BZAsjkG5pYLhhCrcA9eX0nNnHZbL%2BkC2op3cgZuRO8bjxzoqtnOne3eSUceWjJ5LsJGP41T%2BY5Saw7Ht2OnPJRhxwbp1ebsQVTlUxhYbIFmXbtr%2FqEEztRINlRweELkX1BpW9A5uVfo8ycMW8hrCkaBjjC0I94NNMDq2Nne4%2FXUTX%2Buiyx3RLYowtpChK2mD1OBrEBqINoPJ8OuTA3JL01WWetYDsfd80LRNgGQKzsSpAnn8jE07CXXPuV0ot9CQuArNV1yzUxBeOqHwsnXW6nTHgIuFLNKQAjkr%2B3Ps2S53zTDr0KfYZ9uaFlU9mz3hdgwSHsc4ySsDoHYWQGV8SO%2FVsl2Jmt5io2pPROEIaJ0u82mPo9Wu3yYFbFFaD5MTMNlVPLAbHrSSVrhoDnZfp9ZPWrdVXxeBpvjY%2BWIO5Kp95qc9anTW3FkhXAmsdN%2FbLlKv2jNd58fxlTUal7jaVdqFrRtWuBU%2FX77tXixi7y7GSgeXqDY3juy%2Fd11cmB8hjt9k0bBTOh%2B7nZve%2BzVCFGjdvAaQ56swVEbBtkz3feQpS2LDbvnqBSX9zIha0sP%2FJbT%2FHNHVkXHGkd3Bfb4nPemGjMfO2qSp39%2Fsh9zwaPvQAuu%2BaI9qTFRnhiS3tMYZrJMmpZY8i4U0MJK%2FzM8GOqUBX5vqh422zRwoUGvxpcH14tOrlY8Ihw6Wv46fn3K4tamHjxyxUkIFcy0%2BdRpnWpTH16PjN4uwF3tpKOosPHi%2FN06S3eNCqaPI0chyoHO%2BsO8MV%2FtMoOd3ezi8JZZ22xsGkEVw9W4gi6MQ0CxqMHXyNhecAW3L7Go2XhdLaIH6JP1Enf%2FK%2F4%2FCUKTGAWL2xp96PB6FJ002gEmgTUSL5gedqusvHa2F&X-Amz-Signature=f74adb85634583e6c1fc3828bbc5fe91c73515f5ff63185c935cd617d3c99455&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663MA35FKI%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQCLjiJtfiv5dE1s3m8jKLw3HskENHcerx4RUvdcbk1MNQIgFtZDmiHxYbUGZ7VKirwIi5gw9BhNC6EFi%2BxT7J%2BnL2Yq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDIp7%2BZAsjkG5pYLhhCrcA9eX0nNnHZbL%2BkC2op3cgZuRO8bjxzoqtnOne3eSUceWjJ5LsJGP41T%2BY5Saw7Ht2OnPJRhxwbp1ebsQVTlUxhYbIFmXbtr%2FqEEztRINlRweELkX1BpW9A5uVfo8ycMW8hrCkaBjjC0I94NNMDq2Nne4%2FXUTX%2Buiyx3RLYowtpChK2mD1OBrEBqINoPJ8OuTA3JL01WWetYDsfd80LRNgGQKzsSpAnn8jE07CXXPuV0ot9CQuArNV1yzUxBeOqHwsnXW6nTHgIuFLNKQAjkr%2B3Ps2S53zTDr0KfYZ9uaFlU9mz3hdgwSHsc4ySsDoHYWQGV8SO%2FVsl2Jmt5io2pPROEIaJ0u82mPo9Wu3yYFbFFaD5MTMNlVPLAbHrSSVrhoDnZfp9ZPWrdVXxeBpvjY%2BWIO5Kp95qc9anTW3FkhXAmsdN%2FbLlKv2jNd58fxlTUal7jaVdqFrRtWuBU%2FX77tXixi7y7GSgeXqDY3juy%2Fd11cmB8hjt9k0bBTOh%2B7nZve%2BzVCFGjdvAaQ56swVEbBtkz3feQpS2LDbvnqBSX9zIha0sP%2FJbT%2FHNHVkXHGkd3Bfb4nPemGjMfO2qSp39%2Fsh9zwaPvQAuu%2BaI9qTFRnhiS3tMYZrJMmpZY8i4U0MJK%2FzM8GOqUBX5vqh422zRwoUGvxpcH14tOrlY8Ihw6Wv46fn3K4tamHjxyxUkIFcy0%2BdRpnWpTH16PjN4uwF3tpKOosPHi%2FN06S3eNCqaPI0chyoHO%2BsO8MV%2FtMoOd3ezi8JZZ22xsGkEVw9W4gi6MQ0CxqMHXyNhecAW3L7Go2XhdLaIH6JP1Enf%2FK%2F4%2FCUKTGAWL2xp96PB6FJ002gEmgTUSL5gedqusvHa2F&X-Amz-Signature=6e69b963b0058b41d577b2a63daac2b87e9bcdf708a66cbc149ab6728417451c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663MA35FKI%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQCLjiJtfiv5dE1s3m8jKLw3HskENHcerx4RUvdcbk1MNQIgFtZDmiHxYbUGZ7VKirwIi5gw9BhNC6EFi%2BxT7J%2BnL2Yq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDIp7%2BZAsjkG5pYLhhCrcA9eX0nNnHZbL%2BkC2op3cgZuRO8bjxzoqtnOne3eSUceWjJ5LsJGP41T%2BY5Saw7Ht2OnPJRhxwbp1ebsQVTlUxhYbIFmXbtr%2FqEEztRINlRweELkX1BpW9A5uVfo8ycMW8hrCkaBjjC0I94NNMDq2Nne4%2FXUTX%2Buiyx3RLYowtpChK2mD1OBrEBqINoPJ8OuTA3JL01WWetYDsfd80LRNgGQKzsSpAnn8jE07CXXPuV0ot9CQuArNV1yzUxBeOqHwsnXW6nTHgIuFLNKQAjkr%2B3Ps2S53zTDr0KfYZ9uaFlU9mz3hdgwSHsc4ySsDoHYWQGV8SO%2FVsl2Jmt5io2pPROEIaJ0u82mPo9Wu3yYFbFFaD5MTMNlVPLAbHrSSVrhoDnZfp9ZPWrdVXxeBpvjY%2BWIO5Kp95qc9anTW3FkhXAmsdN%2FbLlKv2jNd58fxlTUal7jaVdqFrRtWuBU%2FX77tXixi7y7GSgeXqDY3juy%2Fd11cmB8hjt9k0bBTOh%2B7nZve%2BzVCFGjdvAaQ56swVEbBtkz3feQpS2LDbvnqBSX9zIha0sP%2FJbT%2FHNHVkXHGkd3Bfb4nPemGjMfO2qSp39%2Fsh9zwaPvQAuu%2BaI9qTFRnhiS3tMYZrJMmpZY8i4U0MJK%2FzM8GOqUBX5vqh422zRwoUGvxpcH14tOrlY8Ihw6Wv46fn3K4tamHjxyxUkIFcy0%2BdRpnWpTH16PjN4uwF3tpKOosPHi%2FN06S3eNCqaPI0chyoHO%2BsO8MV%2FtMoOd3ezi8JZZ22xsGkEVw9W4gi6MQ0CxqMHXyNhecAW3L7Go2XhdLaIH6JP1Enf%2FK%2F4%2FCUKTGAWL2xp96PB6FJ002gEmgTUSL5gedqusvHa2F&X-Amz-Signature=92a9d811dc4ffaf7d6b4753a37a18c7aca062deb71490b59d43954fc6d1484dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SZO52HY%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIGiWU2b7cPBDg074pBNkdZ7wlHJV80FZ457OfDSoHqO%2BAiBfvIQD9DPtC1NFrP5GuruXF6N%2BCxS%2BFpHWA7513cQBMir%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMGXNjpdFxdxFh7vbjKtwD%2BHrQ5i8rmX7u2FtmhB8DlU4PI%2FhPw59PC5AnCXpPjGuChwsKLgKtpk3Yr342CsefxGrZrHzRVLQbqSzGDNb6wIKzB2b3y70y6uElu8btj5VYwCbL355spIcTmawCTsqzbOcvLsHj0bvb8RVcCG6GyUzL0LD0IE5ooEP5YdPg2xwU8DlUnOKn5IEI0n4eEQBzEbKqfM3d74HIU9GZzLgua4%2FJPHFzaBhhPo9wfZvPD3ZtsBG5GEgQj8gesEIHTu4Ub549Zw8F5aSrSIggCISw5O3QPvnNQLCozzhf5UmRTGGQfg%2BXjIb0UUhCGwppkSdgZr2m3Tbtl92YemgrCNADqz0B9ny8nwPDjP4f8I6JhtIRMncOpI7m3o%2FA%2Bcg8cACjFX7Pudodv91WjTqeEmUyScS1%2Fq3ArbAJPeRd%2BcMijQYl8byRZ5%2FR6bW117pCC7iz74knaZzLAp%2BQkgulPQh%2FkPmrT9ypAhxVZIp0qX3Dxxivo%2BCoyJE5GnXH4cSX7z8e0OFWulVFb2aopsk2P1hDlVK3oh12U5m%2BdiSXk4X33LqUj6aca5jMjvMAKUBsHkK8eaqlY3Njr2TA5LARrGxjby73Kjy0g%2FPrDqRhKxaNK4BbCWyl7iLI9XQRy5wwqL%2FMzwY6pgG%2FFWMQHwFhMEbvR536zh2WVLP3pU%2BYAOZP9peoG81ePNbaTm4%2FBDdHxtv%2BJrj9nprWeyluznzLlVvdkVXNtz867lRRXFFbrHwpvkrPiaAgdcMGy3Lcrj8qXO7b4MP7KZ%2FLUoOSXINDajTF7IKwU9O3isvBVVfN57x3%2F5%2BueKmKDUL6GBT9mHtp16dH0iU%2Fn6PXcyPVHcIAdoNIQE39d8%2FTetvqmVIN&X-Amz-Signature=a849ddef10a113758a527386d6eb5b2e46922756d33f44c908258963364f2612&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SZO52HY%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIGiWU2b7cPBDg074pBNkdZ7wlHJV80FZ457OfDSoHqO%2BAiBfvIQD9DPtC1NFrP5GuruXF6N%2BCxS%2BFpHWA7513cQBMir%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMGXNjpdFxdxFh7vbjKtwD%2BHrQ5i8rmX7u2FtmhB8DlU4PI%2FhPw59PC5AnCXpPjGuChwsKLgKtpk3Yr342CsefxGrZrHzRVLQbqSzGDNb6wIKzB2b3y70y6uElu8btj5VYwCbL355spIcTmawCTsqzbOcvLsHj0bvb8RVcCG6GyUzL0LD0IE5ooEP5YdPg2xwU8DlUnOKn5IEI0n4eEQBzEbKqfM3d74HIU9GZzLgua4%2FJPHFzaBhhPo9wfZvPD3ZtsBG5GEgQj8gesEIHTu4Ub549Zw8F5aSrSIggCISw5O3QPvnNQLCozzhf5UmRTGGQfg%2BXjIb0UUhCGwppkSdgZr2m3Tbtl92YemgrCNADqz0B9ny8nwPDjP4f8I6JhtIRMncOpI7m3o%2FA%2Bcg8cACjFX7Pudodv91WjTqeEmUyScS1%2Fq3ArbAJPeRd%2BcMijQYl8byRZ5%2FR6bW117pCC7iz74knaZzLAp%2BQkgulPQh%2FkPmrT9ypAhxVZIp0qX3Dxxivo%2BCoyJE5GnXH4cSX7z8e0OFWulVFb2aopsk2P1hDlVK3oh12U5m%2BdiSXk4X33LqUj6aca5jMjvMAKUBsHkK8eaqlY3Njr2TA5LARrGxjby73Kjy0g%2FPrDqRhKxaNK4BbCWyl7iLI9XQRy5wwqL%2FMzwY6pgG%2FFWMQHwFhMEbvR536zh2WVLP3pU%2BYAOZP9peoG81ePNbaTm4%2FBDdHxtv%2BJrj9nprWeyluznzLlVvdkVXNtz867lRRXFFbrHwpvkrPiaAgdcMGy3Lcrj8qXO7b4MP7KZ%2FLUoOSXINDajTF7IKwU9O3isvBVVfN57x3%2F5%2BueKmKDUL6GBT9mHtp16dH0iU%2Fn6PXcyPVHcIAdoNIQE39d8%2FTetvqmVIN&X-Amz-Signature=cdc451cbc2cc14deb7242c79dd942f0d4036a83c8310088bbdf3d50882f29947&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SZO52HY%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIGiWU2b7cPBDg074pBNkdZ7wlHJV80FZ457OfDSoHqO%2BAiBfvIQD9DPtC1NFrP5GuruXF6N%2BCxS%2BFpHWA7513cQBMir%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMGXNjpdFxdxFh7vbjKtwD%2BHrQ5i8rmX7u2FtmhB8DlU4PI%2FhPw59PC5AnCXpPjGuChwsKLgKtpk3Yr342CsefxGrZrHzRVLQbqSzGDNb6wIKzB2b3y70y6uElu8btj5VYwCbL355spIcTmawCTsqzbOcvLsHj0bvb8RVcCG6GyUzL0LD0IE5ooEP5YdPg2xwU8DlUnOKn5IEI0n4eEQBzEbKqfM3d74HIU9GZzLgua4%2FJPHFzaBhhPo9wfZvPD3ZtsBG5GEgQj8gesEIHTu4Ub549Zw8F5aSrSIggCISw5O3QPvnNQLCozzhf5UmRTGGQfg%2BXjIb0UUhCGwppkSdgZr2m3Tbtl92YemgrCNADqz0B9ny8nwPDjP4f8I6JhtIRMncOpI7m3o%2FA%2Bcg8cACjFX7Pudodv91WjTqeEmUyScS1%2Fq3ArbAJPeRd%2BcMijQYl8byRZ5%2FR6bW117pCC7iz74knaZzLAp%2BQkgulPQh%2FkPmrT9ypAhxVZIp0qX3Dxxivo%2BCoyJE5GnXH4cSX7z8e0OFWulVFb2aopsk2P1hDlVK3oh12U5m%2BdiSXk4X33LqUj6aca5jMjvMAKUBsHkK8eaqlY3Njr2TA5LARrGxjby73Kjy0g%2FPrDqRhKxaNK4BbCWyl7iLI9XQRy5wwqL%2FMzwY6pgG%2FFWMQHwFhMEbvR536zh2WVLP3pU%2BYAOZP9peoG81ePNbaTm4%2FBDdHxtv%2BJrj9nprWeyluznzLlVvdkVXNtz867lRRXFFbrHwpvkrPiaAgdcMGy3Lcrj8qXO7b4MP7KZ%2FLUoOSXINDajTF7IKwU9O3isvBVVfN57x3%2F5%2BueKmKDUL6GBT9mHtp16dH0iU%2Fn6PXcyPVHcIAdoNIQE39d8%2FTetvqmVIN&X-Amz-Signature=b85bf6d6980ed402182912cb99e56aa9ceb48b5862716cd20df7247f1d992422&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SZO52HY%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100539Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIGiWU2b7cPBDg074pBNkdZ7wlHJV80FZ457OfDSoHqO%2BAiBfvIQD9DPtC1NFrP5GuruXF6N%2BCxS%2BFpHWA7513cQBMir%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMGXNjpdFxdxFh7vbjKtwD%2BHrQ5i8rmX7u2FtmhB8DlU4PI%2FhPw59PC5AnCXpPjGuChwsKLgKtpk3Yr342CsefxGrZrHzRVLQbqSzGDNb6wIKzB2b3y70y6uElu8btj5VYwCbL355spIcTmawCTsqzbOcvLsHj0bvb8RVcCG6GyUzL0LD0IE5ooEP5YdPg2xwU8DlUnOKn5IEI0n4eEQBzEbKqfM3d74HIU9GZzLgua4%2FJPHFzaBhhPo9wfZvPD3ZtsBG5GEgQj8gesEIHTu4Ub549Zw8F5aSrSIggCISw5O3QPvnNQLCozzhf5UmRTGGQfg%2BXjIb0UUhCGwppkSdgZr2m3Tbtl92YemgrCNADqz0B9ny8nwPDjP4f8I6JhtIRMncOpI7m3o%2FA%2Bcg8cACjFX7Pudodv91WjTqeEmUyScS1%2Fq3ArbAJPeRd%2BcMijQYl8byRZ5%2FR6bW117pCC7iz74knaZzLAp%2BQkgulPQh%2FkPmrT9ypAhxVZIp0qX3Dxxivo%2BCoyJE5GnXH4cSX7z8e0OFWulVFb2aopsk2P1hDlVK3oh12U5m%2BdiSXk4X33LqUj6aca5jMjvMAKUBsHkK8eaqlY3Njr2TA5LARrGxjby73Kjy0g%2FPrDqRhKxaNK4BbCWyl7iLI9XQRy5wwqL%2FMzwY6pgG%2FFWMQHwFhMEbvR536zh2WVLP3pU%2BYAOZP9peoG81ePNbaTm4%2FBDdHxtv%2BJrj9nprWeyluznzLlVvdkVXNtz867lRRXFFbrHwpvkrPiaAgdcMGy3Lcrj8qXO7b4MP7KZ%2FLUoOSXINDajTF7IKwU9O3isvBVVfN57x3%2F5%2BueKmKDUL6GBT9mHtp16dH0iU%2Fn6PXcyPVHcIAdoNIQE39d8%2FTetvqmVIN&X-Amz-Signature=2094c1e41ec3a020bd5815d845233fc3f9865e35cfa1ea15d5d51edb5f6d5c91&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U7XL5FJQ%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100541Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJHMEUCIQC6fe56xoxFQngJYoozCGP%2FwPY9BmtouTN%2B9TQcp3WqBAIgXgNl6b8TvIDq8583j7stx9jaiSOIPy7D2r60GmWSDFsq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDJI1Oufw7Fk2%2FLOqaSrcA8aXU%2FjvnDSEu3i40SfUFb66vLCX9VzBjPBOlxUpVBRx%2FYKnEIDzxcaaG%2F9J9Wzz21xA6kZTDCZF7FNgl8CPzjBxWE42SFWe6PeWson9dNb3SNC0gNtSSTf9n%2BCboSnNxvWeVx1ZsYoZ6EIxdzkdhqg0rYTCw2F11GavXmXmrmMx0yhg%2FXrWhimGVcdU0raUz3Iq24NSMXE9SuPwEgHN0Sp04%2FEnDsRVzU3n4qC0HOpEqyMfzquBTd2YK9hTtUsOfex%2FTw5%2BnB%2F8Ei%2ByNteL3T9S1H5VEp0jPM2YJeSuhcA%2FSq%2BsGKoOEiDE9PYPojodkjv6O4O2cNTXsJmno%2B%2B9WIOoDEGsnmVAba1ulxQCw8bREO9hHA6aUWsbkpfioDQ1K8YFRQeRqUzcUjSPhRfDQNMVktr5ndRqGN6k6NFKRAPznJcQFZb5O8cdQE4C6%2FcLzqdGFWwSVt42yWwhQ8rsxctBxkRcxQLu5J6ZvqM0PmPhvnb6iu%2FJmCn7BQSpWczMZMqqM3%2Fgky%2BW3c36lj2ZcVMwr0BvNbJGBOP8i6CjxJ4IUgh%2BIUWD0uk3frfsqMD%2BriFm%2BWTNjq2MWCm%2BZs1D4%2BUrndqCGRkKCFTXtLgtFoqyv27lwNXCPGLz%2BNgcMLy%2BzM8GOqUBTscL1EO6WL%2BLAchZq8erddAP3fQrTK7UybFlTyDNzdBttUqiq0ftdR2nZ5DuFys8%2BU2UtwdT%2BnsScf0tMuSyDWTyy7hRqN4Ct54%2Fmd1daHtaBTF%2FRHUzXGe0KEnOioye%2F%2B%2Bme5Z5nx4xQ%2BuOBeCvEXxzNXT1dg1d%2FoatG8HCE7xq9%2BmUm3oyhhFKizhP7ktIYEBZCsnusGBYtWjf37kKzEneV4Ly&X-Amz-Signature=7a95a601bc7724c32e5ef5290daf1c00a8e5ce40281edab68ff5913ee1ee331b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBO2X5FA%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100541Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIBTYl2g68xauWY%2Fqd4QFewbbyRtF3Wt7OHNieH9DheYBAiAq28If5p3h9WkXdNwEUB%2FekDFxqwbIV7QYD%2B1r4O7moyr%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMogpxWn%2FVkQeKCTe9KtwDBZOTrZqErdc21RYye5fZ3j5JFsfVqWu2PmP6HwDefsSqGu0MN3ukAGofzyHtTwJDWFyKbjiji1Tf%2FgKqyt46xMQztDUj2BU5NLWpyGrNjFSLd017wSL66LdrLJ45px850nXVHZTnNq5qHUojQ%2FL%2Bo0ZnHF0IKXeCVdCwzgdafpd9tk%2FoABzirhva0aa3%2B%2By5LSN45bAiC6DL0ICLxXz4vDWUEix3G10Ygvesdlhpn7hrN1ZObL8RAnosnw3pnzMXyCAuAqAi37NXC7la6xsLwWniHHB1cO3zTHNRQHsdlfqRMpejFDwk8ynLauQJcJDqlQ4PEpSiqeghfcTEGQ%2BgAO6XlZM7XBXBGJaVjCTHRpW%2B7dgTK%2FM0BAVh7FXenpdSloeztA0OSBypP6RP3yCMTf9s33%2BujUQdu0YdCSZkl4gyA8BoGrxxMQAofFlP3tDX2GJBk3twb1p%2BOoLdGgCH0KgJnJkjs01KNNh5CapYtZWfpEJfmzcBdOmfhLYCC7GVuS8EUsvNcVWVizKWeVRb25fqy%2BMEOJN47R%2BTAgYl%2FhRP%2F3hyz5WRThCJEW47gCtMFDX%2BZBD2GPRidpKAap93zsJvBCkd%2BO7%2BaIlDH5RqXCS6x82FhiIHi1y4mMcwur%2FMzwY6pgH0jm8M4syEbJhOPPfOvaT5PtKgK209tdFD3Wh9X9HbauF2K1%2FHigf34jIJc1N1BfIMRjLs7RhLtMV4QAEEdPTPGN3FLUn0q3l2J32%2BvNCCg8J6Il9QmaBvAFe6YiTXA6B3w780TFg46zz65oqspqetHxNGaDUi3yxpnEcGq3YqfEeTtEnXVV2xcDsyQEtfsJopS4s1GE4Kjt2kzDzYPS00m4JaUL0C&X-Amz-Signature=6b97c35c94bd78abcd82688b7fa0ea73d31bc0d93e6683e3a140b0e4994fbef7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBO2X5FA%2F20260430%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260430T100541Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIBTYl2g68xauWY%2Fqd4QFewbbyRtF3Wt7OHNieH9DheYBAiAq28If5p3h9WkXdNwEUB%2FekDFxqwbIV7QYD%2B1r4O7moyr%2FAwgKEAAaDDYzNzQyMzE4MzgwNSIMogpxWn%2FVkQeKCTe9KtwDBZOTrZqErdc21RYye5fZ3j5JFsfVqWu2PmP6HwDefsSqGu0MN3ukAGofzyHtTwJDWFyKbjiji1Tf%2FgKqyt46xMQztDUj2BU5NLWpyGrNjFSLd017wSL66LdrLJ45px850nXVHZTnNq5qHUojQ%2FL%2Bo0ZnHF0IKXeCVdCwzgdafpd9tk%2FoABzirhva0aa3%2B%2By5LSN45bAiC6DL0ICLxXz4vDWUEix3G10Ygvesdlhpn7hrN1ZObL8RAnosnw3pnzMXyCAuAqAi37NXC7la6xsLwWniHHB1cO3zTHNRQHsdlfqRMpejFDwk8ynLauQJcJDqlQ4PEpSiqeghfcTEGQ%2BgAO6XlZM7XBXBGJaVjCTHRpW%2B7dgTK%2FM0BAVh7FXenpdSloeztA0OSBypP6RP3yCMTf9s33%2BujUQdu0YdCSZkl4gyA8BoGrxxMQAofFlP3tDX2GJBk3twb1p%2BOoLdGgCH0KgJnJkjs01KNNh5CapYtZWfpEJfmzcBdOmfhLYCC7GVuS8EUsvNcVWVizKWeVRb25fqy%2BMEOJN47R%2BTAgYl%2FhRP%2F3hyz5WRThCJEW47gCtMFDX%2BZBD2GPRidpKAap93zsJvBCkd%2BO7%2BaIlDH5RqXCS6x82FhiIHi1y4mMcwur%2FMzwY6pgH0jm8M4syEbJhOPPfOvaT5PtKgK209tdFD3Wh9X9HbauF2K1%2FHigf34jIJc1N1BfIMRjLs7RhLtMV4QAEEdPTPGN3FLUn0q3l2J32%2BvNCCg8J6Il9QmaBvAFe6YiTXA6B3w780TFg46zz65oqspqetHxNGaDUi3yxpnEcGq3YqfEeTtEnXVV2xcDsyQEtfsJopS4s1GE4Kjt2kzDzYPS00m4JaUL0C&X-Amz-Signature=5e4a19222cd24627208d9cdd612f79c6b469da6a2e25be278427c1fa3291832f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
