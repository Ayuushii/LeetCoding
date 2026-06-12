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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUMNLHPA%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJGMEQCID9uSN8RnLBdF8cmgfKgB29M3iMcVuuqyFjCRTvhoH3uAiAH3FxmhUb2H7w1NQkLQUKGXma2hmEKjhkQZlCAEDsj2ir%2FAwgTEAAaDDYzNzQyMzE4MzgwNSIM4E%2BQnp3TujGvMX4uKtwDI1Mx6vspyTZ%2FswQ1QAa1In9ZZ6ppEgh5N6aljLSlC4gX0API76HRdj5eUmmpW%2F4lkIf2ovY4jvYsJBOCzN6MjOysxDXXYWoDGA9IoRvVaeNmBlikJ%2FRe8VheAZdkgftJBj35MJNHucmkfjohSVN%2FeqGkQ8zWtGRHDVc6rG%2F1ex2W%2Fve3vP6kKNqdbDkH6Y9u9qbKn0l639z7t%2BdMRwSXZ3gxteluayE90DXkoKBzWEvoJp0iJlKRTw%2BAzZSRRqu9WG16e%2BiPI5g3VkvF%2Bojf8D4I%2FkHy%2FDg%2FcNm1P%2FbVg%2FWmtZK0mIOo9EcugQVG7ZagKPi2OWLMMr8SVER%2BlxjcJBf4pvLYvFdukNvbNKv3UdHA04my4zJssUMMUDVz6LaHl168TIc3oWnDjPyg02UcRAGapTDYSV850d6bgDMyuOqgTfZebB4FF6izvaa678Qomh1XDSkYI%2BsR86aNmZXbH6geY2n7zH5WxyycESZgyC3KvsMIC2HDwyJn%2FKJTvYVTQ8o5bhu484ID3kV4XDjSZxaUnEUPlza3stFVK5rR2pvR2j%2FGnEFJ8vQ9MjwLI8yB452FkyKQxL6ZY38kJEceJ4qYKop7cn1u5hgbEKgE%2BTy2V2Yo77y6j1q%2Ft00wuqCv0QY6pgFVyEduWWsPfk%2BxV0RGiYxpOJsbNB%2Fgzbqx7W2a%2F4m%2BaNH9%2BHZZ4HWGsRlACpYStglISaQUE6B5wiA3wkkCs%2BfwkyqWwLxY9rpA%2FqB5YAwdYWqyxr6hWI4HzhOmuJMAwNOpMoJdOVwqbLOXklg3NhLx87%2FcaCNgzsTP1I%2FrpDQjQP8c3zOC2DDhtt8yztqRVuvTxNelyx5ChUMgpY1mPGicXI%2FOiJjx&X-Amz-Signature=b20ecc2e88f1cf07132fcbd70432e79924f813f1c8338bf98dba9de09459d3c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUMNLHPA%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJGMEQCID9uSN8RnLBdF8cmgfKgB29M3iMcVuuqyFjCRTvhoH3uAiAH3FxmhUb2H7w1NQkLQUKGXma2hmEKjhkQZlCAEDsj2ir%2FAwgTEAAaDDYzNzQyMzE4MzgwNSIM4E%2BQnp3TujGvMX4uKtwDI1Mx6vspyTZ%2FswQ1QAa1In9ZZ6ppEgh5N6aljLSlC4gX0API76HRdj5eUmmpW%2F4lkIf2ovY4jvYsJBOCzN6MjOysxDXXYWoDGA9IoRvVaeNmBlikJ%2FRe8VheAZdkgftJBj35MJNHucmkfjohSVN%2FeqGkQ8zWtGRHDVc6rG%2F1ex2W%2Fve3vP6kKNqdbDkH6Y9u9qbKn0l639z7t%2BdMRwSXZ3gxteluayE90DXkoKBzWEvoJp0iJlKRTw%2BAzZSRRqu9WG16e%2BiPI5g3VkvF%2Bojf8D4I%2FkHy%2FDg%2FcNm1P%2FbVg%2FWmtZK0mIOo9EcugQVG7ZagKPi2OWLMMr8SVER%2BlxjcJBf4pvLYvFdukNvbNKv3UdHA04my4zJssUMMUDVz6LaHl168TIc3oWnDjPyg02UcRAGapTDYSV850d6bgDMyuOqgTfZebB4FF6izvaa678Qomh1XDSkYI%2BsR86aNmZXbH6geY2n7zH5WxyycESZgyC3KvsMIC2HDwyJn%2FKJTvYVTQ8o5bhu484ID3kV4XDjSZxaUnEUPlza3stFVK5rR2pvR2j%2FGnEFJ8vQ9MjwLI8yB452FkyKQxL6ZY38kJEceJ4qYKop7cn1u5hgbEKgE%2BTy2V2Yo77y6j1q%2Ft00wuqCv0QY6pgFVyEduWWsPfk%2BxV0RGiYxpOJsbNB%2Fgzbqx7W2a%2F4m%2BaNH9%2BHZZ4HWGsRlACpYStglISaQUE6B5wiA3wkkCs%2BfwkyqWwLxY9rpA%2FqB5YAwdYWqyxr6hWI4HzhOmuJMAwNOpMoJdOVwqbLOXklg3NhLx87%2FcaCNgzsTP1I%2FrpDQjQP8c3zOC2DDhtt8yztqRVuvTxNelyx5ChUMgpY1mPGicXI%2FOiJjx&X-Amz-Signature=407d54a949046df8d6c3fd19ea7f30e42ec042205865334e1bf1e2b30520bc77&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUMNLHPA%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJGMEQCID9uSN8RnLBdF8cmgfKgB29M3iMcVuuqyFjCRTvhoH3uAiAH3FxmhUb2H7w1NQkLQUKGXma2hmEKjhkQZlCAEDsj2ir%2FAwgTEAAaDDYzNzQyMzE4MzgwNSIM4E%2BQnp3TujGvMX4uKtwDI1Mx6vspyTZ%2FswQ1QAa1In9ZZ6ppEgh5N6aljLSlC4gX0API76HRdj5eUmmpW%2F4lkIf2ovY4jvYsJBOCzN6MjOysxDXXYWoDGA9IoRvVaeNmBlikJ%2FRe8VheAZdkgftJBj35MJNHucmkfjohSVN%2FeqGkQ8zWtGRHDVc6rG%2F1ex2W%2Fve3vP6kKNqdbDkH6Y9u9qbKn0l639z7t%2BdMRwSXZ3gxteluayE90DXkoKBzWEvoJp0iJlKRTw%2BAzZSRRqu9WG16e%2BiPI5g3VkvF%2Bojf8D4I%2FkHy%2FDg%2FcNm1P%2FbVg%2FWmtZK0mIOo9EcugQVG7ZagKPi2OWLMMr8SVER%2BlxjcJBf4pvLYvFdukNvbNKv3UdHA04my4zJssUMMUDVz6LaHl168TIc3oWnDjPyg02UcRAGapTDYSV850d6bgDMyuOqgTfZebB4FF6izvaa678Qomh1XDSkYI%2BsR86aNmZXbH6geY2n7zH5WxyycESZgyC3KvsMIC2HDwyJn%2FKJTvYVTQ8o5bhu484ID3kV4XDjSZxaUnEUPlza3stFVK5rR2pvR2j%2FGnEFJ8vQ9MjwLI8yB452FkyKQxL6ZY38kJEceJ4qYKop7cn1u5hgbEKgE%2BTy2V2Yo77y6j1q%2Ft00wuqCv0QY6pgFVyEduWWsPfk%2BxV0RGiYxpOJsbNB%2Fgzbqx7W2a%2F4m%2BaNH9%2BHZZ4HWGsRlACpYStglISaQUE6B5wiA3wkkCs%2BfwkyqWwLxY9rpA%2FqB5YAwdYWqyxr6hWI4HzhOmuJMAwNOpMoJdOVwqbLOXklg3NhLx87%2FcaCNgzsTP1I%2FrpDQjQP8c3zOC2DDhtt8yztqRVuvTxNelyx5ChUMgpY1mPGicXI%2FOiJjx&X-Amz-Signature=6f4bdb92915eab25980ef558028917405bdaa62b5934ce28dca80b21e2cd9111&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SWCU4B73%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJIMEYCIQCQ7%2FGbB8SfEIP%2F3qQ813tgVvGT7Ibv1bo5p5qzG8KE%2BgIhANs%2B4XczrG8g7ueGie09zAb831EHE5pAdYaxHz0I3%2FB7Kv8DCBIQABoMNjM3NDIzMTgzODA1IgwJT1cIi8uf6KewhbUq3AOPEp4zb96UPRi7DF4TdmwM0dmflRQy8%2FBjOz%2Fva4By%2Fu65yXQsp0BOokpqWyxsjfeExtyAe9XapBdqMhftf6u24RkvGeSTryLQV01M3stYXkuyKOE1U4WJiuOAvZ%2BSS3bJtm74DYGphVIIp1ob5rvwFb7VPWWZjgTMQ9lncEl1vKwDKgdZT8uS0kR%2Bwi4CuRzpsPt6A8cQffvYHm8YGJeSzzqGCHLjN7jBXi%2FEupMUQTUYKXYO%2FU2JVBmtPOjL%2FuFRkEhnY%2B08%2F%2F8GCwRmpj2d3iuF%2Bicw%2FbUdAACt59PETiT7C6N1ZzNEHkZbu6X%2BrEirgpS7CnpbubLOgow7ikzz0rYFO9Ba3Js8GjctamaE5JKTLweb1fLrjw9%2FxQ3J4BJcsqk9USE1mwp0my38t8LGq7tGRV9EFMHTR5WcOtRfUzqY7tc3q%2FvvRkYGNVhz4dCZ5dZVLWDBQ5D8woNS25s80v7UNJABdO2P97LsPnTUNQ7Mf%2BPPvxqJg0NBWMG%2BFOYuGPGDgEJV3FZ8WtZysNJfzZI7CgFeFC3Ww0QHiqhIxFW6ijEGicrhSONFbqQ%2FM7w%2FDPmM0BDlidairFARhIooSlMai3ioKjFIKPjOrpyGsxN%2FglyznVaOc47sCDCJoK%2FRBjqkATYTBfYsxsMzvDcINYQdCqj1ukNqa6adaB%2FNZ7aTBs4tV2Fn4SIzKRdNREW6LXiN92spZyIYLQEF4PUfv1A8HiXLfMR4BlR88MkIWFTdP6lpPk%2FJbwbB%2FZc7%2Bt0ZePWOGuE6ynGNPqiOIiBRKw2CMFGcmFDmzO8TGvytAB41T4kCi4YkiEXBre1kW%2BZ2jHQ1F5caxRnho%2FZSY9hRvFiL3wIrOm4Z&X-Amz-Signature=f0f34f0bc7d574eb2ea5fc545e0d80b4904ac0bace0be4f83a65dd12342f9ee1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SWCU4B73%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJIMEYCIQCQ7%2FGbB8SfEIP%2F3qQ813tgVvGT7Ibv1bo5p5qzG8KE%2BgIhANs%2B4XczrG8g7ueGie09zAb831EHE5pAdYaxHz0I3%2FB7Kv8DCBIQABoMNjM3NDIzMTgzODA1IgwJT1cIi8uf6KewhbUq3AOPEp4zb96UPRi7DF4TdmwM0dmflRQy8%2FBjOz%2Fva4By%2Fu65yXQsp0BOokpqWyxsjfeExtyAe9XapBdqMhftf6u24RkvGeSTryLQV01M3stYXkuyKOE1U4WJiuOAvZ%2BSS3bJtm74DYGphVIIp1ob5rvwFb7VPWWZjgTMQ9lncEl1vKwDKgdZT8uS0kR%2Bwi4CuRzpsPt6A8cQffvYHm8YGJeSzzqGCHLjN7jBXi%2FEupMUQTUYKXYO%2FU2JVBmtPOjL%2FuFRkEhnY%2B08%2F%2F8GCwRmpj2d3iuF%2Bicw%2FbUdAACt59PETiT7C6N1ZzNEHkZbu6X%2BrEirgpS7CnpbubLOgow7ikzz0rYFO9Ba3Js8GjctamaE5JKTLweb1fLrjw9%2FxQ3J4BJcsqk9USE1mwp0my38t8LGq7tGRV9EFMHTR5WcOtRfUzqY7tc3q%2FvvRkYGNVhz4dCZ5dZVLWDBQ5D8woNS25s80v7UNJABdO2P97LsPnTUNQ7Mf%2BPPvxqJg0NBWMG%2BFOYuGPGDgEJV3FZ8WtZysNJfzZI7CgFeFC3Ww0QHiqhIxFW6ijEGicrhSONFbqQ%2FM7w%2FDPmM0BDlidairFARhIooSlMai3ioKjFIKPjOrpyGsxN%2FglyznVaOc47sCDCJoK%2FRBjqkATYTBfYsxsMzvDcINYQdCqj1ukNqa6adaB%2FNZ7aTBs4tV2Fn4SIzKRdNREW6LXiN92spZyIYLQEF4PUfv1A8HiXLfMR4BlR88MkIWFTdP6lpPk%2FJbwbB%2FZc7%2Bt0ZePWOGuE6ynGNPqiOIiBRKw2CMFGcmFDmzO8TGvytAB41T4kCi4YkiEXBre1kW%2BZ2jHQ1F5caxRnho%2FZSY9hRvFiL3wIrOm4Z&X-Amz-Signature=714b6aeaad85a427fde1adc9a43bf3bfed387e587471d51d778458e537a19d47&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SWCU4B73%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJIMEYCIQCQ7%2FGbB8SfEIP%2F3qQ813tgVvGT7Ibv1bo5p5qzG8KE%2BgIhANs%2B4XczrG8g7ueGie09zAb831EHE5pAdYaxHz0I3%2FB7Kv8DCBIQABoMNjM3NDIzMTgzODA1IgwJT1cIi8uf6KewhbUq3AOPEp4zb96UPRi7DF4TdmwM0dmflRQy8%2FBjOz%2Fva4By%2Fu65yXQsp0BOokpqWyxsjfeExtyAe9XapBdqMhftf6u24RkvGeSTryLQV01M3stYXkuyKOE1U4WJiuOAvZ%2BSS3bJtm74DYGphVIIp1ob5rvwFb7VPWWZjgTMQ9lncEl1vKwDKgdZT8uS0kR%2Bwi4CuRzpsPt6A8cQffvYHm8YGJeSzzqGCHLjN7jBXi%2FEupMUQTUYKXYO%2FU2JVBmtPOjL%2FuFRkEhnY%2B08%2F%2F8GCwRmpj2d3iuF%2Bicw%2FbUdAACt59PETiT7C6N1ZzNEHkZbu6X%2BrEirgpS7CnpbubLOgow7ikzz0rYFO9Ba3Js8GjctamaE5JKTLweb1fLrjw9%2FxQ3J4BJcsqk9USE1mwp0my38t8LGq7tGRV9EFMHTR5WcOtRfUzqY7tc3q%2FvvRkYGNVhz4dCZ5dZVLWDBQ5D8woNS25s80v7UNJABdO2P97LsPnTUNQ7Mf%2BPPvxqJg0NBWMG%2BFOYuGPGDgEJV3FZ8WtZysNJfzZI7CgFeFC3Ww0QHiqhIxFW6ijEGicrhSONFbqQ%2FM7w%2FDPmM0BDlidairFARhIooSlMai3ioKjFIKPjOrpyGsxN%2FglyznVaOc47sCDCJoK%2FRBjqkATYTBfYsxsMzvDcINYQdCqj1ukNqa6adaB%2FNZ7aTBs4tV2Fn4SIzKRdNREW6LXiN92spZyIYLQEF4PUfv1A8HiXLfMR4BlR88MkIWFTdP6lpPk%2FJbwbB%2FZc7%2Bt0ZePWOGuE6ynGNPqiOIiBRKw2CMFGcmFDmzO8TGvytAB41T4kCi4YkiEXBre1kW%2BZ2jHQ1F5caxRnho%2FZSY9hRvFiL3wIrOm4Z&X-Amz-Signature=d2704cf5a081697cf57bb2912bc12c348386ff11f97ae1fa2af26a1a18efd18a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SWCU4B73%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114215Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJIMEYCIQCQ7%2FGbB8SfEIP%2F3qQ813tgVvGT7Ibv1bo5p5qzG8KE%2BgIhANs%2B4XczrG8g7ueGie09zAb831EHE5pAdYaxHz0I3%2FB7Kv8DCBIQABoMNjM3NDIzMTgzODA1IgwJT1cIi8uf6KewhbUq3AOPEp4zb96UPRi7DF4TdmwM0dmflRQy8%2FBjOz%2Fva4By%2Fu65yXQsp0BOokpqWyxsjfeExtyAe9XapBdqMhftf6u24RkvGeSTryLQV01M3stYXkuyKOE1U4WJiuOAvZ%2BSS3bJtm74DYGphVIIp1ob5rvwFb7VPWWZjgTMQ9lncEl1vKwDKgdZT8uS0kR%2Bwi4CuRzpsPt6A8cQffvYHm8YGJeSzzqGCHLjN7jBXi%2FEupMUQTUYKXYO%2FU2JVBmtPOjL%2FuFRkEhnY%2B08%2F%2F8GCwRmpj2d3iuF%2Bicw%2FbUdAACt59PETiT7C6N1ZzNEHkZbu6X%2BrEirgpS7CnpbubLOgow7ikzz0rYFO9Ba3Js8GjctamaE5JKTLweb1fLrjw9%2FxQ3J4BJcsqk9USE1mwp0my38t8LGq7tGRV9EFMHTR5WcOtRfUzqY7tc3q%2FvvRkYGNVhz4dCZ5dZVLWDBQ5D8woNS25s80v7UNJABdO2P97LsPnTUNQ7Mf%2BPPvxqJg0NBWMG%2BFOYuGPGDgEJV3FZ8WtZysNJfzZI7CgFeFC3Ww0QHiqhIxFW6ijEGicrhSONFbqQ%2FM7w%2FDPmM0BDlidairFARhIooSlMai3ioKjFIKPjOrpyGsxN%2FglyznVaOc47sCDCJoK%2FRBjqkATYTBfYsxsMzvDcINYQdCqj1ukNqa6adaB%2FNZ7aTBs4tV2Fn4SIzKRdNREW6LXiN92spZyIYLQEF4PUfv1A8HiXLfMR4BlR88MkIWFTdP6lpPk%2FJbwbB%2FZc7%2Bt0ZePWOGuE6ynGNPqiOIiBRKw2CMFGcmFDmzO8TGvytAB41T4kCi4YkiEXBre1kW%2BZ2jHQ1F5caxRnho%2FZSY9hRvFiL3wIrOm4Z&X-Amz-Signature=9288b2b852fb197fa31ffe4783c76074ee4f48b067ffad85a2b5c29d1756f208&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QIKKMQ65%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJHMEUCIF3F3UIHhql7Ag8zyn9oBpQbgUn4wdPrTrfrQz2spDR0AiEAoKVzDqpyxqyNHXoDKEaVREbsuldEy6s8xu8cFtVUTrAq%2FwMIExAAGgw2Mzc0MjMxODM4MDUiDNhXpXq8N0nmvNKa1SrcA%2Bpe%2BwD5iiVU%2BDI6J8IXh154QVfk%2BHnE6Zu937Xq4WZNf8U%2BVVBE8sn9pHGyvvHq6e76kMLNw0RSCbtfshhmDvGOKSyzqsqtK3CN%2B%2F3QxmIu7OT%2F9ke%2BJ7zstn4us%2BQwM2JmIeQKoDDRAPKOlyC1KIO42oWhq0shKWrbqFVXt7xSNL4Li03vm2rhB%2BDRGY8ADXFyuA9G2w7l8vGr6SjEo3fbof%2BYHAe0rMQwhdDJla0ZkbmxeGazNQHKPGGIgySHxQZc6TBCdVNKOD779zkK2p%2BMDEX3pEGPZ%2FWegeg7jBo3saMVYNdOCiJBoJWeJROy%2FL4DXfCHAFaADUlfwYsSyuuinmcOlNZDlNQA0m5yKRfJbdVn8NiVWLSQ6%2Fqr6onNQWQ0qp91Pwv4oggp4xudlDaSpOY2L6efHqjrHeTE3L%2F2gjHAw%2BkF07kJT12X7CQVob8YmAHflsGnOXz2GhCje1FncLPtnXpeixyzaC41DndchH%2FVmZCbUujwk8jMmjtB5NDbN8djfMX%2BqBn9%2BoSWzEr%2BOKBRWZJxGSKvGaVIuU57VzK5ApTNn1Gpj9RbrhTczoD5w7KJ%2BVM1zhsoRNi4y5Y3t1%2F%2BuT8SGi36K%2FR8Dwc2Pbc7uc%2B5p%2BS2OS7yMKOir9EGOqUBvkK4njtF41IS6fpkclj3p5KSTwWut1EfJ1%2FVE8RBLES8Kd60hfVRQeVKPBO9%2Boq%2BMdjY%2Bqrrp%2FAUXMAiIE3jBl3LAqpv5tTkkHrBCwoxk3CrzMA%2FFoNCw8fmAXIeg4cpTR%2FdPxtNzfgd0H5ytrQ1e9z%2FF7XeO8LO%2BkRW%2F7l6e3Tgsj4fOsSAU3fR724FexepQTF1qTZ5xy3eGYZNilxvhwFK4HhP&X-Amz-Signature=cc5e0372316dc43f8bc0252e5cf262e9abf13ab1f1a1cfa7321530f86042cd1b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHF57RTO%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJHMEUCIAh6frbonfXHJJdkDDi1Otux9n3LwHvRogYxycbLjJqTAiEA3bkJJJWbtiqN4xL9VeYpcyGGkh0vjgECFU03NHU2uIAq%2FwMIExAAGgw2Mzc0MjMxODM4MDUiDHU%2FBAeoPcVj0nJ8MSrcA448sAjQqy1mN6RFFVrIMe%2FL%2Fe0IHkkYbBt13cRcs1jzztZFyWVR5okUUAG589Kks10btJcJvzjt9naD%2BoRaYk9hHMJTgOA4jRCqmEQn5crKCiel9B2oLGC8QCpIOw0jP0ns3CUw6cBDhkCQMa3O%2B6RJIHTyr3a0xWW8Re8exj0O%2BZPFXzpOvO9EzmasFy8zG6EVu7vcVtW8%2BYM7E3vil16tadlpMMbMImtM2PUTV%2B0RztVEInvRZHrdac9rEBmHmnU7wehp6pYn1zu%2BuTC4D0aR%2BsuCnNLj11ZfqCm7R5FD3z3GetPBu7sIuTzBE2tyAwOwWVonl4sCajFJUiIJeQAt0bM00k6f0FXTpQGRSeVL9OPTvP%2Bb1v6u1nNp8A2Fq0OuMLawfiZFiVuWWfxEdAT2GW%2B52%2BB52wwSUNnYpVBjbEXPukuaqaWEyPDgQRGLdB6Rt0Rwq2XNS0%2BblfsfcxAO%2Fa1pyyjrSwy%2FPtt0pUF%2FuCnTlLuvCK1OIXu%2BWZOEs3126utgWYoad5o7pCv50jhGheweVceNwBx5Z9EqTXE72MRpwTYQ4KUhdnImBttHTiU6%2BMgeom4HaJMrRFlCz6XYYizx%2Bt6Hq%2Fckn5VoOjrm8T4zHVEeuq5BjCCNMPmhr9EGOqUBCrCg37H4lm%2Bcg1KynNcvBtaIGafSSI3s%2BI0bNLEDkoT%2B6qb5O%2BOi9vwSjHbfzqfX%2FtlvfHl71NuEP9yZfm4p%2BsvfeeUnWwgLlAPsokHvtxnwZHileje3StsJ26djVtomMznhoI8YecxceJfv45uJmoOy2RDPq0NpR5UQ37DH9cGBpf2l6z%2B4aHQnn5%2F4aglN%2BespJbeEs%2B59ssPaW1Paz5oqoezB&X-Amz-Signature=e2183883146781a022636cef0a659cc6ec0aad7d122887f61bfc921622f7904b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHF57RTO%2F20260612%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260612T114216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEoaCXVzLXdlc3QtMiJHMEUCIAh6frbonfXHJJdkDDi1Otux9n3LwHvRogYxycbLjJqTAiEA3bkJJJWbtiqN4xL9VeYpcyGGkh0vjgECFU03NHU2uIAq%2FwMIExAAGgw2Mzc0MjMxODM4MDUiDHU%2FBAeoPcVj0nJ8MSrcA448sAjQqy1mN6RFFVrIMe%2FL%2Fe0IHkkYbBt13cRcs1jzztZFyWVR5okUUAG589Kks10btJcJvzjt9naD%2BoRaYk9hHMJTgOA4jRCqmEQn5crKCiel9B2oLGC8QCpIOw0jP0ns3CUw6cBDhkCQMa3O%2B6RJIHTyr3a0xWW8Re8exj0O%2BZPFXzpOvO9EzmasFy8zG6EVu7vcVtW8%2BYM7E3vil16tadlpMMbMImtM2PUTV%2B0RztVEInvRZHrdac9rEBmHmnU7wehp6pYn1zu%2BuTC4D0aR%2BsuCnNLj11ZfqCm7R5FD3z3GetPBu7sIuTzBE2tyAwOwWVonl4sCajFJUiIJeQAt0bM00k6f0FXTpQGRSeVL9OPTvP%2Bb1v6u1nNp8A2Fq0OuMLawfiZFiVuWWfxEdAT2GW%2B52%2BB52wwSUNnYpVBjbEXPukuaqaWEyPDgQRGLdB6Rt0Rwq2XNS0%2BblfsfcxAO%2Fa1pyyjrSwy%2FPtt0pUF%2FuCnTlLuvCK1OIXu%2BWZOEs3126utgWYoad5o7pCv50jhGheweVceNwBx5Z9EqTXE72MRpwTYQ4KUhdnImBttHTiU6%2BMgeom4HaJMrRFlCz6XYYizx%2Bt6Hq%2Fckn5VoOjrm8T4zHVEeuq5BjCCNMPmhr9EGOqUBCrCg37H4lm%2Bcg1KynNcvBtaIGafSSI3s%2BI0bNLEDkoT%2B6qb5O%2BOi9vwSjHbfzqfX%2FtlvfHl71NuEP9yZfm4p%2BsvfeeUnWwgLlAPsokHvtxnwZHileje3StsJ26djVtomMznhoI8YecxceJfv45uJmoOy2RDPq0NpR5UQ37DH9cGBpf2l6z%2B4aHQnn5%2F4aglN%2BespJbeEs%2B59ssPaW1Paz5oqoezB&X-Amz-Signature=07d60e2aa809cdb4e19e6b8a13895e062b65655e4627236abddedb93ec9b8c8f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
