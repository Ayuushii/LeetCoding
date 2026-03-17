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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VOEJHV6M%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCID9Bw2Uua%2B230L6%2Fn5Gk25f6y7VLp1t49LFHZua8CWMVAiAGj1THjBXUynI0ASVXv9ywBS4SwThrns%2FvF5g85X7rLyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVR7v%2BvjRiA87BFfxKtwDVIRXqogSYjp2TT53fEHeJMN4JKpL7Ft22v70LZH7p9QXxhx%2B%2Bmcns2g5vxjojyTBVEutszTD6vZfxbPgIhC4%2FiW95XWhPQIUp5ci4ZsVkzszeU8Vf68%2B43qeZOq%2Fq8WSUCGvaDT9R%2BlgF3ulPCnxQYGHGNb7YZTkGDukCxmgn5ZbFy1oEmkYtVrpNXSx3biGlxJCMWjZusV3q39TK9jxWUumHbxbaYSiBFZ52rgnBbQfmQnVe6GwT3bknd0SyyQojmnOo9aXVqnZyhGtlFQwztYABCY1zgK32chjtnxwJ8E8agtzap8uottbBA6xt4Lhgtdt9OB7HCywWf0jg4o%2BuJ5o4zf%2BKLB4%2B8kE7gE8ouNh7IjXTzDvAymZLM00tlKCTISUTFPqa0vWSG4p6XE%2FC8XMEGHoQTITEVTuPVtaIZIHcI5%2BMMXFztmrBmtY7KEXd0hKoHgnClBWsZivZVkq8jEdv03Ax8SLAp91mCR5cYdynxTcGR1oRu7UHut4Yj2Rh06hbQh5MyJBYEzqyz4rYaD3Tr1H4DVGkjSONFCQf7ThpHoQVai%2BaI%2B7%2BFlV8zgPPl9zU85ZJnX%2BS%2F1Gvr5TWVQ2GWd059ylSZEBd09WcuMJg%2F4O50xvyuSK1nQw4pzkzQY6pgEXjtzOLUhgZgny2cXLCt8N1RNgZZm0nMBLMqG4YVMUxIAwrlCMWC0FibpR9xv9ZzYZeKWkqkr%2BN%2BYi8fNIdIZ%2Bg5osBwi4jP3wGMYjxUFQ61AAMB%2BpLy6HOdFw4XAQaiPu5gFuuBj32q62UoqNdpCD4mRvCZJPgRzvzWQEeDH16Yjo7LYeMByadr6WWH%2BfwLrtj95FLII7JM8WyCGvQzVKQi%2F6Wfpz&X-Amz-Signature=b733b2d006f19910579b45cf35a09e544760c21584397943bccf7c345ce1ea37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VOEJHV6M%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCID9Bw2Uua%2B230L6%2Fn5Gk25f6y7VLp1t49LFHZua8CWMVAiAGj1THjBXUynI0ASVXv9ywBS4SwThrns%2FvF5g85X7rLyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVR7v%2BvjRiA87BFfxKtwDVIRXqogSYjp2TT53fEHeJMN4JKpL7Ft22v70LZH7p9QXxhx%2B%2Bmcns2g5vxjojyTBVEutszTD6vZfxbPgIhC4%2FiW95XWhPQIUp5ci4ZsVkzszeU8Vf68%2B43qeZOq%2Fq8WSUCGvaDT9R%2BlgF3ulPCnxQYGHGNb7YZTkGDukCxmgn5ZbFy1oEmkYtVrpNXSx3biGlxJCMWjZusV3q39TK9jxWUumHbxbaYSiBFZ52rgnBbQfmQnVe6GwT3bknd0SyyQojmnOo9aXVqnZyhGtlFQwztYABCY1zgK32chjtnxwJ8E8agtzap8uottbBA6xt4Lhgtdt9OB7HCywWf0jg4o%2BuJ5o4zf%2BKLB4%2B8kE7gE8ouNh7IjXTzDvAymZLM00tlKCTISUTFPqa0vWSG4p6XE%2FC8XMEGHoQTITEVTuPVtaIZIHcI5%2BMMXFztmrBmtY7KEXd0hKoHgnClBWsZivZVkq8jEdv03Ax8SLAp91mCR5cYdynxTcGR1oRu7UHut4Yj2Rh06hbQh5MyJBYEzqyz4rYaD3Tr1H4DVGkjSONFCQf7ThpHoQVai%2BaI%2B7%2BFlV8zgPPl9zU85ZJnX%2BS%2F1Gvr5TWVQ2GWd059ylSZEBd09WcuMJg%2F4O50xvyuSK1nQw4pzkzQY6pgEXjtzOLUhgZgny2cXLCt8N1RNgZZm0nMBLMqG4YVMUxIAwrlCMWC0FibpR9xv9ZzYZeKWkqkr%2BN%2BYi8fNIdIZ%2Bg5osBwi4jP3wGMYjxUFQ61AAMB%2BpLy6HOdFw4XAQaiPu5gFuuBj32q62UoqNdpCD4mRvCZJPgRzvzWQEeDH16Yjo7LYeMByadr6WWH%2BfwLrtj95FLII7JM8WyCGvQzVKQi%2F6Wfpz&X-Amz-Signature=e3204c2244e36804a97c8215064141eff8ea69c3ebfd49f09e6ef1b89cf13bcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VOEJHV6M%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCID9Bw2Uua%2B230L6%2Fn5Gk25f6y7VLp1t49LFHZua8CWMVAiAGj1THjBXUynI0ASVXv9ywBS4SwThrns%2FvF5g85X7rLyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMVR7v%2BvjRiA87BFfxKtwDVIRXqogSYjp2TT53fEHeJMN4JKpL7Ft22v70LZH7p9QXxhx%2B%2Bmcns2g5vxjojyTBVEutszTD6vZfxbPgIhC4%2FiW95XWhPQIUp5ci4ZsVkzszeU8Vf68%2B43qeZOq%2Fq8WSUCGvaDT9R%2BlgF3ulPCnxQYGHGNb7YZTkGDukCxmgn5ZbFy1oEmkYtVrpNXSx3biGlxJCMWjZusV3q39TK9jxWUumHbxbaYSiBFZ52rgnBbQfmQnVe6GwT3bknd0SyyQojmnOo9aXVqnZyhGtlFQwztYABCY1zgK32chjtnxwJ8E8agtzap8uottbBA6xt4Lhgtdt9OB7HCywWf0jg4o%2BuJ5o4zf%2BKLB4%2B8kE7gE8ouNh7IjXTzDvAymZLM00tlKCTISUTFPqa0vWSG4p6XE%2FC8XMEGHoQTITEVTuPVtaIZIHcI5%2BMMXFztmrBmtY7KEXd0hKoHgnClBWsZivZVkq8jEdv03Ax8SLAp91mCR5cYdynxTcGR1oRu7UHut4Yj2Rh06hbQh5MyJBYEzqyz4rYaD3Tr1H4DVGkjSONFCQf7ThpHoQVai%2BaI%2B7%2BFlV8zgPPl9zU85ZJnX%2BS%2F1Gvr5TWVQ2GWd059ylSZEBd09WcuMJg%2F4O50xvyuSK1nQw4pzkzQY6pgEXjtzOLUhgZgny2cXLCt8N1RNgZZm0nMBLMqG4YVMUxIAwrlCMWC0FibpR9xv9ZzYZeKWkqkr%2BN%2BYi8fNIdIZ%2Bg5osBwi4jP3wGMYjxUFQ61AAMB%2BpLy6HOdFw4XAQaiPu5gFuuBj32q62UoqNdpCD4mRvCZJPgRzvzWQEeDH16Yjo7LYeMByadr6WWH%2BfwLrtj95FLII7JM8WyCGvQzVKQi%2F6Wfpz&X-Amz-Signature=0cdaa5629a9cf2345472e9e2175276bb098b2f2923387c2326d30249a143d701&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WDVVJXMR%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQD6ldWl3nZYbrmwRMB39tM8KcJeh7gg67ywWHRKZbU1KwIgc4aIAYi%2BQ8MTGy2XjsvbKc0g1WRhD42PdiEsZaTiCLgqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFNw0Nk8b8Ja7DSoYyrcA1MYKfE5UhaaEiegwklMkYwib3gyUdGZxmXK9JnBO%2FkyrmkQDZpLtUTKJouEb%2BQA%2Bku8A3blPnflKmHqXEMURI9AvgrGs9e4tFI5RAk8VYULtlTvUM10uS2OZQogDEghUFXMMR9X9KbV139ssMfAJbNTlwWqPqjKaDqrUytzYIVOsanqno1iM9whjbZKR5uh4CCc679rMP424nSd9KjKNqGwI4A4nMONjP9n8skwarr3t2dPjb3t0nXIJC8Qp3zOZEXXbz%2FedDHOL9Vzs6h%2BYmLXu5RS3kWqKr1ShA84hvClhdiPAgT5PGzv6NUHX6QohhiaYUUF%2F0Q%2BOerHQVhBF7hQpaCo4dy3Ir%2BVz9Rs4SSprCATFQ%2BualDVtyQUtWJYK%2FuWjk0bpPgLq26NigTPuXYWTT9EWwizsptCuwh10NFlL5x7b8oXje4jo57HrtUt%2B%2Fj3SNVY13CR89BhzM2ujm%2B3%2FXCa8UdV%2Bkxt199eEcmvwyvWGFA2rc1VYyL6X5sEHWeRZsItyxopIM3V%2BQguLTZUbRMz1Qleo20hmzz2JjskrbFC%2F%2FsAm4D%2FZufaK6nRVMzOda3W6oGUbAEDQfcVxgLzUvMhV2lzPAuismUPr4lUWyfV6TUWMLI%2B6Fl5MNed5M0GOqUBeXW7p6WFPH6Ns7wagk457PUTv3sbx9NjtIvNx%2BAnp%2Bcnv9Tr%2F1h5N1Pcq6Ho%2BjgcytI5ma6xJWoqru6R5C8q9%2BQIdujeHRALgRJtU5i4ONsqEdPwgAI7M4MrOKnKG6F9LP4MVnuD%2BzUUW4DBYOAeoMwqt24LDYh0YPYh3aUURQ6DV58QWZu%2B9VBRMHW5F7zcvMHjbf1l4xussclFIggbU5YuGrut&X-Amz-Signature=c51f3a582b4a3195b5a0e254123d493a549e5d8da5768ba9aecfe292712cca38&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WDVVJXMR%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQD6ldWl3nZYbrmwRMB39tM8KcJeh7gg67ywWHRKZbU1KwIgc4aIAYi%2BQ8MTGy2XjsvbKc0g1WRhD42PdiEsZaTiCLgqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFNw0Nk8b8Ja7DSoYyrcA1MYKfE5UhaaEiegwklMkYwib3gyUdGZxmXK9JnBO%2FkyrmkQDZpLtUTKJouEb%2BQA%2Bku8A3blPnflKmHqXEMURI9AvgrGs9e4tFI5RAk8VYULtlTvUM10uS2OZQogDEghUFXMMR9X9KbV139ssMfAJbNTlwWqPqjKaDqrUytzYIVOsanqno1iM9whjbZKR5uh4CCc679rMP424nSd9KjKNqGwI4A4nMONjP9n8skwarr3t2dPjb3t0nXIJC8Qp3zOZEXXbz%2FedDHOL9Vzs6h%2BYmLXu5RS3kWqKr1ShA84hvClhdiPAgT5PGzv6NUHX6QohhiaYUUF%2F0Q%2BOerHQVhBF7hQpaCo4dy3Ir%2BVz9Rs4SSprCATFQ%2BualDVtyQUtWJYK%2FuWjk0bpPgLq26NigTPuXYWTT9EWwizsptCuwh10NFlL5x7b8oXje4jo57HrtUt%2B%2Fj3SNVY13CR89BhzM2ujm%2B3%2FXCa8UdV%2Bkxt199eEcmvwyvWGFA2rc1VYyL6X5sEHWeRZsItyxopIM3V%2BQguLTZUbRMz1Qleo20hmzz2JjskrbFC%2F%2FsAm4D%2FZufaK6nRVMzOda3W6oGUbAEDQfcVxgLzUvMhV2lzPAuismUPr4lUWyfV6TUWMLI%2B6Fl5MNed5M0GOqUBeXW7p6WFPH6Ns7wagk457PUTv3sbx9NjtIvNx%2BAnp%2Bcnv9Tr%2F1h5N1Pcq6Ho%2BjgcytI5ma6xJWoqru6R5C8q9%2BQIdujeHRALgRJtU5i4ONsqEdPwgAI7M4MrOKnKG6F9LP4MVnuD%2BzUUW4DBYOAeoMwqt24LDYh0YPYh3aUURQ6DV58QWZu%2B9VBRMHW5F7zcvMHjbf1l4xussclFIggbU5YuGrut&X-Amz-Signature=8594d499b1e4891b69611e6b407dbc6708874d2bf292fa3e28fe193c19dd5a69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WDVVJXMR%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQD6ldWl3nZYbrmwRMB39tM8KcJeh7gg67ywWHRKZbU1KwIgc4aIAYi%2BQ8MTGy2XjsvbKc0g1WRhD42PdiEsZaTiCLgqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFNw0Nk8b8Ja7DSoYyrcA1MYKfE5UhaaEiegwklMkYwib3gyUdGZxmXK9JnBO%2FkyrmkQDZpLtUTKJouEb%2BQA%2Bku8A3blPnflKmHqXEMURI9AvgrGs9e4tFI5RAk8VYULtlTvUM10uS2OZQogDEghUFXMMR9X9KbV139ssMfAJbNTlwWqPqjKaDqrUytzYIVOsanqno1iM9whjbZKR5uh4CCc679rMP424nSd9KjKNqGwI4A4nMONjP9n8skwarr3t2dPjb3t0nXIJC8Qp3zOZEXXbz%2FedDHOL9Vzs6h%2BYmLXu5RS3kWqKr1ShA84hvClhdiPAgT5PGzv6NUHX6QohhiaYUUF%2F0Q%2BOerHQVhBF7hQpaCo4dy3Ir%2BVz9Rs4SSprCATFQ%2BualDVtyQUtWJYK%2FuWjk0bpPgLq26NigTPuXYWTT9EWwizsptCuwh10NFlL5x7b8oXje4jo57HrtUt%2B%2Fj3SNVY13CR89BhzM2ujm%2B3%2FXCa8UdV%2Bkxt199eEcmvwyvWGFA2rc1VYyL6X5sEHWeRZsItyxopIM3V%2BQguLTZUbRMz1Qleo20hmzz2JjskrbFC%2F%2FsAm4D%2FZufaK6nRVMzOda3W6oGUbAEDQfcVxgLzUvMhV2lzPAuismUPr4lUWyfV6TUWMLI%2B6Fl5MNed5M0GOqUBeXW7p6WFPH6Ns7wagk457PUTv3sbx9NjtIvNx%2BAnp%2Bcnv9Tr%2F1h5N1Pcq6Ho%2BjgcytI5ma6xJWoqru6R5C8q9%2BQIdujeHRALgRJtU5i4ONsqEdPwgAI7M4MrOKnKG6F9LP4MVnuD%2BzUUW4DBYOAeoMwqt24LDYh0YPYh3aUURQ6DV58QWZu%2B9VBRMHW5F7zcvMHjbf1l4xussclFIggbU5YuGrut&X-Amz-Signature=324ea107d2204d4b41e3305d0fc89a5efc52fa082359559d678cba3ff5ad7672&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WDVVJXMR%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQD6ldWl3nZYbrmwRMB39tM8KcJeh7gg67ywWHRKZbU1KwIgc4aIAYi%2BQ8MTGy2XjsvbKc0g1WRhD42PdiEsZaTiCLgqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFNw0Nk8b8Ja7DSoYyrcA1MYKfE5UhaaEiegwklMkYwib3gyUdGZxmXK9JnBO%2FkyrmkQDZpLtUTKJouEb%2BQA%2Bku8A3blPnflKmHqXEMURI9AvgrGs9e4tFI5RAk8VYULtlTvUM10uS2OZQogDEghUFXMMR9X9KbV139ssMfAJbNTlwWqPqjKaDqrUytzYIVOsanqno1iM9whjbZKR5uh4CCc679rMP424nSd9KjKNqGwI4A4nMONjP9n8skwarr3t2dPjb3t0nXIJC8Qp3zOZEXXbz%2FedDHOL9Vzs6h%2BYmLXu5RS3kWqKr1ShA84hvClhdiPAgT5PGzv6NUHX6QohhiaYUUF%2F0Q%2BOerHQVhBF7hQpaCo4dy3Ir%2BVz9Rs4SSprCATFQ%2BualDVtyQUtWJYK%2FuWjk0bpPgLq26NigTPuXYWTT9EWwizsptCuwh10NFlL5x7b8oXje4jo57HrtUt%2B%2Fj3SNVY13CR89BhzM2ujm%2B3%2FXCa8UdV%2Bkxt199eEcmvwyvWGFA2rc1VYyL6X5sEHWeRZsItyxopIM3V%2BQguLTZUbRMz1Qleo20hmzz2JjskrbFC%2F%2FsAm4D%2FZufaK6nRVMzOda3W6oGUbAEDQfcVxgLzUvMhV2lzPAuismUPr4lUWyfV6TUWMLI%2B6Fl5MNed5M0GOqUBeXW7p6WFPH6Ns7wagk457PUTv3sbx9NjtIvNx%2BAnp%2Bcnv9Tr%2F1h5N1Pcq6Ho%2BjgcytI5ma6xJWoqru6R5C8q9%2BQIdujeHRALgRJtU5i4ONsqEdPwgAI7M4MrOKnKG6F9LP4MVnuD%2BzUUW4DBYOAeoMwqt24LDYh0YPYh3aUURQ6DV58QWZu%2B9VBRMHW5F7zcvMHjbf1l4xussclFIggbU5YuGrut&X-Amz-Signature=84c66d9730ae9e50f8eb6abbf5797139b253015e8aaf8fb9bb3d3afcec372a55&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TSAEHL4C%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085335Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCIA7GPqAdvE4IaxOnU47YfyD3XGPCzZVSxu5dlFvh%2Fad7AiBA9Cp%2FjVzkH%2FgeZ4A1qv5uPGPF7vLejOXIGex2L5fl8SqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMF7ivvVRqAxrYcgHDKtwDr%2FGklLUGfulCuW83jsmg4ne38bb%2FAtgBqnYxqF6VTLtxMTaHn8hydCzioJ82yUfxT9F5qmJPmqrdEYD0M8UtkoNCjBGsmMXU5UVILyOk6%2BCOrxbaYKr%2BQG1Ki9SoPGWQcwvB1uPVppCXTaTpW%2BB2ZmTIxYp8Mi5y7kkfCblsgi%2BPh%2FFQHSOXAdY6QG7qOgUjCW8bloWOyn6l0VfgbJkS9Yzj0HJZmZ73DOD%2B45sxjP48C18nPFnwEbvvA6WNOCkC2bFStCutkVDJ3PF%2Fx%2BG1xyUIx8ZoEa7QqNDuMNWQhqpvHFtGkyPy%2BSw%2Buo7G%2FwdOvUuvK%2FLhAra4t%2BdFmC14Iy71rZTt5fTJn7SgT6oKqerempkJESSPD%2Fe0vIuHuvuaMRI2kih5LwU38NOJHU4ByA1U6hP9ut0KcO7da9vdEezRAotVkSKYB85dzi9Ditqp69rjNmvqHK2xoUP9kizHljhYkJasNbfwnKMrpoCI4hH3l1PLgHNf3dOyN3iZwgLn5kbSg8vVL%2BqP6m3Gw1DNf%2BBol20Yv79y3GV9LTQCXS6EMbqyCZKsLA326jh9kPi1eSKU7u360zOZ%2BPmb3yuUlALoX1i6eotQeXJY7B1JopQjhWYaGRywzEsVSgkw2p3kzQY6pgEEq0QRlBF29sDdAri5%2BcVcBn6eo6qeCb90sPXBCN3%2FMKPdkDNd0XLSi5a8%2B2vQSG2VSDVh6EEgSruZGFG4rV%2FDO4Poids0ll0Xi4BHqLzw6Hu%2BjwzP44W%2BANS6Z3yhy1y2lm5%2FwwyehKbSYE3IZQvJB1N1clQkOLlo77UV6LKS6eER0n8c7ScFT%2FWKy7J58KIKLjUppwDN2xrR1%2Fhiczs3s%2F7N6Kbg&X-Amz-Signature=7a25ddca6f226ec8164becf424ffc82fa34b8d3c0b8b3a1a2af62b629d59929b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XRRGWDT2%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085337Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCIF7eSgSk9uaTgAiFhoEc8tgQAGnVnhdHQEOf6hG7oZ%2FQAiAOswnaB7QReUr9K9hMDtG21TuiN2BcvZEZtHFiWLpN5yqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMSw0v6oJL4R43ULwqKtwDbjtKleqNIRTq%2F%2BZmwhyn%2BD1%2BCg3f%2F0irEF5V7Nzp2ZrdCu5ErnUBo8GeZ1wMBownpkIzVbYAJ9OEZsh7M7u%2BbISLLZ9KMkyayDJ3h1%2F5UH0l8qAdgvlLvu%2BzDLiO2aIRyzEbI4aEWUhIP0TtciTkNWnqvlkzBYzNz4UvOPVW%2Fitfv4VPqxIPVYUVW8HwRJ1XlYZP86macSjpmNhjmpw2UIctwtnWmUoYxlRB9TQJhXQK%2BfXCmJk543TsrpHNm1XA%2Bmr%2BDzQenhKvepOWhXKJCeKeotJFkhZBJ537fdVy5ombcDYw%2BWaX1I0vQwJr3nqwnSaoetZ47%2BF27UuDKFOtACxDIxrOmBllp9vZezyBxamLXQLx2tA92yAVGi1XG89krEmRDCZ%2BJ8WzHD%2B9rR2DUP3z13b%2FvbvvA%2B8x7iRpA5Yv1xaFHDGKMBQ4E8rIh0pc7goUwKP8sCFMCRb4P1QjYTOfNN%2B3Hpf0brcfy2lfzslBWiAXkRwMcV%2BIcEC2%2F0C9NNU8bxmhJFdt0iijq4yRGiOMilnzxfpcebADs7kMVYHFAXZDhXgtPIPM8QzQNKZ7dKG8lwZIf9vP4ice9Allip4ndOvA0Q5K9dEGFcjZXv81VZVXc2YWEmTyczEwo57kzQY6pgGDmp5RryBMgJ7kEhwfq6XzK96NZ21bfGbimDszE764qDd80mknWGJ4b5OQkfH7tAkuvw6LDEN%2FxpsA72MGgaInOxYr8tb8G0DxqeAiYqevhaWeCny9Em2H8Cwbijw1IaWe1wRXt8oknEH8E2qPo2PrKKXjwdKhzUPKzO6nrbTX2d8x0F4wYTq5ppGxbT48ErxPRUO%2BmBYM8raRtyxUrb0wCJSAP1%2FU&X-Amz-Signature=9273b8a88680eae255ef7c43bbe58fab8cd7111990bef340e03f8388c0ffeaeb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XRRGWDT2%2F20260317%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260317T085337Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJGMEQCIF7eSgSk9uaTgAiFhoEc8tgQAGnVnhdHQEOf6hG7oZ%2FQAiAOswnaB7QReUr9K9hMDtG21TuiN2BcvZEZtHFiWLpN5yqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMSw0v6oJL4R43ULwqKtwDbjtKleqNIRTq%2F%2BZmwhyn%2BD1%2BCg3f%2F0irEF5V7Nzp2ZrdCu5ErnUBo8GeZ1wMBownpkIzVbYAJ9OEZsh7M7u%2BbISLLZ9KMkyayDJ3h1%2F5UH0l8qAdgvlLvu%2BzDLiO2aIRyzEbI4aEWUhIP0TtciTkNWnqvlkzBYzNz4UvOPVW%2Fitfv4VPqxIPVYUVW8HwRJ1XlYZP86macSjpmNhjmpw2UIctwtnWmUoYxlRB9TQJhXQK%2BfXCmJk543TsrpHNm1XA%2Bmr%2BDzQenhKvepOWhXKJCeKeotJFkhZBJ537fdVy5ombcDYw%2BWaX1I0vQwJr3nqwnSaoetZ47%2BF27UuDKFOtACxDIxrOmBllp9vZezyBxamLXQLx2tA92yAVGi1XG89krEmRDCZ%2BJ8WzHD%2B9rR2DUP3z13b%2FvbvvA%2B8x7iRpA5Yv1xaFHDGKMBQ4E8rIh0pc7goUwKP8sCFMCRb4P1QjYTOfNN%2B3Hpf0brcfy2lfzslBWiAXkRwMcV%2BIcEC2%2F0C9NNU8bxmhJFdt0iijq4yRGiOMilnzxfpcebADs7kMVYHFAXZDhXgtPIPM8QzQNKZ7dKG8lwZIf9vP4ice9Allip4ndOvA0Q5K9dEGFcjZXv81VZVXc2YWEmTyczEwo57kzQY6pgGDmp5RryBMgJ7kEhwfq6XzK96NZ21bfGbimDszE764qDd80mknWGJ4b5OQkfH7tAkuvw6LDEN%2FxpsA72MGgaInOxYr8tb8G0DxqeAiYqevhaWeCny9Em2H8Cwbijw1IaWe1wRXt8oknEH8E2qPo2PrKKXjwdKhzUPKzO6nrbTX2d8x0F4wYTq5ppGxbT48ErxPRUO%2BmBYM8raRtyxUrb0wCJSAP1%2FU&X-Amz-Signature=3c02587f037c5f6bfb9cdb6124275c1fdef26ecdb3a1b660b3ea6b7b2bb6e8bc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
