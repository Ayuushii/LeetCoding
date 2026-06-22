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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QJ4QKXB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIGndYPzuqWgd58x23LzbwcfUPK%2B2ap0jDBWoRGJRNoOcAiEA56ZGI6VpRgO9PkOWFk5R%2B8y%2FsB7DXaI0pKwg%2F0eTM2Eq%2FwMIBhAAGgw2Mzc0MjMxODM4MDUiDCC%2Bh0pbRpDd4qpPSCrcAwf51C1Agoe5%2FgjbTtisWZT0u2PzW%2FosvkO9hos4%2FAl2nVdq8shpSBrn%2BGF%2B1JP%2BcK93sx1JwjIn7LL5hksbszdSg6Luw2uQLMPPaBDSWXEvS1H%2BXdz3Ex7AfmXoR6nl5VQcPhqcbR%2FzYeOYR8sM88fe77k8QXRJu9SyFwefHc1V64TAToyXC1TG1%2BLDKqSE0IHU703eSJageRaH0%2Fyl%2B5zn1Td5QBCEzR%2FRlE07dqGN2gJbTxBC3wKS%2BRCEcxNBJ6rBDQ7Q5unneBqIePQsJYbEFIBS9JgmruspA6uPk%2Bf3XbS0p09aZ%2F4zyGjbXiMz%2FeCY7CuhQ9bzWas%2Bf0rTKSFQs6Bw%2FioSgMm4uJ6aB1n16zcdsUUvI7w6RkdZRYvOpcEdOW%2BJVrexCD8kTxKycuQTr8p%2BnikXZD0w6X5Hz9KmZvqO454H9ygg%2BULnmojELLZSW2zN7Zg0of%2B4SonB4IxUPuzA%2Bj8FRREdxFzbonBHyI%2BV%2F5yAFgyehgRgAXMBjkjq1uOx%2BonxRGUBnpBTSZdjrgqHrEjGNEEDu02MAD1x3vQkt%2B03WIIWj3z8ENTnFqEgp89jdCfHCn2GRflx7ErydCzKWPLiDYIy2R0BLLjh9DR61WH%2FnBgJor3RMJPp5NEGOqUBm%2BvvAqMWTcR39ZRXQwRmYcJ%2BoTBIqKyqAXyq3TElfzLV%2FK0N0nn%2F7BxW8GdB%2BpuU0AZfY9DloOykv7B%2Bs2HOx2oEgg3kyR7LHU0%2Br2YimhkOnQ7rHT4r1LCjcefXjftWdE38c1oKIEWMUPuG2ysGtnLleKXn%2FMQATsbOb9ypoNymV%2FXhs%2F8Sh6hUBtUMEguR17VBzqxs1pujZeCxh1av4%2B5awzc2&X-Amz-Signature=fa78c0dee524cfe129eebfd7b406a4c31b5c41d04ab3b8a9cec8689a3363710f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QJ4QKXB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIGndYPzuqWgd58x23LzbwcfUPK%2B2ap0jDBWoRGJRNoOcAiEA56ZGI6VpRgO9PkOWFk5R%2B8y%2FsB7DXaI0pKwg%2F0eTM2Eq%2FwMIBhAAGgw2Mzc0MjMxODM4MDUiDCC%2Bh0pbRpDd4qpPSCrcAwf51C1Agoe5%2FgjbTtisWZT0u2PzW%2FosvkO9hos4%2FAl2nVdq8shpSBrn%2BGF%2B1JP%2BcK93sx1JwjIn7LL5hksbszdSg6Luw2uQLMPPaBDSWXEvS1H%2BXdz3Ex7AfmXoR6nl5VQcPhqcbR%2FzYeOYR8sM88fe77k8QXRJu9SyFwefHc1V64TAToyXC1TG1%2BLDKqSE0IHU703eSJageRaH0%2Fyl%2B5zn1Td5QBCEzR%2FRlE07dqGN2gJbTxBC3wKS%2BRCEcxNBJ6rBDQ7Q5unneBqIePQsJYbEFIBS9JgmruspA6uPk%2Bf3XbS0p09aZ%2F4zyGjbXiMz%2FeCY7CuhQ9bzWas%2Bf0rTKSFQs6Bw%2FioSgMm4uJ6aB1n16zcdsUUvI7w6RkdZRYvOpcEdOW%2BJVrexCD8kTxKycuQTr8p%2BnikXZD0w6X5Hz9KmZvqO454H9ygg%2BULnmojELLZSW2zN7Zg0of%2B4SonB4IxUPuzA%2Bj8FRREdxFzbonBHyI%2BV%2F5yAFgyehgRgAXMBjkjq1uOx%2BonxRGUBnpBTSZdjrgqHrEjGNEEDu02MAD1x3vQkt%2B03WIIWj3z8ENTnFqEgp89jdCfHCn2GRflx7ErydCzKWPLiDYIy2R0BLLjh9DR61WH%2FnBgJor3RMJPp5NEGOqUBm%2BvvAqMWTcR39ZRXQwRmYcJ%2BoTBIqKyqAXyq3TElfzLV%2FK0N0nn%2F7BxW8GdB%2BpuU0AZfY9DloOykv7B%2Bs2HOx2oEgg3kyR7LHU0%2Br2YimhkOnQ7rHT4r1LCjcefXjftWdE38c1oKIEWMUPuG2ysGtnLleKXn%2FMQATsbOb9ypoNymV%2FXhs%2F8Sh6hUBtUMEguR17VBzqxs1pujZeCxh1av4%2B5awzc2&X-Amz-Signature=4e558b97c39ab3acd840385bcce294653966f282de3bf79c7a74c5c92a8082e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QJ4QKXB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIGndYPzuqWgd58x23LzbwcfUPK%2B2ap0jDBWoRGJRNoOcAiEA56ZGI6VpRgO9PkOWFk5R%2B8y%2FsB7DXaI0pKwg%2F0eTM2Eq%2FwMIBhAAGgw2Mzc0MjMxODM4MDUiDCC%2Bh0pbRpDd4qpPSCrcAwf51C1Agoe5%2FgjbTtisWZT0u2PzW%2FosvkO9hos4%2FAl2nVdq8shpSBrn%2BGF%2B1JP%2BcK93sx1JwjIn7LL5hksbszdSg6Luw2uQLMPPaBDSWXEvS1H%2BXdz3Ex7AfmXoR6nl5VQcPhqcbR%2FzYeOYR8sM88fe77k8QXRJu9SyFwefHc1V64TAToyXC1TG1%2BLDKqSE0IHU703eSJageRaH0%2Fyl%2B5zn1Td5QBCEzR%2FRlE07dqGN2gJbTxBC3wKS%2BRCEcxNBJ6rBDQ7Q5unneBqIePQsJYbEFIBS9JgmruspA6uPk%2Bf3XbS0p09aZ%2F4zyGjbXiMz%2FeCY7CuhQ9bzWas%2Bf0rTKSFQs6Bw%2FioSgMm4uJ6aB1n16zcdsUUvI7w6RkdZRYvOpcEdOW%2BJVrexCD8kTxKycuQTr8p%2BnikXZD0w6X5Hz9KmZvqO454H9ygg%2BULnmojELLZSW2zN7Zg0of%2B4SonB4IxUPuzA%2Bj8FRREdxFzbonBHyI%2BV%2F5yAFgyehgRgAXMBjkjq1uOx%2BonxRGUBnpBTSZdjrgqHrEjGNEEDu02MAD1x3vQkt%2B03WIIWj3z8ENTnFqEgp89jdCfHCn2GRflx7ErydCzKWPLiDYIy2R0BLLjh9DR61WH%2FnBgJor3RMJPp5NEGOqUBm%2BvvAqMWTcR39ZRXQwRmYcJ%2BoTBIqKyqAXyq3TElfzLV%2FK0N0nn%2F7BxW8GdB%2BpuU0AZfY9DloOykv7B%2Bs2HOx2oEgg3kyR7LHU0%2Br2YimhkOnQ7rHT4r1LCjcefXjftWdE38c1oKIEWMUPuG2ysGtnLleKXn%2FMQATsbOb9ypoNymV%2FXhs%2F8Sh6hUBtUMEguR17VBzqxs1pujZeCxh1av4%2B5awzc2&X-Amz-Signature=7d3e48ddbb211c49fab46e0d40f0fa609ffbb44d6da2c8eddedb82098efcf664&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YD34J3WB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJIMEYCIQClxQwjHk7fXXFbwgP5TYA8%2FoQDkN2bXEuGnk7rr9CqJQIhAIRb4gJJiTFHoQLuo9D2B%2F8fgk6UAGxV21rBfAksosUEKv8DCAYQABoMNjM3NDIzMTgzODA1IgypJfObqQwnB7Btugsq3APmg8nNnIVGEVDDW4UPtT2uicT0ABHWzfLhk%2FUqIHOS8Ad7gK6vMEw0rMw58R4Gfaw3yBbXEEJtJbFWa03F7FxmbEhZt6tqeZSF9D64LYBU%2BBgFSwWGq1VvgduqTy%2FDEAh44KF1FL%2BbqK6SPsnsEEDNHOuleSm0W8ZH0eCtHSOofvc7tlOAzeqAWP9R%2FZ2oI71%2FPAf9lxK%2FFxND4PYkC0cAGg5vzdTd5oKVKMPRJp8NBCTzNOoNwYsJNEW9HnqzDRH4iBlDcwl9yXUgC%2BpZ9klibRkSjpQ2Y8WF5eYVcpYYwYIh5kgvcvIV5%2F9xG8SvmbF0BuuVltNqKOs4XtSsFlhr2gkc%2BNPPz4JH1%2BU2mZjFMcyWpBA5%2FG9TxeXS1lodjaAZAie%2BmiXvTzK0atx1rNwORdbLq9pOCiJ%2BoJlz%2BIHXPPnNez3e4edBiKVtJtwy%2FMWXSv4yTUwTlJyekFJFD%2F8sNaIVkXPIq8uEhMT6lsQEuRDBC8gZW7m5YZMLYmS3IoVuIQCVJTU%2FEXVOYzRBBr3SFTkQRyr8MKq%2FOLhYw6SDHA04YtPg%2BM864tWzsUVtqQRw4hLkkmfpgZ%2FWL3tuZZTLsCu81SGWQ8deEJbGLoC8ijPXv8oMQ8Sr%2BT5d8DCd5%2BTRBjqkATiLqznVab6ykeGEDG782OLFoRwMBQBN5LMOQkZNEShFadqh8Ta8%2FIMwi0q5SWNV%2BFxpMNpxdnqetYxnNdDy8YOVmjwguaBq4YwfxSaw%2BF0Zi1loOnNRamFopRLNmZnxyeRHF4PUugsdko1Z2Lwe7w1%2F910tYqkpWixAEIFNTP4IA0v%2BN1XHJ36aG%2FibNo6%2Buo%2B9wc5tMU2ClMdg%2B686aDp%2B9I1t&X-Amz-Signature=12fe99dff395ddafc063d7e142b859bf07372158870af9b96b1e85dcf35bf76c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YD34J3WB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJIMEYCIQClxQwjHk7fXXFbwgP5TYA8%2FoQDkN2bXEuGnk7rr9CqJQIhAIRb4gJJiTFHoQLuo9D2B%2F8fgk6UAGxV21rBfAksosUEKv8DCAYQABoMNjM3NDIzMTgzODA1IgypJfObqQwnB7Btugsq3APmg8nNnIVGEVDDW4UPtT2uicT0ABHWzfLhk%2FUqIHOS8Ad7gK6vMEw0rMw58R4Gfaw3yBbXEEJtJbFWa03F7FxmbEhZt6tqeZSF9D64LYBU%2BBgFSwWGq1VvgduqTy%2FDEAh44KF1FL%2BbqK6SPsnsEEDNHOuleSm0W8ZH0eCtHSOofvc7tlOAzeqAWP9R%2FZ2oI71%2FPAf9lxK%2FFxND4PYkC0cAGg5vzdTd5oKVKMPRJp8NBCTzNOoNwYsJNEW9HnqzDRH4iBlDcwl9yXUgC%2BpZ9klibRkSjpQ2Y8WF5eYVcpYYwYIh5kgvcvIV5%2F9xG8SvmbF0BuuVltNqKOs4XtSsFlhr2gkc%2BNPPz4JH1%2BU2mZjFMcyWpBA5%2FG9TxeXS1lodjaAZAie%2BmiXvTzK0atx1rNwORdbLq9pOCiJ%2BoJlz%2BIHXPPnNez3e4edBiKVtJtwy%2FMWXSv4yTUwTlJyekFJFD%2F8sNaIVkXPIq8uEhMT6lsQEuRDBC8gZW7m5YZMLYmS3IoVuIQCVJTU%2FEXVOYzRBBr3SFTkQRyr8MKq%2FOLhYw6SDHA04YtPg%2BM864tWzsUVtqQRw4hLkkmfpgZ%2FWL3tuZZTLsCu81SGWQ8deEJbGLoC8ijPXv8oMQ8Sr%2BT5d8DCd5%2BTRBjqkATiLqznVab6ykeGEDG782OLFoRwMBQBN5LMOQkZNEShFadqh8Ta8%2FIMwi0q5SWNV%2BFxpMNpxdnqetYxnNdDy8YOVmjwguaBq4YwfxSaw%2BF0Zi1loOnNRamFopRLNmZnxyeRHF4PUugsdko1Z2Lwe7w1%2F910tYqkpWixAEIFNTP4IA0v%2BN1XHJ36aG%2FibNo6%2Buo%2B9wc5tMU2ClMdg%2B686aDp%2B9I1t&X-Amz-Signature=9e511342b92fde25a265e6b055860ad2fbcaa650495b0abe32c73a9e51281b75&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YD34J3WB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJIMEYCIQClxQwjHk7fXXFbwgP5TYA8%2FoQDkN2bXEuGnk7rr9CqJQIhAIRb4gJJiTFHoQLuo9D2B%2F8fgk6UAGxV21rBfAksosUEKv8DCAYQABoMNjM3NDIzMTgzODA1IgypJfObqQwnB7Btugsq3APmg8nNnIVGEVDDW4UPtT2uicT0ABHWzfLhk%2FUqIHOS8Ad7gK6vMEw0rMw58R4Gfaw3yBbXEEJtJbFWa03F7FxmbEhZt6tqeZSF9D64LYBU%2BBgFSwWGq1VvgduqTy%2FDEAh44KF1FL%2BbqK6SPsnsEEDNHOuleSm0W8ZH0eCtHSOofvc7tlOAzeqAWP9R%2FZ2oI71%2FPAf9lxK%2FFxND4PYkC0cAGg5vzdTd5oKVKMPRJp8NBCTzNOoNwYsJNEW9HnqzDRH4iBlDcwl9yXUgC%2BpZ9klibRkSjpQ2Y8WF5eYVcpYYwYIh5kgvcvIV5%2F9xG8SvmbF0BuuVltNqKOs4XtSsFlhr2gkc%2BNPPz4JH1%2BU2mZjFMcyWpBA5%2FG9TxeXS1lodjaAZAie%2BmiXvTzK0atx1rNwORdbLq9pOCiJ%2BoJlz%2BIHXPPnNez3e4edBiKVtJtwy%2FMWXSv4yTUwTlJyekFJFD%2F8sNaIVkXPIq8uEhMT6lsQEuRDBC8gZW7m5YZMLYmS3IoVuIQCVJTU%2FEXVOYzRBBr3SFTkQRyr8MKq%2FOLhYw6SDHA04YtPg%2BM864tWzsUVtqQRw4hLkkmfpgZ%2FWL3tuZZTLsCu81SGWQ8deEJbGLoC8ijPXv8oMQ8Sr%2BT5d8DCd5%2BTRBjqkATiLqznVab6ykeGEDG782OLFoRwMBQBN5LMOQkZNEShFadqh8Ta8%2FIMwi0q5SWNV%2BFxpMNpxdnqetYxnNdDy8YOVmjwguaBq4YwfxSaw%2BF0Zi1loOnNRamFopRLNmZnxyeRHF4PUugsdko1Z2Lwe7w1%2F910tYqkpWixAEIFNTP4IA0v%2BN1XHJ36aG%2FibNo6%2Buo%2B9wc5tMU2ClMdg%2B686aDp%2B9I1t&X-Amz-Signature=99a1db3794bb0a1f3e235fc6b34301cc1f4f56890f1d7d4a84cd4ce6587f55e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YD34J3WB%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133350Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJIMEYCIQClxQwjHk7fXXFbwgP5TYA8%2FoQDkN2bXEuGnk7rr9CqJQIhAIRb4gJJiTFHoQLuo9D2B%2F8fgk6UAGxV21rBfAksosUEKv8DCAYQABoMNjM3NDIzMTgzODA1IgypJfObqQwnB7Btugsq3APmg8nNnIVGEVDDW4UPtT2uicT0ABHWzfLhk%2FUqIHOS8Ad7gK6vMEw0rMw58R4Gfaw3yBbXEEJtJbFWa03F7FxmbEhZt6tqeZSF9D64LYBU%2BBgFSwWGq1VvgduqTy%2FDEAh44KF1FL%2BbqK6SPsnsEEDNHOuleSm0W8ZH0eCtHSOofvc7tlOAzeqAWP9R%2FZ2oI71%2FPAf9lxK%2FFxND4PYkC0cAGg5vzdTd5oKVKMPRJp8NBCTzNOoNwYsJNEW9HnqzDRH4iBlDcwl9yXUgC%2BpZ9klibRkSjpQ2Y8WF5eYVcpYYwYIh5kgvcvIV5%2F9xG8SvmbF0BuuVltNqKOs4XtSsFlhr2gkc%2BNPPz4JH1%2BU2mZjFMcyWpBA5%2FG9TxeXS1lodjaAZAie%2BmiXvTzK0atx1rNwORdbLq9pOCiJ%2BoJlz%2BIHXPPnNez3e4edBiKVtJtwy%2FMWXSv4yTUwTlJyekFJFD%2F8sNaIVkXPIq8uEhMT6lsQEuRDBC8gZW7m5YZMLYmS3IoVuIQCVJTU%2FEXVOYzRBBr3SFTkQRyr8MKq%2FOLhYw6SDHA04YtPg%2BM864tWzsUVtqQRw4hLkkmfpgZ%2FWL3tuZZTLsCu81SGWQ8deEJbGLoC8ijPXv8oMQ8Sr%2BT5d8DCd5%2BTRBjqkATiLqznVab6ykeGEDG782OLFoRwMBQBN5LMOQkZNEShFadqh8Ta8%2FIMwi0q5SWNV%2BFxpMNpxdnqetYxnNdDy8YOVmjwguaBq4YwfxSaw%2BF0Zi1loOnNRamFopRLNmZnxyeRHF4PUugsdko1Z2Lwe7w1%2F910tYqkpWixAEIFNTP4IA0v%2BN1XHJ36aG%2FibNo6%2Buo%2B9wc5tMU2ClMdg%2B686aDp%2B9I1t&X-Amz-Signature=6c3971860fff1d1590a454eab3c043414ed8173ce4478cc2a3a7e7f0b3e568eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QBBUJS27%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJGMEQCIF2YDWz7w4c06jt2Z4hB7Gl3fDEshJoFFzAAUjQhFONEAiAl8I59jxMop2fMTA8VKtUYUsHwh6IVIUjY26DrRUMcrSr%2FAwgGEAAaDDYzNzQyMzE4MzgwNSIMjWxpxuT73aDPsv9HKtwDED2DCM5FKZYbx0TIshNc7sVJJr5FUwLocdiRODHaN4hMDxAXbp71VsATHQd5Bvx%2FvhmR2vjnEcVobfYEYzKyc%2Fr67jfTHVY9QXi1xuexmROTDkDUcBxrdM5VMU3oUba7Z%2F2IotqnhqFVEB2nrDZh8a0GNbalg7LdGxMhUKHXbOYtb4AdC66NDwojKiPdTGXNGS6TmIbKlPN5YRz2Bi9WoGSY2hnMxoCh0HBiY1KOHlJaFTUIQMLnve%2B8gvBHAVaBCRaYE8pcyo92KIuJkeS5W4qpeGZ9%2F3rloh4enmFiyhGUH3eVqXSk1l4KClxJOGIxWWoBcZWl4IQib%2FS6s2ryP27LWD4bcB0eu%2B8KeWcxGO0CbLa3mLFNOW6ttPSzqrOutgiV5nWWFpYIcBcRlc%2BTO9OXS%2Bm13QxJfXGnlXV75PhIVZyj%2BICX2d0FtIcO8rpCD%2BgKav3BodXt6pG0izDMV0JcmBLEXo2ZmHJYuZXPOakz7fv0segEy8ygEYVma8k5GCBC%2FaR%2BC2TklUuszjmjuYUzvqp%2BGWEeZSd6gHrlk71DpYa6XT4pU%2FhQZOwtxRKOHA1JKu0UP%2BTUF6xDHCxzAsic2aSb6VSj9zONaRo2OnIrZ0nzOLDJ0NXbhbQwvefk0QY6pgHyBicvOq9K0kWJOg%2FITYLUaI16o8efiLbZa8%2FOwxmrUEXMi1I4pYDIXguQkp3uQFEjD247Rv9vJUG7WeayVvYkGJUVEplAvr9iweNrKxlwf9ojidJA5M4c%2FhTZLmH8lEv%2BU%2Bz%2BN3%2B%2FHawINwVpbziYMo6%2Fhp00HLrFE0ATQ4GklEmKBGCCFJyoyrpRP8kB9SySZD8yEgbgS2pqzw32m%2B1BfR8nBVqe&X-Amz-Signature=be39f403ff1752872625dc5d2d51a97e7449524f12889ec0ee5e1f655d333ee6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YAPJHCP6%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIDIpWHHoTS%2B5r3fxgGystFozE%2BeSsgMx2OT8OSu4DKH0AiEA4aYvVTZ0zZpSKzBbiBQwZNN6RMWUe2ZXQgd8Xfq2bs4q%2FwMIBhAAGgw2Mzc0MjMxODM4MDUiDGGetb0fN%2FA396EnoyrcA%2FCMPAiLvPlyMuxrTiVMfnUM6jHrRL4xMP5SY%2Bc5nss4jhkab8hx%2B7gvH5HgtLhPG7sXyidieLMomIsYVCGmkNYPi5wXN%2F2VOws1YF%2BywlOgUkph4RUyApdvDLrf2LcG9lS8TG4fKxx7u4WIM7ybIGgn6VzMexNL5aOcM2HkSR15rI%2FSsc1ajd4j7C%2FhmftRgPZiJqip1l1m5AWpLsjpdPhOSikOtVU2yvTifBFB1AByJoJW37NhmOiOFdLE9TBfq7AHhR9PSDYo7OVGdpcFhGH66vzLlNRjNohjNCk7DieFDY6oJ%2Fj1Wdjh0j%2Bmg5goRR2sPLqcWIteNE0urdRs8MmJo9VBrRtnURnO3goKTykEL2SifCZ%2B4QeUCabBBT0DfibOezOM4aiWyXvT6xlMmImWjdxatOvJDnWwtVcdykXIDBO59bn%2FtIubxbXtAH2gGlz%2Fez%2B8m4XQQtnBwKOe4OLldvA450kdVefpHfEHMFVP5TygFu4MGXCqqGC%2FIT%2BaT%2FXOcE%2FFdHeSStNhCk%2Fo1M0NWzhs5pruWIbUPJxNe9h%2BbeLruaHGcz2LXjR1mRNmntwQt3yXaPnDvyZnjuM85tl7o5igHyUyxGUvS1UFqmQC7G%2FiqC2Glm%2FItqmOMLzp5NEGOqUBy1rpryTS9m2DYcn5q%2BLlAwBh%2FE7dM%2Beb3Q4uZcH%2F1ieYq3geAnqABV2X4dvJhJ%2BPcNO06aNCMc8SlCIEQGWHN0heuUirsgh2TNM7yGQQ7HiRVZ2v%2FRJN0c2DaSaKUVSl4gUrAb3iCZyO6LzRG%2FCO%2FBojTUxlUAZd%2FL46FibXUIUHZh7ElNb7EoZBh7Q%2F4QUiAG6Lnmd6cihKVUUnO8wfFVkS%2B63b&X-Amz-Signature=a21d91a29c878e43cd4be84c851eb1a0afbe3a7ef7da720b9f3d9d7b24ff1409&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YAPJHCP6%2F20260622%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260622T133351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIDIpWHHoTS%2B5r3fxgGystFozE%2BeSsgMx2OT8OSu4DKH0AiEA4aYvVTZ0zZpSKzBbiBQwZNN6RMWUe2ZXQgd8Xfq2bs4q%2FwMIBhAAGgw2Mzc0MjMxODM4MDUiDGGetb0fN%2FA396EnoyrcA%2FCMPAiLvPlyMuxrTiVMfnUM6jHrRL4xMP5SY%2Bc5nss4jhkab8hx%2B7gvH5HgtLhPG7sXyidieLMomIsYVCGmkNYPi5wXN%2F2VOws1YF%2BywlOgUkph4RUyApdvDLrf2LcG9lS8TG4fKxx7u4WIM7ybIGgn6VzMexNL5aOcM2HkSR15rI%2FSsc1ajd4j7C%2FhmftRgPZiJqip1l1m5AWpLsjpdPhOSikOtVU2yvTifBFB1AByJoJW37NhmOiOFdLE9TBfq7AHhR9PSDYo7OVGdpcFhGH66vzLlNRjNohjNCk7DieFDY6oJ%2Fj1Wdjh0j%2Bmg5goRR2sPLqcWIteNE0urdRs8MmJo9VBrRtnURnO3goKTykEL2SifCZ%2B4QeUCabBBT0DfibOezOM4aiWyXvT6xlMmImWjdxatOvJDnWwtVcdykXIDBO59bn%2FtIubxbXtAH2gGlz%2Fez%2B8m4XQQtnBwKOe4OLldvA450kdVefpHfEHMFVP5TygFu4MGXCqqGC%2FIT%2BaT%2FXOcE%2FFdHeSStNhCk%2Fo1M0NWzhs5pruWIbUPJxNe9h%2BbeLruaHGcz2LXjR1mRNmntwQt3yXaPnDvyZnjuM85tl7o5igHyUyxGUvS1UFqmQC7G%2FiqC2Glm%2FItqmOMLzp5NEGOqUBy1rpryTS9m2DYcn5q%2BLlAwBh%2FE7dM%2Beb3Q4uZcH%2F1ieYq3geAnqABV2X4dvJhJ%2BPcNO06aNCMc8SlCIEQGWHN0heuUirsgh2TNM7yGQQ7HiRVZ2v%2FRJN0c2DaSaKUVSl4gUrAb3iCZyO6LzRG%2FCO%2FBojTUxlUAZd%2FL46FibXUIUHZh7ElNb7EoZBh7Q%2F4QUiAG6Lnmd6cihKVUUnO8wfFVkS%2B63b&X-Amz-Signature=df9e3494216e93986ee0a7557c9dbc530cdf613652e33fcf3a6349d0f84bf8d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
