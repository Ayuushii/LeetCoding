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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PGQ3YEB%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICH68ZDRRX7MaOopr8hijPrkpT8EVFTe%2FzXxyXGrQaBXAiEAu6dISx1L%2BBJE3nlyhrMFwoPDwlAEO6Dl1OcBdUL%2Fol0q%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDBnhe%2F4CFnUSW%2FaGFyrcA6aHKWyCCy0mjZlla8zIgtWo1iLE3SMuDi1vyASqLTaazlUoQsHIAzjwWgJWl59%2BVwJ2lMYOPE00t0ZHWWXpx%2BzEAE6LhMNLcnsQXl6s7cwFr1wxQNMqsuhkMaYbW9ZcNHlNIpNotob%2BQMIOvM68vXwxurAQqdqtMnwgHqoDhUYP1xp9nZCVjJx0MvqXrvtP%2FcPchhy9B8E6ke6XQnH88ZEyqHsiqGABEEvOLPijpq6vbHku1H0wOA%2Bi3D3umBeRsyyOkRphw4BHK5%2BeuUCs3MjhkDP9exNmVP3zCpsW7c7BJ9Ui0kR8vKzbtNm%2Bm%2Fh7JbpFz20WOPWO4dQhHcaQdV9GLRROvJpG2V7Vi44egmicZlaesfAVtl1aR4A37Ga7UoTV2qSHjDAN5PMk921Uh88%2FXYSuyKjJ64tk9FSyYGYturLh9CwIMJx240juERzawkt4DGBLLINocVP654oNNWywynQqJ7na32YhW4TJuMLDkLBZlQAGQIEQTsKF8i3aeBc39mOThwBtb4wBTwoPSfE%2BhVt6%2BKhrIFeQSzWzDra7oWIZ6wSK4EZ2xell37sIWdDjUu3dEOEXYo5HrxWhnys8003BrGpRQE8%2BiiicTFscUZc2unhqvy6PHBwYMK%2BoktgGOqUBJUX%2FSiJ7e1aeQ%2FB3fmRFgA82ADhLBzqHPAp1qx71Rf2wrLasVgLNVJogMpqcVrlt6d%2BLlWt8YwwYnyfHYbnWWxD8hPIGx7FO5e6ggpFKnME0TIREDe%2F%2FFUZl1a7Dio8GhgsXptokmgxsRPnUUopXBPJn%2BIzlL1ev1kIG2qRmTVuKqYVtEW4XZdMD%2Fc72ric5%2Ffylude68%2BsxhuSdyXWDEcDIlrT8&X-Amz-Signature=7bc86962999b9fbb955e08672e081946024792713e10c8f8e3c04beab802e32d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PGQ3YEB%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICH68ZDRRX7MaOopr8hijPrkpT8EVFTe%2FzXxyXGrQaBXAiEAu6dISx1L%2BBJE3nlyhrMFwoPDwlAEO6Dl1OcBdUL%2Fol0q%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDBnhe%2F4CFnUSW%2FaGFyrcA6aHKWyCCy0mjZlla8zIgtWo1iLE3SMuDi1vyASqLTaazlUoQsHIAzjwWgJWl59%2BVwJ2lMYOPE00t0ZHWWXpx%2BzEAE6LhMNLcnsQXl6s7cwFr1wxQNMqsuhkMaYbW9ZcNHlNIpNotob%2BQMIOvM68vXwxurAQqdqtMnwgHqoDhUYP1xp9nZCVjJx0MvqXrvtP%2FcPchhy9B8E6ke6XQnH88ZEyqHsiqGABEEvOLPijpq6vbHku1H0wOA%2Bi3D3umBeRsyyOkRphw4BHK5%2BeuUCs3MjhkDP9exNmVP3zCpsW7c7BJ9Ui0kR8vKzbtNm%2Bm%2Fh7JbpFz20WOPWO4dQhHcaQdV9GLRROvJpG2V7Vi44egmicZlaesfAVtl1aR4A37Ga7UoTV2qSHjDAN5PMk921Uh88%2FXYSuyKjJ64tk9FSyYGYturLh9CwIMJx240juERzawkt4DGBLLINocVP654oNNWywynQqJ7na32YhW4TJuMLDkLBZlQAGQIEQTsKF8i3aeBc39mOThwBtb4wBTwoPSfE%2BhVt6%2BKhrIFeQSzWzDra7oWIZ6wSK4EZ2xell37sIWdDjUu3dEOEXYo5HrxWhnys8003BrGpRQE8%2BiiicTFscUZc2unhqvy6PHBwYMK%2BoktgGOqUBJUX%2FSiJ7e1aeQ%2FB3fmRFgA82ADhLBzqHPAp1qx71Rf2wrLasVgLNVJogMpqcVrlt6d%2BLlWt8YwwYnyfHYbnWWxD8hPIGx7FO5e6ggpFKnME0TIREDe%2F%2FFUZl1a7Dio8GhgsXptokmgxsRPnUUopXBPJn%2BIzlL1ev1kIG2qRmTVuKqYVtEW4XZdMD%2Fc72ric5%2Ffylude68%2BsxhuSdyXWDEcDIlrT8&X-Amz-Signature=e65809d7d1c62c42e6699216015aedc651212161ab51181707a43b49d450e25b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PGQ3YEB%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195124Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICH68ZDRRX7MaOopr8hijPrkpT8EVFTe%2FzXxyXGrQaBXAiEAu6dISx1L%2BBJE3nlyhrMFwoPDwlAEO6Dl1OcBdUL%2Fol0q%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDBnhe%2F4CFnUSW%2FaGFyrcA6aHKWyCCy0mjZlla8zIgtWo1iLE3SMuDi1vyASqLTaazlUoQsHIAzjwWgJWl59%2BVwJ2lMYOPE00t0ZHWWXpx%2BzEAE6LhMNLcnsQXl6s7cwFr1wxQNMqsuhkMaYbW9ZcNHlNIpNotob%2BQMIOvM68vXwxurAQqdqtMnwgHqoDhUYP1xp9nZCVjJx0MvqXrvtP%2FcPchhy9B8E6ke6XQnH88ZEyqHsiqGABEEvOLPijpq6vbHku1H0wOA%2Bi3D3umBeRsyyOkRphw4BHK5%2BeuUCs3MjhkDP9exNmVP3zCpsW7c7BJ9Ui0kR8vKzbtNm%2Bm%2Fh7JbpFz20WOPWO4dQhHcaQdV9GLRROvJpG2V7Vi44egmicZlaesfAVtl1aR4A37Ga7UoTV2qSHjDAN5PMk921Uh88%2FXYSuyKjJ64tk9FSyYGYturLh9CwIMJx240juERzawkt4DGBLLINocVP654oNNWywynQqJ7na32YhW4TJuMLDkLBZlQAGQIEQTsKF8i3aeBc39mOThwBtb4wBTwoPSfE%2BhVt6%2BKhrIFeQSzWzDra7oWIZ6wSK4EZ2xell37sIWdDjUu3dEOEXYo5HrxWhnys8003BrGpRQE8%2BiiicTFscUZc2unhqvy6PHBwYMK%2BoktgGOqUBJUX%2FSiJ7e1aeQ%2FB3fmRFgA82ADhLBzqHPAp1qx71Rf2wrLasVgLNVJogMpqcVrlt6d%2BLlWt8YwwYnyfHYbnWWxD8hPIGx7FO5e6ggpFKnME0TIREDe%2F%2FFUZl1a7Dio8GhgsXptokmgxsRPnUUopXBPJn%2BIzlL1ev1kIG2qRmTVuKqYVtEW4XZdMD%2Fc72ric5%2Ffylude68%2BsxhuSdyXWDEcDIlrT8&X-Amz-Signature=099d21d66d10ec697d7175dc2c7eda06c758b9c429912897c609b4370fbffb36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHLWQPW3%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFCfGXORyHZAUMW0kcwpuWAer7ukLB1Y7ONZGguPZ%2Bq6AiEA6FF0fP%2FW6R6mq8hzso%2BvEB6RAdepUUuKoB59G4x1mDUq%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDDXYk9bkkkCi6r0knCrcA%2BbeaqgUneikRJDjUdKzdgm2lcVO6g8BGEvYHI%2BBYmdYEOdt1FVT3durA7Yk1KCY3K8wNUmnQN%2Bnw66kwz9mYIfVFvcD3I6ZvIWTAx00LsIzDP4HAUhbsh4W9etexCcjPpeWvchSkx%2FCP0Gap38LX7LSCcZZUkjCC4%2FGSBqzJkVCp0%2FDnX4p0161zudRAm0ekKbt3YgYg6nSH7eXHstoBERnH3PZQxbhJ2GJQ1TjZYnsYIjSeJ6ZdHUmbXhgr2DMKpoAORHBdRawxkKNxNrx44h9OizHc5vfMjNUMt%2Fne6gXW5jRezdgEnHudTT7hQfGcQwLOhujDGYENmyW4DvyA%2Fq13cLZQ0sLHqcTQgmSz%2F4T2kff1ba64c6T5puczTpCvjja6TiILiCj%2Fc62xRFF1AF5PTLRihaaCxGXW%2FADA10sz0fdaSY%2FQNQAqJOAIi7VsEcOA8VdBPJ244k2%2B7GC3HXJ8V6CyEqBOA7oewUn68eLfxy2pEqj2iQpPpRGv9U4X%2BBXZMoUJ3ODWrs8LDu%2FFpnudieglF71iQbJE8omViV80fUDImOaWGcooIzQWjT5dbl0WsMbCGG8GNau5uaCZ%2FpRzKal6jx4hrVpcmRmNukHYC8kqEXRB2sN7IzPMPipktgGOqUBLZnquc8BbFqkg9o83d5HrA0PycIW9%2F3Q4OOIBedlRHuvLd1m5%2Bm6dGCI4SS%2FUQNc8DEQjHTazkkFLN1IHGEDArMuH1gJksu7dSsn6yIn5zGUZ9oUogzwVpwrXAnb3UrSo3JgDqVtBCigwwv8rLUwQu0hkEoqdXzCd4PtISRU13s9HA7OxJ8OsS83B05%2F5AF0gbiSihk3XaI2qsEaMzmk7y5YXS2O&X-Amz-Signature=e041f00187a049b6f2656144becca2b37b1f638c8923072e5124fd2ab689d8be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHLWQPW3%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFCfGXORyHZAUMW0kcwpuWAer7ukLB1Y7ONZGguPZ%2Bq6AiEA6FF0fP%2FW6R6mq8hzso%2BvEB6RAdepUUuKoB59G4x1mDUq%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDDXYk9bkkkCi6r0knCrcA%2BbeaqgUneikRJDjUdKzdgm2lcVO6g8BGEvYHI%2BBYmdYEOdt1FVT3durA7Yk1KCY3K8wNUmnQN%2Bnw66kwz9mYIfVFvcD3I6ZvIWTAx00LsIzDP4HAUhbsh4W9etexCcjPpeWvchSkx%2FCP0Gap38LX7LSCcZZUkjCC4%2FGSBqzJkVCp0%2FDnX4p0161zudRAm0ekKbt3YgYg6nSH7eXHstoBERnH3PZQxbhJ2GJQ1TjZYnsYIjSeJ6ZdHUmbXhgr2DMKpoAORHBdRawxkKNxNrx44h9OizHc5vfMjNUMt%2Fne6gXW5jRezdgEnHudTT7hQfGcQwLOhujDGYENmyW4DvyA%2Fq13cLZQ0sLHqcTQgmSz%2F4T2kff1ba64c6T5puczTpCvjja6TiILiCj%2Fc62xRFF1AF5PTLRihaaCxGXW%2FADA10sz0fdaSY%2FQNQAqJOAIi7VsEcOA8VdBPJ244k2%2B7GC3HXJ8V6CyEqBOA7oewUn68eLfxy2pEqj2iQpPpRGv9U4X%2BBXZMoUJ3ODWrs8LDu%2FFpnudieglF71iQbJE8omViV80fUDImOaWGcooIzQWjT5dbl0WsMbCGG8GNau5uaCZ%2FpRzKal6jx4hrVpcmRmNukHYC8kqEXRB2sN7IzPMPipktgGOqUBLZnquc8BbFqkg9o83d5HrA0PycIW9%2F3Q4OOIBedlRHuvLd1m5%2Bm6dGCI4SS%2FUQNc8DEQjHTazkkFLN1IHGEDArMuH1gJksu7dSsn6yIn5zGUZ9oUogzwVpwrXAnb3UrSo3JgDqVtBCigwwv8rLUwQu0hkEoqdXzCd4PtISRU13s9HA7OxJ8OsS83B05%2F5AF0gbiSihk3XaI2qsEaMzmk7y5YXS2O&X-Amz-Signature=272a5c536f4849bd2537a1a86c531d235264d9959dcb882946786627bdb6acec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHLWQPW3%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFCfGXORyHZAUMW0kcwpuWAer7ukLB1Y7ONZGguPZ%2Bq6AiEA6FF0fP%2FW6R6mq8hzso%2BvEB6RAdepUUuKoB59G4x1mDUq%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDDXYk9bkkkCi6r0knCrcA%2BbeaqgUneikRJDjUdKzdgm2lcVO6g8BGEvYHI%2BBYmdYEOdt1FVT3durA7Yk1KCY3K8wNUmnQN%2Bnw66kwz9mYIfVFvcD3I6ZvIWTAx00LsIzDP4HAUhbsh4W9etexCcjPpeWvchSkx%2FCP0Gap38LX7LSCcZZUkjCC4%2FGSBqzJkVCp0%2FDnX4p0161zudRAm0ekKbt3YgYg6nSH7eXHstoBERnH3PZQxbhJ2GJQ1TjZYnsYIjSeJ6ZdHUmbXhgr2DMKpoAORHBdRawxkKNxNrx44h9OizHc5vfMjNUMt%2Fne6gXW5jRezdgEnHudTT7hQfGcQwLOhujDGYENmyW4DvyA%2Fq13cLZQ0sLHqcTQgmSz%2F4T2kff1ba64c6T5puczTpCvjja6TiILiCj%2Fc62xRFF1AF5PTLRihaaCxGXW%2FADA10sz0fdaSY%2FQNQAqJOAIi7VsEcOA8VdBPJ244k2%2B7GC3HXJ8V6CyEqBOA7oewUn68eLfxy2pEqj2iQpPpRGv9U4X%2BBXZMoUJ3ODWrs8LDu%2FFpnudieglF71iQbJE8omViV80fUDImOaWGcooIzQWjT5dbl0WsMbCGG8GNau5uaCZ%2FpRzKal6jx4hrVpcmRmNukHYC8kqEXRB2sN7IzPMPipktgGOqUBLZnquc8BbFqkg9o83d5HrA0PycIW9%2F3Q4OOIBedlRHuvLd1m5%2Bm6dGCI4SS%2FUQNc8DEQjHTazkkFLN1IHGEDArMuH1gJksu7dSsn6yIn5zGUZ9oUogzwVpwrXAnb3UrSo3JgDqVtBCigwwv8rLUwQu0hkEoqdXzCd4PtISRU13s9HA7OxJ8OsS83B05%2F5AF0gbiSihk3XaI2qsEaMzmk7y5YXS2O&X-Amz-Signature=edff36dd789fce56c27648940b1e12ee89a8472fd54b77cfd130372a67f6a6a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHLWQPW3%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFCfGXORyHZAUMW0kcwpuWAer7ukLB1Y7ONZGguPZ%2Bq6AiEA6FF0fP%2FW6R6mq8hzso%2BvEB6RAdepUUuKoB59G4x1mDUq%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDDXYk9bkkkCi6r0knCrcA%2BbeaqgUneikRJDjUdKzdgm2lcVO6g8BGEvYHI%2BBYmdYEOdt1FVT3durA7Yk1KCY3K8wNUmnQN%2Bnw66kwz9mYIfVFvcD3I6ZvIWTAx00LsIzDP4HAUhbsh4W9etexCcjPpeWvchSkx%2FCP0Gap38LX7LSCcZZUkjCC4%2FGSBqzJkVCp0%2FDnX4p0161zudRAm0ekKbt3YgYg6nSH7eXHstoBERnH3PZQxbhJ2GJQ1TjZYnsYIjSeJ6ZdHUmbXhgr2DMKpoAORHBdRawxkKNxNrx44h9OizHc5vfMjNUMt%2Fne6gXW5jRezdgEnHudTT7hQfGcQwLOhujDGYENmyW4DvyA%2Fq13cLZQ0sLHqcTQgmSz%2F4T2kff1ba64c6T5puczTpCvjja6TiILiCj%2Fc62xRFF1AF5PTLRihaaCxGXW%2FADA10sz0fdaSY%2FQNQAqJOAIi7VsEcOA8VdBPJ244k2%2B7GC3HXJ8V6CyEqBOA7oewUn68eLfxy2pEqj2iQpPpRGv9U4X%2BBXZMoUJ3ODWrs8LDu%2FFpnudieglF71iQbJE8omViV80fUDImOaWGcooIzQWjT5dbl0WsMbCGG8GNau5uaCZ%2FpRzKal6jx4hrVpcmRmNukHYC8kqEXRB2sN7IzPMPipktgGOqUBLZnquc8BbFqkg9o83d5HrA0PycIW9%2F3Q4OOIBedlRHuvLd1m5%2Bm6dGCI4SS%2FUQNc8DEQjHTazkkFLN1IHGEDArMuH1gJksu7dSsn6yIn5zGUZ9oUogzwVpwrXAnb3UrSo3JgDqVtBCigwwv8rLUwQu0hkEoqdXzCd4PtISRU13s9HA7OxJ8OsS83B05%2F5AF0gbiSihk3XaI2qsEaMzmk7y5YXS2O&X-Amz-Signature=3a976c968f9b6b1dbaf231372d059f6ff16408547cf1f94dddddecc52b32e05f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGZ3RLGX%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195125Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD1FfrfcejBQWRAVTN4S7jVs8qGh3g%2BGT0gmq7RQ04B1AIgfgdbah2ZjyShWYDvl9Jin4GsCNTH0IrzZFflPUBczrAq%2FwMIfBAAGgw2Mzc0MjMxODM4MDUiDB1OSrlN8mLNaA53DircA8lqmgshPiVMhahyfdvObv0e0%2FSPNWx3maHn8FHTzVD3FJibZ4DRUkzdFAnvbYc%2BTv8ok9Q8TgZRyRjkasKDNDILHCLgykQSicMGymj1RsDCv1HvgigZCMvi5abPBZQyT8xYk6H4S5OC8yytgQo2inq%2BUjNJQJn55pWCdIaaN5Vu%2BGZ0pdmvcCmXpvSvkgA%2FuH8iScc5ltgdnjIXW9Gi9Z6QH%2BAFjQDPi9AF6mo0YVVp0ltYLHNCIn07g2T6DL9P6X2lwGYo2ajdFQ8qQo27yh3jd7AdS1rB%2FCqVDRflf%2FYPs%2BFH1o9nFJdq9GA59tOkFOTZS45URAef%2FXp9RiiZUeF7fEB4AT%2BvGTthoJpc86dZ8ji3k%2BXq342%2FytxFAMB6D98T6QeS7nxnn9%2BHCXy5dlPd410%2FYlClYWDyoyQ5rn9WR%2BEP24QBY3GjOegPu1ZANCwx%2B9k1ZbQcG%2B5%2BJ%2FLyqLi%2FANPW3%2FEu%2Fp9KONiMf33D2JspDle2Xt%2FKA6fCf8mmbPbEw1cQjDCLo4cvknKsm2vOb7niLJ0q61khNqegFVvPlyLHwUw4XyLdCpzOH8iSglSJgD%2FACUt%2BokEjqb3SUNw1O%2FCAQkemcewAbKPtJNNwtOtjSly3XzXxyLR%2FMJqqktgGOqUBjvwTekENseA8AxHEynTIzDnvnKocWzoO6cmSps2dcVf5O%2FnLc4x5ci%2BJK1pgB3DksbgxNfhkD4i5rTjgiAO6Oa%2BABEUKhiyaG7g%2Fhob%2F8IIrdkVKuRLJU1GSyZPtdrTSe2Q1HWclV%2FzGfcE2OBlpK7GJPxqFx4dJ1qkMd6POm0IX5%2BbaPBejisNJ3es76%2FWHjZpetk13J%2B5E9s06mhcVTB9Odb6J&X-Amz-Signature=262bdc6327770b578dbe8d870b795beda0f9e580ddd4665a893dac37cf95b05c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662KAGH6XF%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195126Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICChI2mLrDp%2BhVTfG8yvtwIUrgNbOImytPhwhSlS1eN5AiEAhsiuTqa1tCaa%2Bp6vqeV75qPNl7MD40ckvXb5QG5snZAq%2FwMIfRAAGgw2Mzc0MjMxODM4MDUiDMpfcyKcVKz%2BS8Np8ircA60PBBKO26vXeWAojxyoCVBBb81tZgyApqN%2F6J%2FeppdqTedZhNZPbx7Zb1unqyhu6BgS4a9qK2O%2BQno9n9n8eQ8NmzEH6GtMRxsA7Cv333EoSX%2FjeNHA3x5xowx8DuQ%2B13A86l3YG6vCEblT9FeCHNC2LSZgn397yfUHwfw08t6gSMkNxI%2FJibyBk%2BXKo8%2B4gLePwwRrdJ0yFqBOfgPFsUvBZp3dJ5AzSaplziq0SApfmNAiTbn1su0BGHIBgY2b6BkZTHdypJz5wYtU72uW7bofI2FBzUJdOPMhKddpNXqSggcC%2Boo5CqkDkwOvbBZehcoAPsnzRGtaa9IGehwJh6IG2UwHlRNC47iZwTNVZiI2kOBAnlY35HCTSkwINOAa%2BWcQ0H4sog7WofkTqSuwHRNAMIztwVaSqLkVsmaRxr5Ln2bgc7BVSpZpYzvqyXzyarDnAUMSi1TTI04vyCz4UsuMAHgy2gd0ivh8%2FfU0xwsEc4Ik3UGh2Yg%2FQqJ%2FLwEIyms1zzrX8G65hTSgUaA00OSn%2FWHeJ6DWiaqW8JXcYf48vaBOIniLOYNceiA%2BVh8ziwFYeS%2BSu14X%2B7qlnj9MVUGedYCxyII%2BKjFfZbdCLe%2B7lettPFzwzy2Ud2jeML%2BpktgGOqUBz0henHtla%2FpQ4cicbjZWdyLVnTfq4bJzv0GAn4p4tp%2BsrzjeEpDKn7jB74rmfJ4AbAeXMZY2tWdCdK0Zrk9mPTEVrA3U1sMNv12g%2B8swePwySngpKY9ntDwwAGpnfjIlvD%2BGwUFpnBTEBhMYZ6yAPneVnUPKqAJZBv2M1zDHh5YQ0EOedxG%2B5T3bOBv8acbuCt1Pf%2B9Qsmu4T2B7hQifrzY%2BNZfB&X-Amz-Signature=e896865d4b2c67e69ce08d15b6c0d9e76258f529d587742212f4f228e945e520&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662KAGH6XF%2F20261123%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261123T195126Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICChI2mLrDp%2BhVTfG8yvtwIUrgNbOImytPhwhSlS1eN5AiEAhsiuTqa1tCaa%2Bp6vqeV75qPNl7MD40ckvXb5QG5snZAq%2FwMIfRAAGgw2Mzc0MjMxODM4MDUiDMpfcyKcVKz%2BS8Np8ircA60PBBKO26vXeWAojxyoCVBBb81tZgyApqN%2F6J%2FeppdqTedZhNZPbx7Zb1unqyhu6BgS4a9qK2O%2BQno9n9n8eQ8NmzEH6GtMRxsA7Cv333EoSX%2FjeNHA3x5xowx8DuQ%2B13A86l3YG6vCEblT9FeCHNC2LSZgn397yfUHwfw08t6gSMkNxI%2FJibyBk%2BXKo8%2B4gLePwwRrdJ0yFqBOfgPFsUvBZp3dJ5AzSaplziq0SApfmNAiTbn1su0BGHIBgY2b6BkZTHdypJz5wYtU72uW7bofI2FBzUJdOPMhKddpNXqSggcC%2Boo5CqkDkwOvbBZehcoAPsnzRGtaa9IGehwJh6IG2UwHlRNC47iZwTNVZiI2kOBAnlY35HCTSkwINOAa%2BWcQ0H4sog7WofkTqSuwHRNAMIztwVaSqLkVsmaRxr5Ln2bgc7BVSpZpYzvqyXzyarDnAUMSi1TTI04vyCz4UsuMAHgy2gd0ivh8%2FfU0xwsEc4Ik3UGh2Yg%2FQqJ%2FLwEIyms1zzrX8G65hTSgUaA00OSn%2FWHeJ6DWiaqW8JXcYf48vaBOIniLOYNceiA%2BVh8ziwFYeS%2BSu14X%2B7qlnj9MVUGedYCxyII%2BKjFfZbdCLe%2B7lettPFzwzy2Ud2jeML%2BpktgGOqUBz0henHtla%2FpQ4cicbjZWdyLVnTfq4bJzv0GAn4p4tp%2BsrzjeEpDKn7jB74rmfJ4AbAeXMZY2tWdCdK0Zrk9mPTEVrA3U1sMNv12g%2B8swePwySngpKY9ntDwwAGpnfjIlvD%2BGwUFpnBTEBhMYZ6yAPneVnUPKqAJZBv2M1zDHh5YQ0EOedxG%2B5T3bOBv8acbuCt1Pf%2B9Qsmu4T2B7hQifrzY%2BNZfB&X-Amz-Signature=d11a5ce1d8fbd7f0e220406ace5e99da6f52f3de3b2b4d3b8e2321e8ba04ae60&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
