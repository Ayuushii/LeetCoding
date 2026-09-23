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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OJPA75%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD844Bkmfre5KI6BDmfATXgum5d5CysAZYS0Flpx6HirQIgXyPe1ma2CSYozAsNwriTCK8I64Y1F8sIOUwYfhzW8KEqiAQIvf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPeAepUwy48DbqPWZircA2tJABgoYhJEDxpLiMyr2xOCO20aCmZI8GhHMNH%2B6T6exvFpBa4rQ0Y1tLunkufLpkdgNP3%2FRysxQBC0hPDsBPy1jcvqIhDVA96%2FVAb24XjqJEy9l5%2FCLCrwVuYkXyq595vtfvwPGju4h1P4HT%2BAVxuzwsT9bL5GFZZ%2BMgLRe%2BYzsvLcDjlwAUY1QYk30Ab4jGYvgSZHthqF2Q4iGFD6jZZBGhSTl0sMZzsJdv3nw0DQHLRsm3ccqIMaDNrMhAD5DRAtwU14YnbxLZd47h7atZ1L6EXL%2BI25K561Cii9gM%2Fiob9iw3GxYXqSWtaK%2BlcQwGzTXwVn%2B1n9st6e2h7tcpkUF4a4d7W1HvmUMdbuukOdinzSILyfVznGSdMWZj1%2FcLvRsNf86wTXYq1ZcM88uL8NVJMm2wM%2FpLbzrCm2J%2Fg4hudBfg936t3IFOqA4DdExVLxWeG7nf1CYU5eXtDAXpAmtCZ%2BpMRBu8leHtN2R80lfgAi%2F1aFXu6u69Mdsrft63tHwtDZFdWt3M9LtYo2Wo2AU2wmsinHsLHO6Qs%2BBKt%2FmBmauefVdaCSANU9BOQki4E8fRLRg%2F%2BeW%2FCZdUq6Ndu17oI0WxkHDFac%2BMcJO7eA1D%2FavKFk%2BECxf%2BMZMOCEz9UGOqUBDWOLvopnq3gYMnCE%2FR7dTcX67i1U7Ajz5JUQ4pK08sQB8ZU%2FXI2gGn5LE6pIfTt%2F%2F5c3FE0CqpwQqmTn19%2F2t7f1i%2FDPf0hNKRYazifDOSxpteqR2dEj9Xw7Rd%2FfMHyXdJl0WKPu1zgSIuoouKgqeqNSv633sLjWkvcaCF0pcTJwfYlCqli0bZvD9%2FrMpZ8Og%2F5wfc2RjICv8Q3kA9ooVM8NxRcF&X-Amz-Signature=f584a4cb19eb40e69bd13712de763b5bfbcd52a27208baa1b6bd7ff393d29fb1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OJPA75%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD844Bkmfre5KI6BDmfATXgum5d5CysAZYS0Flpx6HirQIgXyPe1ma2CSYozAsNwriTCK8I64Y1F8sIOUwYfhzW8KEqiAQIvf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPeAepUwy48DbqPWZircA2tJABgoYhJEDxpLiMyr2xOCO20aCmZI8GhHMNH%2B6T6exvFpBa4rQ0Y1tLunkufLpkdgNP3%2FRysxQBC0hPDsBPy1jcvqIhDVA96%2FVAb24XjqJEy9l5%2FCLCrwVuYkXyq595vtfvwPGju4h1P4HT%2BAVxuzwsT9bL5GFZZ%2BMgLRe%2BYzsvLcDjlwAUY1QYk30Ab4jGYvgSZHthqF2Q4iGFD6jZZBGhSTl0sMZzsJdv3nw0DQHLRsm3ccqIMaDNrMhAD5DRAtwU14YnbxLZd47h7atZ1L6EXL%2BI25K561Cii9gM%2Fiob9iw3GxYXqSWtaK%2BlcQwGzTXwVn%2B1n9st6e2h7tcpkUF4a4d7W1HvmUMdbuukOdinzSILyfVznGSdMWZj1%2FcLvRsNf86wTXYq1ZcM88uL8NVJMm2wM%2FpLbzrCm2J%2Fg4hudBfg936t3IFOqA4DdExVLxWeG7nf1CYU5eXtDAXpAmtCZ%2BpMRBu8leHtN2R80lfgAi%2F1aFXu6u69Mdsrft63tHwtDZFdWt3M9LtYo2Wo2AU2wmsinHsLHO6Qs%2BBKt%2FmBmauefVdaCSANU9BOQki4E8fRLRg%2F%2BeW%2FCZdUq6Ndu17oI0WxkHDFac%2BMcJO7eA1D%2FavKFk%2BECxf%2BMZMOCEz9UGOqUBDWOLvopnq3gYMnCE%2FR7dTcX67i1U7Ajz5JUQ4pK08sQB8ZU%2FXI2gGn5LE6pIfTt%2F%2F5c3FE0CqpwQqmTn19%2F2t7f1i%2FDPf0hNKRYazifDOSxpteqR2dEj9Xw7Rd%2FfMHyXdJl0WKPu1zgSIuoouKgqeqNSv633sLjWkvcaCF0pcTJwfYlCqli0bZvD9%2FrMpZ8Og%2F5wfc2RjICv8Q3kA9ooVM8NxRcF&X-Amz-Signature=133ba429a9a6acb50af0188a675b1becdff11399da404f5ba6c6e68e2a4c3b76&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OJPA75%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD844Bkmfre5KI6BDmfATXgum5d5CysAZYS0Flpx6HirQIgXyPe1ma2CSYozAsNwriTCK8I64Y1F8sIOUwYfhzW8KEqiAQIvf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPeAepUwy48DbqPWZircA2tJABgoYhJEDxpLiMyr2xOCO20aCmZI8GhHMNH%2B6T6exvFpBa4rQ0Y1tLunkufLpkdgNP3%2FRysxQBC0hPDsBPy1jcvqIhDVA96%2FVAb24XjqJEy9l5%2FCLCrwVuYkXyq595vtfvwPGju4h1P4HT%2BAVxuzwsT9bL5GFZZ%2BMgLRe%2BYzsvLcDjlwAUY1QYk30Ab4jGYvgSZHthqF2Q4iGFD6jZZBGhSTl0sMZzsJdv3nw0DQHLRsm3ccqIMaDNrMhAD5DRAtwU14YnbxLZd47h7atZ1L6EXL%2BI25K561Cii9gM%2Fiob9iw3GxYXqSWtaK%2BlcQwGzTXwVn%2B1n9st6e2h7tcpkUF4a4d7W1HvmUMdbuukOdinzSILyfVznGSdMWZj1%2FcLvRsNf86wTXYq1ZcM88uL8NVJMm2wM%2FpLbzrCm2J%2Fg4hudBfg936t3IFOqA4DdExVLxWeG7nf1CYU5eXtDAXpAmtCZ%2BpMRBu8leHtN2R80lfgAi%2F1aFXu6u69Mdsrft63tHwtDZFdWt3M9LtYo2Wo2AU2wmsinHsLHO6Qs%2BBKt%2FmBmauefVdaCSANU9BOQki4E8fRLRg%2F%2BeW%2FCZdUq6Ndu17oI0WxkHDFac%2BMcJO7eA1D%2FavKFk%2BECxf%2BMZMOCEz9UGOqUBDWOLvopnq3gYMnCE%2FR7dTcX67i1U7Ajz5JUQ4pK08sQB8ZU%2FXI2gGn5LE6pIfTt%2F%2F5c3FE0CqpwQqmTn19%2F2t7f1i%2FDPf0hNKRYazifDOSxpteqR2dEj9Xw7Rd%2FfMHyXdJl0WKPu1zgSIuoouKgqeqNSv633sLjWkvcaCF0pcTJwfYlCqli0bZvD9%2FrMpZ8Og%2F5wfc2RjICv8Q3kA9ooVM8NxRcF&X-Amz-Signature=397736cfee6de0098f87bac8323f0bade2f4c18c421aaf8d0183232017b454da&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UIPVSJTB%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNIFEXrxD4yPT%2FB8p2VYsC6asBxZFAH%2Fdlw%2BT%2BspUFqAiA8l9Oo6dQh9LRjaA2OJYbJYBIbkxILZ7N8owJeoMLjyCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxGbxYqQUJmc2P9VdKtwDaEbNx7ZuY2a8WvipxalNSGjj2HABnFSWI8d9D8pwTpgIVkVg0HVj2hQynXZ1mJ%2BiKjw8h2cpTNzJs3MSFsj68V1Bk7nvN2wWLeOH0%2FlZ%2F4k91uOKo5wwh1iM3r2Mw5znOp0bkNmF83gXdJ%2Fv7NLOT%2Bl1e0t4tSGlKgHvk9oQbh8mDrBkkEfYu4f6a0uSwxZaB0YNopWH8ncI2EaTcpj9qJ%2BC8N7XpRC72oNBiH%2FDT1%2Bcbnmol5Hfcp6TWQKUKcUVIl05NPavG9l6WJeGpzhPXl6WJjlq3iCa4vmzQOKzYx8hvtXNsSKdiv4Bwzj8YpylB2y7dLxaxp83isrP3CsL7MUcRqzFvrENsHZGubp9%2BLj8hOemq4F%2F73FnnHNs46SsDrJE5GM8SPNNZkwEnHBhIlx83juj81Bi%2FnxRtxAL7oYnP7imyIZNZOZG9orwT1%2F172fFDV7IhYmktOYImwBCBj4%2BlLq2Dw8M7KpyjUu%2BjNfShFzXCzbsjRfplPKXOf6ZePDWlx9QuHxvT6UHBqjiObECC722jWBAkVxQiutbLYltBIF7grcfIYXN5XLFjTlwRN3hA5BexfSFUTF396mNLKkgNDNxKtN2BrA30uK8bOPB3dL9PVI2Iz408LEwgobP1QY6pgEbF%2BOd6RAV3Lnuq8q%2FLg%2Fe16a9%2BJei7CK43dRM%2BoPHHXP0%2F%2FRQDPj9TdP2p2KatuVpy70BoUZ80EzWbCBvrnJO7EHvyiKd5V%2BHqEr5MzEul6I%2BYkRS9g14e1pgN73a29ligvgPH2x7AEVtB93gniEIK1YYD9FU9I6h%2BFn%2BqNKNsC59mcK01tgHN37z%2FJ8OMEQv3KCEnkw9uoAQI8HEcvCw7GmQKSkP&X-Amz-Signature=82e5929b2f01839a96631eb79dadcd15d03aa0fbaef99f6cf4e498f1f1ee6e4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UIPVSJTB%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNIFEXrxD4yPT%2FB8p2VYsC6asBxZFAH%2Fdlw%2BT%2BspUFqAiA8l9Oo6dQh9LRjaA2OJYbJYBIbkxILZ7N8owJeoMLjyCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxGbxYqQUJmc2P9VdKtwDaEbNx7ZuY2a8WvipxalNSGjj2HABnFSWI8d9D8pwTpgIVkVg0HVj2hQynXZ1mJ%2BiKjw8h2cpTNzJs3MSFsj68V1Bk7nvN2wWLeOH0%2FlZ%2F4k91uOKo5wwh1iM3r2Mw5znOp0bkNmF83gXdJ%2Fv7NLOT%2Bl1e0t4tSGlKgHvk9oQbh8mDrBkkEfYu4f6a0uSwxZaB0YNopWH8ncI2EaTcpj9qJ%2BC8N7XpRC72oNBiH%2FDT1%2Bcbnmol5Hfcp6TWQKUKcUVIl05NPavG9l6WJeGpzhPXl6WJjlq3iCa4vmzQOKzYx8hvtXNsSKdiv4Bwzj8YpylB2y7dLxaxp83isrP3CsL7MUcRqzFvrENsHZGubp9%2BLj8hOemq4F%2F73FnnHNs46SsDrJE5GM8SPNNZkwEnHBhIlx83juj81Bi%2FnxRtxAL7oYnP7imyIZNZOZG9orwT1%2F172fFDV7IhYmktOYImwBCBj4%2BlLq2Dw8M7KpyjUu%2BjNfShFzXCzbsjRfplPKXOf6ZePDWlx9QuHxvT6UHBqjiObECC722jWBAkVxQiutbLYltBIF7grcfIYXN5XLFjTlwRN3hA5BexfSFUTF396mNLKkgNDNxKtN2BrA30uK8bOPB3dL9PVI2Iz408LEwgobP1QY6pgEbF%2BOd6RAV3Lnuq8q%2FLg%2Fe16a9%2BJei7CK43dRM%2BoPHHXP0%2F%2FRQDPj9TdP2p2KatuVpy70BoUZ80EzWbCBvrnJO7EHvyiKd5V%2BHqEr5MzEul6I%2BYkRS9g14e1pgN73a29ligvgPH2x7AEVtB93gniEIK1YYD9FU9I6h%2BFn%2BqNKNsC59mcK01tgHN37z%2FJ8OMEQv3KCEnkw9uoAQI8HEcvCw7GmQKSkP&X-Amz-Signature=f31d62cc48ba60f052a3f6a0af387953dc5af56daba2eb06e22272e8c8a1ecc2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UIPVSJTB%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNIFEXrxD4yPT%2FB8p2VYsC6asBxZFAH%2Fdlw%2BT%2BspUFqAiA8l9Oo6dQh9LRjaA2OJYbJYBIbkxILZ7N8owJeoMLjyCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxGbxYqQUJmc2P9VdKtwDaEbNx7ZuY2a8WvipxalNSGjj2HABnFSWI8d9D8pwTpgIVkVg0HVj2hQynXZ1mJ%2BiKjw8h2cpTNzJs3MSFsj68V1Bk7nvN2wWLeOH0%2FlZ%2F4k91uOKo5wwh1iM3r2Mw5znOp0bkNmF83gXdJ%2Fv7NLOT%2Bl1e0t4tSGlKgHvk9oQbh8mDrBkkEfYu4f6a0uSwxZaB0YNopWH8ncI2EaTcpj9qJ%2BC8N7XpRC72oNBiH%2FDT1%2Bcbnmol5Hfcp6TWQKUKcUVIl05NPavG9l6WJeGpzhPXl6WJjlq3iCa4vmzQOKzYx8hvtXNsSKdiv4Bwzj8YpylB2y7dLxaxp83isrP3CsL7MUcRqzFvrENsHZGubp9%2BLj8hOemq4F%2F73FnnHNs46SsDrJE5GM8SPNNZkwEnHBhIlx83juj81Bi%2FnxRtxAL7oYnP7imyIZNZOZG9orwT1%2F172fFDV7IhYmktOYImwBCBj4%2BlLq2Dw8M7KpyjUu%2BjNfShFzXCzbsjRfplPKXOf6ZePDWlx9QuHxvT6UHBqjiObECC722jWBAkVxQiutbLYltBIF7grcfIYXN5XLFjTlwRN3hA5BexfSFUTF396mNLKkgNDNxKtN2BrA30uK8bOPB3dL9PVI2Iz408LEwgobP1QY6pgEbF%2BOd6RAV3Lnuq8q%2FLg%2Fe16a9%2BJei7CK43dRM%2BoPHHXP0%2F%2FRQDPj9TdP2p2KatuVpy70BoUZ80EzWbCBvrnJO7EHvyiKd5V%2BHqEr5MzEul6I%2BYkRS9g14e1pgN73a29ligvgPH2x7AEVtB93gniEIK1YYD9FU9I6h%2BFn%2BqNKNsC59mcK01tgHN37z%2FJ8OMEQv3KCEnkw9uoAQI8HEcvCw7GmQKSkP&X-Amz-Signature=c546426ef767e5fdd4b840701d4ccc1bdef9b21e157ee6172510affbfaa5fb7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UIPVSJTB%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNIFEXrxD4yPT%2FB8p2VYsC6asBxZFAH%2Fdlw%2BT%2BspUFqAiA8l9Oo6dQh9LRjaA2OJYbJYBIbkxILZ7N8owJeoMLjyCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxGbxYqQUJmc2P9VdKtwDaEbNx7ZuY2a8WvipxalNSGjj2HABnFSWI8d9D8pwTpgIVkVg0HVj2hQynXZ1mJ%2BiKjw8h2cpTNzJs3MSFsj68V1Bk7nvN2wWLeOH0%2FlZ%2F4k91uOKo5wwh1iM3r2Mw5znOp0bkNmF83gXdJ%2Fv7NLOT%2Bl1e0t4tSGlKgHvk9oQbh8mDrBkkEfYu4f6a0uSwxZaB0YNopWH8ncI2EaTcpj9qJ%2BC8N7XpRC72oNBiH%2FDT1%2Bcbnmol5Hfcp6TWQKUKcUVIl05NPavG9l6WJeGpzhPXl6WJjlq3iCa4vmzQOKzYx8hvtXNsSKdiv4Bwzj8YpylB2y7dLxaxp83isrP3CsL7MUcRqzFvrENsHZGubp9%2BLj8hOemq4F%2F73FnnHNs46SsDrJE5GM8SPNNZkwEnHBhIlx83juj81Bi%2FnxRtxAL7oYnP7imyIZNZOZG9orwT1%2F172fFDV7IhYmktOYImwBCBj4%2BlLq2Dw8M7KpyjUu%2BjNfShFzXCzbsjRfplPKXOf6ZePDWlx9QuHxvT6UHBqjiObECC722jWBAkVxQiutbLYltBIF7grcfIYXN5XLFjTlwRN3hA5BexfSFUTF396mNLKkgNDNxKtN2BrA30uK8bOPB3dL9PVI2Iz408LEwgobP1QY6pgEbF%2BOd6RAV3Lnuq8q%2FLg%2Fe16a9%2BJei7CK43dRM%2BoPHHXP0%2F%2FRQDPj9TdP2p2KatuVpy70BoUZ80EzWbCBvrnJO7EHvyiKd5V%2BHqEr5MzEul6I%2BYkRS9g14e1pgN73a29ligvgPH2x7AEVtB93gniEIK1YYD9FU9I6h%2BFn%2BqNKNsC59mcK01tgHN37z%2FJ8OMEQv3KCEnkw9uoAQI8HEcvCw7GmQKSkP&X-Amz-Signature=e91a1902dc554d26d32da630d0f54360405dd8cbee203d561202625b07e424e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WZRVC5UW%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAPz97nmA6c%2BSEsR4m7NId7lOjiwmQ6pNjea9hkSZkAEAiBu881QoHWS4AvE782XchL4Sz%2BROmymlN%2BBF11pzQuTZCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVZ1L%2F2P%2FjH9X7u6TKtwDSPFldUFFV2%2Fee%2FN5QEdeqCP8fu5w3D287pfO%2F%2F%2BN1r%2FjhYPUUzqtawdVSHBtfuGZZ98sBuwQFCqJb%2FeHnUZxaDuwOISgUt53qH6OeF2qM0E40OWXLv%2F1GOIC2JpN0jeLn5pw6bQNBKgO2P0w2Is73YV22iW39bEeHKUCO%2BDfcFUi0D%2F8WhhI1SZf7oM5rmwuOCavrl38vSDb1zEbNecJE%2F2QFbEXsKwwBGg4OuRRQWL%2BJUsx0X4bfHFLSQ3ynYfe5hKixbyw7f1mmlJ9sSIVoBWb4kVizD2dbtaTROJmNZC0zIn4%2Fx7VH%2BIvhveYRYJp0nTDctXIxwOJpxil2wGItyShfYbhep61H1AIbUy1JQaYBZCsMLgOX7J9yNtkYJiItqoLOhELJLdqQrrsn%2BGRxUj8ivINNgA7VIgW0%2Foo2ZOjziyTZalrKJOnKuoOCHgS1BS1986fLTWWYf6dYuDF3ElmoVpJ%2BP%2F55xmN04lqMbHB1e%2FHsvHd9neK88fQNeLfDx%2FGdtfJMoEM4usIDs6f3KnZcsEm4fJJ0c5CJ7Srt%2BQFSs%2BoZKYBy0EGys%2FwWYZzxo17rYBXcYnXYLVK2pmnJKnctT0qkzqw6w%2FV1KdRihyhOWusjiVGKmy5TkwwgIbP1QY6pgFtETFQO59NfpHWVMmhbqzcAgmhypYv23efl4FJiAjzQP%2BoIt3f2rrkWN5py7Y5foaRPUiKJKzErBcKw8MwwBNr5Wrfh%2BdGbKvWaklV%2Bn15ObQMgNKfcF7Oa9kz%2BUNNAPrwSEFQsc6YSaqkwILbUIirJpMpnlYbPbFeDkNS8%2BLrm7L1MEaY3D8wk5d6OXN0eRND3wx5Hlt4qF9cHELr7YFMf5pAqQ%2BD&X-Amz-Signature=43ac3a68d85f468d3c7906ec58c81be3ec2122ce640b501bdc2c95224f6a9637&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UGOKQJXH%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGVL%2Fo11BSW2w0tTtzLWJmN1BkJ8XBoYseToLha8Isw8AiEAi97gkhb4tn4I8%2FLua7CAXfkbaZs%2B7NUU99EgLBZbQw4qiAQIvf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMJ8PFfm0OVH8mvXdCrcA59Brb1mjS6E%2FXtNl5D41lJr5vzFgj3pCVfM206B7ydKiweKIGcdYm1tDUxfab4LOcBUbx5X8cw5m2NqxSkVpWpF2gEGs%2FM3BQH%2FT%2FwPpFcYH78n%2Bsoh6c5Lp%2F78REHzauOCXRwQYfO7QzTjtxR718tmqhM3hZh0QqA%2Bdwsihf1q8mWNqf13vDo5rviMNaqztK8sLc9c9ALjI6W2QKn2mHatUO53iKfJCeEjy4hdD6Qg9wC%2FItmVfgg2RDgN2mmr7Dac4kPE0QdREDX0qde6Ccct9%2BN6s%2BbH3U640sOdsodWYogIpPegP16frrXPI9xppdoqa%2FdzWs0yxMJMl3%2Fj7rnWfNHK6qHFcGi8M2qrPf%2BFs1RL1LPaG2EVjTF43Wwc5YImqgMTdgKkcoJ6cjJQfJ%2BmII95wWwCqacfyVASlnmsLxEBVWiQ8SILngY2j0nQXZMpNBjt%2BtzCwbwOC%2FX6t7WJK1N22jSp7xle1OHdXnGyKuHGickVR56Ni5oSbgt2XCjhbEZzsLGjsHZMfx5NM1akmSwRWxOEhMpy3Pdxaz2r8lqv0FG6MWJmeGxRsfVswLsGdLzkoPp3U564iVyPixOmlCFcfP%2BbSWIiXsn0HnP22SY2v5UaiHKRhVMaMLqHz9UGOqUB0QonPfnEhiGksYghiYkvlUEbmNbHhM0xYz7MzvGdXcJLUVxu9rn8IVl4FzkneKfwz8F7ARAld9z%2BDhqirpQviF%2BGN2JZeysJAq0VXDT5QZstpTMNxkZbBBX0V99OfIY1ut5HvyhkNZZ3M0ppcHCG%2B5OS15XRx8tidw%2B2C%2F1qiJXTY0SKSCbFRJzM42QUYsnxoUwtiWgZjmnkzkZQj5CxSrEQkum%2F&X-Amz-Signature=2004316e79feb5ec32ff4429c85c5985b01ce1c848f891950754bd2643a64943&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UGOKQJXH%2F20260923%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260923T132159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGVL%2Fo11BSW2w0tTtzLWJmN1BkJ8XBoYseToLha8Isw8AiEAi97gkhb4tn4I8%2FLua7CAXfkbaZs%2B7NUU99EgLBZbQw4qiAQIvf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMJ8PFfm0OVH8mvXdCrcA59Brb1mjS6E%2FXtNl5D41lJr5vzFgj3pCVfM206B7ydKiweKIGcdYm1tDUxfab4LOcBUbx5X8cw5m2NqxSkVpWpF2gEGs%2FM3BQH%2FT%2FwPpFcYH78n%2Bsoh6c5Lp%2F78REHzauOCXRwQYfO7QzTjtxR718tmqhM3hZh0QqA%2Bdwsihf1q8mWNqf13vDo5rviMNaqztK8sLc9c9ALjI6W2QKn2mHatUO53iKfJCeEjy4hdD6Qg9wC%2FItmVfgg2RDgN2mmr7Dac4kPE0QdREDX0qde6Ccct9%2BN6s%2BbH3U640sOdsodWYogIpPegP16frrXPI9xppdoqa%2FdzWs0yxMJMl3%2Fj7rnWfNHK6qHFcGi8M2qrPf%2BFs1RL1LPaG2EVjTF43Wwc5YImqgMTdgKkcoJ6cjJQfJ%2BmII95wWwCqacfyVASlnmsLxEBVWiQ8SILngY2j0nQXZMpNBjt%2BtzCwbwOC%2FX6t7WJK1N22jSp7xle1OHdXnGyKuHGickVR56Ni5oSbgt2XCjhbEZzsLGjsHZMfx5NM1akmSwRWxOEhMpy3Pdxaz2r8lqv0FG6MWJmeGxRsfVswLsGdLzkoPp3U564iVyPixOmlCFcfP%2BbSWIiXsn0HnP22SY2v5UaiHKRhVMaMLqHz9UGOqUB0QonPfnEhiGksYghiYkvlUEbmNbHhM0xYz7MzvGdXcJLUVxu9rn8IVl4FzkneKfwz8F7ARAld9z%2BDhqirpQviF%2BGN2JZeysJAq0VXDT5QZstpTMNxkZbBBX0V99OfIY1ut5HvyhkNZZ3M0ppcHCG%2B5OS15XRx8tidw%2B2C%2F1qiJXTY0SKSCbFRJzM42QUYsnxoUwtiWgZjmnkzkZQj5CxSrEQkum%2F&X-Amz-Signature=43e4a3331cd28797d87e04bc9edfb919f7188836928a4f557aa31149164ae2f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
