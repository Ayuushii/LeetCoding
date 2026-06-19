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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAH36QPA%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCB%2BLR2wRoA0aCfHjdYRxoruxD5wb%2BUlhOoAYOzieWtRwIgCWIjORLHN6ZZmpcUWuLxcBxkj6BxlOdHketT%2BtbT4fEqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLk4XUk0BTPZJbbSyrcAxAnPM5PLDypw7epo8BqYauH1f2ydnmypePaio6tznerARhoQhDbDfPDI%2BnvxMYGkLuFK2dZzN5aVaWGpqUhcP3mO4Au0AkXtD2bo5zZim4EUFJOK1kB8V8vpiyXG5x8eas0Am4AH%2B2PO6XJu%2BrysZf4%2F%2Bu0D0nfP4txpQiH4FF2wEkX2PnRWrub8o7%2Bt8tF8QxmcL3TrCrW4M%2BnlGj8XqMHhDTdGhWo9y8PZhVz1TGpOE54ED%2BaWvc%2FlUGs85PDl2eiwhvbN4RUbtMaUCxdUaePlBXu0Km0chVNJfxVuu5qC2UBWfm3a3XG4Q7X9EL8UpxUmKNXLwBwgRu85fqwStxSqCS8u8yUGfw0QUx9vSIFLpZ%2FifBxOg1J0BZwWGGS7fLqrzG35D7VFZvIBMaUUU72I6dy%2BnmfCIGCAHGqRmlN99rye8Rz7TShC%2FxgYkIle7QsaL0l1NKuXdAhsDbenb8f6AQkto0FNwVKYLzmW8vu2ORCE81%2FXDJbYWJeQ%2BKK8hS6K5eWAlWVchW3%2FQkeD3qdJKGTrceNw0l2W5Y9h%2BJgZajsAvyfAWqHQYoXJ0ym3u2ZQyYugFpn1WOvxJCoGvwLIEt3gqPi0Nh0TFJ77LUzwogI9R3JA8p5t82FMMHB1NEGOqUBNwRtcXYsq0siupQ%2Fo0%2F15%2FutAkitzdYm%2Bl1HmKgTBTjf7DSecXfNC9dnuj3ZlxD%2Bvjc7dd%2FkXHNyhNsH%2BK2jK5fKeVKXKnnVCun5c5J8aZDPG1dL9bD2ENSQQE9sMKg4w6tWiqwM9YU%2BSeX0HtWYi0cJasa0d4Vuk%2Bog0D1yS%2BgKKs5QSoyXJPcblmuS8u7sjjg%2BzU3gXjEYLCr9Yv3eOPUTlBhj&X-Amz-Signature=7c0c5dd56c297d6aad46bb2e192fbabf3bd6d6f7f47a3a8c8ff4175587e8bbcd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAH36QPA%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCB%2BLR2wRoA0aCfHjdYRxoruxD5wb%2BUlhOoAYOzieWtRwIgCWIjORLHN6ZZmpcUWuLxcBxkj6BxlOdHketT%2BtbT4fEqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLk4XUk0BTPZJbbSyrcAxAnPM5PLDypw7epo8BqYauH1f2ydnmypePaio6tznerARhoQhDbDfPDI%2BnvxMYGkLuFK2dZzN5aVaWGpqUhcP3mO4Au0AkXtD2bo5zZim4EUFJOK1kB8V8vpiyXG5x8eas0Am4AH%2B2PO6XJu%2BrysZf4%2F%2Bu0D0nfP4txpQiH4FF2wEkX2PnRWrub8o7%2Bt8tF8QxmcL3TrCrW4M%2BnlGj8XqMHhDTdGhWo9y8PZhVz1TGpOE54ED%2BaWvc%2FlUGs85PDl2eiwhvbN4RUbtMaUCxdUaePlBXu0Km0chVNJfxVuu5qC2UBWfm3a3XG4Q7X9EL8UpxUmKNXLwBwgRu85fqwStxSqCS8u8yUGfw0QUx9vSIFLpZ%2FifBxOg1J0BZwWGGS7fLqrzG35D7VFZvIBMaUUU72I6dy%2BnmfCIGCAHGqRmlN99rye8Rz7TShC%2FxgYkIle7QsaL0l1NKuXdAhsDbenb8f6AQkto0FNwVKYLzmW8vu2ORCE81%2FXDJbYWJeQ%2BKK8hS6K5eWAlWVchW3%2FQkeD3qdJKGTrceNw0l2W5Y9h%2BJgZajsAvyfAWqHQYoXJ0ym3u2ZQyYugFpn1WOvxJCoGvwLIEt3gqPi0Nh0TFJ77LUzwogI9R3JA8p5t82FMMHB1NEGOqUBNwRtcXYsq0siupQ%2Fo0%2F15%2FutAkitzdYm%2Bl1HmKgTBTjf7DSecXfNC9dnuj3ZlxD%2Bvjc7dd%2FkXHNyhNsH%2BK2jK5fKeVKXKnnVCun5c5J8aZDPG1dL9bD2ENSQQE9sMKg4w6tWiqwM9YU%2BSeX0HtWYi0cJasa0d4Vuk%2Bog0D1yS%2BgKKs5QSoyXJPcblmuS8u7sjjg%2BzU3gXjEYLCr9Yv3eOPUTlBhj&X-Amz-Signature=1c9c3cddb3ffbceb4bcff3db339e31493afd7ec64524bfbf5988090dcbe0e3c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAH36QPA%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCB%2BLR2wRoA0aCfHjdYRxoruxD5wb%2BUlhOoAYOzieWtRwIgCWIjORLHN6ZZmpcUWuLxcBxkj6BxlOdHketT%2BtbT4fEqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLk4XUk0BTPZJbbSyrcAxAnPM5PLDypw7epo8BqYauH1f2ydnmypePaio6tznerARhoQhDbDfPDI%2BnvxMYGkLuFK2dZzN5aVaWGpqUhcP3mO4Au0AkXtD2bo5zZim4EUFJOK1kB8V8vpiyXG5x8eas0Am4AH%2B2PO6XJu%2BrysZf4%2F%2Bu0D0nfP4txpQiH4FF2wEkX2PnRWrub8o7%2Bt8tF8QxmcL3TrCrW4M%2BnlGj8XqMHhDTdGhWo9y8PZhVz1TGpOE54ED%2BaWvc%2FlUGs85PDl2eiwhvbN4RUbtMaUCxdUaePlBXu0Km0chVNJfxVuu5qC2UBWfm3a3XG4Q7X9EL8UpxUmKNXLwBwgRu85fqwStxSqCS8u8yUGfw0QUx9vSIFLpZ%2FifBxOg1J0BZwWGGS7fLqrzG35D7VFZvIBMaUUU72I6dy%2BnmfCIGCAHGqRmlN99rye8Rz7TShC%2FxgYkIle7QsaL0l1NKuXdAhsDbenb8f6AQkto0FNwVKYLzmW8vu2ORCE81%2FXDJbYWJeQ%2BKK8hS6K5eWAlWVchW3%2FQkeD3qdJKGTrceNw0l2W5Y9h%2BJgZajsAvyfAWqHQYoXJ0ym3u2ZQyYugFpn1WOvxJCoGvwLIEt3gqPi0Nh0TFJ77LUzwogI9R3JA8p5t82FMMHB1NEGOqUBNwRtcXYsq0siupQ%2Fo0%2F15%2FutAkitzdYm%2Bl1HmKgTBTjf7DSecXfNC9dnuj3ZlxD%2Bvjc7dd%2FkXHNyhNsH%2BK2jK5fKeVKXKnnVCun5c5J8aZDPG1dL9bD2ENSQQE9sMKg4w6tWiqwM9YU%2BSeX0HtWYi0cJasa0d4Vuk%2Bog0D1yS%2BgKKs5QSoyXJPcblmuS8u7sjjg%2BzU3gXjEYLCr9Yv3eOPUTlBhj&X-Amz-Signature=2759a4eb8a765e09beb4cb3027415d0bb60cefb825c2bff9db13843863da971a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6QEQU34%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID9y4XB1qKmOLTp8JrfFjY5kLLZ8i6LLl4F8XxP8WEd3AiEAxhbnFOF73Ch3u9VxcZswDtRmAgT%2FVGc7y9iU%2FmC3iyIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJnFHAtVeN8ncxOTxyrcA51snbviVpcPP3A9O6vM4Myns6P55cG4qoE6ALFh5wBukO%2FzyiVPpWzUCQXE1BbikTpdcC4Lk79vmMFTEsA%2BYo3nQvxvJ1DgTekGk06r8n0d1lcevf4hTVUG5Fqv3T2q05TqM76hkMlZS6%2FpoY7TttyhourAMEtjk6CM84fbddZ%2FF9giT9bkTq8OytI4HdisIEDmBwiA4XyIefxwDw26PWMfAERukGkJJAa5ghji0nXbEaX5uQdG4RMx7cReeTGbSNpi5K%2FNnlk7HT6sF9O%2BGm7o3QCnvCGC%2BdZ88%2B7j0IkgG1kjOJbXWwLhQ7a7jVZCHB%2B2BZsKTak7m2%2FK29YBp7ZL876jBz0fYL3VWOCUh929Hc1E6WKTopgKFcVE21lLvGm7MtDRfEjLaaztNTkQ%2BpDeRTHvz2GFMhQReTYa%2B4kHucjHjVgaVuSfzGT%2FLmIX7LCG7mQwW5mJi2OYB2RRVpjMRcig4NW1hwLpiISVKu0Agsoff%2Fu4Q5FJPewp7WXHN6i2ywFGDowN4sHoeknGIzHEI9q4U8G6bj51yhje%2FkURKVUZymILXkydGwapN6p4c1DgP63NYWBnkyQ2f3M5GNy2PXy0%2Fw7HtZQJKlPIqHrpe1OIVSQ9EX1cRvAQMPXB1NEGOqUBWJrJ7v2xqzu8ma8CUQ3TCS0Um6UhSrIjBl%2BvRtdthDQC1nDsLpRTq6x%2F86%2F5O41girvAv442rRl5EMivyZ17I7wsJSZ%2FUya%2BpPiX%2BGwPboZiz0uEPDvhq3fUGqgUeZo0RYsY7KHhU7dqFHsHDfSRWipWDMO2WK70tF1OoM4obvzIvmYvYNVxixDxl9ZnwpAg%2Bl3Eqi3td3ihVUA%2F7O9JXDHheeFr&X-Amz-Signature=57c1b2bdaa1ba88c4a9b087b1e85381767e45f583fcfc15e21d4610d9798e3d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6QEQU34%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID9y4XB1qKmOLTp8JrfFjY5kLLZ8i6LLl4F8XxP8WEd3AiEAxhbnFOF73Ch3u9VxcZswDtRmAgT%2FVGc7y9iU%2FmC3iyIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJnFHAtVeN8ncxOTxyrcA51snbviVpcPP3A9O6vM4Myns6P55cG4qoE6ALFh5wBukO%2FzyiVPpWzUCQXE1BbikTpdcC4Lk79vmMFTEsA%2BYo3nQvxvJ1DgTekGk06r8n0d1lcevf4hTVUG5Fqv3T2q05TqM76hkMlZS6%2FpoY7TttyhourAMEtjk6CM84fbddZ%2FF9giT9bkTq8OytI4HdisIEDmBwiA4XyIefxwDw26PWMfAERukGkJJAa5ghji0nXbEaX5uQdG4RMx7cReeTGbSNpi5K%2FNnlk7HT6sF9O%2BGm7o3QCnvCGC%2BdZ88%2B7j0IkgG1kjOJbXWwLhQ7a7jVZCHB%2B2BZsKTak7m2%2FK29YBp7ZL876jBz0fYL3VWOCUh929Hc1E6WKTopgKFcVE21lLvGm7MtDRfEjLaaztNTkQ%2BpDeRTHvz2GFMhQReTYa%2B4kHucjHjVgaVuSfzGT%2FLmIX7LCG7mQwW5mJi2OYB2RRVpjMRcig4NW1hwLpiISVKu0Agsoff%2Fu4Q5FJPewp7WXHN6i2ywFGDowN4sHoeknGIzHEI9q4U8G6bj51yhje%2FkURKVUZymILXkydGwapN6p4c1DgP63NYWBnkyQ2f3M5GNy2PXy0%2Fw7HtZQJKlPIqHrpe1OIVSQ9EX1cRvAQMPXB1NEGOqUBWJrJ7v2xqzu8ma8CUQ3TCS0Um6UhSrIjBl%2BvRtdthDQC1nDsLpRTq6x%2F86%2F5O41girvAv442rRl5EMivyZ17I7wsJSZ%2FUya%2BpPiX%2BGwPboZiz0uEPDvhq3fUGqgUeZo0RYsY7KHhU7dqFHsHDfSRWipWDMO2WK70tF1OoM4obvzIvmYvYNVxixDxl9ZnwpAg%2Bl3Eqi3td3ihVUA%2F7O9JXDHheeFr&X-Amz-Signature=567841420cb6ae5d20fdde6a4cff381cd9aaf189252750a79a14a8d35657fc39&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6QEQU34%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID9y4XB1qKmOLTp8JrfFjY5kLLZ8i6LLl4F8XxP8WEd3AiEAxhbnFOF73Ch3u9VxcZswDtRmAgT%2FVGc7y9iU%2FmC3iyIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJnFHAtVeN8ncxOTxyrcA51snbviVpcPP3A9O6vM4Myns6P55cG4qoE6ALFh5wBukO%2FzyiVPpWzUCQXE1BbikTpdcC4Lk79vmMFTEsA%2BYo3nQvxvJ1DgTekGk06r8n0d1lcevf4hTVUG5Fqv3T2q05TqM76hkMlZS6%2FpoY7TttyhourAMEtjk6CM84fbddZ%2FF9giT9bkTq8OytI4HdisIEDmBwiA4XyIefxwDw26PWMfAERukGkJJAa5ghji0nXbEaX5uQdG4RMx7cReeTGbSNpi5K%2FNnlk7HT6sF9O%2BGm7o3QCnvCGC%2BdZ88%2B7j0IkgG1kjOJbXWwLhQ7a7jVZCHB%2B2BZsKTak7m2%2FK29YBp7ZL876jBz0fYL3VWOCUh929Hc1E6WKTopgKFcVE21lLvGm7MtDRfEjLaaztNTkQ%2BpDeRTHvz2GFMhQReTYa%2B4kHucjHjVgaVuSfzGT%2FLmIX7LCG7mQwW5mJi2OYB2RRVpjMRcig4NW1hwLpiISVKu0Agsoff%2Fu4Q5FJPewp7WXHN6i2ywFGDowN4sHoeknGIzHEI9q4U8G6bj51yhje%2FkURKVUZymILXkydGwapN6p4c1DgP63NYWBnkyQ2f3M5GNy2PXy0%2Fw7HtZQJKlPIqHrpe1OIVSQ9EX1cRvAQMPXB1NEGOqUBWJrJ7v2xqzu8ma8CUQ3TCS0Um6UhSrIjBl%2BvRtdthDQC1nDsLpRTq6x%2F86%2F5O41girvAv442rRl5EMivyZ17I7wsJSZ%2FUya%2BpPiX%2BGwPboZiz0uEPDvhq3fUGqgUeZo0RYsY7KHhU7dqFHsHDfSRWipWDMO2WK70tF1OoM4obvzIvmYvYNVxixDxl9ZnwpAg%2Bl3Eqi3td3ihVUA%2F7O9JXDHheeFr&X-Amz-Signature=eada14094d228862e70815cb006e28326d42f207237cfa9fedf99e2767304993&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6QEQU34%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID9y4XB1qKmOLTp8JrfFjY5kLLZ8i6LLl4F8XxP8WEd3AiEAxhbnFOF73Ch3u9VxcZswDtRmAgT%2FVGc7y9iU%2FmC3iyIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJnFHAtVeN8ncxOTxyrcA51snbviVpcPP3A9O6vM4Myns6P55cG4qoE6ALFh5wBukO%2FzyiVPpWzUCQXE1BbikTpdcC4Lk79vmMFTEsA%2BYo3nQvxvJ1DgTekGk06r8n0d1lcevf4hTVUG5Fqv3T2q05TqM76hkMlZS6%2FpoY7TttyhourAMEtjk6CM84fbddZ%2FF9giT9bkTq8OytI4HdisIEDmBwiA4XyIefxwDw26PWMfAERukGkJJAa5ghji0nXbEaX5uQdG4RMx7cReeTGbSNpi5K%2FNnlk7HT6sF9O%2BGm7o3QCnvCGC%2BdZ88%2B7j0IkgG1kjOJbXWwLhQ7a7jVZCHB%2B2BZsKTak7m2%2FK29YBp7ZL876jBz0fYL3VWOCUh929Hc1E6WKTopgKFcVE21lLvGm7MtDRfEjLaaztNTkQ%2BpDeRTHvz2GFMhQReTYa%2B4kHucjHjVgaVuSfzGT%2FLmIX7LCG7mQwW5mJi2OYB2RRVpjMRcig4NW1hwLpiISVKu0Agsoff%2Fu4Q5FJPewp7WXHN6i2ywFGDowN4sHoeknGIzHEI9q4U8G6bj51yhje%2FkURKVUZymILXkydGwapN6p4c1DgP63NYWBnkyQ2f3M5GNy2PXy0%2Fw7HtZQJKlPIqHrpe1OIVSQ9EX1cRvAQMPXB1NEGOqUBWJrJ7v2xqzu8ma8CUQ3TCS0Um6UhSrIjBl%2BvRtdthDQC1nDsLpRTq6x%2F86%2F5O41girvAv442rRl5EMivyZ17I7wsJSZ%2FUya%2BpPiX%2BGwPboZiz0uEPDvhq3fUGqgUeZo0RYsY7KHhU7dqFHsHDfSRWipWDMO2WK70tF1OoM4obvzIvmYvYNVxixDxl9ZnwpAg%2Bl3Eqi3td3ihVUA%2F7O9JXDHheeFr&X-Amz-Signature=17bcbd4796883f71f1b1643c34e3a54f8ef4c1453c1310c0b812b6bd2d357a23&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q7C5PMXJ%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB0CU8kevVaRUto5SOZsUJAR9nsHF2kSkF2mSyGjgTNCAiEAys5q%2BLoPyINtHUiy6QCRF1XuLR%2BLs1mozk77riqPRsYqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOB3o954oba%2B455s8CrcA0gIQmwrwNj0CZeZ6Tt15x%2FxwMkWqrsiMX%2B9jHubuIw16iUm%2FfevVYCYp%2B5kwI0ujXuKsSj4nBtIReVOgUFeB95NtvGK65%2FekJ2r9e7MC0r9AVsYB0EorTnAplffJzP90%2BFRsW4B7w51jntHWfd8TNkHJHKdL01ZzSAC7LJqFYIV1lGyYI1SGMqELlRHDVIXoVkqWw0ws5o%2BaXxG2lJuMPlg%2FK7cy6w%2BqHl6tz4tq%2FnIKbGVMV1i9ZDAg37AK588pmSdApuZOB9CN69pNAVgs8polsl%2F4fuVBO%2B68WG23CGiakG0cCGigD1MQSt61JXNHZTeFFSWfwOxtoFO%2FK5xy9RX8miedQ6lPFVfKB%2BodaOoN0uAW1Jns9o%2Fj0bjzg9PBKWXYNO0i5Mi1vTOb9vFCustRD2d7AtKLWBwMb3dPbdn9Uk5Vsbo8YceUMi6vTkVmCA4J8F2%2Bt8ybWS3KCCrNn%2FTP4yrvQj5ip1%2F1Iu%2BoxL0RjQfG5GnsxIXgSgMegeo8mOPdursF94pyQqmvU4myPccVtI%2BCmyExkJm0TCh1ivxDX656HJ6RQEWraAdZe%2Bu0Wief748Z3HolHCAQw8CxjUMbYwfkzfSB81Gy6AuiKpg5M249sJCBEoW3EkBMKfA1NEGOqUB5QNeyLoHDP513nI28MQJULkQi384bTfNRoSt3MlYvRVD2%2BywF%2B5jAd2khWcWxKSLTZ%2FIKi%2Bg2FfiEXinKplU7QeNX2scxYjkQK1zPrUokNaP7uM4EHmZe7hgDsVXBa3fD77M0vqxS3y2GLJyfGZSIZ84WMhleZeMEySnalM47L2%2FXWusN7WaaFlieSeOigMPOtdkp5tw7AuHvRyzgCn2R5dJaBRh&X-Amz-Signature=e3ca257145578168ca06e90f4a6c2d2a91ca13791a462806e1188429ad018fcb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZOT7QZB7%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5ZXEx3qqGQ5SGEvvfogum4%2Ba2z3VYov7RKQNNx9u%2B0AIgXNeFCwKJhvwvqDohmB15PT57T0YbFsWkfxGch1A%2FvEsqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIOUKohZud3Hig4F3yrcA3TuP8hYG%2FiHcGcUbjw7TmGyeurYTmo%2F%2BcfMbdXYx5mT1szINDrxZ9EesiyCz5oyo2Bf1i0QWE4ckbxUWi24q36C2I6e7Airb0H9%2BggmvHGf1C%2BSyj9l8T5Qh5FtjoBiO4uqirNcgHQVZp98tf4zpI8i%2Blcp5ZJfIYOvDuWwQtWF9skwiBkoPhRtPVNG%2FsB99w5FhY7402owBAPN96BnxVPPpRbVUD3bUhKtRXD5ATPeb3U%2BUr8mhOjOn3%2FYtUroyv6IT4Keenlzrzc19BMoAj0cyVP1BCWXeqr7qDJss6k61m4gN7g6sBLEukJw2XRQUEZJfYFNr0TBaQU8TZxrbwv3Sfn6URMQmJXJZTfb2E2A3RIqUPokMlRADJKJKbsreTNquWngYnDEUNatU1u9ElDeA8K1HukYrwValYiHa5en9zmR0H%2BoqIYHZpP3vd7H%2FxWcpc3i1lgz0Q5fm0KOir3mmqeO5jGe2%2FtmSAmRVadVTzrotIXGKNUy0gmq8u1UjvHKF4Zh5zz3SAfcgx4dR05g2nNjJuhWseqHna0wtS%2BVbMJu2h1aDzpdT5mpYETGSfXctrYvZiRNbpKatok128QttxyB2qQCVPpSrunYnl3SQQR4h3EtGTGVPv%2BKMN7B1NEGOqUBpXzq3jCz%2BtyGtQi3u7QBAVGwgHvxY2Az4EEUJJvVQXjtWONoW03QV2yGc0armDDndLGEEA4pO5CoeFaFQE7X1mN8eA8jNZ0peDULmsIBCZjD47C4PnStdzZxN%2B7cSgCwxe281kR8%2BaxANs57V%2BQbV2iuNOCNL9BS9joAtzm8qlso8i5%2FohT1bOD7IeEI20E9wAREfO7v6nnEJPj0f1gNs0mR8%2FAq&X-Amz-Signature=55eb7e7e079d1f8df2b29358c3c9ea7d8646d1777f6608a55b9d5cbfb424c21f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZOT7QZB7%2F20260619%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260619T120500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD5ZXEx3qqGQ5SGEvvfogum4%2Ba2z3VYov7RKQNNx9u%2B0AIgXNeFCwKJhvwvqDohmB15PT57T0YbFsWkfxGch1A%2FvEsqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIOUKohZud3Hig4F3yrcA3TuP8hYG%2FiHcGcUbjw7TmGyeurYTmo%2F%2BcfMbdXYx5mT1szINDrxZ9EesiyCz5oyo2Bf1i0QWE4ckbxUWi24q36C2I6e7Airb0H9%2BggmvHGf1C%2BSyj9l8T5Qh5FtjoBiO4uqirNcgHQVZp98tf4zpI8i%2Blcp5ZJfIYOvDuWwQtWF9skwiBkoPhRtPVNG%2FsB99w5FhY7402owBAPN96BnxVPPpRbVUD3bUhKtRXD5ATPeb3U%2BUr8mhOjOn3%2FYtUroyv6IT4Keenlzrzc19BMoAj0cyVP1BCWXeqr7qDJss6k61m4gN7g6sBLEukJw2XRQUEZJfYFNr0TBaQU8TZxrbwv3Sfn6URMQmJXJZTfb2E2A3RIqUPokMlRADJKJKbsreTNquWngYnDEUNatU1u9ElDeA8K1HukYrwValYiHa5en9zmR0H%2BoqIYHZpP3vd7H%2FxWcpc3i1lgz0Q5fm0KOir3mmqeO5jGe2%2FtmSAmRVadVTzrotIXGKNUy0gmq8u1UjvHKF4Zh5zz3SAfcgx4dR05g2nNjJuhWseqHna0wtS%2BVbMJu2h1aDzpdT5mpYETGSfXctrYvZiRNbpKatok128QttxyB2qQCVPpSrunYnl3SQQR4h3EtGTGVPv%2BKMN7B1NEGOqUBpXzq3jCz%2BtyGtQi3u7QBAVGwgHvxY2Az4EEUJJvVQXjtWONoW03QV2yGc0armDDndLGEEA4pO5CoeFaFQE7X1mN8eA8jNZ0peDULmsIBCZjD47C4PnStdzZxN%2B7cSgCwxe281kR8%2BaxANs57V%2BQbV2iuNOCNL9BS9joAtzm8qlso8i5%2FohT1bOD7IeEI20E9wAREfO7v6nnEJPj0f1gNs0mR8%2FAq&X-Amz-Signature=28c983009b360547a2ae92ee254cb4391a5ecb623d18b2babd1f006482a185bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
