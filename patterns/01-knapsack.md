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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGBBDWUU%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIF277gZKbQEgCuur6G57fBRdMNB81JPtF0XIV4C3wHdWAiAk1%2Bq7JpvtWt9r5jc2MYNngjlQJ26azU8wkvrtvxtHIiqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMnkeFO13eAgUVAAN9KtwDELEprNznr9LRm0UR7tboz%2BvPnoBvqWd1Drqq8fYe4mGM9EilnitW9OGOXBxfmaf6uBr27dpTuck7Ykhmnbtq058OSNpASMMn4nk31z33rER40VGqNhAUIFZIhFgcgVsSgcazp1UN18Imi1YUZsKeb2FBFLBecV3KgDu5WKfrYemHOeugJTythxirGQh4s1q0E46R3ViMKVYGx7rNR6opOBP9ZCMJDqLRiST7hwMsvJkG%2FY9C8M82AYdPL4GmEvSU4hqTx4M9Q5L0ad5lj42Ac2qDgDNFm4FIl89Fq6f%2FLPm4G2qQzywYn9%2FkLCxjL8Ks1KNEdh51JVFA6%2BpQOrWmPTiHKmPfa6Ae4HxjnR2Keu%2F1vv%2FCCT17rLf67OUWbjbV1gX4hwKReRg35t2wpjdq6AdOFCE7DpFDTOfXASHy0KpIfg76%2Fj89pq7NCDaEnlC0FEOR4Gt96hmLp%2BohZcvvk5YzToa0ZM9YR3GIDLVJN6qstK5xV99yhKog4tlPBOiQbDD0P767nFWtG%2F5jI5FkeDGlrhqIu13bR2vRyHbb5Pt036cqk%2FEJVg7lAL1efiLL1L4pqZ5Um7sysd32le6F4Y1GmAzyG9nDT7NViqq0mi1i76hOPTtBpXf3DR4w9a%2BvzQY6pgE2k36TqRZT%2Fcrhyn5avNB%2Fj2eiyvqQp1Jytt4w7eAbGIutFRVX8LmoVA32HeAJu0OSBu7MRYsICudCQtufr290RsHPX82HguLC%2FrqpKMwNp46%2BVQw%2Bqxr8Iv5SuBCE5Pg9lVTO5PJ528EgT4UJAudBBH5NCKodeX2I44gKoqvMYptqmsnKtem5YVMC9H4vvEkgc8L%2BbI2A2ICp4Rz43%2B0nq9XUGBLY&X-Amz-Signature=a70c43b65e59f4a0e4210badda9e47c085f65d4435725bcec59be26e840ce67c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGBBDWUU%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIF277gZKbQEgCuur6G57fBRdMNB81JPtF0XIV4C3wHdWAiAk1%2Bq7JpvtWt9r5jc2MYNngjlQJ26azU8wkvrtvxtHIiqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMnkeFO13eAgUVAAN9KtwDELEprNznr9LRm0UR7tboz%2BvPnoBvqWd1Drqq8fYe4mGM9EilnitW9OGOXBxfmaf6uBr27dpTuck7Ykhmnbtq058OSNpASMMn4nk31z33rER40VGqNhAUIFZIhFgcgVsSgcazp1UN18Imi1YUZsKeb2FBFLBecV3KgDu5WKfrYemHOeugJTythxirGQh4s1q0E46R3ViMKVYGx7rNR6opOBP9ZCMJDqLRiST7hwMsvJkG%2FY9C8M82AYdPL4GmEvSU4hqTx4M9Q5L0ad5lj42Ac2qDgDNFm4FIl89Fq6f%2FLPm4G2qQzywYn9%2FkLCxjL8Ks1KNEdh51JVFA6%2BpQOrWmPTiHKmPfa6Ae4HxjnR2Keu%2F1vv%2FCCT17rLf67OUWbjbV1gX4hwKReRg35t2wpjdq6AdOFCE7DpFDTOfXASHy0KpIfg76%2Fj89pq7NCDaEnlC0FEOR4Gt96hmLp%2BohZcvvk5YzToa0ZM9YR3GIDLVJN6qstK5xV99yhKog4tlPBOiQbDD0P767nFWtG%2F5jI5FkeDGlrhqIu13bR2vRyHbb5Pt036cqk%2FEJVg7lAL1efiLL1L4pqZ5Um7sysd32le6F4Y1GmAzyG9nDT7NViqq0mi1i76hOPTtBpXf3DR4w9a%2BvzQY6pgE2k36TqRZT%2Fcrhyn5avNB%2Fj2eiyvqQp1Jytt4w7eAbGIutFRVX8LmoVA32HeAJu0OSBu7MRYsICudCQtufr290RsHPX82HguLC%2FrqpKMwNp46%2BVQw%2Bqxr8Iv5SuBCE5Pg9lVTO5PJ528EgT4UJAudBBH5NCKodeX2I44gKoqvMYptqmsnKtem5YVMC9H4vvEkgc8L%2BbI2A2ICp4Rz43%2B0nq9XUGBLY&X-Amz-Signature=444f74cbdf2062fb34d48105564420bafa400e24143a8d3d80a8b2bf3f0ce660&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGBBDWUU%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIF277gZKbQEgCuur6G57fBRdMNB81JPtF0XIV4C3wHdWAiAk1%2Bq7JpvtWt9r5jc2MYNngjlQJ26azU8wkvrtvxtHIiqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMnkeFO13eAgUVAAN9KtwDELEprNznr9LRm0UR7tboz%2BvPnoBvqWd1Drqq8fYe4mGM9EilnitW9OGOXBxfmaf6uBr27dpTuck7Ykhmnbtq058OSNpASMMn4nk31z33rER40VGqNhAUIFZIhFgcgVsSgcazp1UN18Imi1YUZsKeb2FBFLBecV3KgDu5WKfrYemHOeugJTythxirGQh4s1q0E46R3ViMKVYGx7rNR6opOBP9ZCMJDqLRiST7hwMsvJkG%2FY9C8M82AYdPL4GmEvSU4hqTx4M9Q5L0ad5lj42Ac2qDgDNFm4FIl89Fq6f%2FLPm4G2qQzywYn9%2FkLCxjL8Ks1KNEdh51JVFA6%2BpQOrWmPTiHKmPfa6Ae4HxjnR2Keu%2F1vv%2FCCT17rLf67OUWbjbV1gX4hwKReRg35t2wpjdq6AdOFCE7DpFDTOfXASHy0KpIfg76%2Fj89pq7NCDaEnlC0FEOR4Gt96hmLp%2BohZcvvk5YzToa0ZM9YR3GIDLVJN6qstK5xV99yhKog4tlPBOiQbDD0P767nFWtG%2F5jI5FkeDGlrhqIu13bR2vRyHbb5Pt036cqk%2FEJVg7lAL1efiLL1L4pqZ5Um7sysd32le6F4Y1GmAzyG9nDT7NViqq0mi1i76hOPTtBpXf3DR4w9a%2BvzQY6pgE2k36TqRZT%2Fcrhyn5avNB%2Fj2eiyvqQp1Jytt4w7eAbGIutFRVX8LmoVA32HeAJu0OSBu7MRYsICudCQtufr290RsHPX82HguLC%2FrqpKMwNp46%2BVQw%2Bqxr8Iv5SuBCE5Pg9lVTO5PJ528EgT4UJAudBBH5NCKodeX2I44gKoqvMYptqmsnKtem5YVMC9H4vvEkgc8L%2BbI2A2ICp4Rz43%2B0nq9XUGBLY&X-Amz-Signature=cabcd0d43374e8e55bd821ee2b2550e3464b7bc5e7ba4dbc8974ecdfcf287d36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKMTTTOB%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIBulR0SePwJttjsergI3PYNoqp0OeE7sOkhkDj%2F5RzjyAiBYVdBj9Wj3sqxRyn8W4bbyy41JBILu6Ylx2tpIHF3CfSqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMjHSYTwWAu8Wt5%2FPZKtwDgrD4r2JjxLHXpRf6RA09DsAt9L%2BtBxGB7XO6THU895RdR4MUF6YMWzpJ8NiM33mhdRDTjGfkktUfmUZlLGgPId3%2FONMXP3YdUvRxulku5Jx3k5%2F4e40BNtlWYnEWK%2BqB8s5McB7EjOhNCd8RQEh%2BZf1b9nkheELEsMhenG1XQGxhUixCQmvVgoTE9OVs58FBwKLRUUTk6VgvNShaN2P3%2BbwoMvU2DY%2F3YvMraABFMX7TVcPLgPgAuFuIidaSby9ZxjOgJo4Jev%2FdtsiwQUz6gXK%2Bj9XTw%2BQyaXGFeKoNdLAZ4hJcWDa32fQQaM%2BpiaCHancSOO6CPW2Qldp9ny67fy%2Bq61whwkXVuqaoZMp9y2dY9ja5YBWkdK%2FnXOWSq87%2BDSy21wi2TusWzltPO%2BlYofrgWoGWrInhYeHrn4O%2B5hO14EvLB24aOZ6CSIFOQvy0cOT2WdT2W4sZ18U0a12QASglZOytKWfo5t53NdPC1hNNdHoTdTQ1lqgaOweNY7WqPINUQUamK8X508m%2FUwGrO91FxTpy9%2FYGJI2Sn0axIqWByltpAZoUhJ2Hy8FD90ELFAgNlE684rlxWR2bVgBbZFkhv5ADH%2Bk1hP7Z3adqMdkKkupkUZMG%2Fj2EWJMw86%2BvzQY6pgH2KkItZTA5Z6DuyZFdbEXyggKfLEz%2FzsB8p2bmWzwnfi32xuKF9HtbwjzVGDkibdY379mcTwsaM%2F7Kk0ZcGDRXK3RQ%2B4gDD4DK2CIpGCvXJt0aP54vw8O8ANwjeUel%2BCX4ZQmTZDQmym4TBGC6AaLaxtlsB1kdHRc%2FGQcj0gM02ylMVst97NnF%2BJ%2FYFn9AAZC%2BWDSDglfFJLJCn7QcPfrX2s0eRRzk&X-Amz-Signature=1a135453edb1f76b58f814fe16845608538c65b5a237f09496b006b72882eaf9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKMTTTOB%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIBulR0SePwJttjsergI3PYNoqp0OeE7sOkhkDj%2F5RzjyAiBYVdBj9Wj3sqxRyn8W4bbyy41JBILu6Ylx2tpIHF3CfSqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMjHSYTwWAu8Wt5%2FPZKtwDgrD4r2JjxLHXpRf6RA09DsAt9L%2BtBxGB7XO6THU895RdR4MUF6YMWzpJ8NiM33mhdRDTjGfkktUfmUZlLGgPId3%2FONMXP3YdUvRxulku5Jx3k5%2F4e40BNtlWYnEWK%2BqB8s5McB7EjOhNCd8RQEh%2BZf1b9nkheELEsMhenG1XQGxhUixCQmvVgoTE9OVs58FBwKLRUUTk6VgvNShaN2P3%2BbwoMvU2DY%2F3YvMraABFMX7TVcPLgPgAuFuIidaSby9ZxjOgJo4Jev%2FdtsiwQUz6gXK%2Bj9XTw%2BQyaXGFeKoNdLAZ4hJcWDa32fQQaM%2BpiaCHancSOO6CPW2Qldp9ny67fy%2Bq61whwkXVuqaoZMp9y2dY9ja5YBWkdK%2FnXOWSq87%2BDSy21wi2TusWzltPO%2BlYofrgWoGWrInhYeHrn4O%2B5hO14EvLB24aOZ6CSIFOQvy0cOT2WdT2W4sZ18U0a12QASglZOytKWfo5t53NdPC1hNNdHoTdTQ1lqgaOweNY7WqPINUQUamK8X508m%2FUwGrO91FxTpy9%2FYGJI2Sn0axIqWByltpAZoUhJ2Hy8FD90ELFAgNlE684rlxWR2bVgBbZFkhv5ADH%2Bk1hP7Z3adqMdkKkupkUZMG%2Fj2EWJMw86%2BvzQY6pgH2KkItZTA5Z6DuyZFdbEXyggKfLEz%2FzsB8p2bmWzwnfi32xuKF9HtbwjzVGDkibdY379mcTwsaM%2F7Kk0ZcGDRXK3RQ%2B4gDD4DK2CIpGCvXJt0aP54vw8O8ANwjeUel%2BCX4ZQmTZDQmym4TBGC6AaLaxtlsB1kdHRc%2FGQcj0gM02ylMVst97NnF%2BJ%2FYFn9AAZC%2BWDSDglfFJLJCn7QcPfrX2s0eRRzk&X-Amz-Signature=d9ec1cf564ebdd6454975a22dd73a6559d63343ad67883e347cb9e3f7015e44d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKMTTTOB%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIBulR0SePwJttjsergI3PYNoqp0OeE7sOkhkDj%2F5RzjyAiBYVdBj9Wj3sqxRyn8W4bbyy41JBILu6Ylx2tpIHF3CfSqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMjHSYTwWAu8Wt5%2FPZKtwDgrD4r2JjxLHXpRf6RA09DsAt9L%2BtBxGB7XO6THU895RdR4MUF6YMWzpJ8NiM33mhdRDTjGfkktUfmUZlLGgPId3%2FONMXP3YdUvRxulku5Jx3k5%2F4e40BNtlWYnEWK%2BqB8s5McB7EjOhNCd8RQEh%2BZf1b9nkheELEsMhenG1XQGxhUixCQmvVgoTE9OVs58FBwKLRUUTk6VgvNShaN2P3%2BbwoMvU2DY%2F3YvMraABFMX7TVcPLgPgAuFuIidaSby9ZxjOgJo4Jev%2FdtsiwQUz6gXK%2Bj9XTw%2BQyaXGFeKoNdLAZ4hJcWDa32fQQaM%2BpiaCHancSOO6CPW2Qldp9ny67fy%2Bq61whwkXVuqaoZMp9y2dY9ja5YBWkdK%2FnXOWSq87%2BDSy21wi2TusWzltPO%2BlYofrgWoGWrInhYeHrn4O%2B5hO14EvLB24aOZ6CSIFOQvy0cOT2WdT2W4sZ18U0a12QASglZOytKWfo5t53NdPC1hNNdHoTdTQ1lqgaOweNY7WqPINUQUamK8X508m%2FUwGrO91FxTpy9%2FYGJI2Sn0axIqWByltpAZoUhJ2Hy8FD90ELFAgNlE684rlxWR2bVgBbZFkhv5ADH%2Bk1hP7Z3adqMdkKkupkUZMG%2Fj2EWJMw86%2BvzQY6pgH2KkItZTA5Z6DuyZFdbEXyggKfLEz%2FzsB8p2bmWzwnfi32xuKF9HtbwjzVGDkibdY379mcTwsaM%2F7Kk0ZcGDRXK3RQ%2B4gDD4DK2CIpGCvXJt0aP54vw8O8ANwjeUel%2BCX4ZQmTZDQmym4TBGC6AaLaxtlsB1kdHRc%2FGQcj0gM02ylMVst97NnF%2BJ%2FYFn9AAZC%2BWDSDglfFJLJCn7QcPfrX2s0eRRzk&X-Amz-Signature=5ee0620304ca9e0935f6d8f6f3ce0593eb6ff9345877d0fcb8d1bf661f1733fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKMTTTOB%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJGMEQCIBulR0SePwJttjsergI3PYNoqp0OeE7sOkhkDj%2F5RzjyAiBYVdBj9Wj3sqxRyn8W4bbyy41JBILu6Ylx2tpIHF3CfSqIBAj5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMjHSYTwWAu8Wt5%2FPZKtwDgrD4r2JjxLHXpRf6RA09DsAt9L%2BtBxGB7XO6THU895RdR4MUF6YMWzpJ8NiM33mhdRDTjGfkktUfmUZlLGgPId3%2FONMXP3YdUvRxulku5Jx3k5%2F4e40BNtlWYnEWK%2BqB8s5McB7EjOhNCd8RQEh%2BZf1b9nkheELEsMhenG1XQGxhUixCQmvVgoTE9OVs58FBwKLRUUTk6VgvNShaN2P3%2BbwoMvU2DY%2F3YvMraABFMX7TVcPLgPgAuFuIidaSby9ZxjOgJo4Jev%2FdtsiwQUz6gXK%2Bj9XTw%2BQyaXGFeKoNdLAZ4hJcWDa32fQQaM%2BpiaCHancSOO6CPW2Qldp9ny67fy%2Bq61whwkXVuqaoZMp9y2dY9ja5YBWkdK%2FnXOWSq87%2BDSy21wi2TusWzltPO%2BlYofrgWoGWrInhYeHrn4O%2B5hO14EvLB24aOZ6CSIFOQvy0cOT2WdT2W4sZ18U0a12QASglZOytKWfo5t53NdPC1hNNdHoTdTQ1lqgaOweNY7WqPINUQUamK8X508m%2FUwGrO91FxTpy9%2FYGJI2Sn0axIqWByltpAZoUhJ2Hy8FD90ELFAgNlE684rlxWR2bVgBbZFkhv5ADH%2Bk1hP7Z3adqMdkKkupkUZMG%2Fj2EWJMw86%2BvzQY6pgH2KkItZTA5Z6DuyZFdbEXyggKfLEz%2FzsB8p2bmWzwnfi32xuKF9HtbwjzVGDkibdY379mcTwsaM%2F7Kk0ZcGDRXK3RQ%2B4gDD4DK2CIpGCvXJt0aP54vw8O8ANwjeUel%2BCX4ZQmTZDQmym4TBGC6AaLaxtlsB1kdHRc%2FGQcj0gM02ylMVst97NnF%2BJ%2FYFn9AAZC%2BWDSDglfFJLJCn7QcPfrX2s0eRRzk&X-Amz-Signature=711ee35e5ffb05c213ca766d45aa983ecd7ce58a4e54e0168eacdb4783090a2b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RMV5AZKU%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083057Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQCcXkSWCsiiAYc0xqb%2B7VLO%2Bs5TDG9UNvrWLuMtbMjtSwIgb0lJWoQPvmLhWfAzxaWsLEqENgr5zY15wM%2BtszfPWggqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCB997KKCtlDmIk9DSrcAyDMhhSewFIFnO1dVLNN2BGoow6T9fyIsClE2ITuYdPV1f51dVBmp5NG0nnQ2gn5ZCWAKNkJwrsdOeA8eRIbyf69LvnJNzYUI71n2oNRhjZmtshya8s4o%2BnqwMRB%2FasVislEdatdCK10tTxkKIRPaBeqB6XZKhKv5Iss0vMGAFbJv1fUjdmgQCZfD4oxvE%2BcNFIIUW5A%2FXaXESnmphgfIiAgv6EHNw000IZbTWM74PD1pwCaPb%2BBVNFFjjmnU6mc2FK7eN9gpWMW7BahbMlWjpGT6fA7OBnu6K1T8ipRAQOUode5rUhHBM0FecBIg%2BYjSh7mYQR%2B96YUj1fgZIizYEHLdkC8rIDo5ToWVgLlEBEOyIrejy%2BXpeQlrtsIKFPLCSIYWoi%2BysRYlzcKjmHWFUf7ZS0pEgYRMjQVhEpcEAUlRVdczE3ryhmU3tpg5jISKATJcv3VF2kIGcYQuj%2B1URbZdVqHVzPDKMp9vIf79c%2Be7lX2%2Fkafk3qHy%2ByNXL%2BbXvHk12XBuv%2Bu1LSbMe6CGANQqsuo16%2F%2BRCRNMb2EAN%2FopysrG1uN4rlsUB4cQ2ZDINkvuXMFltF2Jq%2Bc7aGoW5z%2Fw1Hvb3OmS0O%2FRgALC3E%2Fm7m1cHKkiciA0RbAMNqwr80GOqUBb7t95xLr%2F5q3KlbAO34zTlAVQWPEhELO5eDtrwjqslWDLAcBWGHqLQa79xkpYMPMO%2BoojzETzOv%2FOVoK7V0Bp1d3HHjMAKBgR%2FeBLx3uWcCx9PiMDKueaaWKO4YRYg2qAQFHGz0NgZSuoyIFhTS%2BfY%2Bc1Ug3KCwqG4wMY%2BT3flHSewf%2FeNngEadPY9l60hhpLgRSMkyDSdLNej0OGoDPi0ozTidC&X-Amz-Signature=52d17bd1a6747ee29a11aa444203515fe5f684974efcc8d971bacfc39d34c28e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UMPZDWWW%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083058Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQC7tWH%2FtW7a5R9eqYwJPcGTtMMclZAixvi21Ybo4uR1fQIgJoZRD98gVPBV7ewFMkwdDT8sy4jFyXm71CtlJxcz9QwqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAncrUYkE6WeP1qPWircA3odkY8asQFIxVK5aMm0lGShra7w5K9Su06NnBF1GanUrHtUUssfe8Gq8TgjNowCceWgN75JqCYHG3r1%2FyZwpYdiUbbQRGWS0ybJL7zxMZgpJwHilhN98DfTFIX50i%2FUf680kyhL%2B6wDgrMUnemTsB5Nxdg6HhfMu2VwHG1vj%2FVSOwAuJ%2F4VlaP0YWS2znscBh%2BEChsxeMxr1S6IovKHSrmn%2FzYvP%2B5IYNdTAQB9u89OonTTCLbxtrPyqWBAcYQ73hqIn2fGM2NWL7SbzhfrOOO1K91OnYK8Zir6gd2o%2F6nuJuZD4BdrHEKPluRvd9vATbop8MeOYOKnhb0Puop3NmEIVkN%2Bg7sxp1LHaXac8YfieW2f19%2Bayy4Kv0Ni%2FTTI2Yq%2BeG9eC1QclNONSaBoJ8O6iRb1k4DL9N9V6taYttxhzQFnJZhDTHiwpOIzSaeiy7bRnrH8JpNo6IwB3GN6D3CJX7nfecbkVzjcxBuqmJL9oJQqRrm6V3Y7pyASDegqppvK9GyOIXq5TfjlArx9QAEd02msK3j0%2B%2BsZAw3baRBrpQ8WMSYs8DUxhRqxw4LbP5Xv1KnmFjSRbDjIU%2B90KmadL%2BgIUd0YIoZb7PF17eWFzAIfAlrj9%2FLxeICyMKevr80GOqUBALvi5OIXTD2UiSGW%2FrWgdnreQQXUyckfiEYUgCMrSrKAkLknPKaxmnqg8xjwPCUg40w0ngHh7zrgaTwXAR%2Bec3e6eRVIKDXUPip0D1aW%2FBN95H0dj1pqWbavZIRaEjqOOuW%2FbEq9pqR%2Fx0ry3gQ7DRDSgi%2BKOGYrYYJgeoAjYvvDYXbypNXcPlnXxklUcJFCMoC0KbKV1PaD0uVCcuvAes9xvlhC&X-Amz-Signature=92d46ab5fa71d88708c9611ebd0c0b6327fce7c03a243071dbf1287c9b36adb4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UMPZDWWW%2F20260307%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260307T083058Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDAaCXVzLXdlc3QtMiJHMEUCIQC7tWH%2FtW7a5R9eqYwJPcGTtMMclZAixvi21Ybo4uR1fQIgJoZRD98gVPBV7ewFMkwdDT8sy4jFyXm71CtlJxcz9QwqiAQI%2Bf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAncrUYkE6WeP1qPWircA3odkY8asQFIxVK5aMm0lGShra7w5K9Su06NnBF1GanUrHtUUssfe8Gq8TgjNowCceWgN75JqCYHG3r1%2FyZwpYdiUbbQRGWS0ybJL7zxMZgpJwHilhN98DfTFIX50i%2FUf680kyhL%2B6wDgrMUnemTsB5Nxdg6HhfMu2VwHG1vj%2FVSOwAuJ%2F4VlaP0YWS2znscBh%2BEChsxeMxr1S6IovKHSrmn%2FzYvP%2B5IYNdTAQB9u89OonTTCLbxtrPyqWBAcYQ73hqIn2fGM2NWL7SbzhfrOOO1K91OnYK8Zir6gd2o%2F6nuJuZD4BdrHEKPluRvd9vATbop8MeOYOKnhb0Puop3NmEIVkN%2Bg7sxp1LHaXac8YfieW2f19%2Bayy4Kv0Ni%2FTTI2Yq%2BeG9eC1QclNONSaBoJ8O6iRb1k4DL9N9V6taYttxhzQFnJZhDTHiwpOIzSaeiy7bRnrH8JpNo6IwB3GN6D3CJX7nfecbkVzjcxBuqmJL9oJQqRrm6V3Y7pyASDegqppvK9GyOIXq5TfjlArx9QAEd02msK3j0%2B%2BsZAw3baRBrpQ8WMSYs8DUxhRqxw4LbP5Xv1KnmFjSRbDjIU%2B90KmadL%2BgIUd0YIoZb7PF17eWFzAIfAlrj9%2FLxeICyMKevr80GOqUBALvi5OIXTD2UiSGW%2FrWgdnreQQXUyckfiEYUgCMrSrKAkLknPKaxmnqg8xjwPCUg40w0ngHh7zrgaTwXAR%2Bec3e6eRVIKDXUPip0D1aW%2FBN95H0dj1pqWbavZIRaEjqOOuW%2FbEq9pqR%2Fx0ry3gQ7DRDSgi%2BKOGYrYYJgeoAjYvvDYXbypNXcPlnXxklUcJFCMoC0KbKV1PaD0uVCcuvAes9xvlhC&X-Amz-Signature=4174fcc28e7d99213dc9da3744d48635d2e9becd273466a4a244a1fb9f9ff950&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
