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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665CNJUQOY%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDEeEOTCQ9J%2F%2Fswb2NoZQYdYcJlbqm12iNuWk9gcEWu1QIhAIC5r9AhkuJiQdCMCCFxMvnWdHDK%2F4y6XG3fi9AiAxGJKv8DCGAQABoMNjM3NDIzMTgzODA1IgwsQ6wuwVJ1mGgKKgAq3APqrZR8vxEH6X%2Bk7jJTHhqI9m6peS9v3pvZo1crRK2Wo5rKHZECVmV3jVmY6chZqPayY6oEGVabPoSRj3JdJp1b%2BuDPY1%2FnqJ%2FNTuMS7ovGeV94MLAEuo7W1%2BVZqAKpgTsc6DR%2B4fK2BXnUJ8HVbLiw5XZsKmHeTbYz4i%2F3p9rw2lnSLCDWcysiKfRtDj5DEJ5al03TbslkG39uCfoM2T6Tf3wM6x9KG0sR8IiwuG40rF08vKCt79wDB8IvmqpVDAJRc1HmLVWDhqx1Pr%2FfIVBcFKT8DYEgt3vg14tNGNokDLA8MGOquQ0QaLky%2FVYJnj1%2FPoK5foDsj%2BvJDubgwjNlIeOMsnh%2BW%2Bz2183%2BpQxmgIlXZqnhDtb37ie2Fq2KmbAggvzvVCdQLqO8sdRoLXQErz8h1cSnmeEInBKCYeoCkigalLGO5HRLOlyhNTJYJzS6xk%2BjEdMddsqNJL8UYUEX2vr9oGlHQHeEQta%2F9GRr4CK5PQzEvsL16ulAfFiSClY5LPCG8f5juQ2nx3j%2FqGXgzFd3jHkUkFj%2BFSF5JO6UUDHa0yCms%2FRDWcJH%2FeNBSsiLBmF2ADuinzX0SFlXG6Y3IdoC1YyXPEhUvi0KWd0SboXz1e4YlQFohcAurDDOwtXMBjqkAdRdOjwClMYCc80hfUMEwRtlm%2B6RN9ftq7bfY23A6pFlSY61hKuTPhtnYFEoIZoI%2F6E99MF5QHuJ1gnxF1oSzQJYm8VXNa%2B9bzqGMWu91dxO7hugIo6tPy2%2B%2F1f3NB%2FTEGlex3KTpbNgxycubQqf4z%2BxAQv1XXe5QHgpmJiXe9p26VR8CyAixYr6ZKPHq1XzFWeklk6VGZUvOoRCpo99XbZvcHNh&X-Amz-Signature=c48a014422d90edd0c1cd559ea31d4a065c86964eb3b0d8bf0fc1b6561e716ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665CNJUQOY%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDEeEOTCQ9J%2F%2Fswb2NoZQYdYcJlbqm12iNuWk9gcEWu1QIhAIC5r9AhkuJiQdCMCCFxMvnWdHDK%2F4y6XG3fi9AiAxGJKv8DCGAQABoMNjM3NDIzMTgzODA1IgwsQ6wuwVJ1mGgKKgAq3APqrZR8vxEH6X%2Bk7jJTHhqI9m6peS9v3pvZo1crRK2Wo5rKHZECVmV3jVmY6chZqPayY6oEGVabPoSRj3JdJp1b%2BuDPY1%2FnqJ%2FNTuMS7ovGeV94MLAEuo7W1%2BVZqAKpgTsc6DR%2B4fK2BXnUJ8HVbLiw5XZsKmHeTbYz4i%2F3p9rw2lnSLCDWcysiKfRtDj5DEJ5al03TbslkG39uCfoM2T6Tf3wM6x9KG0sR8IiwuG40rF08vKCt79wDB8IvmqpVDAJRc1HmLVWDhqx1Pr%2FfIVBcFKT8DYEgt3vg14tNGNokDLA8MGOquQ0QaLky%2FVYJnj1%2FPoK5foDsj%2BvJDubgwjNlIeOMsnh%2BW%2Bz2183%2BpQxmgIlXZqnhDtb37ie2Fq2KmbAggvzvVCdQLqO8sdRoLXQErz8h1cSnmeEInBKCYeoCkigalLGO5HRLOlyhNTJYJzS6xk%2BjEdMddsqNJL8UYUEX2vr9oGlHQHeEQta%2F9GRr4CK5PQzEvsL16ulAfFiSClY5LPCG8f5juQ2nx3j%2FqGXgzFd3jHkUkFj%2BFSF5JO6UUDHa0yCms%2FRDWcJH%2FeNBSsiLBmF2ADuinzX0SFlXG6Y3IdoC1YyXPEhUvi0KWd0SboXz1e4YlQFohcAurDDOwtXMBjqkAdRdOjwClMYCc80hfUMEwRtlm%2B6RN9ftq7bfY23A6pFlSY61hKuTPhtnYFEoIZoI%2F6E99MF5QHuJ1gnxF1oSzQJYm8VXNa%2B9bzqGMWu91dxO7hugIo6tPy2%2B%2F1f3NB%2FTEGlex3KTpbNgxycubQqf4z%2BxAQv1XXe5QHgpmJiXe9p26VR8CyAixYr6ZKPHq1XzFWeklk6VGZUvOoRCpo99XbZvcHNh&X-Amz-Signature=8f88c2a061a55c2ddd3b3b4b22df5616eed6f42ae1bdca86e105e5a94f3139b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665CNJUQOY%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDEeEOTCQ9J%2F%2Fswb2NoZQYdYcJlbqm12iNuWk9gcEWu1QIhAIC5r9AhkuJiQdCMCCFxMvnWdHDK%2F4y6XG3fi9AiAxGJKv8DCGAQABoMNjM3NDIzMTgzODA1IgwsQ6wuwVJ1mGgKKgAq3APqrZR8vxEH6X%2Bk7jJTHhqI9m6peS9v3pvZo1crRK2Wo5rKHZECVmV3jVmY6chZqPayY6oEGVabPoSRj3JdJp1b%2BuDPY1%2FnqJ%2FNTuMS7ovGeV94MLAEuo7W1%2BVZqAKpgTsc6DR%2B4fK2BXnUJ8HVbLiw5XZsKmHeTbYz4i%2F3p9rw2lnSLCDWcysiKfRtDj5DEJ5al03TbslkG39uCfoM2T6Tf3wM6x9KG0sR8IiwuG40rF08vKCt79wDB8IvmqpVDAJRc1HmLVWDhqx1Pr%2FfIVBcFKT8DYEgt3vg14tNGNokDLA8MGOquQ0QaLky%2FVYJnj1%2FPoK5foDsj%2BvJDubgwjNlIeOMsnh%2BW%2Bz2183%2BpQxmgIlXZqnhDtb37ie2Fq2KmbAggvzvVCdQLqO8sdRoLXQErz8h1cSnmeEInBKCYeoCkigalLGO5HRLOlyhNTJYJzS6xk%2BjEdMddsqNJL8UYUEX2vr9oGlHQHeEQta%2F9GRr4CK5PQzEvsL16ulAfFiSClY5LPCG8f5juQ2nx3j%2FqGXgzFd3jHkUkFj%2BFSF5JO6UUDHa0yCms%2FRDWcJH%2FeNBSsiLBmF2ADuinzX0SFlXG6Y3IdoC1YyXPEhUvi0KWd0SboXz1e4YlQFohcAurDDOwtXMBjqkAdRdOjwClMYCc80hfUMEwRtlm%2B6RN9ftq7bfY23A6pFlSY61hKuTPhtnYFEoIZoI%2F6E99MF5QHuJ1gnxF1oSzQJYm8VXNa%2B9bzqGMWu91dxO7hugIo6tPy2%2B%2F1f3NB%2FTEGlex3KTpbNgxycubQqf4z%2BxAQv1XXe5QHgpmJiXe9p26VR8CyAixYr6ZKPHq1XzFWeklk6VGZUvOoRCpo99XbZvcHNh&X-Amz-Signature=ee8347ce4442ebb2469d2c264d44c326e21b2a8920ebb34c80dcb7e560379885&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SESAX3OJ%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGBw9mgjfU44F%2BE5BmOXasHyZRIUuMBValUvmnRddEviAiEAuNTxbIAc%2BBr0FiUUg1QSMn0x2XXvtKj147pbXe8v0A8q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDLOh3rIDxq7HpYh3rSrcA6Zweq8kakFaVmRXmXu%2B%2BlgI4WPHzcp4gLn8O%2FGpwyYHLBaJBCGS6EoGMA9H%2BkZ0n0tLz99dsdgVHpCZqb4fjUiH7IFStVLCnHbkVbYwJ%2Fcoxl5r0OkbaqZQiAigCZoP5jyHrJDcvZ61h6t%2FeZex6anx2nKvpPHf%2FE6PUoc07%2Fr3mWcJakF9r%2FaGoabX4VCPlZ8S898XYM3RA7X11ykcigMrduCQDCXoUzNIt0uG%2BPQspUh1thbQjHIPNdjKASH2vJ7FuI%2BWNzJoPJ73RsjKpDxJOgQPjqpqRltIy0UQoIBjqqVTBBgc7rEYS9rueKbHauhYqAeF4AC7oJFnACSkl882YLv6JI0d80WHv1Fy8tgMGOsShkDA%2BrkwmfAqAZByMLO1Qd12PoFPxHHrHebOeVUn5YLNfQEeBJbKuzubVQ6JKGbvZ1uF9%2Bro38qIzNoCGhA9uO5QLy%2BVb%2BGVsNqiP3i%2BQF0LvR6GAS4nm8MBj9qCq%2BpzwfXlpNMs%2F%2Fz46EKAVll5IkhhZMIBdEhsHS2SJz6%2FD2d6Ev6lhh4NpTI4pIeeRKGOM0PgSs8Su6V9m9x76EmnrofiBOJ7U5VcH626jMcPufPOlOV%2BSiBpwkXMLa%2F2agIt4bRbaSGcJ3DgMOTC1cwGOqUB1y5GjbhOXnj8VikLLJ5L9wmY61vQuZl86He%2B01dkdpO6QQiLj%2BM19XaXLJRjR4y7SLi%2BAkK8ztNirxwPEgYx74ScdF1BEgxcwECE3X5%2F1m2kr1F%2Bsx3tF3%2FE9A6Ow0V84X0VwI7f1ilLuid%2FthOiovkNHwHODJjjmgEGK3UEWcqFB56U0pdUrTzzAqRxmaX8Ahx5IKVL8qWGh5zcu3EiMCa%2BLAOE&X-Amz-Signature=432b9edd938d168661cedf7c8fde83bb7551267dc498325c4defdc4bbe7a6221&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SESAX3OJ%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGBw9mgjfU44F%2BE5BmOXasHyZRIUuMBValUvmnRddEviAiEAuNTxbIAc%2BBr0FiUUg1QSMn0x2XXvtKj147pbXe8v0A8q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDLOh3rIDxq7HpYh3rSrcA6Zweq8kakFaVmRXmXu%2B%2BlgI4WPHzcp4gLn8O%2FGpwyYHLBaJBCGS6EoGMA9H%2BkZ0n0tLz99dsdgVHpCZqb4fjUiH7IFStVLCnHbkVbYwJ%2Fcoxl5r0OkbaqZQiAigCZoP5jyHrJDcvZ61h6t%2FeZex6anx2nKvpPHf%2FE6PUoc07%2Fr3mWcJakF9r%2FaGoabX4VCPlZ8S898XYM3RA7X11ykcigMrduCQDCXoUzNIt0uG%2BPQspUh1thbQjHIPNdjKASH2vJ7FuI%2BWNzJoPJ73RsjKpDxJOgQPjqpqRltIy0UQoIBjqqVTBBgc7rEYS9rueKbHauhYqAeF4AC7oJFnACSkl882YLv6JI0d80WHv1Fy8tgMGOsShkDA%2BrkwmfAqAZByMLO1Qd12PoFPxHHrHebOeVUn5YLNfQEeBJbKuzubVQ6JKGbvZ1uF9%2Bro38qIzNoCGhA9uO5QLy%2BVb%2BGVsNqiP3i%2BQF0LvR6GAS4nm8MBj9qCq%2BpzwfXlpNMs%2F%2Fz46EKAVll5IkhhZMIBdEhsHS2SJz6%2FD2d6Ev6lhh4NpTI4pIeeRKGOM0PgSs8Su6V9m9x76EmnrofiBOJ7U5VcH626jMcPufPOlOV%2BSiBpwkXMLa%2F2agIt4bRbaSGcJ3DgMOTC1cwGOqUB1y5GjbhOXnj8VikLLJ5L9wmY61vQuZl86He%2B01dkdpO6QQiLj%2BM19XaXLJRjR4y7SLi%2BAkK8ztNirxwPEgYx74ScdF1BEgxcwECE3X5%2F1m2kr1F%2Bsx3tF3%2FE9A6Ow0V84X0VwI7f1ilLuid%2FthOiovkNHwHODJjjmgEGK3UEWcqFB56U0pdUrTzzAqRxmaX8Ahx5IKVL8qWGh5zcu3EiMCa%2BLAOE&X-Amz-Signature=27fb476f8d0095e9ce49bbb13c281b257ec6b9e635bad29ad9e7801acd08e1c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SESAX3OJ%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGBw9mgjfU44F%2BE5BmOXasHyZRIUuMBValUvmnRddEviAiEAuNTxbIAc%2BBr0FiUUg1QSMn0x2XXvtKj147pbXe8v0A8q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDLOh3rIDxq7HpYh3rSrcA6Zweq8kakFaVmRXmXu%2B%2BlgI4WPHzcp4gLn8O%2FGpwyYHLBaJBCGS6EoGMA9H%2BkZ0n0tLz99dsdgVHpCZqb4fjUiH7IFStVLCnHbkVbYwJ%2Fcoxl5r0OkbaqZQiAigCZoP5jyHrJDcvZ61h6t%2FeZex6anx2nKvpPHf%2FE6PUoc07%2Fr3mWcJakF9r%2FaGoabX4VCPlZ8S898XYM3RA7X11ykcigMrduCQDCXoUzNIt0uG%2BPQspUh1thbQjHIPNdjKASH2vJ7FuI%2BWNzJoPJ73RsjKpDxJOgQPjqpqRltIy0UQoIBjqqVTBBgc7rEYS9rueKbHauhYqAeF4AC7oJFnACSkl882YLv6JI0d80WHv1Fy8tgMGOsShkDA%2BrkwmfAqAZByMLO1Qd12PoFPxHHrHebOeVUn5YLNfQEeBJbKuzubVQ6JKGbvZ1uF9%2Bro38qIzNoCGhA9uO5QLy%2BVb%2BGVsNqiP3i%2BQF0LvR6GAS4nm8MBj9qCq%2BpzwfXlpNMs%2F%2Fz46EKAVll5IkhhZMIBdEhsHS2SJz6%2FD2d6Ev6lhh4NpTI4pIeeRKGOM0PgSs8Su6V9m9x76EmnrofiBOJ7U5VcH626jMcPufPOlOV%2BSiBpwkXMLa%2F2agIt4bRbaSGcJ3DgMOTC1cwGOqUB1y5GjbhOXnj8VikLLJ5L9wmY61vQuZl86He%2B01dkdpO6QQiLj%2BM19XaXLJRjR4y7SLi%2BAkK8ztNirxwPEgYx74ScdF1BEgxcwECE3X5%2F1m2kr1F%2Bsx3tF3%2FE9A6Ow0V84X0VwI7f1ilLuid%2FthOiovkNHwHODJjjmgEGK3UEWcqFB56U0pdUrTzzAqRxmaX8Ahx5IKVL8qWGh5zcu3EiMCa%2BLAOE&X-Amz-Signature=9fd2b3d8674a4834953d2bb3d7254944015088617050bf198242aa8b969ea4a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SESAX3OJ%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGBw9mgjfU44F%2BE5BmOXasHyZRIUuMBValUvmnRddEviAiEAuNTxbIAc%2BBr0FiUUg1QSMn0x2XXvtKj147pbXe8v0A8q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDLOh3rIDxq7HpYh3rSrcA6Zweq8kakFaVmRXmXu%2B%2BlgI4WPHzcp4gLn8O%2FGpwyYHLBaJBCGS6EoGMA9H%2BkZ0n0tLz99dsdgVHpCZqb4fjUiH7IFStVLCnHbkVbYwJ%2Fcoxl5r0OkbaqZQiAigCZoP5jyHrJDcvZ61h6t%2FeZex6anx2nKvpPHf%2FE6PUoc07%2Fr3mWcJakF9r%2FaGoabX4VCPlZ8S898XYM3RA7X11ykcigMrduCQDCXoUzNIt0uG%2BPQspUh1thbQjHIPNdjKASH2vJ7FuI%2BWNzJoPJ73RsjKpDxJOgQPjqpqRltIy0UQoIBjqqVTBBgc7rEYS9rueKbHauhYqAeF4AC7oJFnACSkl882YLv6JI0d80WHv1Fy8tgMGOsShkDA%2BrkwmfAqAZByMLO1Qd12PoFPxHHrHebOeVUn5YLNfQEeBJbKuzubVQ6JKGbvZ1uF9%2Bro38qIzNoCGhA9uO5QLy%2BVb%2BGVsNqiP3i%2BQF0LvR6GAS4nm8MBj9qCq%2BpzwfXlpNMs%2F%2Fz46EKAVll5IkhhZMIBdEhsHS2SJz6%2FD2d6Ev6lhh4NpTI4pIeeRKGOM0PgSs8Su6V9m9x76EmnrofiBOJ7U5VcH626jMcPufPOlOV%2BSiBpwkXMLa%2F2agIt4bRbaSGcJ3DgMOTC1cwGOqUB1y5GjbhOXnj8VikLLJ5L9wmY61vQuZl86He%2B01dkdpO6QQiLj%2BM19XaXLJRjR4y7SLi%2BAkK8ztNirxwPEgYx74ScdF1BEgxcwECE3X5%2F1m2kr1F%2Bsx3tF3%2FE9A6Ow0V84X0VwI7f1ilLuid%2FthOiovkNHwHODJjjmgEGK3UEWcqFB56U0pdUrTzzAqRxmaX8Ahx5IKVL8qWGh5zcu3EiMCa%2BLAOE&X-Amz-Signature=a9f7892dfd718299e0e7e1827edd4012c383e6b6272a6a42dd0136e5f90579cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TOJQGUCY%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084335Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCmOPw2NosBrLGkdNSYCAdifLBgRdkwAnrPFJlk3H4BHQIgQLxfQjYY77yT8cnmwG8nISAjYG%2F1dEeUDA4PCIhCawQq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDNO5drftxx2Pl8jI3CrcA1QsUPBwNudKNBETEYZg5rH4zureiktqnxxa1PjmMheUtcD58ScOFNeAYavdOeqrh07%2Bk6IHzP2R97ZAnSe%2BGW5OjrkvajQ2sTmCOnahalJgnoErN%2FTar%2F%2FA4NxyIJDWaWGbY%2F2OmBSU2RboN%2BIZCIAklpaYcib0D0QJBMurxTb%2Bsp%2FBuKbX%2BKlEbC2zXnHsfogDGjGMtkP6Fm2Nshh9pIdpplTJR1OPvFnrr3rES%2BGmVsIIsqbK4izFMm%2Fjf9eWEo2uczS9rcrQ3e2qfw5crStLRZaT6CybrhveWT1ZVUTEEqY1Rcfmv0UExM1z07h1AxK27IMscmhrt7Rq8ehIDum7qVCY%2FfwQ5%2Bvr8qmSpl1PZNc9A3Auve5qr5W%2Fs26EvY2Mptkxr0Kv2XKuanP6vXUVbwf2FfeTlcdAH7CdnZ6B5JYUWpVmpST5fcC0sFOJqGZpM5pAHlXj%2FZ%2BVoibV1Cc83sD5LziArmX1AXcdfYCCMzxdze%2Fg4OO75pYjvj8FV1bWF%2Bx5T2pzbuVo7%2BEmGO5WlHIcgSWqVTZnbBu3cCufGrKey42cwWZIkSTOiVyDm1j6nQqUPmbZJDgNKEdKvpT8mDE7ZWvfldfL8v2k7gNcsf2XPaKKpBSHh9f2MLLD1cwGOqUBGnfmBkaq8HtPpq%2BWgmyv8OE25lyDhh81VJyabQuhWkcGeY5szg%2B0YyEV9D8jUo5XCuj4Rrn1rytjac0wfshWTgbqgACJfPBPkaJ2zMU8%2Bn6yT%2B%2FqZzxC6BGoRWvuMelr1nY3THfO2gPKdP7JaDijYBnAVNdbrd0FD4W00VkAjOIv2%2BOLPapxvGxt0u7zSOsm7mvOAPJCI3tFMPHQEIWIHfRWQNx1&X-Amz-Signature=8bd29b6be9b44a127892a477187edfc33f1182ce1a30cfe72bccb86b9bd26824&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WC73UGIO%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084335Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCefRfAWnXyfLoI9acgDxhGr2xf6QsXMGudrt9MlBRURQIgBxToCteBZ08FnFCdgXohGrnq5gFl3dSVWnc7YnftvAgq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDK76%2FWDAllrn9hSZmyrcAyDN1T5Kx4sQCTAeCoJfzRFmsvsDvwm4MH55FNH6Ei5dVYW84pm4BnxEJ5elj5RY%2BpKD%2FTY90BMXAlAzFGTYTTMQQIELr43lZtq5uOnZqTM1Ig4Fmbd2sJeUg0d9RLutrf928t9rMlVfrnyNQBPw4bC7Lenq65kK95tocJ7Q%2FFMcrcCo3yWZJR0k%2F9AIN0wiaYDBZm9GFu4UugcSkKCYXo%2B%2FN6XjA5BRdg%2FEFqSsw84xLNn%2BBEXrII5tdP8GBska0sxOEjYzmoP0bu2VAK8ovhID8bbRJJt49Cb%2F8xNR2nD%2FN7RYxAXgA8%2B2pwPHwVi44ryRs1AMafKDtPu7PojWT%2FJwwlg7Fo2YaxSjop40vEzDS9CDGGa%2Bk7sv%2BtP1ocpR6sJvs9W0q7gzAdrHsHpjFAShxWRA%2BUnM9BrtZmuesaeApB3F%2FvLAMRG%2BTqKwh0WZW6aMbsk%2BqtdVI53y%2FRQdd0huu%2FopICA1gu9BbUVVjcSE%2Fcf%2BX3pM9lWY0x74x1X86IC417Z4iiep6Wp4ZAEzw8pLFhjsUoJfh0LVOvK5z1MRTgWyXEaTjJ6OL6o2vdP%2FFsdDnLSEG73jcJKIaxen9zE1JK3X%2FEcYcWJZ5ofpKtZZQwLOSaxc2d4dgdJ4MPvC1cwGOqUBXs9dpS06B4Yn7kPoKSHD48Eyu3tf%2BDakECv7GsKh8TSSA53jqNpUUj%2FlKY0XUTCJ4j0x406seCxWxaV88ZgPMvubuNObx%2FN8SNhEX0t7T3zZ7VCf0rvH0bff0ewqA3WP3Vd%2BvHSwA9y2723VGtQmgzcixDyMRCwHdZtFCdI1sExhO9bNvDnakcV8eFO1qRDszwFBb6eit%2F8cRfnic4kW2nQoSkCb&X-Amz-Signature=f381738ff606e070772b2c51da6400a744b9f9fd3b484d15bc154b6870987beb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WC73UGIO%2F20260218%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260218T084335Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCefRfAWnXyfLoI9acgDxhGr2xf6QsXMGudrt9MlBRURQIgBxToCteBZ08FnFCdgXohGrnq5gFl3dSVWnc7YnftvAgq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDK76%2FWDAllrn9hSZmyrcAyDN1T5Kx4sQCTAeCoJfzRFmsvsDvwm4MH55FNH6Ei5dVYW84pm4BnxEJ5elj5RY%2BpKD%2FTY90BMXAlAzFGTYTTMQQIELr43lZtq5uOnZqTM1Ig4Fmbd2sJeUg0d9RLutrf928t9rMlVfrnyNQBPw4bC7Lenq65kK95tocJ7Q%2FFMcrcCo3yWZJR0k%2F9AIN0wiaYDBZm9GFu4UugcSkKCYXo%2B%2FN6XjA5BRdg%2FEFqSsw84xLNn%2BBEXrII5tdP8GBska0sxOEjYzmoP0bu2VAK8ovhID8bbRJJt49Cb%2F8xNR2nD%2FN7RYxAXgA8%2B2pwPHwVi44ryRs1AMafKDtPu7PojWT%2FJwwlg7Fo2YaxSjop40vEzDS9CDGGa%2Bk7sv%2BtP1ocpR6sJvs9W0q7gzAdrHsHpjFAShxWRA%2BUnM9BrtZmuesaeApB3F%2FvLAMRG%2BTqKwh0WZW6aMbsk%2BqtdVI53y%2FRQdd0huu%2FopICA1gu9BbUVVjcSE%2Fcf%2BX3pM9lWY0x74x1X86IC417Z4iiep6Wp4ZAEzw8pLFhjsUoJfh0LVOvK5z1MRTgWyXEaTjJ6OL6o2vdP%2FFsdDnLSEG73jcJKIaxen9zE1JK3X%2FEcYcWJZ5ofpKtZZQwLOSaxc2d4dgdJ4MPvC1cwGOqUBXs9dpS06B4Yn7kPoKSHD48Eyu3tf%2BDakECv7GsKh8TSSA53jqNpUUj%2FlKY0XUTCJ4j0x406seCxWxaV88ZgPMvubuNObx%2FN8SNhEX0t7T3zZ7VCf0rvH0bff0ewqA3WP3Vd%2BvHSwA9y2723VGtQmgzcixDyMRCwHdZtFCdI1sExhO9bNvDnakcV8eFO1qRDszwFBb6eit%2F8cRfnic4kW2nQoSkCb&X-Amz-Signature=885d01066fa975907482496208ff8345a4c9aa6261efa24fa81ce419854684ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
