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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PJL4RPE%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDMWlOYXGnsJ4Mh8jc320%2FVY3qddtNzaqmA5BM8yMVeAiB3NiaUxC3Wrl8QSENoytWcsFu7Eys63H84Fex4aejU3yr%2FAwhYEAAaDDYzNzQyMzE4MzgwNSIMVtnSyguGEe4CVGDvKtwD5Jqoc6G3NyC5NbqiuEfwic%2BUL9E4xPVTzzSvjn5qmvdzYWrKKXhCAjR%2Bc7C6q8H2nNlBoqWplMSTvaDmH1O%2Fubgcw9lOYf70KvJLkkpmPQRYz3XVhnCTAVBIV6SLxE8xKRSbH3AHElCznrODMzajNLPng6gpZ0Y7MSul1FOGu32yqc4OHQfYmYnnXotW%2FXDwP2gIrAu3Agpz%2FpvXpCITgT9Y6F06Cv62IMExF1Q4X0TbJzM6baviIv04HKp1i4BbTqbhsX4BfIG%2FmYP%2FqtCWmC42FhRa0xFV4BbznxCbp4xy2CYXB6pd72rv8Jd437RDjA5GuWMjX7Mj9K%2BGwm6fH%2FHxvpPr0ZGfO1fOd8nzFDwX6i9uzKK35%2FUjdI58N1xmnK0kqHUkdioQxdVDxs76Gr1O1VB81J2PtG9AklTNRWs%2B6Esz0VhjszJUEmqC1FU0OkuZQXvMFaq9NNBF0gbSNih6sEU1Ytl5X%2F8fXpZWke1BEBZlSL1TKmzLH7HEAkLR4ubO2Kpky1TGIq7duxNyBasErxxLGWZsBUV1TUPnUOfgKoifd%2FZkmcE%2F%2FLabuDtcZ%2BUOQ9hjXmbCnHxIVINz2QXDQNsbP1O84XLed41iW%2BSBT2%2BZJiPMa4YO9t0w%2BZPS1wY6pgGSj35hS83oXH0o4fs%2Bjw9wTHX34h9ybEcq6WmguHGNyKNH1YlJLNEECT3lrkAsm888DJLWY%2FdZEw5C6oXY7cp%2Bk3gUnTjhcTxAhpMZrN41gKJniu5XekoVVIGKGMgMnsK4AfLudJGfkqiRkiLnxD0hdBKGpXJIQMYhfaLCny7RQkL33frWrPzIyrMWvfGQSQI78q%2BFo7IBUQvxie9nRk13Zq6oN4A1&X-Amz-Signature=89a0f2345003af1a3ed3f11328b5d1a6e7181b39cc3774f7c88ca2c8aef6dbd5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PJL4RPE%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDMWlOYXGnsJ4Mh8jc320%2FVY3qddtNzaqmA5BM8yMVeAiB3NiaUxC3Wrl8QSENoytWcsFu7Eys63H84Fex4aejU3yr%2FAwhYEAAaDDYzNzQyMzE4MzgwNSIMVtnSyguGEe4CVGDvKtwD5Jqoc6G3NyC5NbqiuEfwic%2BUL9E4xPVTzzSvjn5qmvdzYWrKKXhCAjR%2Bc7C6q8H2nNlBoqWplMSTvaDmH1O%2Fubgcw9lOYf70KvJLkkpmPQRYz3XVhnCTAVBIV6SLxE8xKRSbH3AHElCznrODMzajNLPng6gpZ0Y7MSul1FOGu32yqc4OHQfYmYnnXotW%2FXDwP2gIrAu3Agpz%2FpvXpCITgT9Y6F06Cv62IMExF1Q4X0TbJzM6baviIv04HKp1i4BbTqbhsX4BfIG%2FmYP%2FqtCWmC42FhRa0xFV4BbznxCbp4xy2CYXB6pd72rv8Jd437RDjA5GuWMjX7Mj9K%2BGwm6fH%2FHxvpPr0ZGfO1fOd8nzFDwX6i9uzKK35%2FUjdI58N1xmnK0kqHUkdioQxdVDxs76Gr1O1VB81J2PtG9AklTNRWs%2B6Esz0VhjszJUEmqC1FU0OkuZQXvMFaq9NNBF0gbSNih6sEU1Ytl5X%2F8fXpZWke1BEBZlSL1TKmzLH7HEAkLR4ubO2Kpky1TGIq7duxNyBasErxxLGWZsBUV1TUPnUOfgKoifd%2FZkmcE%2F%2FLabuDtcZ%2BUOQ9hjXmbCnHxIVINz2QXDQNsbP1O84XLed41iW%2BSBT2%2BZJiPMa4YO9t0w%2BZPS1wY6pgGSj35hS83oXH0o4fs%2Bjw9wTHX34h9ybEcq6WmguHGNyKNH1YlJLNEECT3lrkAsm888DJLWY%2FdZEw5C6oXY7cp%2Bk3gUnTjhcTxAhpMZrN41gKJniu5XekoVVIGKGMgMnsK4AfLudJGfkqiRkiLnxD0hdBKGpXJIQMYhfaLCny7RQkL33frWrPzIyrMWvfGQSQI78q%2BFo7IBUQvxie9nRk13Zq6oN4A1&X-Amz-Signature=8b34fbc3c34899bb20cee46f65379cf13bca38d9fdcd59312aa1051ee84f0019&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PJL4RPE%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDDMWlOYXGnsJ4Mh8jc320%2FVY3qddtNzaqmA5BM8yMVeAiB3NiaUxC3Wrl8QSENoytWcsFu7Eys63H84Fex4aejU3yr%2FAwhYEAAaDDYzNzQyMzE4MzgwNSIMVtnSyguGEe4CVGDvKtwD5Jqoc6G3NyC5NbqiuEfwic%2BUL9E4xPVTzzSvjn5qmvdzYWrKKXhCAjR%2Bc7C6q8H2nNlBoqWplMSTvaDmH1O%2Fubgcw9lOYf70KvJLkkpmPQRYz3XVhnCTAVBIV6SLxE8xKRSbH3AHElCznrODMzajNLPng6gpZ0Y7MSul1FOGu32yqc4OHQfYmYnnXotW%2FXDwP2gIrAu3Agpz%2FpvXpCITgT9Y6F06Cv62IMExF1Q4X0TbJzM6baviIv04HKp1i4BbTqbhsX4BfIG%2FmYP%2FqtCWmC42FhRa0xFV4BbznxCbp4xy2CYXB6pd72rv8Jd437RDjA5GuWMjX7Mj9K%2BGwm6fH%2FHxvpPr0ZGfO1fOd8nzFDwX6i9uzKK35%2FUjdI58N1xmnK0kqHUkdioQxdVDxs76Gr1O1VB81J2PtG9AklTNRWs%2B6Esz0VhjszJUEmqC1FU0OkuZQXvMFaq9NNBF0gbSNih6sEU1Ytl5X%2F8fXpZWke1BEBZlSL1TKmzLH7HEAkLR4ubO2Kpky1TGIq7duxNyBasErxxLGWZsBUV1TUPnUOfgKoifd%2FZkmcE%2F%2FLabuDtcZ%2BUOQ9hjXmbCnHxIVINz2QXDQNsbP1O84XLed41iW%2BSBT2%2BZJiPMa4YO9t0w%2BZPS1wY6pgGSj35hS83oXH0o4fs%2Bjw9wTHX34h9ybEcq6WmguHGNyKNH1YlJLNEECT3lrkAsm888DJLWY%2FdZEw5C6oXY7cp%2Bk3gUnTjhcTxAhpMZrN41gKJniu5XekoVVIGKGMgMnsK4AfLudJGfkqiRkiLnxD0hdBKGpXJIQMYhfaLCny7RQkL33frWrPzIyrMWvfGQSQI78q%2BFo7IBUQvxie9nRk13Zq6oN4A1&X-Amz-Signature=979b2287b7e69ec5c4d1eb84cbb72b8360eb72c07b02c6546584574b4105b83b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF5MNLYT%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDpChRIH%2Bi4sacDF0E8XEzohPTr9xe1V9Ihp7U8EMlBFAiEAshP3EoQnFuxNHGRl2RrqtvFdeRzB28D%2B2yyrTNlbYRoq%2FwMIWRAAGgw2Mzc0MjMxODM4MDUiDCdJQ1GGZgacUhKE8CrcA1byHUPAFm%2FnUhfHuy4JfoOraNpB9Hh1BCRdLs8PSI9vsBzfJT5SSBhEmC7J%2Blkx2osPFJlJmXInIXbKIbisCO3n7DkIYFUZsRoMEKbQKEoU3e3iAuYx5Eq4RLJk7htHtMvJ2nRKpSkX%2Frq8a8u12z9c%2BaQhhTJ%2BxnXl3g6CDyZE7itQf35cHJtNOcibkf1XXVPRzIk1M0cw0rUE%2BoRPjd8JyXonUqUN%2Bc3NJqS3RaDcEts7cqn1SvlnNmmrvAgvEbn%2FXVN8BIc92pVNivOX%2F%2Bd%2BSpcv7%2BroLhbSOoD5a0o0BRYXq13yF9xtnJBrZ3eP%2FzpCpRSPUQpmsXmODY%2F%2FzdkexhHWyVv8gie7jT7Rg6Z3f4NOm7Mv6E4Zp0jFVTgHqd9ylJ0pKh77lGsQh5A1HslbuaKqWYoYT970W56OT6p9aw9Jsjvc52ylYKtEZA90h33p1g9kDwT8AmXcfB8oMlhMOsvSvMXV9hD1QlYHVEvjlt4n4xdiv76Ks4DUbuCjDOTM%2FtjncApmWOrAAHERJgEVAmiBsg0T8Q4mxpvp5oJrQ6TKpNNP0Z3yNrjtMMkurIbezwv%2Fkfl6qVLo%2FqC2x01KbY9RqttNk7N7xI%2Fxoafq96CtlM2rWq6WzcxnMMKV0tcGOqUBSMBambi6rkqf0xX%2FS6sW97hbGmaYCLA0nZ3jzJYLRtXqF%2FD3iA7RNAp3jn7fz%2BJVQnIPqpwy6yeA4UvyAxMn9bXkotnM8O06U0M%2BoQjpzYih930D837FClazhlNqZdx37IVf7fWsl1qHSZKTHK8ZwUG9ZbpPsuSc4A5%2Fp0fkx5MsKITfKnevk8c7zAc%2FdyDvKGFea2jtN8I3O9PkrTd9XRRvtiOZ&X-Amz-Signature=d747d2fd9bc24293e9ce9b0741375df4b6a39bb54ea641352382ede6d0db0f43&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF5MNLYT%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDpChRIH%2Bi4sacDF0E8XEzohPTr9xe1V9Ihp7U8EMlBFAiEAshP3EoQnFuxNHGRl2RrqtvFdeRzB28D%2B2yyrTNlbYRoq%2FwMIWRAAGgw2Mzc0MjMxODM4MDUiDCdJQ1GGZgacUhKE8CrcA1byHUPAFm%2FnUhfHuy4JfoOraNpB9Hh1BCRdLs8PSI9vsBzfJT5SSBhEmC7J%2Blkx2osPFJlJmXInIXbKIbisCO3n7DkIYFUZsRoMEKbQKEoU3e3iAuYx5Eq4RLJk7htHtMvJ2nRKpSkX%2Frq8a8u12z9c%2BaQhhTJ%2BxnXl3g6CDyZE7itQf35cHJtNOcibkf1XXVPRzIk1M0cw0rUE%2BoRPjd8JyXonUqUN%2Bc3NJqS3RaDcEts7cqn1SvlnNmmrvAgvEbn%2FXVN8BIc92pVNivOX%2F%2Bd%2BSpcv7%2BroLhbSOoD5a0o0BRYXq13yF9xtnJBrZ3eP%2FzpCpRSPUQpmsXmODY%2F%2FzdkexhHWyVv8gie7jT7Rg6Z3f4NOm7Mv6E4Zp0jFVTgHqd9ylJ0pKh77lGsQh5A1HslbuaKqWYoYT970W56OT6p9aw9Jsjvc52ylYKtEZA90h33p1g9kDwT8AmXcfB8oMlhMOsvSvMXV9hD1QlYHVEvjlt4n4xdiv76Ks4DUbuCjDOTM%2FtjncApmWOrAAHERJgEVAmiBsg0T8Q4mxpvp5oJrQ6TKpNNP0Z3yNrjtMMkurIbezwv%2Fkfl6qVLo%2FqC2x01KbY9RqttNk7N7xI%2Fxoafq96CtlM2rWq6WzcxnMMKV0tcGOqUBSMBambi6rkqf0xX%2FS6sW97hbGmaYCLA0nZ3jzJYLRtXqF%2FD3iA7RNAp3jn7fz%2BJVQnIPqpwy6yeA4UvyAxMn9bXkotnM8O06U0M%2BoQjpzYih930D837FClazhlNqZdx37IVf7fWsl1qHSZKTHK8ZwUG9ZbpPsuSc4A5%2Fp0fkx5MsKITfKnevk8c7zAc%2FdyDvKGFea2jtN8I3O9PkrTd9XRRvtiOZ&X-Amz-Signature=f1faef345c417551e9cf5ca1c625cb5bfb3e3de26ea42cf4132e025fd2001b2f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF5MNLYT%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDpChRIH%2Bi4sacDF0E8XEzohPTr9xe1V9Ihp7U8EMlBFAiEAshP3EoQnFuxNHGRl2RrqtvFdeRzB28D%2B2yyrTNlbYRoq%2FwMIWRAAGgw2Mzc0MjMxODM4MDUiDCdJQ1GGZgacUhKE8CrcA1byHUPAFm%2FnUhfHuy4JfoOraNpB9Hh1BCRdLs8PSI9vsBzfJT5SSBhEmC7J%2Blkx2osPFJlJmXInIXbKIbisCO3n7DkIYFUZsRoMEKbQKEoU3e3iAuYx5Eq4RLJk7htHtMvJ2nRKpSkX%2Frq8a8u12z9c%2BaQhhTJ%2BxnXl3g6CDyZE7itQf35cHJtNOcibkf1XXVPRzIk1M0cw0rUE%2BoRPjd8JyXonUqUN%2Bc3NJqS3RaDcEts7cqn1SvlnNmmrvAgvEbn%2FXVN8BIc92pVNivOX%2F%2Bd%2BSpcv7%2BroLhbSOoD5a0o0BRYXq13yF9xtnJBrZ3eP%2FzpCpRSPUQpmsXmODY%2F%2FzdkexhHWyVv8gie7jT7Rg6Z3f4NOm7Mv6E4Zp0jFVTgHqd9ylJ0pKh77lGsQh5A1HslbuaKqWYoYT970W56OT6p9aw9Jsjvc52ylYKtEZA90h33p1g9kDwT8AmXcfB8oMlhMOsvSvMXV9hD1QlYHVEvjlt4n4xdiv76Ks4DUbuCjDOTM%2FtjncApmWOrAAHERJgEVAmiBsg0T8Q4mxpvp5oJrQ6TKpNNP0Z3yNrjtMMkurIbezwv%2Fkfl6qVLo%2FqC2x01KbY9RqttNk7N7xI%2Fxoafq96CtlM2rWq6WzcxnMMKV0tcGOqUBSMBambi6rkqf0xX%2FS6sW97hbGmaYCLA0nZ3jzJYLRtXqF%2FD3iA7RNAp3jn7fz%2BJVQnIPqpwy6yeA4UvyAxMn9bXkotnM8O06U0M%2BoQjpzYih930D837FClazhlNqZdx37IVf7fWsl1qHSZKTHK8ZwUG9ZbpPsuSc4A5%2Fp0fkx5MsKITfKnevk8c7zAc%2FdyDvKGFea2jtN8I3O9PkrTd9XRRvtiOZ&X-Amz-Signature=456c7af7c20fccd521a9f17eb93632effb3eebc002eb0fedb7770dce343d2e4a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF5MNLYT%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDpChRIH%2Bi4sacDF0E8XEzohPTr9xe1V9Ihp7U8EMlBFAiEAshP3EoQnFuxNHGRl2RrqtvFdeRzB28D%2B2yyrTNlbYRoq%2FwMIWRAAGgw2Mzc0MjMxODM4MDUiDCdJQ1GGZgacUhKE8CrcA1byHUPAFm%2FnUhfHuy4JfoOraNpB9Hh1BCRdLs8PSI9vsBzfJT5SSBhEmC7J%2Blkx2osPFJlJmXInIXbKIbisCO3n7DkIYFUZsRoMEKbQKEoU3e3iAuYx5Eq4RLJk7htHtMvJ2nRKpSkX%2Frq8a8u12z9c%2BaQhhTJ%2BxnXl3g6CDyZE7itQf35cHJtNOcibkf1XXVPRzIk1M0cw0rUE%2BoRPjd8JyXonUqUN%2Bc3NJqS3RaDcEts7cqn1SvlnNmmrvAgvEbn%2FXVN8BIc92pVNivOX%2F%2Bd%2BSpcv7%2BroLhbSOoD5a0o0BRYXq13yF9xtnJBrZ3eP%2FzpCpRSPUQpmsXmODY%2F%2FzdkexhHWyVv8gie7jT7Rg6Z3f4NOm7Mv6E4Zp0jFVTgHqd9ylJ0pKh77lGsQh5A1HslbuaKqWYoYT970W56OT6p9aw9Jsjvc52ylYKtEZA90h33p1g9kDwT8AmXcfB8oMlhMOsvSvMXV9hD1QlYHVEvjlt4n4xdiv76Ks4DUbuCjDOTM%2FtjncApmWOrAAHERJgEVAmiBsg0T8Q4mxpvp5oJrQ6TKpNNP0Z3yNrjtMMkurIbezwv%2Fkfl6qVLo%2FqC2x01KbY9RqttNk7N7xI%2Fxoafq96CtlM2rWq6WzcxnMMKV0tcGOqUBSMBambi6rkqf0xX%2FS6sW97hbGmaYCLA0nZ3jzJYLRtXqF%2FD3iA7RNAp3jn7fz%2BJVQnIPqpwy6yeA4UvyAxMn9bXkotnM8O06U0M%2BoQjpzYih930D837FClazhlNqZdx37IVf7fWsl1qHSZKTHK8ZwUG9ZbpPsuSc4A5%2Fp0fkx5MsKITfKnevk8c7zAc%2FdyDvKGFea2jtN8I3O9PkrTd9XRRvtiOZ&X-Amz-Signature=98e0fd20d465183dfb94a2ce5c06307a5d577823fc1924a629b6f72bafda0cc9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IRIHMIN%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICP6h2XItiIeMRf0r%2F5tvomM%2F1hfBES4ZF6goaRNnreXAiBy3ZDKzU2xUGJJlZpwFXv5ay75hv9rbRYaXeMjvKvl6ir%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIMXCgCaZTVzFzBrX%2BdKtwDDr5cf1ot2fhSH6RUElOralU7BLepGCrG1%2BWSj5PhHvP2WHgn62aFD61al8c19%2FsPZV%2BZmEtD0C7zYFPsMKiqts8KjKbvHd6yTl0qLimQWJBeFds2bbsAe%2FXn0xWMuxNaSORFpP%2FdFBKAte1pDsFiF3fjrsVBn12FpF26mXP91kGtLENoyO37sQVxGisIQTzyCl3xDIidG2Z9u3Am3EqcyHHphBBud0OBMkUlv57eZbresPMC3wfC8Bs%2BXGxwBp39aWkPjUPWu2PIAvfETPj3H3KfpbdjsjvH8zEG0hKDAPvavZawEBanWWxUtTwd62PqOUDACsXZp5llP3ovUQSacaFov4jh1xyS2Lhcztgu91vzQ%2BrEpqw%2B6YbyxEPM8vQNakPhllsxXAYx8I3iCgbBslNJldqZkXMJ6K8RCvUv831DjuO9ToPjYpx9urBLr5s%2F%2F4zKQ%2BHQ%2Fdnzw8iyh6EcxOUsk1H4eYpIQbo8blFZWCI6F29YWlYAg1UWaipl4k1cy9ZSix9%2FjAim1o7xuZ1CBjKyg9dPgRtqiIDNSq7M%2Bm2QY6VMrRLyud5cnBwEYR3Vk6hF1X2qty15VFgN3KRtygB5yuuQAmpACqgH8JL%2B4bqYScLDIbBdRv9fW7sw0pXS1wY6pgGIK%2BBYSNyGhqVSLTQ%2BbSk%2FyJcAV0Kyr%2BxUoaoT4VWAtH6YllPqGIQLVywN26hDu42aVq63SA0vZcsQyXJtf%2B3LSnvJ9eNxGpmC4a0IEQILnOoCV2R0jBWY5D1EwtfvHZEdO593avNBO9pYBet9Oo4GORSisWNNqYFodhdOhBCJXsm0NI6ZppcIeeF2vtVRb6AJFFmYOAcP3dhJ6dVJPfyZGF7pMe4S&X-Amz-Signature=c6e6519ada3aff19c4de148834b32e9b706f156ccd015cb2b4ba663b94e5b04c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q54X66EK%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBEPcttX%2B2KCkYsVmMXzvG6J%2F8tDjtizpSrHNcHK2QozAiB5%2Fmmk5fZ9OsmoVMqknxWyKBX4SRZ5oS5puaYS9tcLTir%2FAwhYEAAaDDYzNzQyMzE4MzgwNSIM7%2Fil7KuGvfkiTVhqKtwDZyxzbcI0Q%2FMDL4XZtZkYV5tEdKUX%2FF9PGnTCigrhWYWjIa51U4p6Luizbj0CMkRWyaBdGL0yfGzv8JnSUqX4Bny6Ihyj7dW9Y1BnlQn4xRjrCA3XYaJkEatopcLM9z49%2FaayCQfOWrcmwV0V8w27qLuXbfDWcm%2FOC39UaHGlariyIyw9EMyj8fZHJc%2BVjFkuWnG8ghI6wdS9nVgO92tAeTSctsLcyT5KLQEDxiLxX6yDymnnB6oCynWvDVWCBNcsb%2B9wFi%2BMiBAOo%2F%2FtmvYZ3aG1mcWzZOrFkyt6mmENx52klcgElOQvV5%2Fs%2BDqBzyV8wfM6Qx7qfl%2FMOIhgQ6YEuhSw8CK3JIMB4SORkz0dlqsuPvyxmQUNaZ6lgGaKS7PEYoFT4xUmvaIaDfj4%2F3RsRyqHxXtdWN5nOMZfjKLqX0bz5ytEuOXcJzVdQVUsqH5ziXU%2Fjx%2FAn0K1ZbMZ9pAN3nmWbdgMS6rijbbEMUV%2FykCnOzgeA93WFlpJevYNCx104eH1KvhN05zQd1u66PC2G0K5j03LnfQI%2FO4RDqMTUjtQojEAOpOvZ%2F7xJxxX5qnxylxs2%2Bv2Ae5ev%2B4NuZ29nfuGvMxXgcOMal1kdNut2H8KlzWSo0TzyKj8oIAwuZTS1wY6pgFElavWKxbJ2BL9o3LWPKSfqXtNBG4FX%2Bca8sJBKopez%2BAcYD7N66NKxrxGfq5v3havwzvNF2jE%2FyBx2ywyrM25r06uZwEjsyVL%2FBbhmf6lR6guZSTO%2FuL5qOTBsNFtL%2FPgiP%2F7nT%2FmMznQw0xEiWPWmoYof543Pvjl7Rt7bGqvYtc9nnJuMF4C4Wot%2F3FoNGTjuCFrSGlzxPIEGcb1cvg6Lc4KX2O2&X-Amz-Signature=44c7c0e3afb8d8f107aae929c7d225fc98b5ae664708f97c9beaded9fea6ae61&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q54X66EK%2F20261111%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261111T155200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBEPcttX%2B2KCkYsVmMXzvG6J%2F8tDjtizpSrHNcHK2QozAiB5%2Fmmk5fZ9OsmoVMqknxWyKBX4SRZ5oS5puaYS9tcLTir%2FAwhYEAAaDDYzNzQyMzE4MzgwNSIM7%2Fil7KuGvfkiTVhqKtwDZyxzbcI0Q%2FMDL4XZtZkYV5tEdKUX%2FF9PGnTCigrhWYWjIa51U4p6Luizbj0CMkRWyaBdGL0yfGzv8JnSUqX4Bny6Ihyj7dW9Y1BnlQn4xRjrCA3XYaJkEatopcLM9z49%2FaayCQfOWrcmwV0V8w27qLuXbfDWcm%2FOC39UaHGlariyIyw9EMyj8fZHJc%2BVjFkuWnG8ghI6wdS9nVgO92tAeTSctsLcyT5KLQEDxiLxX6yDymnnB6oCynWvDVWCBNcsb%2B9wFi%2BMiBAOo%2F%2FtmvYZ3aG1mcWzZOrFkyt6mmENx52klcgElOQvV5%2Fs%2BDqBzyV8wfM6Qx7qfl%2FMOIhgQ6YEuhSw8CK3JIMB4SORkz0dlqsuPvyxmQUNaZ6lgGaKS7PEYoFT4xUmvaIaDfj4%2F3RsRyqHxXtdWN5nOMZfjKLqX0bz5ytEuOXcJzVdQVUsqH5ziXU%2Fjx%2FAn0K1ZbMZ9pAN3nmWbdgMS6rijbbEMUV%2FykCnOzgeA93WFlpJevYNCx104eH1KvhN05zQd1u66PC2G0K5j03LnfQI%2FO4RDqMTUjtQojEAOpOvZ%2F7xJxxX5qnxylxs2%2Bv2Ae5ev%2B4NuZ29nfuGvMxXgcOMal1kdNut2H8KlzWSo0TzyKj8oIAwuZTS1wY6pgFElavWKxbJ2BL9o3LWPKSfqXtNBG4FX%2Bca8sJBKopez%2BAcYD7N66NKxrxGfq5v3havwzvNF2jE%2FyBx2ywyrM25r06uZwEjsyVL%2FBbhmf6lR6guZSTO%2FuL5qOTBsNFtL%2FPgiP%2F7nT%2FmMznQw0xEiWPWmoYof543Pvjl7Rt7bGqvYtc9nnJuMF4C4Wot%2F3FoNGTjuCFrSGlzxPIEGcb1cvg6Lc4KX2O2&X-Amz-Signature=3b978f3a0e54d09c3fcd842a7d05b93a5d2677344ef3dbe7a978c2b3417b6d70&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
