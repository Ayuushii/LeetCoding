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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5OCEONX%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAANI9PqRmqCXGIcVGaxqgpGcQTJL%2BFC%2Fr3hUugHLcogIhAKSbx7S0Q%2B%2B%2FjIflrHXq19vZ6uxKXkna1vAOZXr0xv68KogECJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxfzV1X%2F%2BTDcvQRlwEq3AMCKJtHBrPCwIjRKJizV0knRomeTWVkWWe1gtRnIJbKs0qELwq0W9Mdnw7ArXCoFDF4DHSChO%2BjKCswgioxVFOzZg%2Fl4ibHiI%2FTPSUeQTtopVMTIRSJ81%2BdzzMqEMxdB0ugKyBce1TGhUlT1SJGu%2BRxZYKYzgrxylUlOypNl9%2FE81a5Mz9EeYOMzwkwqZ%2FRR7Vh%2FiORMrR9PELZwB2MoNpt0A%2F5QSzXVbAagnJTBZ4dbli0VNTnOv7oxnTq5wMLYwGw5hKnoSKsXZbsHGK9AWNA6P06ygIVcDgFrN9YeuTgjD3bwko8mM327wYkSzYrvstOTzbSGfy3o0Jabnf6WXcpCDfq33GA0shcGRQKTX2UyOfy4PiuOyhMb6MdulkD%2BDZvAcYcsoglsR2Je2u8eP4GMBt3i9nFMQM66015lh4vWXbP2c1tl9iBJSStnBMPMxGQCrFoWf4tQCBmLc1OqqKzh3MzTgb03DS0cp9u5%2FccD7cGrGpixAKnZpHaSKXQaiNbzOLRd7FRrpcYsuC695raoY8dadwih7q%2BHGMG4a2FKc%2Ff3o8gCD5vD9rd05Xd%2F02e6Cj8o9ueuCbGP4s6ggUImsC11JggC8%2FgtUYvln368d%2BOFdHbcKG1L4D9MjDvz73SBjqkAT%2B11cBKkrB8qJ6VLe9dSl%2FmTEF96jeUNOXvUUkYO20ZNZmX06jEgueBLofbHxnGDMCbRPxTLeu1HhcU0G4O%2F6g9aOgkELYw6tqNSR3t3hb%2Fz6ZII%2F2ZKi4u7FKyXhITb%2FIq8KSsMmMK8KNhVkIR1BAloRRGgL5HCi3oFh0QbmBi6eDXxD1rDOjKxCvIkEHN4BVduGSr2PkjFx2QOtfghj1S134r&X-Amz-Signature=b6a28ae11c2150779f913f3840fb3e6a8d7de8faa0f4e638841b5634ba6ad327&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5OCEONX%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAANI9PqRmqCXGIcVGaxqgpGcQTJL%2BFC%2Fr3hUugHLcogIhAKSbx7S0Q%2B%2B%2FjIflrHXq19vZ6uxKXkna1vAOZXr0xv68KogECJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxfzV1X%2F%2BTDcvQRlwEq3AMCKJtHBrPCwIjRKJizV0knRomeTWVkWWe1gtRnIJbKs0qELwq0W9Mdnw7ArXCoFDF4DHSChO%2BjKCswgioxVFOzZg%2Fl4ibHiI%2FTPSUeQTtopVMTIRSJ81%2BdzzMqEMxdB0ugKyBce1TGhUlT1SJGu%2BRxZYKYzgrxylUlOypNl9%2FE81a5Mz9EeYOMzwkwqZ%2FRR7Vh%2FiORMrR9PELZwB2MoNpt0A%2F5QSzXVbAagnJTBZ4dbli0VNTnOv7oxnTq5wMLYwGw5hKnoSKsXZbsHGK9AWNA6P06ygIVcDgFrN9YeuTgjD3bwko8mM327wYkSzYrvstOTzbSGfy3o0Jabnf6WXcpCDfq33GA0shcGRQKTX2UyOfy4PiuOyhMb6MdulkD%2BDZvAcYcsoglsR2Je2u8eP4GMBt3i9nFMQM66015lh4vWXbP2c1tl9iBJSStnBMPMxGQCrFoWf4tQCBmLc1OqqKzh3MzTgb03DS0cp9u5%2FccD7cGrGpixAKnZpHaSKXQaiNbzOLRd7FRrpcYsuC695raoY8dadwih7q%2BHGMG4a2FKc%2Ff3o8gCD5vD9rd05Xd%2F02e6Cj8o9ueuCbGP4s6ggUImsC11JggC8%2FgtUYvln368d%2BOFdHbcKG1L4D9MjDvz73SBjqkAT%2B11cBKkrB8qJ6VLe9dSl%2FmTEF96jeUNOXvUUkYO20ZNZmX06jEgueBLofbHxnGDMCbRPxTLeu1HhcU0G4O%2F6g9aOgkELYw6tqNSR3t3hb%2Fz6ZII%2F2ZKi4u7FKyXhITb%2FIq8KSsMmMK8KNhVkIR1BAloRRGgL5HCi3oFh0QbmBi6eDXxD1rDOjKxCvIkEHN4BVduGSr2PkjFx2QOtfghj1S134r&X-Amz-Signature=32807dfc92ca4ce110dca141c0d7c091eb774c2c991eb086566d79f2e549425f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5OCEONX%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAANI9PqRmqCXGIcVGaxqgpGcQTJL%2BFC%2Fr3hUugHLcogIhAKSbx7S0Q%2B%2B%2FjIflrHXq19vZ6uxKXkna1vAOZXr0xv68KogECJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxfzV1X%2F%2BTDcvQRlwEq3AMCKJtHBrPCwIjRKJizV0knRomeTWVkWWe1gtRnIJbKs0qELwq0W9Mdnw7ArXCoFDF4DHSChO%2BjKCswgioxVFOzZg%2Fl4ibHiI%2FTPSUeQTtopVMTIRSJ81%2BdzzMqEMxdB0ugKyBce1TGhUlT1SJGu%2BRxZYKYzgrxylUlOypNl9%2FE81a5Mz9EeYOMzwkwqZ%2FRR7Vh%2FiORMrR9PELZwB2MoNpt0A%2F5QSzXVbAagnJTBZ4dbli0VNTnOv7oxnTq5wMLYwGw5hKnoSKsXZbsHGK9AWNA6P06ygIVcDgFrN9YeuTgjD3bwko8mM327wYkSzYrvstOTzbSGfy3o0Jabnf6WXcpCDfq33GA0shcGRQKTX2UyOfy4PiuOyhMb6MdulkD%2BDZvAcYcsoglsR2Je2u8eP4GMBt3i9nFMQM66015lh4vWXbP2c1tl9iBJSStnBMPMxGQCrFoWf4tQCBmLc1OqqKzh3MzTgb03DS0cp9u5%2FccD7cGrGpixAKnZpHaSKXQaiNbzOLRd7FRrpcYsuC695raoY8dadwih7q%2BHGMG4a2FKc%2Ff3o8gCD5vD9rd05Xd%2F02e6Cj8o9ueuCbGP4s6ggUImsC11JggC8%2FgtUYvln368d%2BOFdHbcKG1L4D9MjDvz73SBjqkAT%2B11cBKkrB8qJ6VLe9dSl%2FmTEF96jeUNOXvUUkYO20ZNZmX06jEgueBLofbHxnGDMCbRPxTLeu1HhcU0G4O%2F6g9aOgkELYw6tqNSR3t3hb%2Fz6ZII%2F2ZKi4u7FKyXhITb%2FIq8KSsMmMK8KNhVkIR1BAloRRGgL5HCi3oFh0QbmBi6eDXxD1rDOjKxCvIkEHN4BVduGSr2PkjFx2QOtfghj1S134r&X-Amz-Signature=3bd0929b9657cf22b8af2b84fbc7d8d1ef81766691e60a7c8431345ef76dd812&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666L7ZLD37%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcfa57xGGAybM8u3lSAkZNi4AlP69zHAoKM7xM9JHUfQIhAMb75KEjwaCw7OKKMsKwr0Bj8VERCKAF%2FqS%2BjbQew4DxKogECJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzN4PTyCOg9dlMJcwq3ANEWxLJsUJvV%2FIxH5POfj%2FkD%2FbQysdOraSijzO2Np%2Fly8QChczV0SlZhsxFbR1umkEHGbHGLVhM5X%2Fayak%2F87XckzjNiMHmkP0pPBQgUFHbzU0VHY5MBIo4mGkteagyKPJ0K0P8lWLTVAJA9LpYE%2FgG%2BMF3pmOAPBq757acF20VlpHeyk%2BSX5hFMativFO2FYkI7jFo%2BYH9glZT3v0OK0FGxh4Q2CEdxAeaUG9tC7vONjmmKi%2FEo2Wt0YI%2FMDjaYZsc05ZKe%2B2lkCwbLXV1fd1TiXbRmtLj9t%2BEmyU2bqN6PXIP33qHCLTHdwAp27z6oB2kywJdB%2F%2FuqRrPzd4jHSRsbxZmYIoqlFUQKlAOpWx2YJmkejp0JgmbSkzzc0wnK5C2jjmtmR0ZRaUqYLVW8RJKK5bER%2BVMhbS7fTG7cBmq1HAZhxq6UFiF01Aslw%2BT0peAHMttPtJiNqxK548VpjSyubNJ3sStHgeGFdhP9%2Bt7Qa9GkEAC7Nwxi%2FZjiyMf%2BD3qXAtvoogG%2Fzxiawt0g3PIoZPrYiWZhbx3lB2X8kdvV4zFjaDWcXYn%2BUd7hZvTMbLJm%2B0qaw7uODSh%2F8etKtsgWV%2FhYBwQsT26W8dvly8lFSoZ8iaeJYvBv5qO8zD50b3SBjqkAew5gMI8qhcBlUDQI5VGajQufXCXyNbTMkwrBdjE0tuYjKPIpxAs7pvY65wYhuoRV1q101%2FHMxVZkzhwV6GbOMJHX%2Bu6OykdPwTnax2z8%2FW3CdiXBvJv9Qmu25F6EmHvTSSt21tM361kMLJ7DIN5DjXZH524yPdntFhwvk3CcDHtveo3bPgGV48mx14W3rNDX4pXPzHPVfEh1I1G5eZNB7orTJ75&X-Amz-Signature=532d8452f5725cd3007086ecb9b47a6d301a190dd35b1675bf7b8e616faa7ae5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666L7ZLD37%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcfa57xGGAybM8u3lSAkZNi4AlP69zHAoKM7xM9JHUfQIhAMb75KEjwaCw7OKKMsKwr0Bj8VERCKAF%2FqS%2BjbQew4DxKogECJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzN4PTyCOg9dlMJcwq3ANEWxLJsUJvV%2FIxH5POfj%2FkD%2FbQysdOraSijzO2Np%2Fly8QChczV0SlZhsxFbR1umkEHGbHGLVhM5X%2Fayak%2F87XckzjNiMHmkP0pPBQgUFHbzU0VHY5MBIo4mGkteagyKPJ0K0P8lWLTVAJA9LpYE%2FgG%2BMF3pmOAPBq757acF20VlpHeyk%2BSX5hFMativFO2FYkI7jFo%2BYH9glZT3v0OK0FGxh4Q2CEdxAeaUG9tC7vONjmmKi%2FEo2Wt0YI%2FMDjaYZsc05ZKe%2B2lkCwbLXV1fd1TiXbRmtLj9t%2BEmyU2bqN6PXIP33qHCLTHdwAp27z6oB2kywJdB%2F%2FuqRrPzd4jHSRsbxZmYIoqlFUQKlAOpWx2YJmkejp0JgmbSkzzc0wnK5C2jjmtmR0ZRaUqYLVW8RJKK5bER%2BVMhbS7fTG7cBmq1HAZhxq6UFiF01Aslw%2BT0peAHMttPtJiNqxK548VpjSyubNJ3sStHgeGFdhP9%2Bt7Qa9GkEAC7Nwxi%2FZjiyMf%2BD3qXAtvoogG%2Fzxiawt0g3PIoZPrYiWZhbx3lB2X8kdvV4zFjaDWcXYn%2BUd7hZvTMbLJm%2B0qaw7uODSh%2F8etKtsgWV%2FhYBwQsT26W8dvly8lFSoZ8iaeJYvBv5qO8zD50b3SBjqkAew5gMI8qhcBlUDQI5VGajQufXCXyNbTMkwrBdjE0tuYjKPIpxAs7pvY65wYhuoRV1q101%2FHMxVZkzhwV6GbOMJHX%2Bu6OykdPwTnax2z8%2FW3CdiXBvJv9Qmu25F6EmHvTSSt21tM361kMLJ7DIN5DjXZH524yPdntFhwvk3CcDHtveo3bPgGV48mx14W3rNDX4pXPzHPVfEh1I1G5eZNB7orTJ75&X-Amz-Signature=4c45e8550fa69c38a73ac23ea474c995a7be3deb1f49c85536993bc0c7ac21cd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666L7ZLD37%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcfa57xGGAybM8u3lSAkZNi4AlP69zHAoKM7xM9JHUfQIhAMb75KEjwaCw7OKKMsKwr0Bj8VERCKAF%2FqS%2BjbQew4DxKogECJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzN4PTyCOg9dlMJcwq3ANEWxLJsUJvV%2FIxH5POfj%2FkD%2FbQysdOraSijzO2Np%2Fly8QChczV0SlZhsxFbR1umkEHGbHGLVhM5X%2Fayak%2F87XckzjNiMHmkP0pPBQgUFHbzU0VHY5MBIo4mGkteagyKPJ0K0P8lWLTVAJA9LpYE%2FgG%2BMF3pmOAPBq757acF20VlpHeyk%2BSX5hFMativFO2FYkI7jFo%2BYH9glZT3v0OK0FGxh4Q2CEdxAeaUG9tC7vONjmmKi%2FEo2Wt0YI%2FMDjaYZsc05ZKe%2B2lkCwbLXV1fd1TiXbRmtLj9t%2BEmyU2bqN6PXIP33qHCLTHdwAp27z6oB2kywJdB%2F%2FuqRrPzd4jHSRsbxZmYIoqlFUQKlAOpWx2YJmkejp0JgmbSkzzc0wnK5C2jjmtmR0ZRaUqYLVW8RJKK5bER%2BVMhbS7fTG7cBmq1HAZhxq6UFiF01Aslw%2BT0peAHMttPtJiNqxK548VpjSyubNJ3sStHgeGFdhP9%2Bt7Qa9GkEAC7Nwxi%2FZjiyMf%2BD3qXAtvoogG%2Fzxiawt0g3PIoZPrYiWZhbx3lB2X8kdvV4zFjaDWcXYn%2BUd7hZvTMbLJm%2B0qaw7uODSh%2F8etKtsgWV%2FhYBwQsT26W8dvly8lFSoZ8iaeJYvBv5qO8zD50b3SBjqkAew5gMI8qhcBlUDQI5VGajQufXCXyNbTMkwrBdjE0tuYjKPIpxAs7pvY65wYhuoRV1q101%2FHMxVZkzhwV6GbOMJHX%2Bu6OykdPwTnax2z8%2FW3CdiXBvJv9Qmu25F6EmHvTSSt21tM361kMLJ7DIN5DjXZH524yPdntFhwvk3CcDHtveo3bPgGV48mx14W3rNDX4pXPzHPVfEh1I1G5eZNB7orTJ75&X-Amz-Signature=64b8628fca03f75522f65766726621ed287cb62c8aecdb8d577d74c9bfe49a0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666L7ZLD37%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105251Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCcfa57xGGAybM8u3lSAkZNi4AlP69zHAoKM7xM9JHUfQIhAMb75KEjwaCw7OKKMsKwr0Bj8VERCKAF%2FqS%2BjbQew4DxKogECJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzN4PTyCOg9dlMJcwq3ANEWxLJsUJvV%2FIxH5POfj%2FkD%2FbQysdOraSijzO2Np%2Fly8QChczV0SlZhsxFbR1umkEHGbHGLVhM5X%2Fayak%2F87XckzjNiMHmkP0pPBQgUFHbzU0VHY5MBIo4mGkteagyKPJ0K0P8lWLTVAJA9LpYE%2FgG%2BMF3pmOAPBq757acF20VlpHeyk%2BSX5hFMativFO2FYkI7jFo%2BYH9glZT3v0OK0FGxh4Q2CEdxAeaUG9tC7vONjmmKi%2FEo2Wt0YI%2FMDjaYZsc05ZKe%2B2lkCwbLXV1fd1TiXbRmtLj9t%2BEmyU2bqN6PXIP33qHCLTHdwAp27z6oB2kywJdB%2F%2FuqRrPzd4jHSRsbxZmYIoqlFUQKlAOpWx2YJmkejp0JgmbSkzzc0wnK5C2jjmtmR0ZRaUqYLVW8RJKK5bER%2BVMhbS7fTG7cBmq1HAZhxq6UFiF01Aslw%2BT0peAHMttPtJiNqxK548VpjSyubNJ3sStHgeGFdhP9%2Bt7Qa9GkEAC7Nwxi%2FZjiyMf%2BD3qXAtvoogG%2Fzxiawt0g3PIoZPrYiWZhbx3lB2X8kdvV4zFjaDWcXYn%2BUd7hZvTMbLJm%2B0qaw7uODSh%2F8etKtsgWV%2FhYBwQsT26W8dvly8lFSoZ8iaeJYvBv5qO8zD50b3SBjqkAew5gMI8qhcBlUDQI5VGajQufXCXyNbTMkwrBdjE0tuYjKPIpxAs7pvY65wYhuoRV1q101%2FHMxVZkzhwV6GbOMJHX%2Bu6OykdPwTnax2z8%2FW3CdiXBvJv9Qmu25F6EmHvTSSt21tM361kMLJ7DIN5DjXZH524yPdntFhwvk3CcDHtveo3bPgGV48mx14W3rNDX4pXPzHPVfEh1I1G5eZNB7orTJ75&X-Amz-Signature=7148e79f3419cd32bc7312ab881ff77b4e43ca7401f0f5a804bbef6d6bc0cf7d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XQ7P7ZGJ%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105252Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAbKBQQsYqvOgj2djnTdW1IEPMTFsaaXsgd6VepCz0dAIhAP2rzljxaZqd%2B4SVHRP31N1k9OO37o%2FekObCU%2B7iE1xoKogECJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyHgWrg8YzHAsJ9h0Eq3AMs17P47oR1V1x1mPdSJjm6YNCOB66ikNqBc41io9bW%2BSkT4ng4W9JfWyOew3yqr3wO6DIbbe8AjDKhMS%2BQrla9yf4Xoikuhx%2BGKPwZd3CG3k39K2J6d0CXR30rP9gmQ2GXbULrcsc%2BWdXrjAPirtIOBtPIIYcCL0u5DpYCa0Z%2Fbwmn2OflbiV7VV5qZ%2Bu7QiaVE9pw0OFqgUuzO5zcvn1DfYKPE%2FDVbAyOCOvTMn9IrnbQTBwT4NACS2rtfZ2cWpS4dPIhxKlsoTgRSRFoeH9HNYCDvEVs9l5pRtZJONuSa48YS4KR77RqAY5bDLw86Pgel3GztMvWN2dBvIsSp%2BEStAa5bnU2zw0O5itz1L6U%2BHrGI0Azyd0vMUwizjXR29AZyTBAALJikBMSIjeM9rm3GrNP5wJUBikufNZLspVsPyTonqOMOkJfTRNdtP3W1gWAkSqp0he81RKK6ZQoDd740cppukt3bj5JknFWHbF%2BiM5Yms0sYTLyu3TzWhfyvNSbnJFPY9IpHz4x84rRtRW%2FAiGAYSPILB%2Fq%2Bk%2BKjqxl3AL3VS4a%2BeVFtnchieK4wrZfD3kKE5PQghkatjsIJW9Htr8sRZqX3s2tYoYJ%2Ftud%2BeVWqHLjN1Up4e53VzCA1L3SBjqkAfSd2HaHS%2Fqdu1iKgYAEblJj2uuNFvs72m153Tsx8oYTf%2Fbc8FW6Sh7NsRllNcqO8a2zl6bvZcScmrPSaArms54sfzCc3Xmi0V8kpMh2lvytw%2FyficPihIFCkYY2TQ2AwxnlMpnwI9VT6ImIRrIov8a1m104WlHe2VVGgKR8ENQReKleQWbRSP%2FGGlKdsRhfr3HmTJSjuT%2F7jTCqIFLBJflQwh60&X-Amz-Signature=3034a15ddafc35fc9382fdb78bc7f79336200b436d9ca336bbbcf852e67d6b01&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GZAV7SM%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105252Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBkourND0zk5yDCT8EI30ekV5M6UThuwAKm9JYg85f21AiEAvHcnGap8XCcV5Dz18O0FLL26izPx2GSwZ7F6B0863rIqiAQImv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJWOI1aO0GyYWzPc%2FyrcAy4hIb%2FpztlNOZaCFGFyYGJX%2BtvNYf8ePC9zkNdZjsF3KkG%2F56446EyLxJUkAEaLspRqVGHqfHJVMHwUrLqwRl6mxQnWVp8%2BJ6OhTbqx7Wu5Ge0fjvFS6ic8WeOrp4OUmvPgiFwOfrpkSh6OmWm4Galo2uyCM7FjQqIlSmu70VecGswJypt7Y18jUA396dUFW%2FMoULkMNmpmtfQG3nT0fNDi0numnWGt1R43mDeXdr7gJ4vWGy5ILO2zi4L582Nmm8kX1yqnO4CjQB5YYOQpW2Rz5exGIQDd6Sg20%2FtbWveiye%2BrLfVajkpEeR4ZKGV9VRTywdLkoL8kzsYBsgv2OycMBgh0rIJhWDhOwaI11RDGby5eZjMXV2HBtQ9E%2BwyAcOyQLVMPByWMYQsTQ8HTZjoX9VqLGz1NdkhEDZbdbn6Hmf7REPJJ3d5JEa83JJhHJCmJWVKRQbTt%2F2caM7cjIu1jqAWm10YBiFCGtSxmU9M3w9%2B3%2BLM1lg1vkOZzMwz2Qz0tpjdAyK4lvSTSeO8hJ7IWEf9uYrfacwwFQP%2F%2FN1XpxXCvM207DXbijmkl%2FDINnXPSRk7ClHx2vYOM6hpGs3RHEIwJX1T9RaW6xK8t1SHDGtCSQDivd7WGBU7gMMvPvdIGOqUB16nxJlC85GPEiF2%2FQySsWJro2ICEDoadn7xN%2B%2BtENJvpvxCMuu1FpuPkgOaNJZQ%2FTFxr9exg7F1oB44AGLSl3j3hEi8bPBesbDd61S2DBmgdIFyl5YecE6tsMz3hUt2TYrRPmg12g273rNAh8S%2BoU7DLei0SacVbb9xaqUA7sbazI6t4wcksk6WJUHNPBK7Slsw5%2BzGM%2BMHDHwwy%2BURjxqtdHgrT&X-Amz-Signature=60a3286bae56173f5adbb6c1c45b5cdc0019c97e29106eb748e26ff4ce308cef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GZAV7SM%2F20260709%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260709T105252Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBkourND0zk5yDCT8EI30ekV5M6UThuwAKm9JYg85f21AiEAvHcnGap8XCcV5Dz18O0FLL26izPx2GSwZ7F6B0863rIqiAQImv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJWOI1aO0GyYWzPc%2FyrcAy4hIb%2FpztlNOZaCFGFyYGJX%2BtvNYf8ePC9zkNdZjsF3KkG%2F56446EyLxJUkAEaLspRqVGHqfHJVMHwUrLqwRl6mxQnWVp8%2BJ6OhTbqx7Wu5Ge0fjvFS6ic8WeOrp4OUmvPgiFwOfrpkSh6OmWm4Galo2uyCM7FjQqIlSmu70VecGswJypt7Y18jUA396dUFW%2FMoULkMNmpmtfQG3nT0fNDi0numnWGt1R43mDeXdr7gJ4vWGy5ILO2zi4L582Nmm8kX1yqnO4CjQB5YYOQpW2Rz5exGIQDd6Sg20%2FtbWveiye%2BrLfVajkpEeR4ZKGV9VRTywdLkoL8kzsYBsgv2OycMBgh0rIJhWDhOwaI11RDGby5eZjMXV2HBtQ9E%2BwyAcOyQLVMPByWMYQsTQ8HTZjoX9VqLGz1NdkhEDZbdbn6Hmf7REPJJ3d5JEa83JJhHJCmJWVKRQbTt%2F2caM7cjIu1jqAWm10YBiFCGtSxmU9M3w9%2B3%2BLM1lg1vkOZzMwz2Qz0tpjdAyK4lvSTSeO8hJ7IWEf9uYrfacwwFQP%2F%2FN1XpxXCvM207DXbijmkl%2FDINnXPSRk7ClHx2vYOM6hpGs3RHEIwJX1T9RaW6xK8t1SHDGtCSQDivd7WGBU7gMMvPvdIGOqUB16nxJlC85GPEiF2%2FQySsWJro2ICEDoadn7xN%2B%2BtENJvpvxCMuu1FpuPkgOaNJZQ%2FTFxr9exg7F1oB44AGLSl3j3hEi8bPBesbDd61S2DBmgdIFyl5YecE6tsMz3hUt2TYrRPmg12g273rNAh8S%2BoU7DLei0SacVbb9xaqUA7sbazI6t4wcksk6WJUHNPBK7Slsw5%2BzGM%2BMHDHwwy%2BURjxqtdHgrT&X-Amz-Signature=7b3384f2a98bf8e0a4ea112ae44e01884c50401d1a8e91d574870e9454fbe15a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
