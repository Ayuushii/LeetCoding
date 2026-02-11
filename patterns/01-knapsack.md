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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XM5MOM6S%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084904Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC2EPbcHTNyDhpQ4XqDhLzSRuVf3eGJrkDyqMo3U1yW6AiA9btT0t0z6dCc17f%2Fc%2BjnIX56h67fzDqQJHwhbnRIptyqIBAi5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMLqzNF1URNHHOOQHVKtwDVnHcGCzxDLsizXa%2F37tN5zPQwhpfsvDhvrcCa8%2Fc4Fs0%2Btu63L%2FI5QolAWsjTbMz%2FqVUZWu5g91CS3wDHbdeX1r1hWz%2FlT9gb8IS2iTOMrJebAjunpbNofcG8vFdQuIKvVxcB0SiksYGkcox4ebgCLoWIKAV%2BbmHHRcSxhKzFR43WJyZPDNn0UR0gF0TpkHWsHhlYNoT2JN65d71Mhq%2FqZkkAkBlyGKpl2rQ5NYYDpu1rl%2BR%2BPuMsUpIS26u7ZJW1vH7u23g0RWij652nNA1ERUFiCoDqz%2FgYZxfAZHX6bSMYGl3S9uNf%2BTeHk5O%2BAHuZtEgEQQIOGQgwFSVD%2FynfMORTQPrF3ICQ0js%2F1m%2Flz9OXwm39QirLxpVsu%2BWJbXiaSzX%2FxIuVdu4sCmfOuvUMHhRULxY7gQ4Cfo%2FsZpxv5I1qx%2BLmiyvU0%2F2bX2cqUGSbKSCR0bmlMjlzbxgNfsIaOfNxn44uxKpAQIf1iBMpePUocS6Se4AQnVu5yQISKg4vHCi5bil889XtVBm56rDDOA5cP4uyc3uCd7XlEp%2FZP%2FSM%2B2letla5P0BIf%2BGRnQW2yReXyOLR4%2BRQormecZ1vyncW6N2u0UIT8N5HM%2BIMO%2B4gh16qO21Y8P%2F%2BoMwreqwzAY6pgE7nuPyz%2F9pfSXMAoNFrKA08J2rr%2BWH6IT6U5y8ywFrBJsCWmOkbxK7FqJGirbJOgI%2B9aay2722Y%2BeHY%2Brw9%2Bzb%2F6M6RjGOXIBpbtz5aMNuiGfYcxg1XJeuiQJOpT756e9VtG8WYttqoVTd7oX4LZmrskNZyS2gutPNfQ5gDdHpyuMO%2BR7iINI3I6bnR075oJ2PM%2BelrxlLoasGMcxeCD0vnI2ELHh1&X-Amz-Signature=c591190944d46d5e9720aea3e89f4f3d6eabc68d9ca806160401a92c3e132cb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XM5MOM6S%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084904Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC2EPbcHTNyDhpQ4XqDhLzSRuVf3eGJrkDyqMo3U1yW6AiA9btT0t0z6dCc17f%2Fc%2BjnIX56h67fzDqQJHwhbnRIptyqIBAi5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMLqzNF1URNHHOOQHVKtwDVnHcGCzxDLsizXa%2F37tN5zPQwhpfsvDhvrcCa8%2Fc4Fs0%2Btu63L%2FI5QolAWsjTbMz%2FqVUZWu5g91CS3wDHbdeX1r1hWz%2FlT9gb8IS2iTOMrJebAjunpbNofcG8vFdQuIKvVxcB0SiksYGkcox4ebgCLoWIKAV%2BbmHHRcSxhKzFR43WJyZPDNn0UR0gF0TpkHWsHhlYNoT2JN65d71Mhq%2FqZkkAkBlyGKpl2rQ5NYYDpu1rl%2BR%2BPuMsUpIS26u7ZJW1vH7u23g0RWij652nNA1ERUFiCoDqz%2FgYZxfAZHX6bSMYGl3S9uNf%2BTeHk5O%2BAHuZtEgEQQIOGQgwFSVD%2FynfMORTQPrF3ICQ0js%2F1m%2Flz9OXwm39QirLxpVsu%2BWJbXiaSzX%2FxIuVdu4sCmfOuvUMHhRULxY7gQ4Cfo%2FsZpxv5I1qx%2BLmiyvU0%2F2bX2cqUGSbKSCR0bmlMjlzbxgNfsIaOfNxn44uxKpAQIf1iBMpePUocS6Se4AQnVu5yQISKg4vHCi5bil889XtVBm56rDDOA5cP4uyc3uCd7XlEp%2FZP%2FSM%2B2letla5P0BIf%2BGRnQW2yReXyOLR4%2BRQormecZ1vyncW6N2u0UIT8N5HM%2BIMO%2B4gh16qO21Y8P%2F%2BoMwreqwzAY6pgE7nuPyz%2F9pfSXMAoNFrKA08J2rr%2BWH6IT6U5y8ywFrBJsCWmOkbxK7FqJGirbJOgI%2B9aay2722Y%2BeHY%2Brw9%2Bzb%2F6M6RjGOXIBpbtz5aMNuiGfYcxg1XJeuiQJOpT756e9VtG8WYttqoVTd7oX4LZmrskNZyS2gutPNfQ5gDdHpyuMO%2BR7iINI3I6bnR075oJ2PM%2BelrxlLoasGMcxeCD0vnI2ELHh1&X-Amz-Signature=33b5a712bba13766411f40b05d4b4212c01c935d874d437c2cb6f44122ae0999&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XM5MOM6S%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084904Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC2EPbcHTNyDhpQ4XqDhLzSRuVf3eGJrkDyqMo3U1yW6AiA9btT0t0z6dCc17f%2Fc%2BjnIX56h67fzDqQJHwhbnRIptyqIBAi5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMLqzNF1URNHHOOQHVKtwDVnHcGCzxDLsizXa%2F37tN5zPQwhpfsvDhvrcCa8%2Fc4Fs0%2Btu63L%2FI5QolAWsjTbMz%2FqVUZWu5g91CS3wDHbdeX1r1hWz%2FlT9gb8IS2iTOMrJebAjunpbNofcG8vFdQuIKvVxcB0SiksYGkcox4ebgCLoWIKAV%2BbmHHRcSxhKzFR43WJyZPDNn0UR0gF0TpkHWsHhlYNoT2JN65d71Mhq%2FqZkkAkBlyGKpl2rQ5NYYDpu1rl%2BR%2BPuMsUpIS26u7ZJW1vH7u23g0RWij652nNA1ERUFiCoDqz%2FgYZxfAZHX6bSMYGl3S9uNf%2BTeHk5O%2BAHuZtEgEQQIOGQgwFSVD%2FynfMORTQPrF3ICQ0js%2F1m%2Flz9OXwm39QirLxpVsu%2BWJbXiaSzX%2FxIuVdu4sCmfOuvUMHhRULxY7gQ4Cfo%2FsZpxv5I1qx%2BLmiyvU0%2F2bX2cqUGSbKSCR0bmlMjlzbxgNfsIaOfNxn44uxKpAQIf1iBMpePUocS6Se4AQnVu5yQISKg4vHCi5bil889XtVBm56rDDOA5cP4uyc3uCd7XlEp%2FZP%2FSM%2B2letla5P0BIf%2BGRnQW2yReXyOLR4%2BRQormecZ1vyncW6N2u0UIT8N5HM%2BIMO%2B4gh16qO21Y8P%2F%2BoMwreqwzAY6pgE7nuPyz%2F9pfSXMAoNFrKA08J2rr%2BWH6IT6U5y8ywFrBJsCWmOkbxK7FqJGirbJOgI%2B9aay2722Y%2BeHY%2Brw9%2Bzb%2F6M6RjGOXIBpbtz5aMNuiGfYcxg1XJeuiQJOpT756e9VtG8WYttqoVTd7oX4LZmrskNZyS2gutPNfQ5gDdHpyuMO%2BR7iINI3I6bnR075oJ2PM%2BelrxlLoasGMcxeCD0vnI2ELHh1&X-Amz-Signature=abd822f3cc27bebfc8b093ade97e1f56d473d98e3cb486dfb10f69780dce7e45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RY6NJHYD%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084905Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcNzH8Ub%2FKWO27L2wii1fnWBzFXlVOaztLA9ilKYR%2BlAiEA3Xc9xqSV1wdEhxwtkqUcBqv0ybl7JEuAZ9VQKEVqsVUqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDG5ypeax9qo2JRVuwyrcAyZot0fJ3Xir2RUCQVVbdT6QDXS3j8Vzb9b1WryNOACrbkLKEL3tb5yJYUAQoCPbo3A%2BcuIzyW%2BrfUzpsqQJZQxFp3CCV1a%2FsrRTs0Uyg2Qfga%2BKUt2Vq7RGKA4BmtEm08ZHpHPYzy3lw8r%2BnaPhRdz4PEa20z3viqpvU81JyHPr70PXtIFou0LqajHY%2Bdvjkhl2OHe%2BNf%2FLCqQdbWZ3OdE20rOrNConoUzxW5jMHj3BfWJYj%2BemHCmTMOMPlNhpj8cNAsIbRmrl2pURSv0LHQf5WVKaayz886NUxSFwO4%2FRooQP3K3tsrE2t5KY1HQLw2HJN6WfTg7MH5lNSgXnQy5KvyXm55PUkNDtBEj9MKtbmioHhR%2BPZJzOycg5%2Bovf0WeuQ3jmrfOus2D6YYKV%2B7d8kn7nSiSTktDErgGy3mHezPd5l4zTFfDq1m0T4oVhIPPT8tlTn%2BlnMOaUcWWReUfzR%2BKrEm5tqsibYCMcW9D0qkor8OcS1G5dTlJ2FgRkKTBCUOSTNXfGPQUvzWDlrUKrgpAyq9FLE8%2BiOamLrW1O4idHjzGxSMNCK1S%2BfeGTFe9YvEoiie8TlsIYv3qNp2tsVZBCXOQ679itAB789LBiUVZOJQt336wqRyF1MNnzsMwGOqUB20tCnDl3BYHB%2F%2BwnnziO7xaPBIGWMEfWTRb99NZcbd3foZe5b4ANyLV0tCf9qwONuNsaOPWvTGo%2BeusPNvXHdxP7K6sih56V6E1XiuyJHPTZBaBd%2FYmNq8sBhzlHzYxz8ftWjukmeO2FbD9%2FNhIE%2Bd%2F98yIAMLQoPyp2E4X4Ez1C%2BXBwNXJHkuJWRj%2FyyPShdEOcyzEC6Q2oYkmtppi5omVgz3mL&X-Amz-Signature=f837f917a3764fe0c43b5461c2174c05435d452f0a295bbca64079f66e1db1aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RY6NJHYD%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084905Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcNzH8Ub%2FKWO27L2wii1fnWBzFXlVOaztLA9ilKYR%2BlAiEA3Xc9xqSV1wdEhxwtkqUcBqv0ybl7JEuAZ9VQKEVqsVUqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDG5ypeax9qo2JRVuwyrcAyZot0fJ3Xir2RUCQVVbdT6QDXS3j8Vzb9b1WryNOACrbkLKEL3tb5yJYUAQoCPbo3A%2BcuIzyW%2BrfUzpsqQJZQxFp3CCV1a%2FsrRTs0Uyg2Qfga%2BKUt2Vq7RGKA4BmtEm08ZHpHPYzy3lw8r%2BnaPhRdz4PEa20z3viqpvU81JyHPr70PXtIFou0LqajHY%2Bdvjkhl2OHe%2BNf%2FLCqQdbWZ3OdE20rOrNConoUzxW5jMHj3BfWJYj%2BemHCmTMOMPlNhpj8cNAsIbRmrl2pURSv0LHQf5WVKaayz886NUxSFwO4%2FRooQP3K3tsrE2t5KY1HQLw2HJN6WfTg7MH5lNSgXnQy5KvyXm55PUkNDtBEj9MKtbmioHhR%2BPZJzOycg5%2Bovf0WeuQ3jmrfOus2D6YYKV%2B7d8kn7nSiSTktDErgGy3mHezPd5l4zTFfDq1m0T4oVhIPPT8tlTn%2BlnMOaUcWWReUfzR%2BKrEm5tqsibYCMcW9D0qkor8OcS1G5dTlJ2FgRkKTBCUOSTNXfGPQUvzWDlrUKrgpAyq9FLE8%2BiOamLrW1O4idHjzGxSMNCK1S%2BfeGTFe9YvEoiie8TlsIYv3qNp2tsVZBCXOQ679itAB789LBiUVZOJQt336wqRyF1MNnzsMwGOqUB20tCnDl3BYHB%2F%2BwnnziO7xaPBIGWMEfWTRb99NZcbd3foZe5b4ANyLV0tCf9qwONuNsaOPWvTGo%2BeusPNvXHdxP7K6sih56V6E1XiuyJHPTZBaBd%2FYmNq8sBhzlHzYxz8ftWjukmeO2FbD9%2FNhIE%2Bd%2F98yIAMLQoPyp2E4X4Ez1C%2BXBwNXJHkuJWRj%2FyyPShdEOcyzEC6Q2oYkmtppi5omVgz3mL&X-Amz-Signature=933d6d0f537a6a4605127bdaf670a7b6aa0412c6f2128759e2b7923f6bf90f70&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RY6NJHYD%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084905Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcNzH8Ub%2FKWO27L2wii1fnWBzFXlVOaztLA9ilKYR%2BlAiEA3Xc9xqSV1wdEhxwtkqUcBqv0ybl7JEuAZ9VQKEVqsVUqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDG5ypeax9qo2JRVuwyrcAyZot0fJ3Xir2RUCQVVbdT6QDXS3j8Vzb9b1WryNOACrbkLKEL3tb5yJYUAQoCPbo3A%2BcuIzyW%2BrfUzpsqQJZQxFp3CCV1a%2FsrRTs0Uyg2Qfga%2BKUt2Vq7RGKA4BmtEm08ZHpHPYzy3lw8r%2BnaPhRdz4PEa20z3viqpvU81JyHPr70PXtIFou0LqajHY%2Bdvjkhl2OHe%2BNf%2FLCqQdbWZ3OdE20rOrNConoUzxW5jMHj3BfWJYj%2BemHCmTMOMPlNhpj8cNAsIbRmrl2pURSv0LHQf5WVKaayz886NUxSFwO4%2FRooQP3K3tsrE2t5KY1HQLw2HJN6WfTg7MH5lNSgXnQy5KvyXm55PUkNDtBEj9MKtbmioHhR%2BPZJzOycg5%2Bovf0WeuQ3jmrfOus2D6YYKV%2B7d8kn7nSiSTktDErgGy3mHezPd5l4zTFfDq1m0T4oVhIPPT8tlTn%2BlnMOaUcWWReUfzR%2BKrEm5tqsibYCMcW9D0qkor8OcS1G5dTlJ2FgRkKTBCUOSTNXfGPQUvzWDlrUKrgpAyq9FLE8%2BiOamLrW1O4idHjzGxSMNCK1S%2BfeGTFe9YvEoiie8TlsIYv3qNp2tsVZBCXOQ679itAB789LBiUVZOJQt336wqRyF1MNnzsMwGOqUB20tCnDl3BYHB%2F%2BwnnziO7xaPBIGWMEfWTRb99NZcbd3foZe5b4ANyLV0tCf9qwONuNsaOPWvTGo%2BeusPNvXHdxP7K6sih56V6E1XiuyJHPTZBaBd%2FYmNq8sBhzlHzYxz8ftWjukmeO2FbD9%2FNhIE%2Bd%2F98yIAMLQoPyp2E4X4Ez1C%2BXBwNXJHkuJWRj%2FyyPShdEOcyzEC6Q2oYkmtppi5omVgz3mL&X-Amz-Signature=bd608920a3fa5d1fc28b831067c2e42883d4cc2dde82dcbe1a86c06f858a217d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RY6NJHYD%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084905Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcNzH8Ub%2FKWO27L2wii1fnWBzFXlVOaztLA9ilKYR%2BlAiEA3Xc9xqSV1wdEhxwtkqUcBqv0ybl7JEuAZ9VQKEVqsVUqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDG5ypeax9qo2JRVuwyrcAyZot0fJ3Xir2RUCQVVbdT6QDXS3j8Vzb9b1WryNOACrbkLKEL3tb5yJYUAQoCPbo3A%2BcuIzyW%2BrfUzpsqQJZQxFp3CCV1a%2FsrRTs0Uyg2Qfga%2BKUt2Vq7RGKA4BmtEm08ZHpHPYzy3lw8r%2BnaPhRdz4PEa20z3viqpvU81JyHPr70PXtIFou0LqajHY%2Bdvjkhl2OHe%2BNf%2FLCqQdbWZ3OdE20rOrNConoUzxW5jMHj3BfWJYj%2BemHCmTMOMPlNhpj8cNAsIbRmrl2pURSv0LHQf5WVKaayz886NUxSFwO4%2FRooQP3K3tsrE2t5KY1HQLw2HJN6WfTg7MH5lNSgXnQy5KvyXm55PUkNDtBEj9MKtbmioHhR%2BPZJzOycg5%2Bovf0WeuQ3jmrfOus2D6YYKV%2B7d8kn7nSiSTktDErgGy3mHezPd5l4zTFfDq1m0T4oVhIPPT8tlTn%2BlnMOaUcWWReUfzR%2BKrEm5tqsibYCMcW9D0qkor8OcS1G5dTlJ2FgRkKTBCUOSTNXfGPQUvzWDlrUKrgpAyq9FLE8%2BiOamLrW1O4idHjzGxSMNCK1S%2BfeGTFe9YvEoiie8TlsIYv3qNp2tsVZBCXOQ679itAB789LBiUVZOJQt336wqRyF1MNnzsMwGOqUB20tCnDl3BYHB%2F%2BwnnziO7xaPBIGWMEfWTRb99NZcbd3foZe5b4ANyLV0tCf9qwONuNsaOPWvTGo%2BeusPNvXHdxP7K6sih56V6E1XiuyJHPTZBaBd%2FYmNq8sBhzlHzYxz8ftWjukmeO2FbD9%2FNhIE%2Bd%2F98yIAMLQoPyp2E4X4Ez1C%2BXBwNXJHkuJWRj%2FyyPShdEOcyzEC6Q2oYkmtppi5omVgz3mL&X-Amz-Signature=fc54de980330693ab44136e7e69769f71b31c2c96236eda2119a92ada88706ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664GNCGSHD%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDOyrbCHft2KutmmUG0Sw3n9wAa9vhNakdYRAVMNoxc6AiEAjda3UPcQnbu%2BunCl1SbYO3XmQNxrxXM52ztwthtDMLQqiAQIuf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFMx8ufQ%2FsbOTX1ifircA%2BNKonTEFPWOAoM%2FWU5s%2FSDYxGgij0FjZznbk3OKIAeFhWPg9wuZz4NlbvfjdRPtdl4ucuZqiZQ7I5rEltDze0Ylef9M8OjpC7ZtEV9S6TPFoKSQnvuOw9pcsV61IiYqzRsxp2vagLB4pwh1Ll4LSX%2FCLQ9vm7LUJdU4YN12SB3pd64LL0vkXFONrR%2BBw0Z3gDwl6zUSoo00Wz0kw5IjGpOF3LL0QFDJJK9K3foA52V2DjZyiWy8k3i4XilaOErpw1kriTF0Kv9VNlVhcEetIBD3Gg1VDVCbcNrny%2FDJjJa5CjClplsZspqmif77w0ptcNUkZUl1dY8BeYz%2F9cUwTGx1%2Fty3ZhZbV282hD7gNmSHLh8h9W0e37izans9GMaqzUIYpAfiVT9lxHm4%2F0zgXkDPauhCa8fJ1bHrNUpG3lC0LlZIzplJ%2B2Emv2WO9YjG7OByWd2gNPi%2F2GnQQpUjpkcHpqYw%2BIiCitx2m5CUhdD8pGfFle0adLnccytTTpqMSpXjX%2Ff8LDB43tOP0SAkBzNlpW6RC5a2DawYD37sc4HsReAAvSZg3zenhM%2FZ9BaRL4reNTTxsn1mb6O90o17kb%2BGPP0rizNK7LtBiY1O8Kf%2Bt2jvOzypFQPCSpNMMNvqsMwGOqUBNGW%2F49uy2j7VVuE%2BGBHA0aHNTs3g%2FibBADpxS6NVl6IP9T2bMKO7f0hsMZiThXuGt3QPicGsE4sfMl1CnQcrNla2RliNKU%2FMjtkc180Z8jI2IfAmUdKqGzXPPFrYPYAIKSyi33AJJItbLunen5hssrKF%2BbnQ4R4BRZOBpT%2BwsiCxq%2FIpTZxQLrb6YFNsjga5smGzSWVqqsnpIvarT35EsVBiq8%2Bc&X-Amz-Signature=9bd9005d9a6d02bb5edf6c78fdfb9b7b255eaacaf3952fcc968827096f9f0fce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SPDNZCI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAuVKS5JvNoy9hRhGCXg1Y4RcP8R0odApbipJM56nQbqAiAZybbb3uFNP36ct90qolNvhmkiNTZ8U8Q4Tn2j7RF1YyqIBAi5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAkHArtoga2E%2BiWPnKtwDwzzsYLkbgZ%2FtKBL7a6fnZem%2BCKYZxj7ng42QfP8YehGV58UaJVmOXDT25UBgpeBf%2FvvpJlA6W0V2t9ik7OlCjzvSA8%2BIQ4RwM7EWBGLIqdV6TSLrYgI0qcsIeoPJMrsFDufRZsiM9mVa%2FCdxwC6sAgI0%2BDJhuxp4QDSuQmkc6itHPSc61LqqnzwKCvsy8h0QGTl6JYZKwJVjBAJOSY4gfSMY84s6G4ERnVfqtVJsLdYzZHCdiLnGP1B4mfrJ%2BxFZdMAAOJe4quwnNhN%2FHXpWaXQNHQ4iygavhb1RF5cn0ZiOHG7CAtFl08kNjVJtFxjEfpNgUTCrPQ1hsYCuzuyhoh4qD4gKAMpO9gyqhFZ3fjlpr6EInzdzHgRqHIZxqR%2FrIObAiMegSt9zzTeOIqMFyNfBZNS6LcnA%2FESQR8j1gPE9F%2FGqALUioKloydciSsUiGyY%2FzbR3waSLrfWm10B2bfWHN2EX4WwqJ0sCpxTIuCii1tdMf92oxlRCmAZYlu5IlqyblaCL18zGxTeZ8IQ8%2B4BgB1VcqVke7h8BrLePRNVaccsVkL2t0ESDlII6hcM8yoXWOQ2HQF61BkKuGCm5KiHJeAHX8UWYckpPsfdLI%2BEAzBTO70HJe6%2FT2FAwmeqwzAY6pgEjJALCR5Q2cu1WJ8Ez5bQhz85pnNJwuMIoU1lcc7tHmpySmZIS1T4XeX1e%2BueGpvBtTEru6EUI%2Fsd7BBL17suKZpjzkr4SGOR66gsg%2BzsMUojAyr2FLlr1r2FsSRq3LtDx9onzJgIgU7LHAbEjuXv%2Fo5Jhk4W1WAFmcg5I8wPuxuUNrlbp81nt4EQklMTb7BOsN5ikwjSgLLDn1Yv368aYN5gLF%2Fi0&X-Amz-Signature=27b141666065a21aebb0d5ef58336a6d3f474ae0861f0fcf9e8e25c514b7beec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SPDNZCI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T084907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAuVKS5JvNoy9hRhGCXg1Y4RcP8R0odApbipJM56nQbqAiAZybbb3uFNP36ct90qolNvhmkiNTZ8U8Q4Tn2j7RF1YyqIBAi5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAkHArtoga2E%2BiWPnKtwDwzzsYLkbgZ%2FtKBL7a6fnZem%2BCKYZxj7ng42QfP8YehGV58UaJVmOXDT25UBgpeBf%2FvvpJlA6W0V2t9ik7OlCjzvSA8%2BIQ4RwM7EWBGLIqdV6TSLrYgI0qcsIeoPJMrsFDufRZsiM9mVa%2FCdxwC6sAgI0%2BDJhuxp4QDSuQmkc6itHPSc61LqqnzwKCvsy8h0QGTl6JYZKwJVjBAJOSY4gfSMY84s6G4ERnVfqtVJsLdYzZHCdiLnGP1B4mfrJ%2BxFZdMAAOJe4quwnNhN%2FHXpWaXQNHQ4iygavhb1RF5cn0ZiOHG7CAtFl08kNjVJtFxjEfpNgUTCrPQ1hsYCuzuyhoh4qD4gKAMpO9gyqhFZ3fjlpr6EInzdzHgRqHIZxqR%2FrIObAiMegSt9zzTeOIqMFyNfBZNS6LcnA%2FESQR8j1gPE9F%2FGqALUioKloydciSsUiGyY%2FzbR3waSLrfWm10B2bfWHN2EX4WwqJ0sCpxTIuCii1tdMf92oxlRCmAZYlu5IlqyblaCL18zGxTeZ8IQ8%2B4BgB1VcqVke7h8BrLePRNVaccsVkL2t0ESDlII6hcM8yoXWOQ2HQF61BkKuGCm5KiHJeAHX8UWYckpPsfdLI%2BEAzBTO70HJe6%2FT2FAwmeqwzAY6pgEjJALCR5Q2cu1WJ8Ez5bQhz85pnNJwuMIoU1lcc7tHmpySmZIS1T4XeX1e%2BueGpvBtTEru6EUI%2Fsd7BBL17suKZpjzkr4SGOR66gsg%2BzsMUojAyr2FLlr1r2FsSRq3LtDx9onzJgIgU7LHAbEjuXv%2Fo5Jhk4W1WAFmcg5I8wPuxuUNrlbp81nt4EQklMTb7BOsN5ikwjSgLLDn1Yv368aYN5gLF%2Fi0&X-Amz-Signature=8005294f65f4bef3802854054dd174de54034777953b7e5ad68bb75c4afaf412&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
