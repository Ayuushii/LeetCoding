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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RT4GPDXG%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJIMEYCIQDWUi9KqEJzY4f%2FDcbN5EQ5GBRefZcqWAgIzL%2BFIjTgWwIhAPB5ZD16x%2BJ1cYItMfqTNNsE8gCiQjfPy7AhQdlQJ%2FouKv8DCDwQABoMNjM3NDIzMTgzODA1IgxKxSmpvqOV1ltLkVsq3AMb7%2Blwv0g6%2Byj5WrNQl4QGcGVlFT6FV9LW%2FS8%2BpcO3LRTon%2Fc6D6%2F1DpZsD6y09cDz%2BPP%2BCjNgI6omyWA3ef6GjaEIQIp5U0nE0FIienAoFc0DI2X4tI5tV7rIjJ5xPnJBdsKIb604phquHrlRM05m04ABYVsyQ5PhJkzQz%2F0RQmUMdqejIYYWuYi%2FnAMg%2BPTsAUiOz0OsvlzPVne%2FCQFi%2FIpxfNGR%2BhTyE%2BSGQKv9cFJLpTSTMLy0MBVfBGEz4TnKwcpyrRLI9gvSw0H1CGJ%2Bm%2FUIANs6y3a2O%2FD1u1Ln%2BU2H9CYi30qkeh5r9Z9uV80%2BN8KDD1ZLLg12y4jpVPQw%2FahMI1pT03r0wR1blimsXARN0QaOSrh4YV5jlxED5z6gpZMuM16%2FKx0ZVKA0LjbToE5Dz7JVwGDyZVp2rj8Nalz6trzrrilq3l2fneTgC5xeSSIkrhA%2B33TFTeC7O8%2Fd9761t1ieEJyWAMxtOuW7ERrArUfPMHDH%2BH6PQYo%2FZmz5ea96SGP%2FSHiYQ%2FWDeGjHEJ2wgIqMlhafesmoDIQR%2Bhp30O5qAYeUVo2g0CntmFb7QI87W2aZcaNz6jILf15acytbDsi5gyhJk4C9Zn8VzBI14kZAWjBZJ%2B0TjDCUw9HTBjqkAWjlBn4kt%2F7c%2F5NBCCIBKUXeBturllN1UpJwz4Wy7a7QVz1Pe2LCryrbd8pPD90AMh2buuG8WQUZyhcHiUjBFtg9hIFB3wFZUH2shV56miMsEBqrMoX3upo5RwOgQgAdwPjm%2BX1dRzNsED2g09s47fft2UfyQg5AB6pC1vEgmau0BDP5jzhPRrhkAQ3hDE%2B3A5JJopAu6IpqzinVfkIZT2AoBi3x&X-Amz-Signature=fdbd6b6671a441153bba29c67497a4f1730b3bf59536df10f55794b57c709c89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RT4GPDXG%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJIMEYCIQDWUi9KqEJzY4f%2FDcbN5EQ5GBRefZcqWAgIzL%2BFIjTgWwIhAPB5ZD16x%2BJ1cYItMfqTNNsE8gCiQjfPy7AhQdlQJ%2FouKv8DCDwQABoMNjM3NDIzMTgzODA1IgxKxSmpvqOV1ltLkVsq3AMb7%2Blwv0g6%2Byj5WrNQl4QGcGVlFT6FV9LW%2FS8%2BpcO3LRTon%2Fc6D6%2F1DpZsD6y09cDz%2BPP%2BCjNgI6omyWA3ef6GjaEIQIp5U0nE0FIienAoFc0DI2X4tI5tV7rIjJ5xPnJBdsKIb604phquHrlRM05m04ABYVsyQ5PhJkzQz%2F0RQmUMdqejIYYWuYi%2FnAMg%2BPTsAUiOz0OsvlzPVne%2FCQFi%2FIpxfNGR%2BhTyE%2BSGQKv9cFJLpTSTMLy0MBVfBGEz4TnKwcpyrRLI9gvSw0H1CGJ%2Bm%2FUIANs6y3a2O%2FD1u1Ln%2BU2H9CYi30qkeh5r9Z9uV80%2BN8KDD1ZLLg12y4jpVPQw%2FahMI1pT03r0wR1blimsXARN0QaOSrh4YV5jlxED5z6gpZMuM16%2FKx0ZVKA0LjbToE5Dz7JVwGDyZVp2rj8Nalz6trzrrilq3l2fneTgC5xeSSIkrhA%2B33TFTeC7O8%2Fd9761t1ieEJyWAMxtOuW7ERrArUfPMHDH%2BH6PQYo%2FZmz5ea96SGP%2FSHiYQ%2FWDeGjHEJ2wgIqMlhafesmoDIQR%2Bhp30O5qAYeUVo2g0CntmFb7QI87W2aZcaNz6jILf15acytbDsi5gyhJk4C9Zn8VzBI14kZAWjBZJ%2B0TjDCUw9HTBjqkAWjlBn4kt%2F7c%2F5NBCCIBKUXeBturllN1UpJwz4Wy7a7QVz1Pe2LCryrbd8pPD90AMh2buuG8WQUZyhcHiUjBFtg9hIFB3wFZUH2shV56miMsEBqrMoX3upo5RwOgQgAdwPjm%2BX1dRzNsED2g09s47fft2UfyQg5AB6pC1vEgmau0BDP5jzhPRrhkAQ3hDE%2B3A5JJopAu6IpqzinVfkIZT2AoBi3x&X-Amz-Signature=221383101abbc0ec70f21bb031de50418b1fa5f9eeeb50ee9ad8da1d32b0f71a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RT4GPDXG%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJIMEYCIQDWUi9KqEJzY4f%2FDcbN5EQ5GBRefZcqWAgIzL%2BFIjTgWwIhAPB5ZD16x%2BJ1cYItMfqTNNsE8gCiQjfPy7AhQdlQJ%2FouKv8DCDwQABoMNjM3NDIzMTgzODA1IgxKxSmpvqOV1ltLkVsq3AMb7%2Blwv0g6%2Byj5WrNQl4QGcGVlFT6FV9LW%2FS8%2BpcO3LRTon%2Fc6D6%2F1DpZsD6y09cDz%2BPP%2BCjNgI6omyWA3ef6GjaEIQIp5U0nE0FIienAoFc0DI2X4tI5tV7rIjJ5xPnJBdsKIb604phquHrlRM05m04ABYVsyQ5PhJkzQz%2F0RQmUMdqejIYYWuYi%2FnAMg%2BPTsAUiOz0OsvlzPVne%2FCQFi%2FIpxfNGR%2BhTyE%2BSGQKv9cFJLpTSTMLy0MBVfBGEz4TnKwcpyrRLI9gvSw0H1CGJ%2Bm%2FUIANs6y3a2O%2FD1u1Ln%2BU2H9CYi30qkeh5r9Z9uV80%2BN8KDD1ZLLg12y4jpVPQw%2FahMI1pT03r0wR1blimsXARN0QaOSrh4YV5jlxED5z6gpZMuM16%2FKx0ZVKA0LjbToE5Dz7JVwGDyZVp2rj8Nalz6trzrrilq3l2fneTgC5xeSSIkrhA%2B33TFTeC7O8%2Fd9761t1ieEJyWAMxtOuW7ERrArUfPMHDH%2BH6PQYo%2FZmz5ea96SGP%2FSHiYQ%2FWDeGjHEJ2wgIqMlhafesmoDIQR%2Bhp30O5qAYeUVo2g0CntmFb7QI87W2aZcaNz6jILf15acytbDsi5gyhJk4C9Zn8VzBI14kZAWjBZJ%2B0TjDCUw9HTBjqkAWjlBn4kt%2F7c%2F5NBCCIBKUXeBturllN1UpJwz4Wy7a7QVz1Pe2LCryrbd8pPD90AMh2buuG8WQUZyhcHiUjBFtg9hIFB3wFZUH2shV56miMsEBqrMoX3upo5RwOgQgAdwPjm%2BX1dRzNsED2g09s47fft2UfyQg5AB6pC1vEgmau0BDP5jzhPRrhkAQ3hDE%2B3A5JJopAu6IpqzinVfkIZT2AoBi3x&X-Amz-Signature=e73c4f609fa8e1d9d6e440aef8fe880204e4aea96f951e7e4c5a2cdc8e72d330&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SL4W6HFH%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQDqaViqrK3s23QKSMn6N%2Fp92WL6%2By%2FIyWrt0b8zRJwFCAIgfHbHO0TaAx5Z6noCzdRNR5OmWF6DCpF%2F%2BRDPljJhXBIq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDHNe%2BFS8fq9PWbkerCrcAzv92Fz8qfLipUZDe9ZHiL5GTQREJdKkIXykRyPfroSlSvXBx2Unx3KN4PJEkdBVJ2z%2Fj9AWoWAZHzFUZzc0Djgw4aotO6M1Ur6nS5NcBodk0RBcc%2F5zhPe6sb7YhtOXF1DqF9ihWQr1HWj8s2WUMddos%2FTWd0QI9uV5xcPrSxFkDP4RanuF%2Fs6u%2Ftej3nzSHfYBxy%2F3yBAxeKeCWEQ1vHwp%2FDr3dagnyxyfXc30S6ZR17t7s2sEbNsePG4CWaXnLpK%2BdQY9uUa2%2BeHtKxI2mKo4ED5LOX6D5VpKMSfUUV8AL1Gp5PXVgqFtqkGd85GWVu9cThT0%2F0VZMQ60%2BOHp7Gq64Zq8i0v1Fvm4cxvAN8m2HtQfWkkL8080aejVFID%2FC5eokAcux3SCCIODRgwpmLVIcol3xybIkCvtfZ6aQpL0dUuCCVQ6QKHTGW8ui7XXlBdTv0xkPQVGdx%2B2Q2%2Fwxhce3Ma0q6ZG8rBeuThnTn7ZriM1CLY7uXaiUTRv2w%2FfA5eZLpOYTnsy0ajzrr2fy%2B3gI2n7EBQAHcF6B5JILquxV%2BuRTyV8%2B78oWrxmrySiHFvZSV24EtIdkvrMSpRWAf8%2BBH4HiD44Gdee3oim9Fv2%2Bgfg0FX9f%2BISxQDlMPXC0dMGOqUB6ZM3%2F02WhH4lAFwAXQlyabwIE8y1RZdaAzdiC1bcwRxnhFArdAHi5sxoIKwf%2F9E2ynwBVyQMoY1F2eB7VmlpYH2C5OsLP1q8jSdT6I%2FDlQzaW%2FpfWNUyPU4eak8rrtQNEeMWDXscnooXciYGwsrcCsHYDFu9DPBzjwaplqKfUJo4xe8vWXZL0WI7CHRm4GHKNtm27YG3j82%2F3twSOguEYoXeYj7S&X-Amz-Signature=e805875b7c516768b42f3893783ecfecd903f19c8aa6beb3bc940546c2f65ff2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SL4W6HFH%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQDqaViqrK3s23QKSMn6N%2Fp92WL6%2By%2FIyWrt0b8zRJwFCAIgfHbHO0TaAx5Z6noCzdRNR5OmWF6DCpF%2F%2BRDPljJhXBIq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDHNe%2BFS8fq9PWbkerCrcAzv92Fz8qfLipUZDe9ZHiL5GTQREJdKkIXykRyPfroSlSvXBx2Unx3KN4PJEkdBVJ2z%2Fj9AWoWAZHzFUZzc0Djgw4aotO6M1Ur6nS5NcBodk0RBcc%2F5zhPe6sb7YhtOXF1DqF9ihWQr1HWj8s2WUMddos%2FTWd0QI9uV5xcPrSxFkDP4RanuF%2Fs6u%2Ftej3nzSHfYBxy%2F3yBAxeKeCWEQ1vHwp%2FDr3dagnyxyfXc30S6ZR17t7s2sEbNsePG4CWaXnLpK%2BdQY9uUa2%2BeHtKxI2mKo4ED5LOX6D5VpKMSfUUV8AL1Gp5PXVgqFtqkGd85GWVu9cThT0%2F0VZMQ60%2BOHp7Gq64Zq8i0v1Fvm4cxvAN8m2HtQfWkkL8080aejVFID%2FC5eokAcux3SCCIODRgwpmLVIcol3xybIkCvtfZ6aQpL0dUuCCVQ6QKHTGW8ui7XXlBdTv0xkPQVGdx%2B2Q2%2Fwxhce3Ma0q6ZG8rBeuThnTn7ZriM1CLY7uXaiUTRv2w%2FfA5eZLpOYTnsy0ajzrr2fy%2B3gI2n7EBQAHcF6B5JILquxV%2BuRTyV8%2B78oWrxmrySiHFvZSV24EtIdkvrMSpRWAf8%2BBH4HiD44Gdee3oim9Fv2%2Bgfg0FX9f%2BISxQDlMPXC0dMGOqUB6ZM3%2F02WhH4lAFwAXQlyabwIE8y1RZdaAzdiC1bcwRxnhFArdAHi5sxoIKwf%2F9E2ynwBVyQMoY1F2eB7VmlpYH2C5OsLP1q8jSdT6I%2FDlQzaW%2FpfWNUyPU4eak8rrtQNEeMWDXscnooXciYGwsrcCsHYDFu9DPBzjwaplqKfUJo4xe8vWXZL0WI7CHRm4GHKNtm27YG3j82%2F3twSOguEYoXeYj7S&X-Amz-Signature=0b803a56efaa6ec5c20e8e05aecfc37545e9617f8bd3a08d54815d14597b9b3e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SL4W6HFH%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQDqaViqrK3s23QKSMn6N%2Fp92WL6%2By%2FIyWrt0b8zRJwFCAIgfHbHO0TaAx5Z6noCzdRNR5OmWF6DCpF%2F%2BRDPljJhXBIq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDHNe%2BFS8fq9PWbkerCrcAzv92Fz8qfLipUZDe9ZHiL5GTQREJdKkIXykRyPfroSlSvXBx2Unx3KN4PJEkdBVJ2z%2Fj9AWoWAZHzFUZzc0Djgw4aotO6M1Ur6nS5NcBodk0RBcc%2F5zhPe6sb7YhtOXF1DqF9ihWQr1HWj8s2WUMddos%2FTWd0QI9uV5xcPrSxFkDP4RanuF%2Fs6u%2Ftej3nzSHfYBxy%2F3yBAxeKeCWEQ1vHwp%2FDr3dagnyxyfXc30S6ZR17t7s2sEbNsePG4CWaXnLpK%2BdQY9uUa2%2BeHtKxI2mKo4ED5LOX6D5VpKMSfUUV8AL1Gp5PXVgqFtqkGd85GWVu9cThT0%2F0VZMQ60%2BOHp7Gq64Zq8i0v1Fvm4cxvAN8m2HtQfWkkL8080aejVFID%2FC5eokAcux3SCCIODRgwpmLVIcol3xybIkCvtfZ6aQpL0dUuCCVQ6QKHTGW8ui7XXlBdTv0xkPQVGdx%2B2Q2%2Fwxhce3Ma0q6ZG8rBeuThnTn7ZriM1CLY7uXaiUTRv2w%2FfA5eZLpOYTnsy0ajzrr2fy%2B3gI2n7EBQAHcF6B5JILquxV%2BuRTyV8%2B78oWrxmrySiHFvZSV24EtIdkvrMSpRWAf8%2BBH4HiD44Gdee3oim9Fv2%2Bgfg0FX9f%2BISxQDlMPXC0dMGOqUB6ZM3%2F02WhH4lAFwAXQlyabwIE8y1RZdaAzdiC1bcwRxnhFArdAHi5sxoIKwf%2F9E2ynwBVyQMoY1F2eB7VmlpYH2C5OsLP1q8jSdT6I%2FDlQzaW%2FpfWNUyPU4eak8rrtQNEeMWDXscnooXciYGwsrcCsHYDFu9DPBzjwaplqKfUJo4xe8vWXZL0WI7CHRm4GHKNtm27YG3j82%2F3twSOguEYoXeYj7S&X-Amz-Signature=bcca405ae7e236fba093f01de34f40841120ef60f868053a03b9447a9602125b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SL4W6HFH%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQDqaViqrK3s23QKSMn6N%2Fp92WL6%2By%2FIyWrt0b8zRJwFCAIgfHbHO0TaAx5Z6noCzdRNR5OmWF6DCpF%2F%2BRDPljJhXBIq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDHNe%2BFS8fq9PWbkerCrcAzv92Fz8qfLipUZDe9ZHiL5GTQREJdKkIXykRyPfroSlSvXBx2Unx3KN4PJEkdBVJ2z%2Fj9AWoWAZHzFUZzc0Djgw4aotO6M1Ur6nS5NcBodk0RBcc%2F5zhPe6sb7YhtOXF1DqF9ihWQr1HWj8s2WUMddos%2FTWd0QI9uV5xcPrSxFkDP4RanuF%2Fs6u%2Ftej3nzSHfYBxy%2F3yBAxeKeCWEQ1vHwp%2FDr3dagnyxyfXc30S6ZR17t7s2sEbNsePG4CWaXnLpK%2BdQY9uUa2%2BeHtKxI2mKo4ED5LOX6D5VpKMSfUUV8AL1Gp5PXVgqFtqkGd85GWVu9cThT0%2F0VZMQ60%2BOHp7Gq64Zq8i0v1Fvm4cxvAN8m2HtQfWkkL8080aejVFID%2FC5eokAcux3SCCIODRgwpmLVIcol3xybIkCvtfZ6aQpL0dUuCCVQ6QKHTGW8ui7XXlBdTv0xkPQVGdx%2B2Q2%2Fwxhce3Ma0q6ZG8rBeuThnTn7ZriM1CLY7uXaiUTRv2w%2FfA5eZLpOYTnsy0ajzrr2fy%2B3gI2n7EBQAHcF6B5JILquxV%2BuRTyV8%2B78oWrxmrySiHFvZSV24EtIdkvrMSpRWAf8%2BBH4HiD44Gdee3oim9Fv2%2Bgfg0FX9f%2BISxQDlMPXC0dMGOqUB6ZM3%2F02WhH4lAFwAXQlyabwIE8y1RZdaAzdiC1bcwRxnhFArdAHi5sxoIKwf%2F9E2ynwBVyQMoY1F2eB7VmlpYH2C5OsLP1q8jSdT6I%2FDlQzaW%2FpfWNUyPU4eak8rrtQNEeMWDXscnooXciYGwsrcCsHYDFu9DPBzjwaplqKfUJo4xe8vWXZL0WI7CHRm4GHKNtm27YG3j82%2F3twSOguEYoXeYj7S&X-Amz-Signature=e4de071b2237ca1394a188a367787e296375e8415e7f735219628482cc08b607&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YWLP2JOJ%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIBDcK8XaN4XJ0mePcLm9u0cShPN%2BgRoWdakUF2Ij2e2HAiEAwtSEPk8Eu%2BpdMq7CtfAUB6yDEVqlRKXWjZzqldA5dukq%2FwMIOxAAGgw2Mzc0MjMxODM4MDUiDD489gxrmbzjHbSKXSrcA0KrS3UolrfwT3aVAp%2BUDSU5wflXkjhrqDwEFVdJEqvj6sCf%2F5Hqyn%2BKwnO3WyXB3Lr2%2Bh247Z74y1%2Bb3l1jxQ1FBocLbVOmND55zfbu46Jbe8b0bKAQoPs%2FbRkByBXr4zgGeLzRQX1FwwZWr9t2%2FFHug%2BGMnxf5%2FcTnBGA3vpymbfCPOyEVYxKxypQerxE4faEy7xiET7xuimKz1uua1fwhYZuLIplEvpQ5SXiO6egPcyUEn6FBeELHHlpRKEsWxC%2FIChjqxp5HqicEpjTcggs70QdPtCrXWaxRe6Oxryc2XXGXqMRAOTkrRRjVqijgRckJIEwjlfZjBk1eX6Qk2xGwb1saXqFsKbwce8gvAeOAy14Jkt84JENuXh9MlZKcH8qRwOLIQDK6Uy8vdy17O3M%2BO4qFf%2Bvo5MGRjVFPLA6o8BlJZsji25om4L3%2FTg3piBr5pnQZFRX25lrrEi%2B9cmBMD%2BrT%2BlPkOlvKBgzWCZwu0cHKNQslAzplblcJr5y3WPcEl8jp3UvVFyfbsEkdiSCx6BynGdhLZJMFXTX8VSdCovzg00CUXVKuZWh1pWGwJ0oiEaOG3UMwOb7BGAx3o9dAbcEtxdMhwqocKTDAFFQyut6iGGg%2FYkyNptCqMP%2FD0dMGOqUBNf8mSzoaD6yvl9WZmwexbSxo%2FSMAdFe9HvpaX3z6dOhF0jNIMhZDhshyOFodTR2OjLVbjEZV7T4NYEwgx37UIZnA9AMb2Nqm5KBgODIpiLDJ0il7%2FGZfJZSQbThXF7QQNHC%2FnUT3k%2F5gfWNYHOaeOPUiKku%2FF1UBrHEPvgWLhJm4AkSam7AH2tMez3E5eW9TQN%2BYPYLEGlMsSS12Pyse4%2B4pgLcg&X-Amz-Signature=b3071cfb40c31c472d29303fd87c1924752d3b2dc776ebf02bb6c7d8bdacf5bd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y3PYHW7D%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQD070bYxWyWWJF6wVexLUTgdDflbk0j00kjAtf2NttF%2FQIgSilea3q5j1yJbsESzXjwjBDChQYxg86PPpG5IbI4R3sq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDNUTI02MENyHZNyuAircA2AZ5vbexZi3o%2BXtA7dIlSpqxw80dt%2FjhzAzHDiXNlbt5Z6I06yUvWRRZLMVZUHjPvjEVulgXGg5G2Yj5Z8d1J875LtTpoB8K18lhhBGPGV31JDBTXKLblutbzLzzpLoH95knfChaZPqt9yoj4JnYTwhjZ0X8MfzMP%2Bb6rk8ldRP%2BeCXR7aIM1BUj0%2FlC9L5L%2BA04QnvBOfaF4eJf6rBxRwLiRYPjt%2B1tZc1Va3jGFL7f1rDWqGdWvqAkCbLds1kslQa0zML4d5NkxVng0odqImodR2iWEqVEa4G7m%2BU6HMbyC35Ebl1U7uVhZJPs4Q%2BEL3ts9N6mzBnYJtSd%2BxqpTq43C5P%2FnUomWCEBiDxtBbnj1JJrxLNgnRtwCQAsTZt5Nv27fVToL49U5iVb2PNL48MagydVt9CjP9%2BR5DqC%2BcOkQAF%2Banri%2BL%2BHsSdMxy9FcjXr9tfOdOJfBPfcktv6I19h4M%2BAk03pWIPlzmnoYyl%2BStxQplJgDS%2FAoUnIw0OdG0fknIXMfOkck%2BniCrmAv7WoCZJJ6MgAmOgwO%2BTp6L7jB8cCG0FKsoJ4wwY9Gcn5rW7deTOx%2FyI2IfHhdTfYzJAgiso9bXTWeBLcXyaF1e7i4bvvRWJurLWBeDNMJDE0dMGOqUBEi22bc%2Bt4lwr8BOUumHKlfSH89A5l28na%2FTdyMclf4KIkHityAomQHiHn8j6%2FtmCa5VXXB9J%2FE%2BkvlNOWwi9o1tos0%2FOmaZjOpuKZ65wCrB5xIpVBi9kQoMOBTSjtHGpIp9zLZhgskvD64tV94mYQy61hjH9dNeoquEKanJMHlhgtXLfI1Yzn0op135%2BPUhsVAQlmhdYwybsXiEXZOEW3qST11dB&X-Amz-Signature=1c893c70d8e679e150e764dbef73c6ab4d258b95ee52328fd8f47cbece2352d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y3PYHW7D%2F20260806%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260806T103637Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHMaCXVzLXdlc3QtMiJHMEUCIQD070bYxWyWWJF6wVexLUTgdDflbk0j00kjAtf2NttF%2FQIgSilea3q5j1yJbsESzXjwjBDChQYxg86PPpG5IbI4R3sq%2FwMIPBAAGgw2Mzc0MjMxODM4MDUiDNUTI02MENyHZNyuAircA2AZ5vbexZi3o%2BXtA7dIlSpqxw80dt%2FjhzAzHDiXNlbt5Z6I06yUvWRRZLMVZUHjPvjEVulgXGg5G2Yj5Z8d1J875LtTpoB8K18lhhBGPGV31JDBTXKLblutbzLzzpLoH95knfChaZPqt9yoj4JnYTwhjZ0X8MfzMP%2Bb6rk8ldRP%2BeCXR7aIM1BUj0%2FlC9L5L%2BA04QnvBOfaF4eJf6rBxRwLiRYPjt%2B1tZc1Va3jGFL7f1rDWqGdWvqAkCbLds1kslQa0zML4d5NkxVng0odqImodR2iWEqVEa4G7m%2BU6HMbyC35Ebl1U7uVhZJPs4Q%2BEL3ts9N6mzBnYJtSd%2BxqpTq43C5P%2FnUomWCEBiDxtBbnj1JJrxLNgnRtwCQAsTZt5Nv27fVToL49U5iVb2PNL48MagydVt9CjP9%2BR5DqC%2BcOkQAF%2Banri%2BL%2BHsSdMxy9FcjXr9tfOdOJfBPfcktv6I19h4M%2BAk03pWIPlzmnoYyl%2BStxQplJgDS%2FAoUnIw0OdG0fknIXMfOkck%2BniCrmAv7WoCZJJ6MgAmOgwO%2BTp6L7jB8cCG0FKsoJ4wwY9Gcn5rW7deTOx%2FyI2IfHhdTfYzJAgiso9bXTWeBLcXyaF1e7i4bvvRWJurLWBeDNMJDE0dMGOqUBEi22bc%2Bt4lwr8BOUumHKlfSH89A5l28na%2FTdyMclf4KIkHityAomQHiHn8j6%2FtmCa5VXXB9J%2FE%2BkvlNOWwi9o1tos0%2FOmaZjOpuKZ65wCrB5xIpVBi9kQoMOBTSjtHGpIp9zLZhgskvD64tV94mYQy61hjH9dNeoquEKanJMHlhgtXLfI1Yzn0op135%2BPUhsVAQlmhdYwybsXiEXZOEW3qST11dB&X-Amz-Signature=ed9819808258e317752f91edb0db91d56e1257277dc293f34c6e843ea6eea6a9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
