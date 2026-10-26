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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466URTBQYJO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJGMEQCIAeSG7E6j7huujdJt5%2FXmXiTEm3B59jvbw1jptVb0UYbAiAXTogWSFcrb8mZS3FWdNzaBhqqNLUbvsVt%2B1Afh1LfxSqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU2yStPPMWRDDifYCKtwDz9HYRqz6xtOJWMGaFrQugL6NKrxhMh07KGrnOrkOVXfcYJtStleTqfM2OyCR8GVxffuT7ttes4s1ldI1988xKPIMVJt%2FcGIFjlAL8cGseQIvLGEFNAqJsWsor9Ejxat1b1NeTYH5Lh6Ui6iVStwV91ARbh9lnKPjeACWS%2Btz3p5dqdCD190dXJALMtZE6S27Eh4cnTwNJoAEttbYZjRdNCJN3x5ri36%2FdpEmOiuLdU3k3yHPpZX6cQedRdV88ItbqTSZVHd6zOjdzz3W0jeedx1oNcHjFhUKCnW1i%2Fqu4g2X%2B1DmUdEM6wGzX4unYwn4HoyPBDo1%2FLivcLH%2Fhpz8oBV5Cul2PSLzapAubGhgo2zQPaSiJsB5HYK%2FwIqXeFDVtZuTaVUCR2WXirH95oeYYXwYqxxLCVHWxoNx%2B8X72SGjMYpXbjlpmxtGfJ1kueMMEsAkAB7LIyJh3JZpsXXBkqEL86hUduNna8lY51zkfpdFk1JOkkhCTqD2pdkv2qqvw%2F%2Byyt2PL69GcglkgAXcu067yb%2F0glH5r%2FScQPGy%2FQXg0dMDwWuvSyQ%2BVhInKRKHAZNbtCdgmaOojNEhii%2BK20quBbR6PLu58F8vDOaD7zAhRT03Pwt4NADXeQswkJ791gY6pgEI8qqbbFe2edlpkZAb6GJdzJHXrdMqxnRXeEe7UhvgG2glveydRlZYEsHNSXC4BNJSPS984TvE7ep8%2Fff8mixEb4Srpj%2BhTMOO9dgEGx%2FwtJn8mg8l3H671yPDMlzOOIzxST%2F6Sn7K0aWs08Coo0wLHslFOq8fflvWPP%2BJg1FwPefiWx8%2ByQiMrjgIMNfP4vaIl5zqyYE%2FI44U1OUCUj61Z7EnvJxI&X-Amz-Signature=c88e010fd55bdfd843e0878b359d985a02edd4e902dc2c5bd291d27e73fff8f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466URTBQYJO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJGMEQCIAeSG7E6j7huujdJt5%2FXmXiTEm3B59jvbw1jptVb0UYbAiAXTogWSFcrb8mZS3FWdNzaBhqqNLUbvsVt%2B1Afh1LfxSqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU2yStPPMWRDDifYCKtwDz9HYRqz6xtOJWMGaFrQugL6NKrxhMh07KGrnOrkOVXfcYJtStleTqfM2OyCR8GVxffuT7ttes4s1ldI1988xKPIMVJt%2FcGIFjlAL8cGseQIvLGEFNAqJsWsor9Ejxat1b1NeTYH5Lh6Ui6iVStwV91ARbh9lnKPjeACWS%2Btz3p5dqdCD190dXJALMtZE6S27Eh4cnTwNJoAEttbYZjRdNCJN3x5ri36%2FdpEmOiuLdU3k3yHPpZX6cQedRdV88ItbqTSZVHd6zOjdzz3W0jeedx1oNcHjFhUKCnW1i%2Fqu4g2X%2B1DmUdEM6wGzX4unYwn4HoyPBDo1%2FLivcLH%2Fhpz8oBV5Cul2PSLzapAubGhgo2zQPaSiJsB5HYK%2FwIqXeFDVtZuTaVUCR2WXirH95oeYYXwYqxxLCVHWxoNx%2B8X72SGjMYpXbjlpmxtGfJ1kueMMEsAkAB7LIyJh3JZpsXXBkqEL86hUduNna8lY51zkfpdFk1JOkkhCTqD2pdkv2qqvw%2F%2Byyt2PL69GcglkgAXcu067yb%2F0glH5r%2FScQPGy%2FQXg0dMDwWuvSyQ%2BVhInKRKHAZNbtCdgmaOojNEhii%2BK20quBbR6PLu58F8vDOaD7zAhRT03Pwt4NADXeQswkJ791gY6pgEI8qqbbFe2edlpkZAb6GJdzJHXrdMqxnRXeEe7UhvgG2glveydRlZYEsHNSXC4BNJSPS984TvE7ep8%2Fff8mixEb4Srpj%2BhTMOO9dgEGx%2FwtJn8mg8l3H671yPDMlzOOIzxST%2F6Sn7K0aWs08Coo0wLHslFOq8fflvWPP%2BJg1FwPefiWx8%2ByQiMrjgIMNfP4vaIl5zqyYE%2FI44U1OUCUj61Z7EnvJxI&X-Amz-Signature=c750df67cdc27c2bc3ca618d3311776263cf2b15119d4818ef02d9858bd0a8ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466URTBQYJO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJGMEQCIAeSG7E6j7huujdJt5%2FXmXiTEm3B59jvbw1jptVb0UYbAiAXTogWSFcrb8mZS3FWdNzaBhqqNLUbvsVt%2B1Afh1LfxSqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU2yStPPMWRDDifYCKtwDz9HYRqz6xtOJWMGaFrQugL6NKrxhMh07KGrnOrkOVXfcYJtStleTqfM2OyCR8GVxffuT7ttes4s1ldI1988xKPIMVJt%2FcGIFjlAL8cGseQIvLGEFNAqJsWsor9Ejxat1b1NeTYH5Lh6Ui6iVStwV91ARbh9lnKPjeACWS%2Btz3p5dqdCD190dXJALMtZE6S27Eh4cnTwNJoAEttbYZjRdNCJN3x5ri36%2FdpEmOiuLdU3k3yHPpZX6cQedRdV88ItbqTSZVHd6zOjdzz3W0jeedx1oNcHjFhUKCnW1i%2Fqu4g2X%2B1DmUdEM6wGzX4unYwn4HoyPBDo1%2FLivcLH%2Fhpz8oBV5Cul2PSLzapAubGhgo2zQPaSiJsB5HYK%2FwIqXeFDVtZuTaVUCR2WXirH95oeYYXwYqxxLCVHWxoNx%2B8X72SGjMYpXbjlpmxtGfJ1kueMMEsAkAB7LIyJh3JZpsXXBkqEL86hUduNna8lY51zkfpdFk1JOkkhCTqD2pdkv2qqvw%2F%2Byyt2PL69GcglkgAXcu067yb%2F0glH5r%2FScQPGy%2FQXg0dMDwWuvSyQ%2BVhInKRKHAZNbtCdgmaOojNEhii%2BK20quBbR6PLu58F8vDOaD7zAhRT03Pwt4NADXeQswkJ791gY6pgEI8qqbbFe2edlpkZAb6GJdzJHXrdMqxnRXeEe7UhvgG2glveydRlZYEsHNSXC4BNJSPS984TvE7ep8%2Fff8mixEb4Srpj%2BhTMOO9dgEGx%2FwtJn8mg8l3H671yPDMlzOOIzxST%2F6Sn7K0aWs08Coo0wLHslFOq8fflvWPP%2BJg1FwPefiWx8%2ByQiMrjgIMNfP4vaIl5zqyYE%2FI44U1OUCUj61Z7EnvJxI&X-Amz-Signature=eee5f2fd58bc10961fa1ab69a0d231d8392601875c914b7f0fef2fd42f60b82a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QACIF2XO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQC7uHLmKbRQe6yX1L7BfSj8Fv3o4YCpr4fu%2FkHtLesD6QIgO4IsZojmy%2FVOKAh4xXFDAHT16MpbGmc53F06lZLT1VkqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBtavbr1TFttWExlryrcA7DectSc0C4cHItUJH4nkKElts4qUrz3%2BAb9ptdZDuQponVwGuZtsf7aoChPw1S6zNgkGwWCQ1gsKcWV6kfy961Rx89Yk16Cl9ktMEiNd1r9JFn%2BGGahf5dgVwl3%2FDT6uHz%2BxyRU%2B8C6F%2BdRaBRoAlrqEQ8KUMRGO2LuaqCdDZzIk2YMFkR59kcXnWcMlr7AT18wWLaRda6E81acHaW6FfoRBOj8P5BYmFiYONIxPr5ihm7iU%2BrRrzIOlCSfEvh9XbRjgPiXBqcEFRpPcBn2VzyosWEkbLkDXcWj22KOPjdurGk1Jgzba32Rzd%2By5JcyY2h7ClS1hwZiejeN74bKMrBwR%2BTOT%2F5hXG8goCSV20heb4%2Fzy9XSkXrwBPLhrHWbE0g2IUBMNz0DR%2FjDoqHXCFSQbOXJdkFw67pOmVOynF5VaHxSOeVY4i7krPHfIK7M%2FJ%2BNoULetzNMH5MMhsV8n7whtKtL4mQxXn96NtdbjLZGHdTl5179g2LiOZbTbE58QEZ66D4L2hhPUq7jPZ6Kl1AfNXIOMJoZrjr45i4O05qgdEqziY6DJsURqUOkvHimh9ZnomgVf%2BtPyKeMGjefzOXSnlOJzXvUC2pwNOEYGSr%2F%2ByBBZVyUFYlOWBwoMN6f%2FdYGOqUBzWRSev%2B4HXArOhopulIJI0rR7hOzSDDkaIo40jK3R9JXq75%2Fvt%2FZNKFt%2FRsNaG%2FdBFOhkqDb86fjAsIPhcckW0MN471JTsX99egPvat1xUhyAJYIiFlj%2FR4qt62NYHinmogN0ShdrZNC4wdmtLepEmanX9b9I7Tz1iJFa%2FCToz9Tbq050pQCyZsyRUOcPPPhf%2FRvMlSB%2FABnqUHRn4Ts69EXfEFQ&X-Amz-Signature=50e48a7e6d13b80e2a1e0eb3cd7bf0556d13081204dd6d7cff2337f08538c5a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QACIF2XO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQC7uHLmKbRQe6yX1L7BfSj8Fv3o4YCpr4fu%2FkHtLesD6QIgO4IsZojmy%2FVOKAh4xXFDAHT16MpbGmc53F06lZLT1VkqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBtavbr1TFttWExlryrcA7DectSc0C4cHItUJH4nkKElts4qUrz3%2BAb9ptdZDuQponVwGuZtsf7aoChPw1S6zNgkGwWCQ1gsKcWV6kfy961Rx89Yk16Cl9ktMEiNd1r9JFn%2BGGahf5dgVwl3%2FDT6uHz%2BxyRU%2B8C6F%2BdRaBRoAlrqEQ8KUMRGO2LuaqCdDZzIk2YMFkR59kcXnWcMlr7AT18wWLaRda6E81acHaW6FfoRBOj8P5BYmFiYONIxPr5ihm7iU%2BrRrzIOlCSfEvh9XbRjgPiXBqcEFRpPcBn2VzyosWEkbLkDXcWj22KOPjdurGk1Jgzba32Rzd%2By5JcyY2h7ClS1hwZiejeN74bKMrBwR%2BTOT%2F5hXG8goCSV20heb4%2Fzy9XSkXrwBPLhrHWbE0g2IUBMNz0DR%2FjDoqHXCFSQbOXJdkFw67pOmVOynF5VaHxSOeVY4i7krPHfIK7M%2FJ%2BNoULetzNMH5MMhsV8n7whtKtL4mQxXn96NtdbjLZGHdTl5179g2LiOZbTbE58QEZ66D4L2hhPUq7jPZ6Kl1AfNXIOMJoZrjr45i4O05qgdEqziY6DJsURqUOkvHimh9ZnomgVf%2BtPyKeMGjefzOXSnlOJzXvUC2pwNOEYGSr%2F%2ByBBZVyUFYlOWBwoMN6f%2FdYGOqUBzWRSev%2B4HXArOhopulIJI0rR7hOzSDDkaIo40jK3R9JXq75%2Fvt%2FZNKFt%2FRsNaG%2FdBFOhkqDb86fjAsIPhcckW0MN471JTsX99egPvat1xUhyAJYIiFlj%2FR4qt62NYHinmogN0ShdrZNC4wdmtLepEmanX9b9I7Tz1iJFa%2FCToz9Tbq050pQCyZsyRUOcPPPhf%2FRvMlSB%2FABnqUHRn4Ts69EXfEFQ&X-Amz-Signature=563d136bbbd2a0041d6e50901b74244f40ff1c59a8c422513444a0d2fd9e4e66&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QACIF2XO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQC7uHLmKbRQe6yX1L7BfSj8Fv3o4YCpr4fu%2FkHtLesD6QIgO4IsZojmy%2FVOKAh4xXFDAHT16MpbGmc53F06lZLT1VkqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBtavbr1TFttWExlryrcA7DectSc0C4cHItUJH4nkKElts4qUrz3%2BAb9ptdZDuQponVwGuZtsf7aoChPw1S6zNgkGwWCQ1gsKcWV6kfy961Rx89Yk16Cl9ktMEiNd1r9JFn%2BGGahf5dgVwl3%2FDT6uHz%2BxyRU%2B8C6F%2BdRaBRoAlrqEQ8KUMRGO2LuaqCdDZzIk2YMFkR59kcXnWcMlr7AT18wWLaRda6E81acHaW6FfoRBOj8P5BYmFiYONIxPr5ihm7iU%2BrRrzIOlCSfEvh9XbRjgPiXBqcEFRpPcBn2VzyosWEkbLkDXcWj22KOPjdurGk1Jgzba32Rzd%2By5JcyY2h7ClS1hwZiejeN74bKMrBwR%2BTOT%2F5hXG8goCSV20heb4%2Fzy9XSkXrwBPLhrHWbE0g2IUBMNz0DR%2FjDoqHXCFSQbOXJdkFw67pOmVOynF5VaHxSOeVY4i7krPHfIK7M%2FJ%2BNoULetzNMH5MMhsV8n7whtKtL4mQxXn96NtdbjLZGHdTl5179g2LiOZbTbE58QEZ66D4L2hhPUq7jPZ6Kl1AfNXIOMJoZrjr45i4O05qgdEqziY6DJsURqUOkvHimh9ZnomgVf%2BtPyKeMGjefzOXSnlOJzXvUC2pwNOEYGSr%2F%2ByBBZVyUFYlOWBwoMN6f%2FdYGOqUBzWRSev%2B4HXArOhopulIJI0rR7hOzSDDkaIo40jK3R9JXq75%2Fvt%2FZNKFt%2FRsNaG%2FdBFOhkqDb86fjAsIPhcckW0MN471JTsX99egPvat1xUhyAJYIiFlj%2FR4qt62NYHinmogN0ShdrZNC4wdmtLepEmanX9b9I7Tz1iJFa%2FCToz9Tbq050pQCyZsyRUOcPPPhf%2FRvMlSB%2FABnqUHRn4Ts69EXfEFQ&X-Amz-Signature=06d33ee5ea9e78a60a8aa9c1095ecb88c78ab6febda949e3e6df709be211eff1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QACIF2XO%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQC7uHLmKbRQe6yX1L7BfSj8Fv3o4YCpr4fu%2FkHtLesD6QIgO4IsZojmy%2FVOKAh4xXFDAHT16MpbGmc53F06lZLT1VkqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBtavbr1TFttWExlryrcA7DectSc0C4cHItUJH4nkKElts4qUrz3%2BAb9ptdZDuQponVwGuZtsf7aoChPw1S6zNgkGwWCQ1gsKcWV6kfy961Rx89Yk16Cl9ktMEiNd1r9JFn%2BGGahf5dgVwl3%2FDT6uHz%2BxyRU%2B8C6F%2BdRaBRoAlrqEQ8KUMRGO2LuaqCdDZzIk2YMFkR59kcXnWcMlr7AT18wWLaRda6E81acHaW6FfoRBOj8P5BYmFiYONIxPr5ihm7iU%2BrRrzIOlCSfEvh9XbRjgPiXBqcEFRpPcBn2VzyosWEkbLkDXcWj22KOPjdurGk1Jgzba32Rzd%2By5JcyY2h7ClS1hwZiejeN74bKMrBwR%2BTOT%2F5hXG8goCSV20heb4%2Fzy9XSkXrwBPLhrHWbE0g2IUBMNz0DR%2FjDoqHXCFSQbOXJdkFw67pOmVOynF5VaHxSOeVY4i7krPHfIK7M%2FJ%2BNoULetzNMH5MMhsV8n7whtKtL4mQxXn96NtdbjLZGHdTl5179g2LiOZbTbE58QEZ66D4L2hhPUq7jPZ6Kl1AfNXIOMJoZrjr45i4O05qgdEqziY6DJsURqUOkvHimh9ZnomgVf%2BtPyKeMGjefzOXSnlOJzXvUC2pwNOEYGSr%2F%2ByBBZVyUFYlOWBwoMN6f%2FdYGOqUBzWRSev%2B4HXArOhopulIJI0rR7hOzSDDkaIo40jK3R9JXq75%2Fvt%2FZNKFt%2FRsNaG%2FdBFOhkqDb86fjAsIPhcckW0MN471JTsX99egPvat1xUhyAJYIiFlj%2FR4qt62NYHinmogN0ShdrZNC4wdmtLepEmanX9b9I7Tz1iJFa%2FCToz9Tbq050pQCyZsyRUOcPPPhf%2FRvMlSB%2FABnqUHRn4Ts69EXfEFQ&X-Amz-Signature=0916c3c34618925ad25150ec2bb748f7de9026b6076d92c988338328def2d16f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664IB6KH6G%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQDDs5esL0Q0ZFuGD0tOHktmRRy18InyyaZGNQ1q7DJMBwIgB6IttSbI1dBRFXJ4Dezwvh%2F8jIqeyKZCfoLOU3rXV2cqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEh3HeqlSGdaGys51ircA06y4VhsuvJeBVIN3MsxTnxKW%2Bhzksp1WJUcUkc2Ys%2BWOcAxeeG896Y7IMa95N4IF0vXolSZSAEFJKn%2BZi3IS7F8jZhkmEtW2XRofws9Ju%2Fctr0Khoc%2F5XjuomXRVfo6fcZLNQjn3PrrCEAlP%2FEUHp0k9qJ%2FUz%2BO%2BO3BSg43Q6sKUp%2BKo8zCBXpUZZUE8nNtxn%2BUvZA2pLsjNwNuZaC9dwyJ3nnmNibqBx0BarPMrwx9khr%2BVa7cR9Ba6fJSrWeEWeY6X2uUh7tPJNVUH0BrkMwN8QZ9GMQgmLBuK4%2FVMKmP9fG49h6NUijnNtVPgMSRDVNkMeI%2B3ChMf65VEYbBqTkk5S14xeQX0epcNtVGYnyEvt7Nmk1YWuZ1XvEn%2BFsmAs3QrkXCHfkA6gIasRKkrgxnlCl3fLCHu6UB5KiTd6B%2FH50wYV77ndh94TKYtmBMSSUZeVOUjCA2I5y5Hu3zKjdsihv0h1J6lZwSVH9Vbc48AroirQtOK51PYGJAf24lXG9yod70Ma5IWZRrhZjp9yv8rJFx3s3mFwXOxu1WP%2F7dk9gkTrKIxllSl272rMjfx2yULRYqCOpSp67o5imzc6C6KYtTQtVmbrezJp6H6Tktx5mBEvwWb0H6KTUoMJOe%2FdYGOqUBAtIre9YHnvxJ9ERvqbVfF4rsXHLwyQLC8X4g3CINvwAEGsB5cPqyny11PtYlR2rEC4UllrEZ2DGs%2F2P%2FiEjmc6Lb%2BERk7Byp8vpzKvjg%2Bl8R5gOxtAQx0ZmoY3D%2Fmkh%2BtN6t0wK1DUtGAQM7DNukEMwPtgN7D9WCpTu41SeuYOE3yQN%2BNiq061Wv%2Bqu9QrPCfZu4a%2Fwy7fBFXYqp2i8cuS%2Bwt0x9&X-Amz-Signature=1a53855874a3a6c5c5ed55eec07b1baab9a0b4445559dd66403c95f622243d17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MVH6CIH%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCg%2BucCW3nEoab5K0F0tDi59G5XeDPsFEJiMaH44TNOPAIgG7VYUA%2Bx8KxRTB86ho8ErlmvOPEnVqSBKUygLVSp9fwqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL4d8eGBgugrHmo5FSrcA4SwxNns%2Fm7abSkw6P%2BUkUtDTyOGs2zT2KLGSCrXD9srbmJpC94J7uYZlC57hE0Qj%2BTTt%2Bhdr%2FUHkkoO42mfgX%2FyNIfSqEkQ%2BW0RhtxN5%2FceJvgRrbxwPf4ZI%2FJynlLtnnYJT04D9x86yClhrBx8HAHpU%2BALqs4z4vcKjU4uoQWTVt1L8RgQrAzIRN%2FTU1awN9zH2PGtqcgb%2Bce%2BlwbTovTBJcbZhUFJuFntUWbv6euiLjP87QfdBeUU8TKrz%2FbAxXD1DMoKInLMDEcBpgSteXvX2xGZGXAhHA2y8dc%2BQkJ3A6ilVEpd%2Fk%2Bp37se6Wf6SN7wCdydoPEogzqozHR%2FqV7%2Fl8tYuPv6%2BmXaZ1f0flgIQLtF2Sjx%2Fnl%2F3OTzd52sieyO50jcu957rcHApxfexB2w5gijp5MYrDWJn1EL8F4I%2B9erlRqAEPZiNmKSoJRQH%2B9bmkiB5MRUGhPMoTuNRXN6NM4Z3fM%2FppSTVYPdbgtBt9Tzme121c6iDnNJJ%2Bp0BiV7%2BpauU8D4oJii87oBp9OtpVjrKDfmchAPLVUDoTVt9HFayyszfgXyiuTH%2BtQ5ct0dm6TnP4qM4nxHqD5PPW%2BWclYIjs7H%2B3uCOmJ%2BYSY1r5Nsrs15ruGcz8iLMJOe%2FdYGOqUBMcIcaWHwXbQZPT45HgQxHg3TNKOGiDdcQ2jRYo2v576Fa8zXHKwClx1G76Kioe7f4twqFplIslkARMjioritLmOG48c38CfM67wBdiA%2Fqrq4Y0Pwx%2BgEVtBkQsnkwjgdjpItVjYvdSTlbyapb7Z21KS4fmGot2kh%2BJv88btNhxdeHq4KtHBUmMg6HoZComr7IMrQTJdINFfNzcnVr%2FMjmH8%2B2XQN&X-Amz-Signature=0ef4dfce0b15948ddb7bc62309816540a4b7db8101538fa44ebb13408f611b7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MVH6CIH%2F20261026%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261026T145113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCg%2BucCW3nEoab5K0F0tDi59G5XeDPsFEJiMaH44TNOPAIgG7VYUA%2Bx8KxRTB86ho8ErlmvOPEnVqSBKUygLVSp9fwqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL4d8eGBgugrHmo5FSrcA4SwxNns%2Fm7abSkw6P%2BUkUtDTyOGs2zT2KLGSCrXD9srbmJpC94J7uYZlC57hE0Qj%2BTTt%2Bhdr%2FUHkkoO42mfgX%2FyNIfSqEkQ%2BW0RhtxN5%2FceJvgRrbxwPf4ZI%2FJynlLtnnYJT04D9x86yClhrBx8HAHpU%2BALqs4z4vcKjU4uoQWTVt1L8RgQrAzIRN%2FTU1awN9zH2PGtqcgb%2Bce%2BlwbTovTBJcbZhUFJuFntUWbv6euiLjP87QfdBeUU8TKrz%2FbAxXD1DMoKInLMDEcBpgSteXvX2xGZGXAhHA2y8dc%2BQkJ3A6ilVEpd%2Fk%2Bp37se6Wf6SN7wCdydoPEogzqozHR%2FqV7%2Fl8tYuPv6%2BmXaZ1f0flgIQLtF2Sjx%2Fnl%2F3OTzd52sieyO50jcu957rcHApxfexB2w5gijp5MYrDWJn1EL8F4I%2B9erlRqAEPZiNmKSoJRQH%2B9bmkiB5MRUGhPMoTuNRXN6NM4Z3fM%2FppSTVYPdbgtBt9Tzme121c6iDnNJJ%2Bp0BiV7%2BpauU8D4oJii87oBp9OtpVjrKDfmchAPLVUDoTVt9HFayyszfgXyiuTH%2BtQ5ct0dm6TnP4qM4nxHqD5PPW%2BWclYIjs7H%2B3uCOmJ%2BYSY1r5Nsrs15ruGcz8iLMJOe%2FdYGOqUBMcIcaWHwXbQZPT45HgQxHg3TNKOGiDdcQ2jRYo2v576Fa8zXHKwClx1G76Kioe7f4twqFplIslkARMjioritLmOG48c38CfM67wBdiA%2Fqrq4Y0Pwx%2BgEVtBkQsnkwjgdjpItVjYvdSTlbyapb7Z21KS4fmGot2kh%2BJv88btNhxdeHq4KtHBUmMg6HoZComr7IMrQTJdINFfNzcnVr%2FMjmH8%2B2XQN&X-Amz-Signature=972a6591829d701a60147ced42998e171e04c6dfdf43c12b502eeed3b1ac921f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
