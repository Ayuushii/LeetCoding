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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PZIXF2K%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIFENNehgpwXXBf4FHz5O8MjCLTpzKd9gjkCPSfxAAwmzAiEAk6xdOMVlyLrx4o3oP5CZvABynFGy2MDWx7dUvYbp7NUqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGd37dqvhgmnxoetQircA%2F1XjYw%2FYFkk2%2B0Kghsly2uLx%2BzXiNdVD61q4%2F2tNEhDhf0WIruyj%2FaoVeLkxGwE4QvpDbt4j%2FdDHq9zj6TvWpp6Gyti5P8JMovNgbQ6F7wAaE01irxDP5S59Ak%2FSMU88EfVqwXVVjzSLy8VNGEqcVINE49VdkpCAQGSf3LW0YxbUnlsdGfI3EWAYIVXkkpsRLDqq5iyBNvQobiIxzkBKitr858wfIibs3RXHc3qjWm7dRgBSKn2kKwjNnetU3oBxbgDj4vZ46nADtgXHbkzjB2Y%2BI6%2FOPJ0M0TJHGSN3JsFes8TvpGGqGLFOExtzgaT4zRffmm0gZjZIPx96vZeaB1qgDn6puPEDtOLQJZ4Xw3G4LHMRm%2B8l4a5lhDJzAUDwGi3UOU0FjVEcuUek85NL%2F6CzaKr5xJ3soO510Pn7WsUgk4u40l3h8fjhnIn6o4oAsXQLF%2FIE2N4VhBlBygGTaPTtn9e3mWVc99P72eWQjNH1%2F310GggEDXBl4T5wR%2Bq9BR9RRqIYybqUYtiwE45%2FVm9B9WGxV%2BpScqj3vApDLQ5c5auQ7Bt%2B0AJl%2BKIz0uWJwoRD2X72wIAEwCT8SFk1lWlww51P6KFvEg1F2BkSoRM8Ktm4uDV5XjrzfycMI3X8NMGOqUBQzLVtoMSuouf52odAEK%2F9GTbhL9d1M%2FwqLrJYzctH2z2u7YxsJEQii7qZKVi5w5S07mcwvxLJDBy2vC34xLIooSOq%2B8UTEUhyA5cb9jJ1Kx5jFb7Y%2F0JL0eMli1kZZJNwprceXH6sQaI3q%2Fa827JH2T1UBbpilL3lzxdgGgC0MLKWM4jY9Rkk8qoC3QSd7WJwDPpiqKUeavtrulatoKaFNnVu%2F6U&X-Amz-Signature=5f6167a701f03275623eb621871096d10cf3d63e6f503cd8141b5b7ba76f2bbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PZIXF2K%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIFENNehgpwXXBf4FHz5O8MjCLTpzKd9gjkCPSfxAAwmzAiEAk6xdOMVlyLrx4o3oP5CZvABynFGy2MDWx7dUvYbp7NUqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGd37dqvhgmnxoetQircA%2F1XjYw%2FYFkk2%2B0Kghsly2uLx%2BzXiNdVD61q4%2F2tNEhDhf0WIruyj%2FaoVeLkxGwE4QvpDbt4j%2FdDHq9zj6TvWpp6Gyti5P8JMovNgbQ6F7wAaE01irxDP5S59Ak%2FSMU88EfVqwXVVjzSLy8VNGEqcVINE49VdkpCAQGSf3LW0YxbUnlsdGfI3EWAYIVXkkpsRLDqq5iyBNvQobiIxzkBKitr858wfIibs3RXHc3qjWm7dRgBSKn2kKwjNnetU3oBxbgDj4vZ46nADtgXHbkzjB2Y%2BI6%2FOPJ0M0TJHGSN3JsFes8TvpGGqGLFOExtzgaT4zRffmm0gZjZIPx96vZeaB1qgDn6puPEDtOLQJZ4Xw3G4LHMRm%2B8l4a5lhDJzAUDwGi3UOU0FjVEcuUek85NL%2F6CzaKr5xJ3soO510Pn7WsUgk4u40l3h8fjhnIn6o4oAsXQLF%2FIE2N4VhBlBygGTaPTtn9e3mWVc99P72eWQjNH1%2F310GggEDXBl4T5wR%2Bq9BR9RRqIYybqUYtiwE45%2FVm9B9WGxV%2BpScqj3vApDLQ5c5auQ7Bt%2B0AJl%2BKIz0uWJwoRD2X72wIAEwCT8SFk1lWlww51P6KFvEg1F2BkSoRM8Ktm4uDV5XjrzfycMI3X8NMGOqUBQzLVtoMSuouf52odAEK%2F9GTbhL9d1M%2FwqLrJYzctH2z2u7YxsJEQii7qZKVi5w5S07mcwvxLJDBy2vC34xLIooSOq%2B8UTEUhyA5cb9jJ1Kx5jFb7Y%2F0JL0eMli1kZZJNwprceXH6sQaI3q%2Fa827JH2T1UBbpilL3lzxdgGgC0MLKWM4jY9Rkk8qoC3QSd7WJwDPpiqKUeavtrulatoKaFNnVu%2F6U&X-Amz-Signature=eeb3df9df038826bf0ff4108870c3228b01272091624615c20f5546c45e18605&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PZIXF2K%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIFENNehgpwXXBf4FHz5O8MjCLTpzKd9gjkCPSfxAAwmzAiEAk6xdOMVlyLrx4o3oP5CZvABynFGy2MDWx7dUvYbp7NUqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGd37dqvhgmnxoetQircA%2F1XjYw%2FYFkk2%2B0Kghsly2uLx%2BzXiNdVD61q4%2F2tNEhDhf0WIruyj%2FaoVeLkxGwE4QvpDbt4j%2FdDHq9zj6TvWpp6Gyti5P8JMovNgbQ6F7wAaE01irxDP5S59Ak%2FSMU88EfVqwXVVjzSLy8VNGEqcVINE49VdkpCAQGSf3LW0YxbUnlsdGfI3EWAYIVXkkpsRLDqq5iyBNvQobiIxzkBKitr858wfIibs3RXHc3qjWm7dRgBSKn2kKwjNnetU3oBxbgDj4vZ46nADtgXHbkzjB2Y%2BI6%2FOPJ0M0TJHGSN3JsFes8TvpGGqGLFOExtzgaT4zRffmm0gZjZIPx96vZeaB1qgDn6puPEDtOLQJZ4Xw3G4LHMRm%2B8l4a5lhDJzAUDwGi3UOU0FjVEcuUek85NL%2F6CzaKr5xJ3soO510Pn7WsUgk4u40l3h8fjhnIn6o4oAsXQLF%2FIE2N4VhBlBygGTaPTtn9e3mWVc99P72eWQjNH1%2F310GggEDXBl4T5wR%2Bq9BR9RRqIYybqUYtiwE45%2FVm9B9WGxV%2BpScqj3vApDLQ5c5auQ7Bt%2B0AJl%2BKIz0uWJwoRD2X72wIAEwCT8SFk1lWlww51P6KFvEg1F2BkSoRM8Ktm4uDV5XjrzfycMI3X8NMGOqUBQzLVtoMSuouf52odAEK%2F9GTbhL9d1M%2FwqLrJYzctH2z2u7YxsJEQii7qZKVi5w5S07mcwvxLJDBy2vC34xLIooSOq%2B8UTEUhyA5cb9jJ1Kx5jFb7Y%2F0JL0eMli1kZZJNwprceXH6sQaI3q%2Fa827JH2T1UBbpilL3lzxdgGgC0MLKWM4jY9Rkk8qoC3QSd7WJwDPpiqKUeavtrulatoKaFNnVu%2F6U&X-Amz-Signature=ce0be46782f7bd1ee558532903e4badb1b89145b309b23084264ec9a68b70ae9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677M7V5GE%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIBSVmdHUxySAT%2BAixaRXNVRhdg1VaINXLb%2BE%2F%2BcgHIKKAiEAlAjEGb0ikKoQqvUj7nlYSgGeLkjvzBdJOs8WcHmcpQ8qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNlTCbfiEPq27ZbNqSrcA%2BFhV2iGcxj%2BgB5LUlUDufMXM%2Bird%2Bpsh0ceGNICK9jFkybj8xD0VmAhea%2BCBTOOd7I0%2FX%2B5KKT6EREif54l3DjqAjRSO%2BMCpr3ZwwPywT3%2BuccjAJHTT5ltS3I0y682JM5crygWHVbP0UqhlYrim4JQ3YY1xvZodEDdgPGTbYq1JYwbwbvTCNIzhxdSMNgcwmNZBXfOU8vegtWI4sqhWOQyLJ5H4J94yt3l3LxpDMtvb444hmWQMtwzyM6eETfSn5DjEcHmyRBAne7j%2Fg8EcDQF1HYCL5VzlMk2P5dQfJItksf21TTy82RsKOZvbm3t1IJodjtTvh4jq2pKgf1A5zOVV6lmFvBa3CuxpsSDZqtORcHmx6Ld7Xmj1bCH7vQ3ZchH2ye73qnl4DTMYIAnFlXSlDkrKUVgg9iT%2BaFsUQlyp8abPbb8wxC%2FIYdT9m%2BoBI2Fr%2Fc1HAPKKmCYuPOXJQVPWlPg47gNcCKmySSQrXJTjtZwSmrr2t8lJGn%2Bm6MZBYt%2BmfTu4Ueq4lTBg6ncdsvMoYRJk6johrTW4kyUlYMMdhdvFdHCEVDtGCpCv8lbzOpYTrWffv%2B2i5tWcD82wC8gc5ZY%2FStVd%2BPnMywuGWarcjpw%2FcMMzqutGnS0MO%2FW8NMGOqUBnrwKeUYIKWluJZGV4bKg3o7E995X6LD%2BTnULmSCMbkQXZ6DjQ3O%2BOc7fZ%2FHSV762Am9Bg76wSrHxBKt8n83kBjZRD6cayJuWgNUuzLW6mz839GJSwYoodsCoOe9XupZ%2BNMNaj1CG6w4Thn7%2FGA%2B69UDFK3uI0gLIj%2FaySCD6q2ZjfXkHvNR7e4go4R2srhFSLzT%2F3MLszHj95QhHXAwiEhFtFXMX&X-Amz-Signature=eb71feb1f3c63fa61f599a02e8b9efe26bcda3be6623243c535113f847109636&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677M7V5GE%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIBSVmdHUxySAT%2BAixaRXNVRhdg1VaINXLb%2BE%2F%2BcgHIKKAiEAlAjEGb0ikKoQqvUj7nlYSgGeLkjvzBdJOs8WcHmcpQ8qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNlTCbfiEPq27ZbNqSrcA%2BFhV2iGcxj%2BgB5LUlUDufMXM%2Bird%2Bpsh0ceGNICK9jFkybj8xD0VmAhea%2BCBTOOd7I0%2FX%2B5KKT6EREif54l3DjqAjRSO%2BMCpr3ZwwPywT3%2BuccjAJHTT5ltS3I0y682JM5crygWHVbP0UqhlYrim4JQ3YY1xvZodEDdgPGTbYq1JYwbwbvTCNIzhxdSMNgcwmNZBXfOU8vegtWI4sqhWOQyLJ5H4J94yt3l3LxpDMtvb444hmWQMtwzyM6eETfSn5DjEcHmyRBAne7j%2Fg8EcDQF1HYCL5VzlMk2P5dQfJItksf21TTy82RsKOZvbm3t1IJodjtTvh4jq2pKgf1A5zOVV6lmFvBa3CuxpsSDZqtORcHmx6Ld7Xmj1bCH7vQ3ZchH2ye73qnl4DTMYIAnFlXSlDkrKUVgg9iT%2BaFsUQlyp8abPbb8wxC%2FIYdT9m%2BoBI2Fr%2Fc1HAPKKmCYuPOXJQVPWlPg47gNcCKmySSQrXJTjtZwSmrr2t8lJGn%2Bm6MZBYt%2BmfTu4Ueq4lTBg6ncdsvMoYRJk6johrTW4kyUlYMMdhdvFdHCEVDtGCpCv8lbzOpYTrWffv%2B2i5tWcD82wC8gc5ZY%2FStVd%2BPnMywuGWarcjpw%2FcMMzqutGnS0MO%2FW8NMGOqUBnrwKeUYIKWluJZGV4bKg3o7E995X6LD%2BTnULmSCMbkQXZ6DjQ3O%2BOc7fZ%2FHSV762Am9Bg76wSrHxBKt8n83kBjZRD6cayJuWgNUuzLW6mz839GJSwYoodsCoOe9XupZ%2BNMNaj1CG6w4Thn7%2FGA%2B69UDFK3uI0gLIj%2FaySCD6q2ZjfXkHvNR7e4go4R2srhFSLzT%2F3MLszHj95QhHXAwiEhFtFXMX&X-Amz-Signature=81994611588849d3387654d0d2ddcf4c047c76a4b6a439319cb6467b45d975e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677M7V5GE%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIBSVmdHUxySAT%2BAixaRXNVRhdg1VaINXLb%2BE%2F%2BcgHIKKAiEAlAjEGb0ikKoQqvUj7nlYSgGeLkjvzBdJOs8WcHmcpQ8qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNlTCbfiEPq27ZbNqSrcA%2BFhV2iGcxj%2BgB5LUlUDufMXM%2Bird%2Bpsh0ceGNICK9jFkybj8xD0VmAhea%2BCBTOOd7I0%2FX%2B5KKT6EREif54l3DjqAjRSO%2BMCpr3ZwwPywT3%2BuccjAJHTT5ltS3I0y682JM5crygWHVbP0UqhlYrim4JQ3YY1xvZodEDdgPGTbYq1JYwbwbvTCNIzhxdSMNgcwmNZBXfOU8vegtWI4sqhWOQyLJ5H4J94yt3l3LxpDMtvb444hmWQMtwzyM6eETfSn5DjEcHmyRBAne7j%2Fg8EcDQF1HYCL5VzlMk2P5dQfJItksf21TTy82RsKOZvbm3t1IJodjtTvh4jq2pKgf1A5zOVV6lmFvBa3CuxpsSDZqtORcHmx6Ld7Xmj1bCH7vQ3ZchH2ye73qnl4DTMYIAnFlXSlDkrKUVgg9iT%2BaFsUQlyp8abPbb8wxC%2FIYdT9m%2BoBI2Fr%2Fc1HAPKKmCYuPOXJQVPWlPg47gNcCKmySSQrXJTjtZwSmrr2t8lJGn%2Bm6MZBYt%2BmfTu4Ueq4lTBg6ncdsvMoYRJk6johrTW4kyUlYMMdhdvFdHCEVDtGCpCv8lbzOpYTrWffv%2B2i5tWcD82wC8gc5ZY%2FStVd%2BPnMywuGWarcjpw%2FcMMzqutGnS0MO%2FW8NMGOqUBnrwKeUYIKWluJZGV4bKg3o7E995X6LD%2BTnULmSCMbkQXZ6DjQ3O%2BOc7fZ%2FHSV762Am9Bg76wSrHxBKt8n83kBjZRD6cayJuWgNUuzLW6mz839GJSwYoodsCoOe9XupZ%2BNMNaj1CG6w4Thn7%2FGA%2B69UDFK3uI0gLIj%2FaySCD6q2ZjfXkHvNR7e4go4R2srhFSLzT%2F3MLszHj95QhHXAwiEhFtFXMX&X-Amz-Signature=a6889c6fa8c01b7daacadba96bc10aea439f179750876e0a0c4b2670fa4dde2b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677M7V5GE%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIBSVmdHUxySAT%2BAixaRXNVRhdg1VaINXLb%2BE%2F%2BcgHIKKAiEAlAjEGb0ikKoQqvUj7nlYSgGeLkjvzBdJOs8WcHmcpQ8qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNlTCbfiEPq27ZbNqSrcA%2BFhV2iGcxj%2BgB5LUlUDufMXM%2Bird%2Bpsh0ceGNICK9jFkybj8xD0VmAhea%2BCBTOOd7I0%2FX%2B5KKT6EREif54l3DjqAjRSO%2BMCpr3ZwwPywT3%2BuccjAJHTT5ltS3I0y682JM5crygWHVbP0UqhlYrim4JQ3YY1xvZodEDdgPGTbYq1JYwbwbvTCNIzhxdSMNgcwmNZBXfOU8vegtWI4sqhWOQyLJ5H4J94yt3l3LxpDMtvb444hmWQMtwzyM6eETfSn5DjEcHmyRBAne7j%2Fg8EcDQF1HYCL5VzlMk2P5dQfJItksf21TTy82RsKOZvbm3t1IJodjtTvh4jq2pKgf1A5zOVV6lmFvBa3CuxpsSDZqtORcHmx6Ld7Xmj1bCH7vQ3ZchH2ye73qnl4DTMYIAnFlXSlDkrKUVgg9iT%2BaFsUQlyp8abPbb8wxC%2FIYdT9m%2BoBI2Fr%2Fc1HAPKKmCYuPOXJQVPWlPg47gNcCKmySSQrXJTjtZwSmrr2t8lJGn%2Bm6MZBYt%2BmfTu4Ueq4lTBg6ncdsvMoYRJk6johrTW4kyUlYMMdhdvFdHCEVDtGCpCv8lbzOpYTrWffv%2B2i5tWcD82wC8gc5ZY%2FStVd%2BPnMywuGWarcjpw%2FcMMzqutGnS0MO%2FW8NMGOqUBnrwKeUYIKWluJZGV4bKg3o7E995X6LD%2BTnULmSCMbkQXZ6DjQ3O%2BOc7fZ%2FHSV762Am9Bg76wSrHxBKt8n83kBjZRD6cayJuWgNUuzLW6mz839GJSwYoodsCoOe9XupZ%2BNMNaj1CG6w4Thn7%2FGA%2B69UDFK3uI0gLIj%2FaySCD6q2ZjfXkHvNR7e4go4R2srhFSLzT%2F3MLszHj95QhHXAwiEhFtFXMX&X-Amz-Signature=2414b1637f7cca879369b338fd6f741e6f0c03aa4c67dfcbc267ecdbaac8ca5e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2VUEJ32%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIB%2BWxi3wixu7Fas1IX%2FwrnSuFTaZHQYO0ber2Lb%2F%2BZ0BAiEAxvoCc5D%2B28bd8AJw%2FFFpFyMe5V%2Fx29cyiN1OTPdEOX0qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGMscGgBPpp14gSGsyrcA8a1zcfNE8uLlXeVIu8TgwuJLthbPfF77W7WhmCoaOHai94zWNZyxjhGOw1yNX5z0UHGTMuPskV3TtBwwZjAGQfRv%2Br5ctqlbrljwe6DZIzVmsCbt%2F2wA6CgxT7rvf63c5%2F3%2Btqcpq8cpKSzD2cSMv1TA6Y7GpYQ%2FyNl97ehbVVbenZS%2BL7yhh62ulBJFqXXjPJFGFBTaB2uAGISrrHCCMT3R5iKbGu2LIhdkafRiT7LqBAN9MwuBCOc%2BSad82%2F2z%2FpGFB4Vukugs%2BpTbrTJYUVk9O%2BFl%2B8HaIoj%2BbQXtbH5RtWklj7WaOE43eg8xDWAD%2BxQhmFXtQov41D2yb7uMwW8QjTtzktOpuLo6DrlTpaLS1Oi%2FFBl0kl9YpfobU2bX%2F9RBGtHgYiN5v%2BmUdDpRHcN7JvXrbSV32AubJPBoFzt894QGJ6Wd1uvmik9codevq0AB03YTeW6giEd77Sp2JpkNiW4ot5caomqmGgVyCPkLapoXmDQcwAR3pb9UFzHn6hcLmjCuGJ7hkMCngFqeRX4wIT8Q68K3zYzRsWDOjyP88GwlDE%2ByZNGjWrQ%2FoUMfQ34wd%2F%2F3ZML9lCkrjrDCiEtZrx7oKPegGbC%2B9%2F733MKVBWbxz9rubWTSNYEMJLZ8NMGOqUBU44O70Q%2FcnQGvr4Yb3qIQFH69RtE%2F7L0TNlz7Yz9CzNCHqItrvjzzdX4Ptsdg%2F%2FvpcsR5lX6IBm42GLNF2WLaxlHertEI8o0BMOfb4CH6n8q6e54h3kkEG1%2FdchtNC631iDpXw3WLXvcAzgz%2FVTBPtvI0YZdG3otUWb5y6%2BHSemxVQ57RdRhqzpOAsAgRdeCOkkRa4g%2Fj7zBiRBmy85uXMT89bYX&X-Amz-Signature=d185bb0bf396dd84eeaf565a221b565085d02c6ddb7749eaee5259886591df74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667G7IL6PI%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQDGwRIC7ZWeZiKBDlW%2Bj51ofMdswOvkFmbb3XljXWzjswIhAMjn25ev96lmu36T3u0NQ4uFMkeWgYd2jMj8xF1PTAvMKogECMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzGYz4ObP1jlfz%2B6v8q3AM3Mn7%2F3RTe1XRDKHOVrrk6gz0xPl%2F9ZGtbT3cyXpOvdHfCD3qmmbp7JliALtu3ByeqO8v6k0WHviZ9tC29gecZGMzh%2BCrbi%2FK0Bu5S85Gp8Nqi9o71FErBRS%2FBCR0c%2BJS2Fgxey%2BwRO7xuvAjIMAo4aX9oO3lip9ZXjTdO4im7kfCl%2FcRA3LmFJwxtMYKo1IacAIdazh0pA4VSGVFKxus%2B7f702nT0WXN1oa%2BlExREyicxBruw9%2FiEakKdv5TrQNDuu1QBdToYOCQVGpRBtISu6AJNA7RAhj5sT0i%2FiPjqwAAG3KCbw45PI%2Fx3%2BbB9R2pWyN%2BPIVJRb1nemoXjRH17eEw4vS9Hskr5ZE7%2FyVpRS4iFz5LB4BygvoOZwaKTQhrAapL8dIkOYW59IcCcHxCEWHqI6PX48GFaHAfPHFrPcNgNsflwC4oca70mz%2BHQAqxGS%2BEeSYWbMnYvyw7NyGiDx7PC0aNBafrIsS%2FUAh7z5nJoARt4isLVCOluDAd%2BQXu9g4ZBuQ%2F9Ishkk%2FasvP%2B1MbL%2ByiBAjtf3eto%2FjRkwlerkW0rz9K19%2B7y%2BxvdEfRiW6ysvBoZ912T7uQFZqwn4Aen6mqaAFSoY233EM67OPYFTKEDrEije6mKmmjD22PDTBjqkAdHWSCtmziceBXNTbkqpz6OQGXMOOAkhKul8e511S2Gz2aTP4%2F%2FZGmmdVNNiT9Cyjs5BKdbuI3kBlt9RBGhKoA56K3o33VHAF39v%2BFpRNkCozfbT9oycD7oxsesoXFB%2BSclNka31HXen0c2qdW8KOBeI2O6q%2FWAjplWCScaGXChJV%2Be7ndagpiXNRvBYXqfDu%2B%2FO4tEZdUhcg%2FpZnmozc02nOCtC&X-Amz-Signature=6ddc6d8e612f7010ace3d8c48cdd3d9195bdb2a8d83d3eb2eda7f4f74530b6b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667G7IL6PI%2F20260812%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260812T090926Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQDGwRIC7ZWeZiKBDlW%2Bj51ofMdswOvkFmbb3XljXWzjswIhAMjn25ev96lmu36T3u0NQ4uFMkeWgYd2jMj8xF1PTAvMKogECMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzGYz4ObP1jlfz%2B6v8q3AM3Mn7%2F3RTe1XRDKHOVrrk6gz0xPl%2F9ZGtbT3cyXpOvdHfCD3qmmbp7JliALtu3ByeqO8v6k0WHviZ9tC29gecZGMzh%2BCrbi%2FK0Bu5S85Gp8Nqi9o71FErBRS%2FBCR0c%2BJS2Fgxey%2BwRO7xuvAjIMAo4aX9oO3lip9ZXjTdO4im7kfCl%2FcRA3LmFJwxtMYKo1IacAIdazh0pA4VSGVFKxus%2B7f702nT0WXN1oa%2BlExREyicxBruw9%2FiEakKdv5TrQNDuu1QBdToYOCQVGpRBtISu6AJNA7RAhj5sT0i%2FiPjqwAAG3KCbw45PI%2Fx3%2BbB9R2pWyN%2BPIVJRb1nemoXjRH17eEw4vS9Hskr5ZE7%2FyVpRS4iFz5LB4BygvoOZwaKTQhrAapL8dIkOYW59IcCcHxCEWHqI6PX48GFaHAfPHFrPcNgNsflwC4oca70mz%2BHQAqxGS%2BEeSYWbMnYvyw7NyGiDx7PC0aNBafrIsS%2FUAh7z5nJoARt4isLVCOluDAd%2BQXu9g4ZBuQ%2F9Ishkk%2FasvP%2B1MbL%2ByiBAjtf3eto%2FjRkwlerkW0rz9K19%2B7y%2BxvdEfRiW6ysvBoZ912T7uQFZqwn4Aen6mqaAFSoY233EM67OPYFTKEDrEije6mKmmjD22PDTBjqkAdHWSCtmziceBXNTbkqpz6OQGXMOOAkhKul8e511S2Gz2aTP4%2F%2FZGmmdVNNiT9Cyjs5BKdbuI3kBlt9RBGhKoA56K3o33VHAF39v%2BFpRNkCozfbT9oycD7oxsesoXFB%2BSclNka31HXen0c2qdW8KOBeI2O6q%2FWAjplWCScaGXChJV%2Be7ndagpiXNRvBYXqfDu%2B%2FO4tEZdUhcg%2FpZnmozc02nOCtC&X-Amz-Signature=4fbace83d2a60e8423216477ed1758d271756a390b04ce53f346e4bfbf8a5462&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
