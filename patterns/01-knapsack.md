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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663YH4RYTF%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHx3137U6IlJM%2F8SxrjzKGh3EaWoWCpqKo0u%2F2fGFFk6AiB6VMLuWBpVA34EPZbau5OD%2Fy08aKDsSBpMUMhAaO4DRSr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMU1daWCMadsm6M67zKtwD%2BP%2Fa7R6Bt%2BM2OVyrYGUUoFsZBojeeM0ZPx4oZHSapjlcigV8WCTcnuEERXXS7tloscnhq%2FT0COjw4pWI3tG0YrJVmiRCUNd%2Bw6g9CpSdbZe3ft9bCboLWSFYn8Pk8F0Po7iijHksllSwCNcR7kiewM6SDjrBvgcTW%2Fd0kBGgDgepO%2BAeVcRzoLW477w2HvgDGwljrnNVt%2FbxB%2BrDXKuzu8ceIju7jd0NjWzWF6DewDRH3x3MV2g7g%2Fp1MZ9zLJHMsFUuwPw4kNZnIdxAWEpN%2BLLoIx8NLegKBC%2B3t5ytq0nnoIm7ja7ol8QEnh8cAW95%2BeZK6HU5tnMiNH%2B5ufhmO%2B08e2scp2BTlh96hv9XNTX97gGkqrI2%2B95LzfBPxsXHJP48AGTKGQ855ls2VHj5Ba%2Byw72zb%2FztErfIPlF0a8ARqTpSr%2B7fYKSJPiYQnt3FgNkHS6Xvqa%2BIedB3Ksbn5NTe6OyDDfjJFgeKKisZMraRSJ3GIZLPcwpur64V9hoM6ss3H3hg7Q0kfijyNThBPnlc9EQSmBmxjBnm9heU2h9AxsnBJh496hVy9xppULmohfN0g%2Fkqce%2FlVbNB4vOUQEPlEGg%2Fwkx9FjWGrZtKhjqbjXbirvQ3LxuKEqUwrqTH1AY6pgHHYYN%2Fh4TGgfNP2nC%2BcZlAtPxmiuh8PbN1nlH4I40Mi%2BSyMS8hXREBFBYf4un2PjFkOxG7zTl9%2FI16%2BPJ4oL4%2BqeBeFIcS3yteglQeeP74mcBusgEDhooZPAEiTJJ3wHG%2BBkPFtxw2hMUnR2NeUP%2BpoimWvgjG%2BxDZ3hvHZF6BqlNohoI5XHLYDQ2WriGYJzEp3osh2cZ7v3yNN7mLQCNqX5%2ByTQ8X&X-Amz-Signature=8a45e7888b8dfe1015cc81110c6a953afed8d4859d8f7cee2fff29e6e910b72f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663YH4RYTF%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHx3137U6IlJM%2F8SxrjzKGh3EaWoWCpqKo0u%2F2fGFFk6AiB6VMLuWBpVA34EPZbau5OD%2Fy08aKDsSBpMUMhAaO4DRSr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMU1daWCMadsm6M67zKtwD%2BP%2Fa7R6Bt%2BM2OVyrYGUUoFsZBojeeM0ZPx4oZHSapjlcigV8WCTcnuEERXXS7tloscnhq%2FT0COjw4pWI3tG0YrJVmiRCUNd%2Bw6g9CpSdbZe3ft9bCboLWSFYn8Pk8F0Po7iijHksllSwCNcR7kiewM6SDjrBvgcTW%2Fd0kBGgDgepO%2BAeVcRzoLW477w2HvgDGwljrnNVt%2FbxB%2BrDXKuzu8ceIju7jd0NjWzWF6DewDRH3x3MV2g7g%2Fp1MZ9zLJHMsFUuwPw4kNZnIdxAWEpN%2BLLoIx8NLegKBC%2B3t5ytq0nnoIm7ja7ol8QEnh8cAW95%2BeZK6HU5tnMiNH%2B5ufhmO%2B08e2scp2BTlh96hv9XNTX97gGkqrI2%2B95LzfBPxsXHJP48AGTKGQ855ls2VHj5Ba%2Byw72zb%2FztErfIPlF0a8ARqTpSr%2B7fYKSJPiYQnt3FgNkHS6Xvqa%2BIedB3Ksbn5NTe6OyDDfjJFgeKKisZMraRSJ3GIZLPcwpur64V9hoM6ss3H3hg7Q0kfijyNThBPnlc9EQSmBmxjBnm9heU2h9AxsnBJh496hVy9xppULmohfN0g%2Fkqce%2FlVbNB4vOUQEPlEGg%2Fwkx9FjWGrZtKhjqbjXbirvQ3LxuKEqUwrqTH1AY6pgHHYYN%2Fh4TGgfNP2nC%2BcZlAtPxmiuh8PbN1nlH4I40Mi%2BSyMS8hXREBFBYf4un2PjFkOxG7zTl9%2FI16%2BPJ4oL4%2BqeBeFIcS3yteglQeeP74mcBusgEDhooZPAEiTJJ3wHG%2BBkPFtxw2hMUnR2NeUP%2BpoimWvgjG%2BxDZ3hvHZF6BqlNohoI5XHLYDQ2WriGYJzEp3osh2cZ7v3yNN7mLQCNqX5%2ByTQ8X&X-Amz-Signature=4fe4144e41be08516d6fbfb5247b071002a5d01da2352297da733d330f030ca0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663YH4RYTF%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHx3137U6IlJM%2F8SxrjzKGh3EaWoWCpqKo0u%2F2fGFFk6AiB6VMLuWBpVA34EPZbau5OD%2Fy08aKDsSBpMUMhAaO4DRSr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMU1daWCMadsm6M67zKtwD%2BP%2Fa7R6Bt%2BM2OVyrYGUUoFsZBojeeM0ZPx4oZHSapjlcigV8WCTcnuEERXXS7tloscnhq%2FT0COjw4pWI3tG0YrJVmiRCUNd%2Bw6g9CpSdbZe3ft9bCboLWSFYn8Pk8F0Po7iijHksllSwCNcR7kiewM6SDjrBvgcTW%2Fd0kBGgDgepO%2BAeVcRzoLW477w2HvgDGwljrnNVt%2FbxB%2BrDXKuzu8ceIju7jd0NjWzWF6DewDRH3x3MV2g7g%2Fp1MZ9zLJHMsFUuwPw4kNZnIdxAWEpN%2BLLoIx8NLegKBC%2B3t5ytq0nnoIm7ja7ol8QEnh8cAW95%2BeZK6HU5tnMiNH%2B5ufhmO%2B08e2scp2BTlh96hv9XNTX97gGkqrI2%2B95LzfBPxsXHJP48AGTKGQ855ls2VHj5Ba%2Byw72zb%2FztErfIPlF0a8ARqTpSr%2B7fYKSJPiYQnt3FgNkHS6Xvqa%2BIedB3Ksbn5NTe6OyDDfjJFgeKKisZMraRSJ3GIZLPcwpur64V9hoM6ss3H3hg7Q0kfijyNThBPnlc9EQSmBmxjBnm9heU2h9AxsnBJh496hVy9xppULmohfN0g%2Fkqce%2FlVbNB4vOUQEPlEGg%2Fwkx9FjWGrZtKhjqbjXbirvQ3LxuKEqUwrqTH1AY6pgHHYYN%2Fh4TGgfNP2nC%2BcZlAtPxmiuh8PbN1nlH4I40Mi%2BSyMS8hXREBFBYf4un2PjFkOxG7zTl9%2FI16%2BPJ4oL4%2BqeBeFIcS3yteglQeeP74mcBusgEDhooZPAEiTJJ3wHG%2BBkPFtxw2hMUnR2NeUP%2BpoimWvgjG%2BxDZ3hvHZF6BqlNohoI5XHLYDQ2WriGYJzEp3osh2cZ7v3yNN7mLQCNqX5%2ByTQ8X&X-Amz-Signature=dd93945f088c5388ab1b158d86e02596d3964b5b8bb5f521de5dfe56fe02789b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZO7IEVOB%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAYUq9bkf8eVj6Jfy3d3QjvYWruzbWeKXtcR0h0weS85AiB0gBzZqR4i8XzsCMZWGbMeTygUg5pzu7qE0HCNp0J2TSr%2FAwhUEAAaDDYzNzQyMzE4MzgwNSIME2%2FobsFG8AU2%2F5tjKtwD4xNXecMbvJaMiewan0ycHco0eFnCr496hq%2Fkg5YHpNy5u0oYLNzD3ILe1ZrOQQLzcDf8G7jJWurBBY0oVeK6ExunIQO1tvtrKSZ2wUjcn02ltR0Q2EiOXzhBOFmdrJbsv%2BuebzSD90n6JnG9%2Fy6KAhibKfhGN3ANxaXNs18Yk2wua57b7dfoFCYLSavua1BcSYulGNmdz94j8E0DRMPeQ%2FfJNMhIRycCp%2FUQN7ciFMUqmOn84gTOggup08U1DYn%2BqkUQB4htTki0DJunKNRZewqAzR4ppASpmofhauG0P4dVcChTFFgvD%2BEO0YHmulZVxjtZkKzanSGEojWwLRo%2FlmrJVHOvJLFpLsnGHiYNPH8TKUpdEJha9QietiHWwhKyAO2GzVz3lfA4oWTAPYUYYL%2FRpl%2Fy6S%2B%2FQWbFUeT3JYhZLbqFG3GfAnZ%2BlwWQt9B%2BTzJZR6XGJWWjsyCyuxkMr8mn1L%2FXedLVJ2XnZXyLSx5%2BBlsx7sRAc8Umjr%2BNkC6F39qgQI0zVVy3GkEh2ebx5aARrCRWp0ltKVcOr6nAUlFoSgk9%2FBQljv6kiy%2Br3EzJCEvNP13KBCUuUe7RrVDXkm%2BWC1Gz1EiuG1pSpyqbJw0%2B74Sd2OVChBkZYPwwrqTH1AY6pgFK8rYZo%2BmS6WkknUarx2CfwwzdqklxeePdv6ns3iG4gl1aVIl31l%2BLp9NTB8WMlyFvhINe5jEXY6h8hzKkU2kclFf%2B4121YTsj36pcQ6EAvwslDwTZYmUTdWeWvsgVe8NY2IAjZaXV8Q33FN%2FjjjdVE5hi8VckTSkT2dofWyzo8SKHuq1RMHlmjue1kdEXSbCImsx%2BmW8D5D7qi3RO00TDVY9MJusq&X-Amz-Signature=3e2cc1f72be01bd99fca18ec7215d17d98c165ef23b4a3bb417d901419076a4f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZO7IEVOB%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAYUq9bkf8eVj6Jfy3d3QjvYWruzbWeKXtcR0h0weS85AiB0gBzZqR4i8XzsCMZWGbMeTygUg5pzu7qE0HCNp0J2TSr%2FAwhUEAAaDDYzNzQyMzE4MzgwNSIME2%2FobsFG8AU2%2F5tjKtwD4xNXecMbvJaMiewan0ycHco0eFnCr496hq%2Fkg5YHpNy5u0oYLNzD3ILe1ZrOQQLzcDf8G7jJWurBBY0oVeK6ExunIQO1tvtrKSZ2wUjcn02ltR0Q2EiOXzhBOFmdrJbsv%2BuebzSD90n6JnG9%2Fy6KAhibKfhGN3ANxaXNs18Yk2wua57b7dfoFCYLSavua1BcSYulGNmdz94j8E0DRMPeQ%2FfJNMhIRycCp%2FUQN7ciFMUqmOn84gTOggup08U1DYn%2BqkUQB4htTki0DJunKNRZewqAzR4ppASpmofhauG0P4dVcChTFFgvD%2BEO0YHmulZVxjtZkKzanSGEojWwLRo%2FlmrJVHOvJLFpLsnGHiYNPH8TKUpdEJha9QietiHWwhKyAO2GzVz3lfA4oWTAPYUYYL%2FRpl%2Fy6S%2B%2FQWbFUeT3JYhZLbqFG3GfAnZ%2BlwWQt9B%2BTzJZR6XGJWWjsyCyuxkMr8mn1L%2FXedLVJ2XnZXyLSx5%2BBlsx7sRAc8Umjr%2BNkC6F39qgQI0zVVy3GkEh2ebx5aARrCRWp0ltKVcOr6nAUlFoSgk9%2FBQljv6kiy%2Br3EzJCEvNP13KBCUuUe7RrVDXkm%2BWC1Gz1EiuG1pSpyqbJw0%2B74Sd2OVChBkZYPwwrqTH1AY6pgFK8rYZo%2BmS6WkknUarx2CfwwzdqklxeePdv6ns3iG4gl1aVIl31l%2BLp9NTB8WMlyFvhINe5jEXY6h8hzKkU2kclFf%2B4121YTsj36pcQ6EAvwslDwTZYmUTdWeWvsgVe8NY2IAjZaXV8Q33FN%2FjjjdVE5hi8VckTSkT2dofWyzo8SKHuq1RMHlmjue1kdEXSbCImsx%2BmW8D5D7qi3RO00TDVY9MJusq&X-Amz-Signature=6685e0e6030247a54f0934bac0d5e43e843d21d3852990d3cc9e4b40a355acba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZO7IEVOB%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAYUq9bkf8eVj6Jfy3d3QjvYWruzbWeKXtcR0h0weS85AiB0gBzZqR4i8XzsCMZWGbMeTygUg5pzu7qE0HCNp0J2TSr%2FAwhUEAAaDDYzNzQyMzE4MzgwNSIME2%2FobsFG8AU2%2F5tjKtwD4xNXecMbvJaMiewan0ycHco0eFnCr496hq%2Fkg5YHpNy5u0oYLNzD3ILe1ZrOQQLzcDf8G7jJWurBBY0oVeK6ExunIQO1tvtrKSZ2wUjcn02ltR0Q2EiOXzhBOFmdrJbsv%2BuebzSD90n6JnG9%2Fy6KAhibKfhGN3ANxaXNs18Yk2wua57b7dfoFCYLSavua1BcSYulGNmdz94j8E0DRMPeQ%2FfJNMhIRycCp%2FUQN7ciFMUqmOn84gTOggup08U1DYn%2BqkUQB4htTki0DJunKNRZewqAzR4ppASpmofhauG0P4dVcChTFFgvD%2BEO0YHmulZVxjtZkKzanSGEojWwLRo%2FlmrJVHOvJLFpLsnGHiYNPH8TKUpdEJha9QietiHWwhKyAO2GzVz3lfA4oWTAPYUYYL%2FRpl%2Fy6S%2B%2FQWbFUeT3JYhZLbqFG3GfAnZ%2BlwWQt9B%2BTzJZR6XGJWWjsyCyuxkMr8mn1L%2FXedLVJ2XnZXyLSx5%2BBlsx7sRAc8Umjr%2BNkC6F39qgQI0zVVy3GkEh2ebx5aARrCRWp0ltKVcOr6nAUlFoSgk9%2FBQljv6kiy%2Br3EzJCEvNP13KBCUuUe7RrVDXkm%2BWC1Gz1EiuG1pSpyqbJw0%2B74Sd2OVChBkZYPwwrqTH1AY6pgFK8rYZo%2BmS6WkknUarx2CfwwzdqklxeePdv6ns3iG4gl1aVIl31l%2BLp9NTB8WMlyFvhINe5jEXY6h8hzKkU2kclFf%2B4121YTsj36pcQ6EAvwslDwTZYmUTdWeWvsgVe8NY2IAjZaXV8Q33FN%2FjjjdVE5hi8VckTSkT2dofWyzo8SKHuq1RMHlmjue1kdEXSbCImsx%2BmW8D5D7qi3RO00TDVY9MJusq&X-Amz-Signature=e1573a3431fcaabe28e7200a62ae75c5df6b6d5615c2742359d177207fb82cb3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZO7IEVOB%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAYUq9bkf8eVj6Jfy3d3QjvYWruzbWeKXtcR0h0weS85AiB0gBzZqR4i8XzsCMZWGbMeTygUg5pzu7qE0HCNp0J2TSr%2FAwhUEAAaDDYzNzQyMzE4MzgwNSIME2%2FobsFG8AU2%2F5tjKtwD4xNXecMbvJaMiewan0ycHco0eFnCr496hq%2Fkg5YHpNy5u0oYLNzD3ILe1ZrOQQLzcDf8G7jJWurBBY0oVeK6ExunIQO1tvtrKSZ2wUjcn02ltR0Q2EiOXzhBOFmdrJbsv%2BuebzSD90n6JnG9%2Fy6KAhibKfhGN3ANxaXNs18Yk2wua57b7dfoFCYLSavua1BcSYulGNmdz94j8E0DRMPeQ%2FfJNMhIRycCp%2FUQN7ciFMUqmOn84gTOggup08U1DYn%2BqkUQB4htTki0DJunKNRZewqAzR4ppASpmofhauG0P4dVcChTFFgvD%2BEO0YHmulZVxjtZkKzanSGEojWwLRo%2FlmrJVHOvJLFpLsnGHiYNPH8TKUpdEJha9QietiHWwhKyAO2GzVz3lfA4oWTAPYUYYL%2FRpl%2Fy6S%2B%2FQWbFUeT3JYhZLbqFG3GfAnZ%2BlwWQt9B%2BTzJZR6XGJWWjsyCyuxkMr8mn1L%2FXedLVJ2XnZXyLSx5%2BBlsx7sRAc8Umjr%2BNkC6F39qgQI0zVVy3GkEh2ebx5aARrCRWp0ltKVcOr6nAUlFoSgk9%2FBQljv6kiy%2Br3EzJCEvNP13KBCUuUe7RrVDXkm%2BWC1Gz1EiuG1pSpyqbJw0%2B74Sd2OVChBkZYPwwrqTH1AY6pgFK8rYZo%2BmS6WkknUarx2CfwwzdqklxeePdv6ns3iG4gl1aVIl31l%2BLp9NTB8WMlyFvhINe5jEXY6h8hzKkU2kclFf%2B4121YTsj36pcQ6EAvwslDwTZYmUTdWeWvsgVe8NY2IAjZaXV8Q33FN%2FjjjdVE5hi8VckTSkT2dofWyzo8SKHuq1RMHlmjue1kdEXSbCImsx%2BmW8D5D7qi3RO00TDVY9MJusq&X-Amz-Signature=205aad55475538045518444fe335be82112a1c2d5f3ba63317afcb3415c1199f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466437GET47%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEcW2KAczPU%2F%2BBFc%2FxPTnbCWqdCGQggPwICn9s1EDvuBAiBrgGX3iOHXLrbn98k27P%2BNUHwiziHp8r9OjEpGLzHivSr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMPkupi4uV6uovpie5KtwDYHCdW4g3%2Bz%2BlDAEr5rT6Xzrj448pWNAD6GlXdrhPmoACJ82hFEDsVO5TOB%2BzkNS8avL2iYZABgtAj1rKM4CONHNIXDivN9wzAVr8CzA4NcGZOjoDULrbq3QbXoIEzU0B2%2F%2F7UbxAlTpwjibOOGcE1uLv49SXhB9gEGAIT%2B34f7vK9KpSiHXIAgayCv8CcJ461BkiT11%2F%2FXM8%2Bl9zobfu3pTbFn3AsnZLqW3xMD6%2FF5Tu5dDUvdlnCU4pxFpXSt3EIHg9rYcyycL05V1xIDwOa%2FcVfBSWMJafBlB3AphS5wSzH0bl%2FH1KAoVgf98MqniXwAYGdni0Fh5WaLMt63koI5QyBF6SasLfUVZiGGIIspGOrpBaUo6ZPdM5X4lhFbVZDWO8hdVX8XNEQ%2B%2BNF%2BFMGdCFO814WZG0UDk3uUsbGzzKVzd0AGupCb313g6iAHlW6JuLPrb%2Fs5su6c8xplALa%2F7PKJE%2B2jtZvt45W4jMxyB%2FOoYJe1speC%2F9YciXVYO9e988UfbnMagPF4NM85BM4wuRQneuf4NukEP8a%2FZhZ3WCpRydChsh1E4CBke58I2MaMZGHPK59WzWSo5kKXG8E%2FYnDj%2B3lgs4elxYopuGN%2B5etiQFdEGhbG0sbtMw2KTH1AY6pgFLU5Yj8fHT4lArpZ44RbTqlIzxerEILDD%2BAv0Ub4UEoehha5ZlKnGt1B2hDOjhOutrnpK%2Blowu3AiiPyd6QjESb0%2BJje6ysJYDgGGz1wxJ63UiXWrKMrah4ac7MP4jvzUZppxagPhMKTjJwzv1kAeYkhc9RHNsym7DPqrCEiV2bgzjEUKZ0XHtYpFD45F2YEBZgmmw9Onw27%2FtxYY8EERS66uP51%2BJ&X-Amz-Signature=a067fb1f87bd3b6dc097fbfab01260a95e58b4d1d6a5163017f19400a955f4d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KSB5RSO%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHvAOMimhMoCS3BR3n497Zf1MOTcWjx4cYP2GRj75BZnAiA%2F%2B%2FzbrM1%2FZjYvl1pzEnuCQ0z8GKYhH2yb5cZ5Caa6OCr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMMcuDrXsx%2Ba%2FSW%2BuaKtwDXgSgbSMr3LBHKdqiK%2BFi3xAq4SMeInmumL1lsSEkFFjq8WQ7M5Nki4Y7xABO7RSzxXCxkrM1J4u4MBWuNYmhEWcl398pZRUg7rrc75eYS50rJOr9xlBLaHpe1WRV%2BTwd%2Fl8cm5r%2Bf05l2tTB1EWQSoDOGgToYol7HE829ZkmJlKAHfHJ5AImTHq9AcaBrq5ngo%2FGM89v6ekT2lR2jRWKS9EbiLhETcuTq%2Bj9wwq8%2BRoxTyzTVFzvAVhT0C%2Bn3FZ0Eqdy2Gg8mps0UFIoCICyF15uiayEVVvVofHT%2FJmBNrNHuArJYUUWjX9MpPYwCELSG40ze%2BprdkAufBeVkrQJtgOk81szV4sI7WLHieHCgfD30f4oProlwvK8lAna1%2FLU3GkJBdzL7MDY%2FG8S32w4fj%2FziOoMdhZdFhOHbETxUTAeWa262VBxgxcI0cvZxE5sZ445BIF9R1J7u52rGt4zGqGPhgUVJDaZ%2Fa4wkWPJg%2BwYVr%2FgTTY3gqHiVC%2BDBauzzNJ8%2FSl8G4RJ56a90anaq0xlWXwnobsA7AGp7Pzwpdn80%2FRqif4oZVjFFkeyNTylOA0fRQcsOli3QHZz%2BlDsCUYUmZhXIJoRda2Rasqq5om3yMOv4v%2Fu7s7yzBIwiaTH1AY6pgEyVCWW0NuRKd%2F58UvjP9cJkIYf6Imm5IX9j0lb7DeXbzGCwnP6Ua%2F3TNqX4uQ1UYxwW5K5KoYmhVqQy3xA7MEJ0KBycPazSGHF2X2btV9QvkyWFwHRRxtGQNVoERNOl%2B1cHwcpqdDKF7fa9nir2wsWjaCGOzhAIegksuVprYTtAYxiO%2FYDTz7gmSrLFhCtEXJfJ8SMFOpsruM7ecf7RHdIHg0DvLMv&X-Amz-Signature=7153653f1aeb5426a38b1bb053a65306dedd138f35f92c14bedcbf03aafdd5f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KSB5RSO%2F20260828%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260828T195401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHvAOMimhMoCS3BR3n497Zf1MOTcWjx4cYP2GRj75BZnAiA%2F%2B%2FzbrM1%2FZjYvl1pzEnuCQ0z8GKYhH2yb5cZ5Caa6OCr%2FAwhTEAAaDDYzNzQyMzE4MzgwNSIMMcuDrXsx%2Ba%2FSW%2BuaKtwDXgSgbSMr3LBHKdqiK%2BFi3xAq4SMeInmumL1lsSEkFFjq8WQ7M5Nki4Y7xABO7RSzxXCxkrM1J4u4MBWuNYmhEWcl398pZRUg7rrc75eYS50rJOr9xlBLaHpe1WRV%2BTwd%2Fl8cm5r%2Bf05l2tTB1EWQSoDOGgToYol7HE829ZkmJlKAHfHJ5AImTHq9AcaBrq5ngo%2FGM89v6ekT2lR2jRWKS9EbiLhETcuTq%2Bj9wwq8%2BRoxTyzTVFzvAVhT0C%2Bn3FZ0Eqdy2Gg8mps0UFIoCICyF15uiayEVVvVofHT%2FJmBNrNHuArJYUUWjX9MpPYwCELSG40ze%2BprdkAufBeVkrQJtgOk81szV4sI7WLHieHCgfD30f4oProlwvK8lAna1%2FLU3GkJBdzL7MDY%2FG8S32w4fj%2FziOoMdhZdFhOHbETxUTAeWa262VBxgxcI0cvZxE5sZ445BIF9R1J7u52rGt4zGqGPhgUVJDaZ%2Fa4wkWPJg%2BwYVr%2FgTTY3gqHiVC%2BDBauzzNJ8%2FSl8G4RJ56a90anaq0xlWXwnobsA7AGp7Pzwpdn80%2FRqif4oZVjFFkeyNTylOA0fRQcsOli3QHZz%2BlDsCUYUmZhXIJoRda2Rasqq5om3yMOv4v%2Fu7s7yzBIwiaTH1AY6pgEyVCWW0NuRKd%2F58UvjP9cJkIYf6Imm5IX9j0lb7DeXbzGCwnP6Ua%2F3TNqX4uQ1UYxwW5K5KoYmhVqQy3xA7MEJ0KBycPazSGHF2X2btV9QvkyWFwHRRxtGQNVoERNOl%2B1cHwcpqdDKF7fa9nir2wsWjaCGOzhAIegksuVprYTtAYxiO%2FYDTz7gmSrLFhCtEXJfJ8SMFOpsruM7ecf7RHdIHg0DvLMv&X-Amz-Signature=896f117f357ff78136e99dc24ae946d77224af53bf4e48c2ac54e50761b3fd8d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
