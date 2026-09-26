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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YN3YT5QE%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIFTl6%2FNjacUJQO5UlMLR5M1149i4h8uGYYDpJ6%2Bq3xvJAiBXMvtAZGTLLSCETsh2v64uowq3JVVGMKZ06rBPDSkjfir%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMTAJXpA%2BccOyXK2R3KtwDrCsfwpewHz1OrIjkcomailk5NrsmBsZtrwf0m8Us%2BGbm02q7IGSOGmPeZelVwJgvuL%2BR4C7Iq%2FfKnmuTmJojgFd%2BKIJn%2Fs0cTUxPZAca2SwhHI9%2BUUnANaZsRMLzo95Pk4ejtjLlEJMIb6DlzB4A1XCw8ui1oO82FzAVR7p3HWodiO4GGux2vOImNvaJBT2RZ29wfrj%2BXlNflYqT%2FLZfeaUGiaeOCryzCozH3VNZtZ35SkChS9WnZT2gft%2FW%2Fh8j%2FpkjBr%2FOnTiKE4QWyLHTbswduagyLaol3ozRpYvvLhkevVxR9rboEsaIfbsSJUtHC%2BT256pEEkgkw53fFjYRRixVOVv1HXvi%2FvgiMzEtov5AwK2TlxJG034G2WmVQG41mk4fxbFi9mgL2ZoUwAxJyrU565ndjsw9aUzMsMWNrhoIHiHIQEnIMOelZN3AeexaNWXDclFmKVQyNXNISrhFY%2B0IuZCfphjWc2IjtQ7UcoZTZ4BIEv%2BWN3GB6zbSVrf6yRJ9PGC6VzgkBxr4JqFfHR3NSi%2BW1ygld%2FVkjmwMa%2BXMdfMSOKIzvqC97FlZmFwWX1%2BBnNDUxMk6RMt8JoxgZOHmw2TYqnCq63EsLlfAEFeEIboz2ZF24xtTpYUw9r3e1QY6pgHQtwdiZ3FNBmTbsYTgvzQXsU58BNtjegFqk563Bt9TrYFHy3oDBSX7WLc7ds%2Fx9MptwkznUuv%2FLiAFc5YJLQiPrsex%2BAna1FzI2dGmua%2BHWtzRhLZ2m9TzY2fsMVJ2W5aK6NgYA%2FNOvfhVhBOZgdvYyz2q%2Fln9l6esJGzrRQY3AdXxZQ3nUDgyWcvs%2F6VznhAECSb1bJKFm%2FaC6EPY2XsoYw4iek1K&X-Amz-Signature=57e1aa4354f947a46e6b2225363da85347ed17c029b6048234f44b7797a0682e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YN3YT5QE%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIFTl6%2FNjacUJQO5UlMLR5M1149i4h8uGYYDpJ6%2Bq3xvJAiBXMvtAZGTLLSCETsh2v64uowq3JVVGMKZ06rBPDSkjfir%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMTAJXpA%2BccOyXK2R3KtwDrCsfwpewHz1OrIjkcomailk5NrsmBsZtrwf0m8Us%2BGbm02q7IGSOGmPeZelVwJgvuL%2BR4C7Iq%2FfKnmuTmJojgFd%2BKIJn%2Fs0cTUxPZAca2SwhHI9%2BUUnANaZsRMLzo95Pk4ejtjLlEJMIb6DlzB4A1XCw8ui1oO82FzAVR7p3HWodiO4GGux2vOImNvaJBT2RZ29wfrj%2BXlNflYqT%2FLZfeaUGiaeOCryzCozH3VNZtZ35SkChS9WnZT2gft%2FW%2Fh8j%2FpkjBr%2FOnTiKE4QWyLHTbswduagyLaol3ozRpYvvLhkevVxR9rboEsaIfbsSJUtHC%2BT256pEEkgkw53fFjYRRixVOVv1HXvi%2FvgiMzEtov5AwK2TlxJG034G2WmVQG41mk4fxbFi9mgL2ZoUwAxJyrU565ndjsw9aUzMsMWNrhoIHiHIQEnIMOelZN3AeexaNWXDclFmKVQyNXNISrhFY%2B0IuZCfphjWc2IjtQ7UcoZTZ4BIEv%2BWN3GB6zbSVrf6yRJ9PGC6VzgkBxr4JqFfHR3NSi%2BW1ygld%2FVkjmwMa%2BXMdfMSOKIzvqC97FlZmFwWX1%2BBnNDUxMk6RMt8JoxgZOHmw2TYqnCq63EsLlfAEFeEIboz2ZF24xtTpYUw9r3e1QY6pgHQtwdiZ3FNBmTbsYTgvzQXsU58BNtjegFqk563Bt9TrYFHy3oDBSX7WLc7ds%2Fx9MptwkznUuv%2FLiAFc5YJLQiPrsex%2BAna1FzI2dGmua%2BHWtzRhLZ2m9TzY2fsMVJ2W5aK6NgYA%2FNOvfhVhBOZgdvYyz2q%2Fln9l6esJGzrRQY3AdXxZQ3nUDgyWcvs%2F6VznhAECSb1bJKFm%2FaC6EPY2XsoYw4iek1K&X-Amz-Signature=c72427b222a51aaade1645900b7a25bced2d52f34b0c568ecccc8212875e97ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YN3YT5QE%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIFTl6%2FNjacUJQO5UlMLR5M1149i4h8uGYYDpJ6%2Bq3xvJAiBXMvtAZGTLLSCETsh2v64uowq3JVVGMKZ06rBPDSkjfir%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMTAJXpA%2BccOyXK2R3KtwDrCsfwpewHz1OrIjkcomailk5NrsmBsZtrwf0m8Us%2BGbm02q7IGSOGmPeZelVwJgvuL%2BR4C7Iq%2FfKnmuTmJojgFd%2BKIJn%2Fs0cTUxPZAca2SwhHI9%2BUUnANaZsRMLzo95Pk4ejtjLlEJMIb6DlzB4A1XCw8ui1oO82FzAVR7p3HWodiO4GGux2vOImNvaJBT2RZ29wfrj%2BXlNflYqT%2FLZfeaUGiaeOCryzCozH3VNZtZ35SkChS9WnZT2gft%2FW%2Fh8j%2FpkjBr%2FOnTiKE4QWyLHTbswduagyLaol3ozRpYvvLhkevVxR9rboEsaIfbsSJUtHC%2BT256pEEkgkw53fFjYRRixVOVv1HXvi%2FvgiMzEtov5AwK2TlxJG034G2WmVQG41mk4fxbFi9mgL2ZoUwAxJyrU565ndjsw9aUzMsMWNrhoIHiHIQEnIMOelZN3AeexaNWXDclFmKVQyNXNISrhFY%2B0IuZCfphjWc2IjtQ7UcoZTZ4BIEv%2BWN3GB6zbSVrf6yRJ9PGC6VzgkBxr4JqFfHR3NSi%2BW1ygld%2FVkjmwMa%2BXMdfMSOKIzvqC97FlZmFwWX1%2BBnNDUxMk6RMt8JoxgZOHmw2TYqnCq63EsLlfAEFeEIboz2ZF24xtTpYUw9r3e1QY6pgHQtwdiZ3FNBmTbsYTgvzQXsU58BNtjegFqk563Bt9TrYFHy3oDBSX7WLc7ds%2Fx9MptwkznUuv%2FLiAFc5YJLQiPrsex%2BAna1FzI2dGmua%2BHWtzRhLZ2m9TzY2fsMVJ2W5aK6NgYA%2FNOvfhVhBOZgdvYyz2q%2Fln9l6esJGzrRQY3AdXxZQ3nUDgyWcvs%2F6VznhAECSb1bJKFm%2FaC6EPY2XsoYw4iek1K&X-Amz-Signature=8a61ef693fb423449578d5b0bd7bdccaadf00d6543435d54966ee319b3f9a3d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665RJFCMG3%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIE%2F9E9TfKDUaNPeUNS9uoPULudH9ukJfTERkKLDk1xdxAiBWBO8dE5ubVwZIi2FG8ODJSVergTCocS1g5V6Ji3Tl7Cr%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMUZf%2BqsE93irvFxTlKtwDlSRdErr4WKYsoQ%2Fg9%2BCSGbkTEifBta%2BHMr8uVIYlIKgTDSY1aKVTHv5P43RMV3xG5Ad0P5cESeyeWDDcXbMTvw7oCy%2B%2F89APu39TJ%2FisgVZnFZRw2Mv1LFMGHlIzai6j8RktHH%2F9aak7Tii7YHGm%2Bff5%2BYovVR6Pv4sFHAG4U3dA%2FdNHBfSXwsFX6aYymHUifnmqd%2BKGU1udFwxcctozK2xvaCSJbknNRdHfeSxfZMwtRSp%2B8meaiXRRa7bPxUst5G4j5cKYTC2ImHLrTBPZJixthszpXpKNR2qg0X20QjP72Ltyog%2BKQ0zAyjd%2BWtvhvKep5jmDay16Vb2N2J5NJyCHw7Nj2YxTMeWQpgd%2F88jjGcMmo7rmTAF0LbwgPgShUJQqH26dq4Onb6yigve9b2xyIEf9CuIW7FyMrHQ6c0E7nVYrfAXsvdVZcIV74Pl%2FUB3Zjmsg%2FKQ4kd3Ud3WxBLNFrONYBKhgy4uyK7vBOI7xFfgKo80qtDy3%2FzOirwtjKHTiwL1wNG3l9yiSEj7vJb0qwdoCzNg84Rlx6UKmRLjvwz2ORqhYXeZ7FFDjP7aDP2xfB5Jecd3r5eLL7y1lIwotVPDakdPjrwzzZPkk8Es5n43ApF4fSuf5X4EwwL7e1QY6pgG0IUoWJPCZ1EBKaxuxpDcTDhsmmVaLYKKbZ4WtU9ZeZvlyuAvjokPffmMK1lkEBbij2EujarHVn205LWZ9cdASztjFticoFtARv6XpA0sUgq%2B%2B5ZRh59Wo5RVUg8BXR0Z37Y6bRRNfZOhgUX%2BswPbZrI1lpCxcdygBKegT9au588vYPPrgeAyUrFx6hQgnoRDFPGZTkWprtARLpY2VwthWh7foGeps&X-Amz-Signature=672972ca15335b0200d1398e38ac7aff011ba9192c65e026e94986a4ff5dc93d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665RJFCMG3%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIE%2F9E9TfKDUaNPeUNS9uoPULudH9ukJfTERkKLDk1xdxAiBWBO8dE5ubVwZIi2FG8ODJSVergTCocS1g5V6Ji3Tl7Cr%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMUZf%2BqsE93irvFxTlKtwDlSRdErr4WKYsoQ%2Fg9%2BCSGbkTEifBta%2BHMr8uVIYlIKgTDSY1aKVTHv5P43RMV3xG5Ad0P5cESeyeWDDcXbMTvw7oCy%2B%2F89APu39TJ%2FisgVZnFZRw2Mv1LFMGHlIzai6j8RktHH%2F9aak7Tii7YHGm%2Bff5%2BYovVR6Pv4sFHAG4U3dA%2FdNHBfSXwsFX6aYymHUifnmqd%2BKGU1udFwxcctozK2xvaCSJbknNRdHfeSxfZMwtRSp%2B8meaiXRRa7bPxUst5G4j5cKYTC2ImHLrTBPZJixthszpXpKNR2qg0X20QjP72Ltyog%2BKQ0zAyjd%2BWtvhvKep5jmDay16Vb2N2J5NJyCHw7Nj2YxTMeWQpgd%2F88jjGcMmo7rmTAF0LbwgPgShUJQqH26dq4Onb6yigve9b2xyIEf9CuIW7FyMrHQ6c0E7nVYrfAXsvdVZcIV74Pl%2FUB3Zjmsg%2FKQ4kd3Ud3WxBLNFrONYBKhgy4uyK7vBOI7xFfgKo80qtDy3%2FzOirwtjKHTiwL1wNG3l9yiSEj7vJb0qwdoCzNg84Rlx6UKmRLjvwz2ORqhYXeZ7FFDjP7aDP2xfB5Jecd3r5eLL7y1lIwotVPDakdPjrwzzZPkk8Es5n43ApF4fSuf5X4EwwL7e1QY6pgG0IUoWJPCZ1EBKaxuxpDcTDhsmmVaLYKKbZ4WtU9ZeZvlyuAvjokPffmMK1lkEBbij2EujarHVn205LWZ9cdASztjFticoFtARv6XpA0sUgq%2B%2B5ZRh59Wo5RVUg8BXR0Z37Y6bRRNfZOhgUX%2BswPbZrI1lpCxcdygBKegT9au588vYPPrgeAyUrFx6hQgnoRDFPGZTkWprtARLpY2VwthWh7foGeps&X-Amz-Signature=16150af464a9e80d9f8a78620a42efd417d42213ab5e280dec2a45c4babb9730&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665RJFCMG3%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIE%2F9E9TfKDUaNPeUNS9uoPULudH9ukJfTERkKLDk1xdxAiBWBO8dE5ubVwZIi2FG8ODJSVergTCocS1g5V6Ji3Tl7Cr%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMUZf%2BqsE93irvFxTlKtwDlSRdErr4WKYsoQ%2Fg9%2BCSGbkTEifBta%2BHMr8uVIYlIKgTDSY1aKVTHv5P43RMV3xG5Ad0P5cESeyeWDDcXbMTvw7oCy%2B%2F89APu39TJ%2FisgVZnFZRw2Mv1LFMGHlIzai6j8RktHH%2F9aak7Tii7YHGm%2Bff5%2BYovVR6Pv4sFHAG4U3dA%2FdNHBfSXwsFX6aYymHUifnmqd%2BKGU1udFwxcctozK2xvaCSJbknNRdHfeSxfZMwtRSp%2B8meaiXRRa7bPxUst5G4j5cKYTC2ImHLrTBPZJixthszpXpKNR2qg0X20QjP72Ltyog%2BKQ0zAyjd%2BWtvhvKep5jmDay16Vb2N2J5NJyCHw7Nj2YxTMeWQpgd%2F88jjGcMmo7rmTAF0LbwgPgShUJQqH26dq4Onb6yigve9b2xyIEf9CuIW7FyMrHQ6c0E7nVYrfAXsvdVZcIV74Pl%2FUB3Zjmsg%2FKQ4kd3Ud3WxBLNFrONYBKhgy4uyK7vBOI7xFfgKo80qtDy3%2FzOirwtjKHTiwL1wNG3l9yiSEj7vJb0qwdoCzNg84Rlx6UKmRLjvwz2ORqhYXeZ7FFDjP7aDP2xfB5Jecd3r5eLL7y1lIwotVPDakdPjrwzzZPkk8Es5n43ApF4fSuf5X4EwwL7e1QY6pgG0IUoWJPCZ1EBKaxuxpDcTDhsmmVaLYKKbZ4WtU9ZeZvlyuAvjokPffmMK1lkEBbij2EujarHVn205LWZ9cdASztjFticoFtARv6XpA0sUgq%2B%2B5ZRh59Wo5RVUg8BXR0Z37Y6bRRNfZOhgUX%2BswPbZrI1lpCxcdygBKegT9au588vYPPrgeAyUrFx6hQgnoRDFPGZTkWprtARLpY2VwthWh7foGeps&X-Amz-Signature=94ec47e31da204464fe8d7cfa76fe1c3d08bb94b26c055015a73de987a04f339&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665RJFCMG3%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJGMEQCIE%2F9E9TfKDUaNPeUNS9uoPULudH9ukJfTERkKLDk1xdxAiBWBO8dE5ubVwZIi2FG8ODJSVergTCocS1g5V6Ji3Tl7Cr%2FAwgEEAAaDDYzNzQyMzE4MzgwNSIMUZf%2BqsE93irvFxTlKtwDlSRdErr4WKYsoQ%2Fg9%2BCSGbkTEifBta%2BHMr8uVIYlIKgTDSY1aKVTHv5P43RMV3xG5Ad0P5cESeyeWDDcXbMTvw7oCy%2B%2F89APu39TJ%2FisgVZnFZRw2Mv1LFMGHlIzai6j8RktHH%2F9aak7Tii7YHGm%2Bff5%2BYovVR6Pv4sFHAG4U3dA%2FdNHBfSXwsFX6aYymHUifnmqd%2BKGU1udFwxcctozK2xvaCSJbknNRdHfeSxfZMwtRSp%2B8meaiXRRa7bPxUst5G4j5cKYTC2ImHLrTBPZJixthszpXpKNR2qg0X20QjP72Ltyog%2BKQ0zAyjd%2BWtvhvKep5jmDay16Vb2N2J5NJyCHw7Nj2YxTMeWQpgd%2F88jjGcMmo7rmTAF0LbwgPgShUJQqH26dq4Onb6yigve9b2xyIEf9CuIW7FyMrHQ6c0E7nVYrfAXsvdVZcIV74Pl%2FUB3Zjmsg%2FKQ4kd3Ud3WxBLNFrONYBKhgy4uyK7vBOI7xFfgKo80qtDy3%2FzOirwtjKHTiwL1wNG3l9yiSEj7vJb0qwdoCzNg84Rlx6UKmRLjvwz2ORqhYXeZ7FFDjP7aDP2xfB5Jecd3r5eLL7y1lIwotVPDakdPjrwzzZPkk8Es5n43ApF4fSuf5X4EwwL7e1QY6pgG0IUoWJPCZ1EBKaxuxpDcTDhsmmVaLYKKbZ4WtU9ZeZvlyuAvjokPffmMK1lkEBbij2EujarHVn205LWZ9cdASztjFticoFtARv6XpA0sUgq%2B%2B5ZRh59Wo5RVUg8BXR0Z37Y6bRRNfZOhgUX%2BswPbZrI1lpCxcdygBKegT9au588vYPPrgeAyUrFx6hQgnoRDFPGZTkWprtARLpY2VwthWh7foGeps&X-Amz-Signature=8555bd6a513b85bbfeefc79921c99cc5df0d4d2c792820d8727c8e206d83eb7b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZOEB3JE%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJHMEUCIBRC1Fg5j%2BGBpVH2WUZa4d3E7j6kanbzEsbAIsZLqlwcAiEAiURXmN%2FFKjjTHA%2Bt%2Ftre5yqgfANbLwEsIn27kPZEBrQq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDNdL6JiG3sYypVq%2BjCrcAzoB6TSdCw2pfWl8RzielND9RmK0oUtf3zjvL2dVEMsP8CFGPUeICxkINJKe9k24fJ5DRE%2FDEsQ5vLSBjLa4Bnf6qBl%2BTUe9BO3N8XCZZV5rRsjtKoYmrD9GLNjYEX7Sst4yNetmq9YV59eqqd8E%2FPAzfzg%2FBrOfNNCTKjp%2FJD1r00aHThe1utywgf7v7dHqHZPcWXLp1ifUM%2BwIqd182CD36YFsxXM%2B30j3jcWYXqtzoUQDvyAnx19sCN3mSCdujZMQGfYvrgACZY5cMIFd%2BStmVOdI9jlP2KOHNoIvX3%2FwlIKjn%2FzcB0%2BCCjtakCdBw%2BoLN%2Fse4Fo4UL53UVga%2Bn8vZAhAHXnWQRPaW5Dq5%2BuMVKPCouzpOqn8zFyEHxF43Nk%2BDf%2FY9G1K2tcCCOuidA%2F1bKuTbN6z3vS1BytFIR0D4moJRDEg5W7fZ7m9Il8eiq%2BmhlHPGea0olDOF%2BxwNwIsHAtRKZ35fUhb%2Fj2nXJgN428VOVgXLOLexJDrTqiu0AWsPNBWt1qLWXtHwvtUgyVkwnEqjQQpIWu%2Ffn03KbKqpoNDSetmCAONOMlz5d14RR4p3rD4LJMhG0mmq%2B6T%2BhpHu6PZnWEL3cVbeNwOVddb%2Bnvn2ZBQtuUXLy1uMNC%2B3tUGOqUBtgUbgPQ5JBJo2B9Fv9oDKMdXhzFcmAJocG9vaDfQ6vTIBrPAG5N8L7%2F%2Bx98zJrHOzr9NldAqrqak7w%2FFdlDHhIf4uSYmVULhCwrsYcq2qXvfq%2BQ966B3UkVR%2F8RkrznxdjyqZiR%2BM%2FC%2BqbeFGhzTc507vlVllrmDfEP0KNLC4AwOyRIpnJOPrlR%2FZw0I4gZKk7q%2F4MoFhQzU1Tzhp%2BJTi%2FFScpY6&X-Amz-Signature=fe1f558d0f21a7596e772b8188c16a48df0c372ac445486b8ea203c621777582&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VIKQDEO6%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124044Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJHMEUCIQDdqR3YtCOtdBZfM3osXJfMUZBt7vEzonL6wtDvSDoAWAIgGQ7d7bfj1h%2B4%2FNXAGu6qys90ldl9mEv%2FTL%2BWSArYJvgq%2FwMIBBAAGgw2Mzc0MjMxODM4MDUiDIKoCVItn2%2F9a8W2MyrcA%2Ba98o%2B4IsNkdz7IdrXQLPFAZe%2F2di2Lmiz9wlpWS7N%2BUlrL2EVzj1PDWcxdZbvSdJl5P%2FcC1eFlZAoNf1qWqxx%2B874WN8ac6CJW3FU2JmhMhJTCUwp6aIAkwu8i%2BzHjU5vNh5JEzi31pTU%2FFNPFpCqXz0m7uwzRXiM6VVflMQdxjhBzCs4EMG4ZlzQHFtutcYykEPf4RHCy77SONViPX5IwKkGXy9KjRHNleww8NW49AaIled38Vgrz%2B3KlIq%2BqE86x21nWVxjprkxznR5Fu7FWexpaCf7Cg9Jba5lQt4B6PZzgtAvzCCTA%2FUfmX5ZbYuPT%2FTmOtyuXLiG%2BdzrhaeaKGwW4wuIPEhfI991coIoanJzto8bpKX72q3dbIN01ixz0jj7keNpwjOBPwvVO3kt5jVcKoxPxEEXBiqfpAY%2BRP%2FwtTMSRw7P4b8Q7%2FKGqSytOYyk3k%2B7InvU0LoPopR9M91Fue5wxWXfewJO%2F7Rcu0H0M54UDLOdbmR4JsPYoY61NwUhIHkTf7aVp64ceotsiSIFb7Z007Z2SYMeadWux5FG33wwUxNLREqE9BKMCxiQ%2FkirSvwx2FFctX%2FXHbhuUedYgc%2BUPuNks%2B7spSENtdfZd8SROve8j5ZMPMIbA3tUGOqUB7LEOix5LgXECzBjtfp7b2fNcERtEIL%2F3dxQ%2FM54i9T6x%2BPYZ6OSDmcrSGhXzFmTwlVdHlChRKjjYhxwWKtkLESey0u5ZBhaiFXK3Z5GY%2B0%2BCndB%2F%2FSCdmUG1vIkK%2FSjWGScebVxkfQVX9lomsLuRcn%2FVRi4ujvIJ9oA6auzGjfh8E0fLkvuc6r8aCICPPIwoPtWskoNLygWNYNfP5lSRCrWzc5vY&X-Amz-Signature=e1ff4b93e780dc75b2d83a2d7e0cb4601b500a4dc0b13498746b23482643b16a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VIKQDEO6%2F20260926%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260926T124044Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDsaCXVzLXdlc3QtMiJHMEUCIQDdqR3YtCOtdBZfM3osXJfMUZBt7vEzonL6wtDvSDoAWAIgGQ7d7bfj1h%2B4%2FNXAGu6qys90ldl9mEv%2FTL%2BWSArYJvgq%2FwMIBBAAGgw2Mzc0MjMxODM4MDUiDIKoCVItn2%2F9a8W2MyrcA%2Ba98o%2B4IsNkdz7IdrXQLPFAZe%2F2di2Lmiz9wlpWS7N%2BUlrL2EVzj1PDWcxdZbvSdJl5P%2FcC1eFlZAoNf1qWqxx%2B874WN8ac6CJW3FU2JmhMhJTCUwp6aIAkwu8i%2BzHjU5vNh5JEzi31pTU%2FFNPFpCqXz0m7uwzRXiM6VVflMQdxjhBzCs4EMG4ZlzQHFtutcYykEPf4RHCy77SONViPX5IwKkGXy9KjRHNleww8NW49AaIled38Vgrz%2B3KlIq%2BqE86x21nWVxjprkxznR5Fu7FWexpaCf7Cg9Jba5lQt4B6PZzgtAvzCCTA%2FUfmX5ZbYuPT%2FTmOtyuXLiG%2BdzrhaeaKGwW4wuIPEhfI991coIoanJzto8bpKX72q3dbIN01ixz0jj7keNpwjOBPwvVO3kt5jVcKoxPxEEXBiqfpAY%2BRP%2FwtTMSRw7P4b8Q7%2FKGqSytOYyk3k%2B7InvU0LoPopR9M91Fue5wxWXfewJO%2F7Rcu0H0M54UDLOdbmR4JsPYoY61NwUhIHkTf7aVp64ceotsiSIFb7Z007Z2SYMeadWux5FG33wwUxNLREqE9BKMCxiQ%2FkirSvwx2FFctX%2FXHbhuUedYgc%2BUPuNks%2B7spSENtdfZd8SROve8j5ZMPMIbA3tUGOqUB7LEOix5LgXECzBjtfp7b2fNcERtEIL%2F3dxQ%2FM54i9T6x%2BPYZ6OSDmcrSGhXzFmTwlVdHlChRKjjYhxwWKtkLESey0u5ZBhaiFXK3Z5GY%2B0%2BCndB%2F%2FSCdmUG1vIkK%2FSjWGScebVxkfQVX9lomsLuRcn%2FVRi4ujvIJ9oA6auzGjfh8E0fLkvuc6r8aCICPPIwoPtWskoNLygWNYNfP5lSRCrWzc5vY&X-Amz-Signature=3b2a8e408cee8a25e85d55c385f02664166810d2c40acbc34576708ae6236d49&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
