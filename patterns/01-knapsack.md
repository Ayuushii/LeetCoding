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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHR43UAK%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFYb51Uq8RCxjfeBY9b2ozRu5K69W6%2FBFnrlUEG%2BYG%2FJAiEAsFA347n2FLozwWXELrMRai7uGKbGGtLf0byPkQ3g2dwqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCsiMS%2BuURzSFVMvOCrcA3%2Fzc16wxMYYyi8BcMtR4QOyZLo0WHmPSE4fcUqEnX2S88d%2F0YrLowg1c%2F%2FnsLJOcZm4URmaeNb8rnUhGgpFDNeFnc4QqQ93MnLq92HduVMGszPYHXWwWzQa5sXhBRUjM4%2Fjpg2b3ekfM7YKi5sC0rkbPfYBhiYpEMHZrBC3bx3Hfyulluzae1yTsO5Tpg7uuHkkpeNsoxRQzRPV59u6XmyhvXBEb7s7ctoxVnGcAT61OnMT0iFNW6xDJzdl6Exqc5Rh3fyU%2B2QMrTcbI9q8RB9DzkNXW5HP%2BYm5N1NgM4CUBRx3%2Boh7NGMS8zYjMroSNukIt7N4sqTpB5SjQ53BycMM8heM%2BoLH%2BYYEmDz8lH9azQG52zklXZ3%2FHVBROUyYt5o56jXG%2FWmP3M%2FfqvF2G3%2F9qI4sF46D0nLnqD7Hy%2B6MpNnzEpvU0djEnkHU2tP7VdTcYU80SGFiN6q58DyLVW%2FksPWfFc0SMuD0xtCQf7%2BapYLWmwhLEKtidltoP6OKUk12TMPyKS21wQ%2BGKZ9ufacAtLTqEtBW8sGBfEQySBgGvpQ3d95HJ0kXUoFp0Ql4M5NxIt0iAXNB3TKxCUdT0L7tD4NAlNH7Bc5J5aK7i1NHIttHp2uAXQvgEyNhMJ3Uk84GOqUBKH2Yo4BEKP4ARsxyMd3I8zUOWaQakrujtKi2UYVeXpCy%2F%2FX1kolMoQ8U75QWk681HxP%2BxQoWUNJu5pZAGHtGUSLonqCtqBFcK1I%2BRVKrlCB2bcl2Mg3AeE%2BWhi0mIRBFsqQBSIkymXeBIPqx5yo1bqxGTaSxRCTCceimgyxLkuQh5pzOqRzHwK3c8OgqWVK7U%2FbZQQ1090fDh%2BYJ375T18sPXXCX&X-Amz-Signature=590e7d3e1b100081b9d0f838bec73a7e5da57909f16c30acd61d60edccb830a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHR43UAK%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFYb51Uq8RCxjfeBY9b2ozRu5K69W6%2FBFnrlUEG%2BYG%2FJAiEAsFA347n2FLozwWXELrMRai7uGKbGGtLf0byPkQ3g2dwqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCsiMS%2BuURzSFVMvOCrcA3%2Fzc16wxMYYyi8BcMtR4QOyZLo0WHmPSE4fcUqEnX2S88d%2F0YrLowg1c%2F%2FnsLJOcZm4URmaeNb8rnUhGgpFDNeFnc4QqQ93MnLq92HduVMGszPYHXWwWzQa5sXhBRUjM4%2Fjpg2b3ekfM7YKi5sC0rkbPfYBhiYpEMHZrBC3bx3Hfyulluzae1yTsO5Tpg7uuHkkpeNsoxRQzRPV59u6XmyhvXBEb7s7ctoxVnGcAT61OnMT0iFNW6xDJzdl6Exqc5Rh3fyU%2B2QMrTcbI9q8RB9DzkNXW5HP%2BYm5N1NgM4CUBRx3%2Boh7NGMS8zYjMroSNukIt7N4sqTpB5SjQ53BycMM8heM%2BoLH%2BYYEmDz8lH9azQG52zklXZ3%2FHVBROUyYt5o56jXG%2FWmP3M%2FfqvF2G3%2F9qI4sF46D0nLnqD7Hy%2B6MpNnzEpvU0djEnkHU2tP7VdTcYU80SGFiN6q58DyLVW%2FksPWfFc0SMuD0xtCQf7%2BapYLWmwhLEKtidltoP6OKUk12TMPyKS21wQ%2BGKZ9ufacAtLTqEtBW8sGBfEQySBgGvpQ3d95HJ0kXUoFp0Ql4M5NxIt0iAXNB3TKxCUdT0L7tD4NAlNH7Bc5J5aK7i1NHIttHp2uAXQvgEyNhMJ3Uk84GOqUBKH2Yo4BEKP4ARsxyMd3I8zUOWaQakrujtKi2UYVeXpCy%2F%2FX1kolMoQ8U75QWk681HxP%2BxQoWUNJu5pZAGHtGUSLonqCtqBFcK1I%2BRVKrlCB2bcl2Mg3AeE%2BWhi0mIRBFsqQBSIkymXeBIPqx5yo1bqxGTaSxRCTCceimgyxLkuQh5pzOqRzHwK3c8OgqWVK7U%2FbZQQ1090fDh%2BYJ375T18sPXXCX&X-Amz-Signature=685362dc2848fc4cdf953ca271ee5034943c8617e5051f7a55e5a1eafc4115d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHR43UAK%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFYb51Uq8RCxjfeBY9b2ozRu5K69W6%2FBFnrlUEG%2BYG%2FJAiEAsFA347n2FLozwWXELrMRai7uGKbGGtLf0byPkQ3g2dwqiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCsiMS%2BuURzSFVMvOCrcA3%2Fzc16wxMYYyi8BcMtR4QOyZLo0WHmPSE4fcUqEnX2S88d%2F0YrLowg1c%2F%2FnsLJOcZm4URmaeNb8rnUhGgpFDNeFnc4QqQ93MnLq92HduVMGszPYHXWwWzQa5sXhBRUjM4%2Fjpg2b3ekfM7YKi5sC0rkbPfYBhiYpEMHZrBC3bx3Hfyulluzae1yTsO5Tpg7uuHkkpeNsoxRQzRPV59u6XmyhvXBEb7s7ctoxVnGcAT61OnMT0iFNW6xDJzdl6Exqc5Rh3fyU%2B2QMrTcbI9q8RB9DzkNXW5HP%2BYm5N1NgM4CUBRx3%2Boh7NGMS8zYjMroSNukIt7N4sqTpB5SjQ53BycMM8heM%2BoLH%2BYYEmDz8lH9azQG52zklXZ3%2FHVBROUyYt5o56jXG%2FWmP3M%2FfqvF2G3%2F9qI4sF46D0nLnqD7Hy%2B6MpNnzEpvU0djEnkHU2tP7VdTcYU80SGFiN6q58DyLVW%2FksPWfFc0SMuD0xtCQf7%2BapYLWmwhLEKtidltoP6OKUk12TMPyKS21wQ%2BGKZ9ufacAtLTqEtBW8sGBfEQySBgGvpQ3d95HJ0kXUoFp0Ql4M5NxIt0iAXNB3TKxCUdT0L7tD4NAlNH7Bc5J5aK7i1NHIttHp2uAXQvgEyNhMJ3Uk84GOqUBKH2Yo4BEKP4ARsxyMd3I8zUOWaQakrujtKi2UYVeXpCy%2F%2FX1kolMoQ8U75QWk681HxP%2BxQoWUNJu5pZAGHtGUSLonqCtqBFcK1I%2BRVKrlCB2bcl2Mg3AeE%2BWhi0mIRBFsqQBSIkymXeBIPqx5yo1bqxGTaSxRCTCceimgyxLkuQh5pzOqRzHwK3c8OgqWVK7U%2FbZQQ1090fDh%2BYJ375T18sPXXCX&X-Amz-Signature=747bb41dd44a4a93ac46d6486a2409ce7f8810ef6055060ae4ee7ff03a49b089&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KPB2GMJ%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBxc%2BW4r4xVvYm3hSYdNDrkB5lpVRs%2FhXIqzIrcHbbMRAiB39vyrzvWtjGlHeyRBEWosie9v%2BQeIM7COjrZDtEaa%2ByqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhVB%2B069q8YZh9c7cKtwDaWg9tP3YmP61d4PSo34eC%2Bf21jaK45m19c%2BuJChskFhinNdfwsu8Tncd9kAGQZo2v5esQLwPsAkdJIhL6SxB7D52kY%2FcMqsTFsMIq7SfUGjF%2BJwO7GFDE156YtAsMIuOdhMQmeLxW%2BClUGL1zdP6HfKtLNjcOn936tCpQ21XJXiFWl44b7VzQaGOFL30pU5uQy7a12llU4UF9ngx2SSjGqf3fGZB%2BjCoyT35fgGmCZN6xhe3uk1oFDzMGeIsmZb7jphXdIY8pt9u1JzIyjMfkWcPCvkHrk36AyzTlMXq9oAmw2wda66fEZzyXAn9EgS%2F3TD7rKLEmWYagvyOeVRgtbOyVL%2FiuIc9I3w9Igdawp2rp3DbK8HOeKheOqh8nnvt7FVlnIZ5HHrCNePh5Nvsip52vaqBMBSfzrPWToW9nX2b4jcjd24BQV1v4LL71S0R4vHIh8Msmmnm3au1ZTOLojFRp67ouIv2Xn4dxeS%2F9ppIOCy5L1p2hl2hU1nxXXy%2Bat%2F6qGtIcBCZbWgMeBAWUsRycmWlPncgOMnMfNzeKP7zdH0EdSoXWUjj%2FED5WjXPj6xFjUxMhyWBWr4KNtVFnKk86WOyi94Rk9GhYfhp%2BNZyCaX9tfc6TuXhadcws9STzgY6pgEF4zpVPJ09dNxJZM9Rna2D0%2BGzheJQqnc3KN4Y0dAfL%2Byfrr6s1iKEkGyGVjRFoXdol%2BawWTk2g6H9seCQ6SbOVP5GwyPBUeCbAPFMP1S2y0kdL3eYnxAskHbX745YeBQlMs6RAlnxon2zKuFiAaQVfl1YOCbZ67SOAybCUAQoz6tQjg2R2bzmnv49ODzL8fWAELNSjK7okpP1HkU7YVxt1%2Bnjyy6b&X-Amz-Signature=8c16a94ca188ee81d0463f1ab60df9f2e588514b7a6a2a0572f46d2957bc3482&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KPB2GMJ%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBxc%2BW4r4xVvYm3hSYdNDrkB5lpVRs%2FhXIqzIrcHbbMRAiB39vyrzvWtjGlHeyRBEWosie9v%2BQeIM7COjrZDtEaa%2ByqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhVB%2B069q8YZh9c7cKtwDaWg9tP3YmP61d4PSo34eC%2Bf21jaK45m19c%2BuJChskFhinNdfwsu8Tncd9kAGQZo2v5esQLwPsAkdJIhL6SxB7D52kY%2FcMqsTFsMIq7SfUGjF%2BJwO7GFDE156YtAsMIuOdhMQmeLxW%2BClUGL1zdP6HfKtLNjcOn936tCpQ21XJXiFWl44b7VzQaGOFL30pU5uQy7a12llU4UF9ngx2SSjGqf3fGZB%2BjCoyT35fgGmCZN6xhe3uk1oFDzMGeIsmZb7jphXdIY8pt9u1JzIyjMfkWcPCvkHrk36AyzTlMXq9oAmw2wda66fEZzyXAn9EgS%2F3TD7rKLEmWYagvyOeVRgtbOyVL%2FiuIc9I3w9Igdawp2rp3DbK8HOeKheOqh8nnvt7FVlnIZ5HHrCNePh5Nvsip52vaqBMBSfzrPWToW9nX2b4jcjd24BQV1v4LL71S0R4vHIh8Msmmnm3au1ZTOLojFRp67ouIv2Xn4dxeS%2F9ppIOCy5L1p2hl2hU1nxXXy%2Bat%2F6qGtIcBCZbWgMeBAWUsRycmWlPncgOMnMfNzeKP7zdH0EdSoXWUjj%2FED5WjXPj6xFjUxMhyWBWr4KNtVFnKk86WOyi94Rk9GhYfhp%2BNZyCaX9tfc6TuXhadcws9STzgY6pgEF4zpVPJ09dNxJZM9Rna2D0%2BGzheJQqnc3KN4Y0dAfL%2Byfrr6s1iKEkGyGVjRFoXdol%2BawWTk2g6H9seCQ6SbOVP5GwyPBUeCbAPFMP1S2y0kdL3eYnxAskHbX745YeBQlMs6RAlnxon2zKuFiAaQVfl1YOCbZ67SOAybCUAQoz6tQjg2R2bzmnv49ODzL8fWAELNSjK7okpP1HkU7YVxt1%2Bnjyy6b&X-Amz-Signature=82facecfe336b1812b2d6ce3c21ade7040b15b2bd52343a38de64b66656d2750&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KPB2GMJ%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBxc%2BW4r4xVvYm3hSYdNDrkB5lpVRs%2FhXIqzIrcHbbMRAiB39vyrzvWtjGlHeyRBEWosie9v%2BQeIM7COjrZDtEaa%2ByqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhVB%2B069q8YZh9c7cKtwDaWg9tP3YmP61d4PSo34eC%2Bf21jaK45m19c%2BuJChskFhinNdfwsu8Tncd9kAGQZo2v5esQLwPsAkdJIhL6SxB7D52kY%2FcMqsTFsMIq7SfUGjF%2BJwO7GFDE156YtAsMIuOdhMQmeLxW%2BClUGL1zdP6HfKtLNjcOn936tCpQ21XJXiFWl44b7VzQaGOFL30pU5uQy7a12llU4UF9ngx2SSjGqf3fGZB%2BjCoyT35fgGmCZN6xhe3uk1oFDzMGeIsmZb7jphXdIY8pt9u1JzIyjMfkWcPCvkHrk36AyzTlMXq9oAmw2wda66fEZzyXAn9EgS%2F3TD7rKLEmWYagvyOeVRgtbOyVL%2FiuIc9I3w9Igdawp2rp3DbK8HOeKheOqh8nnvt7FVlnIZ5HHrCNePh5Nvsip52vaqBMBSfzrPWToW9nX2b4jcjd24BQV1v4LL71S0R4vHIh8Msmmnm3au1ZTOLojFRp67ouIv2Xn4dxeS%2F9ppIOCy5L1p2hl2hU1nxXXy%2Bat%2F6qGtIcBCZbWgMeBAWUsRycmWlPncgOMnMfNzeKP7zdH0EdSoXWUjj%2FED5WjXPj6xFjUxMhyWBWr4KNtVFnKk86WOyi94Rk9GhYfhp%2BNZyCaX9tfc6TuXhadcws9STzgY6pgEF4zpVPJ09dNxJZM9Rna2D0%2BGzheJQqnc3KN4Y0dAfL%2Byfrr6s1iKEkGyGVjRFoXdol%2BawWTk2g6H9seCQ6SbOVP5GwyPBUeCbAPFMP1S2y0kdL3eYnxAskHbX745YeBQlMs6RAlnxon2zKuFiAaQVfl1YOCbZ67SOAybCUAQoz6tQjg2R2bzmnv49ODzL8fWAELNSjK7okpP1HkU7YVxt1%2Bnjyy6b&X-Amz-Signature=f7b551b74eff9afdd5d9d83ba2ec8bccddc9b6a7e0bd8a16dbde915dd92a7ce9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KPB2GMJ%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBxc%2BW4r4xVvYm3hSYdNDrkB5lpVRs%2FhXIqzIrcHbbMRAiB39vyrzvWtjGlHeyRBEWosie9v%2BQeIM7COjrZDtEaa%2ByqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhVB%2B069q8YZh9c7cKtwDaWg9tP3YmP61d4PSo34eC%2Bf21jaK45m19c%2BuJChskFhinNdfwsu8Tncd9kAGQZo2v5esQLwPsAkdJIhL6SxB7D52kY%2FcMqsTFsMIq7SfUGjF%2BJwO7GFDE156YtAsMIuOdhMQmeLxW%2BClUGL1zdP6HfKtLNjcOn936tCpQ21XJXiFWl44b7VzQaGOFL30pU5uQy7a12llU4UF9ngx2SSjGqf3fGZB%2BjCoyT35fgGmCZN6xhe3uk1oFDzMGeIsmZb7jphXdIY8pt9u1JzIyjMfkWcPCvkHrk36AyzTlMXq9oAmw2wda66fEZzyXAn9EgS%2F3TD7rKLEmWYagvyOeVRgtbOyVL%2FiuIc9I3w9Igdawp2rp3DbK8HOeKheOqh8nnvt7FVlnIZ5HHrCNePh5Nvsip52vaqBMBSfzrPWToW9nX2b4jcjd24BQV1v4LL71S0R4vHIh8Msmmnm3au1ZTOLojFRp67ouIv2Xn4dxeS%2F9ppIOCy5L1p2hl2hU1nxXXy%2Bat%2F6qGtIcBCZbWgMeBAWUsRycmWlPncgOMnMfNzeKP7zdH0EdSoXWUjj%2FED5WjXPj6xFjUxMhyWBWr4KNtVFnKk86WOyi94Rk9GhYfhp%2BNZyCaX9tfc6TuXhadcws9STzgY6pgEF4zpVPJ09dNxJZM9Rna2D0%2BGzheJQqnc3KN4Y0dAfL%2Byfrr6s1iKEkGyGVjRFoXdol%2BawWTk2g6H9seCQ6SbOVP5GwyPBUeCbAPFMP1S2y0kdL3eYnxAskHbX745YeBQlMs6RAlnxon2zKuFiAaQVfl1YOCbZ67SOAybCUAQoz6tQjg2R2bzmnv49ODzL8fWAELNSjK7okpP1HkU7YVxt1%2Bnjyy6b&X-Amz-Signature=51507bc51b4de576ed6ab75b8ff3cc2327eb2e236e2e789b9089bad1b050da84&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665P6UKO2Z%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085546Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAwGYBtAAWIkom6Xteb1Mb70KeCNC1L4OTFVluttOU%2F8AiAVg0G2lkiDEOUHJfHAQ1YGLxGMQxSRtgM3LMkmqEBJSiqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4Q8KNth7pHEKvLR6KtwDu0i4nCPNSW0Vr5ttSz7%2FhEnXC%2FdW5Iv2murIqmwW4h6D5GsnO%2FfFwQGRtVCCH4e9lKr6ou8hd69rG1RnWcaP6gDrw7jAkkI31fqq7sgPe8xtdbzrCqe0hvJpKqQof%2BSeh8IP4cOUD0mYC3nmu663FLi64T0H4H0o1CREaRzUzpFlLLJtU%2FhgRt3JKYP01g0yblJ%2BMEXwbrP5DQDHnSRahgdAIRufTanmJYYPDt8CxLJS3k%2Bj7RE2hsufp76cLMszAkV5tcaXLtWcgut%2F%2BgI352Bw1GTQ%2BJxeI0QrCGJP0jluB4wfozx6Zj3OilWLx8eLYq4hbPsy8URSqdri1Og1RxQBuBEurQuMftRRNtJ0RKjXk4sT%2Fdfed1EnyXKcS542%2FJKTZhGsgnwPDkDM4zaCxDnvIBs5lGSK9WBSISL2eQS1Vnt0dj%2FPfECcAaWVGN%2Bq8Et9CYLV5Z%2B%2FoAcDTIIXg5BsY1m2VTyG%2F26mazWlfsvduKwe3PDyDTowfoYybCx0d%2F6CyCAHOv7a8O2qrEGsLwNqhnbr1aacl%2BBKQl19%2BnL6qxtrD%2BqrJzBNCgI6ob3hN1f2VtH4NHMiPz1cl6oVkPbj5feCOzn3xAkbYqlHPk%2FdB38PlvUOrpFe4cIwptWTzgY6pgFlcHax%2FW24QFusfuDQBoH75pNb4EZW40QwNqF5ueiTDA2NBdlk2c529LUiODid8Ph9ugSyqzaz7FaingykDJ1eF4SlJsk4yurMkJ4VJi9JwWX%2Be0n1okKPd71%2Fx9Don61VM3VypciiOqMjoQcZTKepladP9SJ7O57IU4HfIqFnIzLeuMLVfegKe0WxJHIGO6cB9UfJH6XwcPnISiZ5RqcuHb2wyawt&X-Amz-Signature=8ee3b90e4246d2dd12177d30125f0f0c04906ff95a41b06b42d89a2945aa3801&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPL455BB%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085546Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDunlIkMJlf5BD6a5v0eDinwTFQs2s%2FX4I0fehwak%2BfbQIhALtsyKcCZ5dtSl4QEU9v11eQXWQqc%2BmvhTuqh%2FwyBU4CKogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwmq%2Fi0kd%2Fo%2F36crhgq3AOXGJgwaur%2F%2F%2Br9cKVVjkAhcAuTUiSqvIAteXjX58FZGFyWCSYxpdwqgH7%2FWt%2BtDbEfakoMnpYmRSPNdd1qoadocGbxkaDcnF%2FB3y1CTWQM1LOL9DLjxEFjMPJ6FUBs788%2BtoYJE%2FCzmwicJZMOL6ZWD%2BnRtgIdLjQ1zgaZfoyo4XQYDkJlBMFAVVg00nLAD%2FJ3en0tY%2FcoGrj4YAg82tMeNTKnfWRIjEWdZZDIfIcm6xlvlkMt2bIjGe2jXHJGFdR7d2ntVVO8lp1QyQFCgSjTy9zI0VuHD0QnvQ%2FOH2hrIdM%2FS1SQ0uDAP%2F2AdVmV%2BPT%2Bd3KtlrZXryq8xqXwZ9pYfbpKlm1rIEs8%2FncgvmU2GEWnZJd5YkxTP5JHJOOCjuWMj3R%2BXbmnUVyE%2BXhvv3kTaXnqQbfaRO1yXZr8%2BZuzCjmbRPqHYcF3QLb85oUypZzLxUWvrA%2FXZcJoCnVbDMPUkgYVnLSjiNkvonwzR9iU2J2l9zrxgENeVfHN9n0XxgqeHwDbqsZkZ7XU%2BH5SoqdVHmqSalqtwuYb98t2VTceO%2BD2aBPEEPy8FH3kJanYRzYjg2J8Tp8AOwrxMh2UnDLowwp1jB2e2ykuvLgORT3oIUd9RV%2FdDY1pwsKE%2FzDr05POBjqkAX2dP0LuYgJFlSRE5z4AVQKRDJrUgp0LqoXTzFoPSaiZlt0jr2NrMLhGC9sBvoZCuFd%2FtXlzH%2BGyYDhbq67774Qz3x%2FoJ6zRpfK%2BI0R45aQ5P2mbntKWL%2BTC%2FDkr9I5yV0Fq5VrB%2FFMdBMpXGlum%2Fn4mGNZF3Y5WM9EQqbqruGT6iskKRMO62YibBk9NHur57klXJmEVrPn3a7EeGBxXhxPWRGOD&X-Amz-Signature=c8ee5d56130a840caad0cd67db45df6fe6667fbef1a9a89a4a887b0771ffe98f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPL455BB%2F20260326%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260326T085546Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDunlIkMJlf5BD6a5v0eDinwTFQs2s%2FX4I0fehwak%2BfbQIhALtsyKcCZ5dtSl4QEU9v11eQXWQqc%2BmvhTuqh%2FwyBU4CKogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwmq%2Fi0kd%2Fo%2F36crhgq3AOXGJgwaur%2F%2F%2Br9cKVVjkAhcAuTUiSqvIAteXjX58FZGFyWCSYxpdwqgH7%2FWt%2BtDbEfakoMnpYmRSPNdd1qoadocGbxkaDcnF%2FB3y1CTWQM1LOL9DLjxEFjMPJ6FUBs788%2BtoYJE%2FCzmwicJZMOL6ZWD%2BnRtgIdLjQ1zgaZfoyo4XQYDkJlBMFAVVg00nLAD%2FJ3en0tY%2FcoGrj4YAg82tMeNTKnfWRIjEWdZZDIfIcm6xlvlkMt2bIjGe2jXHJGFdR7d2ntVVO8lp1QyQFCgSjTy9zI0VuHD0QnvQ%2FOH2hrIdM%2FS1SQ0uDAP%2F2AdVmV%2BPT%2Bd3KtlrZXryq8xqXwZ9pYfbpKlm1rIEs8%2FncgvmU2GEWnZJd5YkxTP5JHJOOCjuWMj3R%2BXbmnUVyE%2BXhvv3kTaXnqQbfaRO1yXZr8%2BZuzCjmbRPqHYcF3QLb85oUypZzLxUWvrA%2FXZcJoCnVbDMPUkgYVnLSjiNkvonwzR9iU2J2l9zrxgENeVfHN9n0XxgqeHwDbqsZkZ7XU%2BH5SoqdVHmqSalqtwuYb98t2VTceO%2BD2aBPEEPy8FH3kJanYRzYjg2J8Tp8AOwrxMh2UnDLowwp1jB2e2ykuvLgORT3oIUd9RV%2FdDY1pwsKE%2FzDr05POBjqkAX2dP0LuYgJFlSRE5z4AVQKRDJrUgp0LqoXTzFoPSaiZlt0jr2NrMLhGC9sBvoZCuFd%2FtXlzH%2BGyYDhbq67774Qz3x%2FoJ6zRpfK%2BI0R45aQ5P2mbntKWL%2BTC%2FDkr9I5yV0Fq5VrB%2FFMdBMpXGlum%2Fn4mGNZF3Y5WM9EQqbqruGT6iskKRMO62YibBk9NHur57klXJmEVrPn3a7EeGBxXhxPWRGOD&X-Amz-Signature=bdd9a876c68e5350ef3be11d7df862a05188a9cf29bae3f76762c29b5be1fe88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
