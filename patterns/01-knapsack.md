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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46673ZWJT7F%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFua3Qm2oA8K7T720mmLuyXU%2Ffzx94l1YtEDlhgz61wAiAxco6kbJomx8QXrOrkG03mJ4aIYdenofMsomk86I7s7Cr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMxAuLitogXZyUlkmnKtwDfqugVKDVEIH93e477O%2FhgF3zFoOl9P%2FPV5FGJzXXuWryUpeE%2FGj%2FJgvcZ1VKERwc%2BmhnuSYsOj3JMIrzCjr4wf0zqYAmsimWq8fWjsjsr5WY0U58JPAwCNR9JqFNU89yG6dEEqdNxweMMO4VMhAnam6ihDMBagt%2FVooj8ppGBd0NSlonkzxIXoHg9oykGR3%2Bi0dQRlYbDTa97wFXt73205Sn1Suh4gKrNtSgzLc0LdzLHRTGhNVxlR11CKmCtWMVyufXwRoc6Q4MovOQY8cpNSwhZTizMEFFgZyxhCALsXg7KCYPL6ROHKWPs1U3MOQ4aDfbVmDMKNTOdWA5qYO%2BVmMHS20a%2FmHK7PMu859m%2B6gaApwvXBEt1Xa5O3EQm3J0v9LrlWO62eZgrqX1LX5Cc%2FrZzA%2BXv4RmCrWwadmqSDVQyekVJIvE2A4A7bEPpRyolx2Uq3SR9oSXyHIrtTRqM2kjQ7JVD%2F7MgGoSKFml3pseXJ9OyFblWWXt8jcjS9J%2Bs1l9dQeDWDjcYkrw%2FVmm1Y8rEcy4sjaD2zw3f850yYkBO7%2BmjUGoq1CICYkMdKy7lKG7AzNbTMOUbBW9GJ3EDAA8qfYr7Dxh1%2BUQUS6gkDBIxGK5OIEFmz646zUwlPXszgY6pgFZ7ITuFNjs84RCfJtJqp%2FTmgeEUb0fr%2Bixhb1PDWTgwON8CSnPS333MsMOrK88GNMiIQ0d%2F8YEw%2FV7vpP83TB6icXg6O4J66NoVx3tzZtIS%2FgtG1zd7WHviCvxWINpzaNORqrBUsGzu0sxNZLyybmHlNlNHo%2FiNct1E8CdoF%2Ftoc2Uqqwg0mF9%2BssQlq%2Fwu9EwC0QnFywXQ2ZZnZPonEcrkEBx0Yzn&X-Amz-Signature=cb893b6a56a4472dae96c66e3a33557f0e477fb8d5c948d76dfc594da6f09ffd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46673ZWJT7F%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFua3Qm2oA8K7T720mmLuyXU%2Ffzx94l1YtEDlhgz61wAiAxco6kbJomx8QXrOrkG03mJ4aIYdenofMsomk86I7s7Cr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMxAuLitogXZyUlkmnKtwDfqugVKDVEIH93e477O%2FhgF3zFoOl9P%2FPV5FGJzXXuWryUpeE%2FGj%2FJgvcZ1VKERwc%2BmhnuSYsOj3JMIrzCjr4wf0zqYAmsimWq8fWjsjsr5WY0U58JPAwCNR9JqFNU89yG6dEEqdNxweMMO4VMhAnam6ihDMBagt%2FVooj8ppGBd0NSlonkzxIXoHg9oykGR3%2Bi0dQRlYbDTa97wFXt73205Sn1Suh4gKrNtSgzLc0LdzLHRTGhNVxlR11CKmCtWMVyufXwRoc6Q4MovOQY8cpNSwhZTizMEFFgZyxhCALsXg7KCYPL6ROHKWPs1U3MOQ4aDfbVmDMKNTOdWA5qYO%2BVmMHS20a%2FmHK7PMu859m%2B6gaApwvXBEt1Xa5O3EQm3J0v9LrlWO62eZgrqX1LX5Cc%2FrZzA%2BXv4RmCrWwadmqSDVQyekVJIvE2A4A7bEPpRyolx2Uq3SR9oSXyHIrtTRqM2kjQ7JVD%2F7MgGoSKFml3pseXJ9OyFblWWXt8jcjS9J%2Bs1l9dQeDWDjcYkrw%2FVmm1Y8rEcy4sjaD2zw3f850yYkBO7%2BmjUGoq1CICYkMdKy7lKG7AzNbTMOUbBW9GJ3EDAA8qfYr7Dxh1%2BUQUS6gkDBIxGK5OIEFmz646zUwlPXszgY6pgFZ7ITuFNjs84RCfJtJqp%2FTmgeEUb0fr%2Bixhb1PDWTgwON8CSnPS333MsMOrK88GNMiIQ0d%2F8YEw%2FV7vpP83TB6icXg6O4J66NoVx3tzZtIS%2FgtG1zd7WHviCvxWINpzaNORqrBUsGzu0sxNZLyybmHlNlNHo%2FiNct1E8CdoF%2Ftoc2Uqqwg0mF9%2BssQlq%2Fwu9EwC0QnFywXQ2ZZnZPonEcrkEBx0Yzn&X-Amz-Signature=5ab2e9e2e1c843b2a6f0ceeaebb8e36ced973d8cfddcc8c778994c944d8c1d03&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46673ZWJT7F%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFua3Qm2oA8K7T720mmLuyXU%2Ffzx94l1YtEDlhgz61wAiAxco6kbJomx8QXrOrkG03mJ4aIYdenofMsomk86I7s7Cr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMxAuLitogXZyUlkmnKtwDfqugVKDVEIH93e477O%2FhgF3zFoOl9P%2FPV5FGJzXXuWryUpeE%2FGj%2FJgvcZ1VKERwc%2BmhnuSYsOj3JMIrzCjr4wf0zqYAmsimWq8fWjsjsr5WY0U58JPAwCNR9JqFNU89yG6dEEqdNxweMMO4VMhAnam6ihDMBagt%2FVooj8ppGBd0NSlonkzxIXoHg9oykGR3%2Bi0dQRlYbDTa97wFXt73205Sn1Suh4gKrNtSgzLc0LdzLHRTGhNVxlR11CKmCtWMVyufXwRoc6Q4MovOQY8cpNSwhZTizMEFFgZyxhCALsXg7KCYPL6ROHKWPs1U3MOQ4aDfbVmDMKNTOdWA5qYO%2BVmMHS20a%2FmHK7PMu859m%2B6gaApwvXBEt1Xa5O3EQm3J0v9LrlWO62eZgrqX1LX5Cc%2FrZzA%2BXv4RmCrWwadmqSDVQyekVJIvE2A4A7bEPpRyolx2Uq3SR9oSXyHIrtTRqM2kjQ7JVD%2F7MgGoSKFml3pseXJ9OyFblWWXt8jcjS9J%2Bs1l9dQeDWDjcYkrw%2FVmm1Y8rEcy4sjaD2zw3f850yYkBO7%2BmjUGoq1CICYkMdKy7lKG7AzNbTMOUbBW9GJ3EDAA8qfYr7Dxh1%2BUQUS6gkDBIxGK5OIEFmz646zUwlPXszgY6pgFZ7ITuFNjs84RCfJtJqp%2FTmgeEUb0fr%2Bixhb1PDWTgwON8CSnPS333MsMOrK88GNMiIQ0d%2F8YEw%2FV7vpP83TB6icXg6O4J66NoVx3tzZtIS%2FgtG1zd7WHviCvxWINpzaNORqrBUsGzu0sxNZLyybmHlNlNHo%2FiNct1E8CdoF%2Ftoc2Uqqwg0mF9%2BssQlq%2Fwu9EwC0QnFywXQ2ZZnZPonEcrkEBx0Yzn&X-Amz-Signature=8acef81e54cd6e0ce032b0dc2bd5a15c597a381804a417e1fd433588654109d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWONPAF%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaM4KqlXTs0E1XYGcDjHrK%2FKU4bl%2B33nITSYOIRUhz2wIhAJnMyx57GbqIyuON0ODk7MvM8UNDQGQIwYUZ%2B%2FVVD3Z6Kv8DCFcQABoMNjM3NDIzMTgzODA1Igz8Kp9GL20bsLGZkNUq3ANQsmxU0R3SbcUpJ7cJwrpD5IPlUMd%2BYqEPPT%2BqRWmBN5xTc3L4yKUeMIn0EfGZ4B3nQSmbRRA51ex3WcRGWTR2WUEnPqsEGoXm9b%2FfDDwH9Ojl1IdXMuj9KT%2Fqpv%2Fj3tCO7p4WsLAXx%2F8nCkqcoUrtQ%2B2I%2FwwKPMrrz2P1qBwxCDKRPE%2BYFHZh3rxlfL8noEPQ209a%2F80kcEnwkLl3QuMxY5eveIP4QyVjNz1DgOtMWl4VhthCl%2Fkr3zHqI6bLfJZq%2BcqREk3EmuVGiHbEfY2ttMHnaAYBVnzhbKSgr%2FKpwrEerZ4yp9TaBpikDuxPlE%2BaGhGerQS27PW3PVhIKPeDL0TK4%2F87asg5ADDMTjoQm83Qlp%2FYLMc9%2BaSlsYMuoZyU7k1goxGt%2B7w%2BP25zt5b5dyRZY4tiwp%2BNcEg5D9Dv2kmIqUvgXj2u0Sq4PanTGObx%2F7CYshyEhCNftUGEUgjIieTwOYAB8HdRc%2FdQvWyJDBuORCfabxhw4PoWghRvM0SyKf%2FVV22wT8a39u0geAPB%2Fm9PdgfjqXsT9yYULnGWysva1F6xeG75cbV%2FjTGw%2FQ9pVfObnz44q0PwhpRurK7l4mCGMaovmaAmmjUWP6Po0dXULtPhpOA3VJQkQTCI9OzOBjqkAZlNH%2BWjBryC70TUst3ksljrCwReNQ6v2RZZ%2B8yEFaX7G8MCpOpVhjK%2FrTLWwfykLxS9Swh4xZ0ZVqoR0RGeo15dIrig%2BtM8dqYCzbCT6IX7TGMpaq85I9cvJr1aRKMNZq7ho52Ul8QVaN4keNlycf8sjYuYmG0YYJo%2BM3aVORs9uP%2F60MHXFylBpMQzO4BZhowDYetiajfGJ88uAH16%2Bh%2BICgqZ&X-Amz-Signature=5f188f9cc0f5a8b4d4d9f86eef0adb219d7c958f9667142f4f6317be88c3a773&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWONPAF%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaM4KqlXTs0E1XYGcDjHrK%2FKU4bl%2B33nITSYOIRUhz2wIhAJnMyx57GbqIyuON0ODk7MvM8UNDQGQIwYUZ%2B%2FVVD3Z6Kv8DCFcQABoMNjM3NDIzMTgzODA1Igz8Kp9GL20bsLGZkNUq3ANQsmxU0R3SbcUpJ7cJwrpD5IPlUMd%2BYqEPPT%2BqRWmBN5xTc3L4yKUeMIn0EfGZ4B3nQSmbRRA51ex3WcRGWTR2WUEnPqsEGoXm9b%2FfDDwH9Ojl1IdXMuj9KT%2Fqpv%2Fj3tCO7p4WsLAXx%2F8nCkqcoUrtQ%2B2I%2FwwKPMrrz2P1qBwxCDKRPE%2BYFHZh3rxlfL8noEPQ209a%2F80kcEnwkLl3QuMxY5eveIP4QyVjNz1DgOtMWl4VhthCl%2Fkr3zHqI6bLfJZq%2BcqREk3EmuVGiHbEfY2ttMHnaAYBVnzhbKSgr%2FKpwrEerZ4yp9TaBpikDuxPlE%2BaGhGerQS27PW3PVhIKPeDL0TK4%2F87asg5ADDMTjoQm83Qlp%2FYLMc9%2BaSlsYMuoZyU7k1goxGt%2B7w%2BP25zt5b5dyRZY4tiwp%2BNcEg5D9Dv2kmIqUvgXj2u0Sq4PanTGObx%2F7CYshyEhCNftUGEUgjIieTwOYAB8HdRc%2FdQvWyJDBuORCfabxhw4PoWghRvM0SyKf%2FVV22wT8a39u0geAPB%2Fm9PdgfjqXsT9yYULnGWysva1F6xeG75cbV%2FjTGw%2FQ9pVfObnz44q0PwhpRurK7l4mCGMaovmaAmmjUWP6Po0dXULtPhpOA3VJQkQTCI9OzOBjqkAZlNH%2BWjBryC70TUst3ksljrCwReNQ6v2RZZ%2B8yEFaX7G8MCpOpVhjK%2FrTLWwfykLxS9Swh4xZ0ZVqoR0RGeo15dIrig%2BtM8dqYCzbCT6IX7TGMpaq85I9cvJr1aRKMNZq7ho52Ul8QVaN4keNlycf8sjYuYmG0YYJo%2BM3aVORs9uP%2F60MHXFylBpMQzO4BZhowDYetiajfGJ88uAH16%2Bh%2BICgqZ&X-Amz-Signature=53e8e60d87f98cb83f449d5509deb94dd4c1dce23c171db13dd2e724264f960a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWONPAF%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaM4KqlXTs0E1XYGcDjHrK%2FKU4bl%2B33nITSYOIRUhz2wIhAJnMyx57GbqIyuON0ODk7MvM8UNDQGQIwYUZ%2B%2FVVD3Z6Kv8DCFcQABoMNjM3NDIzMTgzODA1Igz8Kp9GL20bsLGZkNUq3ANQsmxU0R3SbcUpJ7cJwrpD5IPlUMd%2BYqEPPT%2BqRWmBN5xTc3L4yKUeMIn0EfGZ4B3nQSmbRRA51ex3WcRGWTR2WUEnPqsEGoXm9b%2FfDDwH9Ojl1IdXMuj9KT%2Fqpv%2Fj3tCO7p4WsLAXx%2F8nCkqcoUrtQ%2B2I%2FwwKPMrrz2P1qBwxCDKRPE%2BYFHZh3rxlfL8noEPQ209a%2F80kcEnwkLl3QuMxY5eveIP4QyVjNz1DgOtMWl4VhthCl%2Fkr3zHqI6bLfJZq%2BcqREk3EmuVGiHbEfY2ttMHnaAYBVnzhbKSgr%2FKpwrEerZ4yp9TaBpikDuxPlE%2BaGhGerQS27PW3PVhIKPeDL0TK4%2F87asg5ADDMTjoQm83Qlp%2FYLMc9%2BaSlsYMuoZyU7k1goxGt%2B7w%2BP25zt5b5dyRZY4tiwp%2BNcEg5D9Dv2kmIqUvgXj2u0Sq4PanTGObx%2F7CYshyEhCNftUGEUgjIieTwOYAB8HdRc%2FdQvWyJDBuORCfabxhw4PoWghRvM0SyKf%2FVV22wT8a39u0geAPB%2Fm9PdgfjqXsT9yYULnGWysva1F6xeG75cbV%2FjTGw%2FQ9pVfObnz44q0PwhpRurK7l4mCGMaovmaAmmjUWP6Po0dXULtPhpOA3VJQkQTCI9OzOBjqkAZlNH%2BWjBryC70TUst3ksljrCwReNQ6v2RZZ%2B8yEFaX7G8MCpOpVhjK%2FrTLWwfykLxS9Swh4xZ0ZVqoR0RGeo15dIrig%2BtM8dqYCzbCT6IX7TGMpaq85I9cvJr1aRKMNZq7ho52Ul8QVaN4keNlycf8sjYuYmG0YYJo%2BM3aVORs9uP%2F60MHXFylBpMQzO4BZhowDYetiajfGJ88uAH16%2Bh%2BICgqZ&X-Amz-Signature=8e83d7326a6bf178aaac68e1b4b5922ed007065e0cfe90f079b6cc7565e5db23&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWONPAF%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaM4KqlXTs0E1XYGcDjHrK%2FKU4bl%2B33nITSYOIRUhz2wIhAJnMyx57GbqIyuON0ODk7MvM8UNDQGQIwYUZ%2B%2FVVD3Z6Kv8DCFcQABoMNjM3NDIzMTgzODA1Igz8Kp9GL20bsLGZkNUq3ANQsmxU0R3SbcUpJ7cJwrpD5IPlUMd%2BYqEPPT%2BqRWmBN5xTc3L4yKUeMIn0EfGZ4B3nQSmbRRA51ex3WcRGWTR2WUEnPqsEGoXm9b%2FfDDwH9Ojl1IdXMuj9KT%2Fqpv%2Fj3tCO7p4WsLAXx%2F8nCkqcoUrtQ%2B2I%2FwwKPMrrz2P1qBwxCDKRPE%2BYFHZh3rxlfL8noEPQ209a%2F80kcEnwkLl3QuMxY5eveIP4QyVjNz1DgOtMWl4VhthCl%2Fkr3zHqI6bLfJZq%2BcqREk3EmuVGiHbEfY2ttMHnaAYBVnzhbKSgr%2FKpwrEerZ4yp9TaBpikDuxPlE%2BaGhGerQS27PW3PVhIKPeDL0TK4%2F87asg5ADDMTjoQm83Qlp%2FYLMc9%2BaSlsYMuoZyU7k1goxGt%2B7w%2BP25zt5b5dyRZY4tiwp%2BNcEg5D9Dv2kmIqUvgXj2u0Sq4PanTGObx%2F7CYshyEhCNftUGEUgjIieTwOYAB8HdRc%2FdQvWyJDBuORCfabxhw4PoWghRvM0SyKf%2FVV22wT8a39u0geAPB%2Fm9PdgfjqXsT9yYULnGWysva1F6xeG75cbV%2FjTGw%2FQ9pVfObnz44q0PwhpRurK7l4mCGMaovmaAmmjUWP6Po0dXULtPhpOA3VJQkQTCI9OzOBjqkAZlNH%2BWjBryC70TUst3ksljrCwReNQ6v2RZZ%2B8yEFaX7G8MCpOpVhjK%2FrTLWwfykLxS9Swh4xZ0ZVqoR0RGeo15dIrig%2BtM8dqYCzbCT6IX7TGMpaq85I9cvJr1aRKMNZq7ho52Ul8QVaN4keNlycf8sjYuYmG0YYJo%2BM3aVORs9uP%2F60MHXFylBpMQzO4BZhowDYetiajfGJ88uAH16%2Bh%2BICgqZ&X-Amz-Signature=0373b06f8e1950d96e96444608bdd949e6cd1f13a552a12a71d88755d3530190&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OEZPXHV%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICV%2BZjFEFcoczt2%2Flz1%2B42a8yxCR5nAUPiil0RSOjkDwAiAt9VX6xDGJUJF%2BZxHM5m6C4dpbQmGFfxzvX1QehpbThSr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMSLp40rC4Bleb7gFKKtwDZqZMbItzvMFrKHXdBqeeK8lZvEhtB6PgBpu5TCJLccSJlh1Vz0AX6RofjTM28BwDMzihWzYZZNdNMIzB2zodh9ugeacU0DGzi5DlJ4DRlscNDnqXhFftQ5Rv2wHH%2BaS4n2b9ZM1UTtOCvi0BDAVCMpVViULLWD4kV3RCudN0hgMWa49SKUu3AXsovb%2Fh1ZYSvdz5aMeU6c7BiCkRxnq7KXt3ngMpwvFuHFrcrye7b0NSyC%2BEbkxGuqjsk6AF2Vtln7iH31VD9l1gBzItbPt%2FU%2Bb1Xb8JhN9YPBDYU7rUsg2s0gczwFroHN0jdw7emetzsBsheCNrmNUay60uLqWwF1sVqhEa%2BqN7Xv7ZHcTNMrf71j3ifZbCStrcFjB7rN%2BkZlravWu8k1litowV9m6dXCmYHU9g9iy%2FalnL1970x8W5m97VSQQuYud4s1GJsGhaxSzZWXFAoef8BPzb%2BqwyOzQ9h0brZFewbfevpX7pXHZ7vmylL4ijuhYG1XEWBGDaZ9XL9Ty9v4zS6CoM3e8gpUre8%2FvzdrJGuXBxoDb5BnOvm7Z%2FxiQbXCbEFKbsR%2BETjSQ8MVPvYEsh7EcgI9Uq8UIagMag5ljVsWVgUuNBEZsXrt1YumkI6PXF6HQwt%2FLszgY6pgFfuQDwHJSOm%2B97R19BhGJ8Bth1oH2O%2BfP8iAqURK%2Fwpij%2F7gJYVJBFAHZn7lsJPafVrIRGVc9lHq9s6PnZqa3cCVo3%2B30b2%2FyrYv1M4H0886lpIoUv%2BBB3b77fPdlQmGP7RxWvWDH7j9OLBwRSEdP5ZG8zHGD2flaSQ2huUklpGEXRILrfSCpqh0QU6Vsn26rZH9B1grHNpIUkO8NDlIOR%2FtMf8%2Fd6&X-Amz-Signature=28fcb03f61558cf67b732aee86a83d22c246e1038062bd555266d2726b6bdfbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663N7NXUNC%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDQykQKGTqVoaV8Q96ZNyBua2MdiGcPpO0MjcD5qbWCpAIgG2ek1ylZfcYg8MfN6TY5ZWJrUcTpS%2Fwcm5bsdrsAovgq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDG34fMIE75N0B7rhkSrcAyIbt88JmsC2Z6c7CTqL8I6UtpFMeS4agcUzlDCPqSIn5t12e1LWI58Hn7uCQG910hQIAI7FyMBIwlHyi0HLhL4qIUw%2Fa8UKz7%2B7FACPPqKGGrpVBpiCuQcZDFTl4WnZV0zhbzTlzCIAOizjmRPHHXS3h7OKxL4%2F6dkUYUMLS4mw1SeS9fkjW5TlwwY01V8nWOmL6uDLLEhk8%2B9poGAstbKTXPXSqxxUcBm7ZskQY2birjT65J9BM35o9yhjrPiTvN%2B32g%2BV5xA9SIT3CG9%2FO4SyzJpw1ycU9lmHVKFTBbFEu9zGpIzEfx9hjNAZKSiAxvSz%2B61S1KXbKJ2HQtghqlZW2PxPuuBkULdnwnjW3bCSfm6APXdgQvFbTY3FODbmQUDzHwoDWdfzJ4nKUgCZL2pmJh1T3R%2BFgmKHWPAe2buOLcmstZf8xw4AgVuY1oqFb7f%2BOi0UuCFC4emCSPqc8Dlu6Ujws1zkUummHhHbJ0Ghz4NeTaOw40d6VxxF64xf0oNDx%2F3PDdxN0j9C6FrBUzxgBA9DTvesPSVntWoTOSVoRSbTYJHPVNnHbZtv%2BHakTFsXm8g%2BeC%2F12Zb67B06SoxEv8TjQFMql6murb76dWNzHb89JbRX2kLYVi%2F%2FMMnz7M4GOqUBJWSJ4Vm%2FSOrxKVnE9KAA24svq509axQOeGGHMjL%2FWMo4c2UJDxDchgG2EJo6ujNnUDasjAcofA9fk3f133wECFnRyot8Y4lFvEA9r6j5qlcV61uXXD%2BWVIiDQvl32fU%2FUVrKr%2BLF7Dc665F7TETRbyLSFnDUsb9CYMjr05HIysoVJwTF0iF7YanFLaaFd2ZkiTSW%2BUb5Oj26Q6yOYLDh9bXxnitl&X-Amz-Signature=5b0045ffea05863ab802abb42ef61e0eec6bc83febef3c585034ab274ded64b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663N7NXUNC%2F20260412%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260412T084708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDQykQKGTqVoaV8Q96ZNyBua2MdiGcPpO0MjcD5qbWCpAIgG2ek1ylZfcYg8MfN6TY5ZWJrUcTpS%2Fwcm5bsdrsAovgq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDG34fMIE75N0B7rhkSrcAyIbt88JmsC2Z6c7CTqL8I6UtpFMeS4agcUzlDCPqSIn5t12e1LWI58Hn7uCQG910hQIAI7FyMBIwlHyi0HLhL4qIUw%2Fa8UKz7%2B7FACPPqKGGrpVBpiCuQcZDFTl4WnZV0zhbzTlzCIAOizjmRPHHXS3h7OKxL4%2F6dkUYUMLS4mw1SeS9fkjW5TlwwY01V8nWOmL6uDLLEhk8%2B9poGAstbKTXPXSqxxUcBm7ZskQY2birjT65J9BM35o9yhjrPiTvN%2B32g%2BV5xA9SIT3CG9%2FO4SyzJpw1ycU9lmHVKFTBbFEu9zGpIzEfx9hjNAZKSiAxvSz%2B61S1KXbKJ2HQtghqlZW2PxPuuBkULdnwnjW3bCSfm6APXdgQvFbTY3FODbmQUDzHwoDWdfzJ4nKUgCZL2pmJh1T3R%2BFgmKHWPAe2buOLcmstZf8xw4AgVuY1oqFb7f%2BOi0UuCFC4emCSPqc8Dlu6Ujws1zkUummHhHbJ0Ghz4NeTaOw40d6VxxF64xf0oNDx%2F3PDdxN0j9C6FrBUzxgBA9DTvesPSVntWoTOSVoRSbTYJHPVNnHbZtv%2BHakTFsXm8g%2BeC%2F12Zb67B06SoxEv8TjQFMql6murb76dWNzHb89JbRX2kLYVi%2F%2FMMnz7M4GOqUBJWSJ4Vm%2FSOrxKVnE9KAA24svq509axQOeGGHMjL%2FWMo4c2UJDxDchgG2EJo6ujNnUDasjAcofA9fk3f133wECFnRyot8Y4lFvEA9r6j5qlcV61uXXD%2BWVIiDQvl32fU%2FUVrKr%2BLF7Dc665F7TETRbyLSFnDUsb9CYMjr05HIysoVJwTF0iF7YanFLaaFd2ZkiTSW%2BUb5Oj26Q6yOYLDh9bXxnitl&X-Amz-Signature=5f278fb9a77535064afe8598d5f26861999f3fd78000a93ffb4e797874c9e093&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
