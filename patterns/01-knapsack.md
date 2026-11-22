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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662HPSYM5F%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC5HovqO%2FYQ2oQRhXqgBMJp5lDOzqPac4RFrS4grzvMzwIgScyNfPvwxfHpAvUMZH2fBWQhAdU2pwlXagrWbircsZYq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDJkVeTuO8qi%2Fm6xbTircA7M1jtVzy%2F03bQuHse7D4G94bSQh4EDU%2B8Lj%2B%2FiJg%2BFXZkMaDMsQt1rFTdI3uOnDkJKagZnu5%2FIl%2FEMNR06zYehj6vDeZKJddF2mCszahBkS1%2Fy4SYAqMtV4qbkC4%2F5L%2BDbdcAybXEYGanDbew%2Ff1nJBK41RS3HUZn0zvwFsqf7wTb6OWSl2bw7rLEUBfKmMAAR5ND3uiHWOWVqBhqaHM%2BjwDlDcVGL0LJxSUXPb2tRU9m857JkZk8kCIQriT0x5trbaNJ52EwrRqp6i2HMfimALHA26529EAhiUmmW50NWybmHJPZitZIeJApkwScPD4kxNfIMyBuihgabuTw0qHo6ru3mQ96O8PZ41hbchsRuWDH%2FHJYXhodA7YWnb%2Fbj0ZhUrlNqVBncC309s%2FZBoad6ZtEwcircgWeSTE9EWhrqJGViyalRZK3FySm8YZyYmhRlHrLeoGVkbtMRj8bjjQIjMr3kvNKmIyStLR73g%2Fm2nSwTJ6KH9EpF8ctk5hLRXD8c%2FclIwDsVLSkdx5dssXS%2FnTAicefRMWKxTFWVKlU2O884vBJaAd4VfqVrFe8bRD8%2FwbRoMRBrR2gGWPoNIjy9pCNjpwra3%2BUfIe55uw%2BPNmDkxEHY7rk%2BTWT1BMJWMjNgGOqUBD3VMry%2FKg%2FiSHRDVmI%2Byx70sNgkhCkX%2FkjuM1cODx8dGsvRe6q88XhRESjBMsXK3xMtPqCakwK3Prxeili%2B%2B%2B4OITwuqhQ5cWwjjeeRvRnHzc3uth8NECVATFW4bhC1FaZYxYggqjKXyhZc2RPg5GSfqf4NNtMasCtgt%2BrvlfYkIFLscMYxKddd4RCm2Um%2FZ3vjw6dwjal0%2BmAWq%2FeDXq8gBzFaP&X-Amz-Signature=d9106728a51f772d98628b6d2dd50db03a9464d058f204d96916707e391147f2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662HPSYM5F%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC5HovqO%2FYQ2oQRhXqgBMJp5lDOzqPac4RFrS4grzvMzwIgScyNfPvwxfHpAvUMZH2fBWQhAdU2pwlXagrWbircsZYq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDJkVeTuO8qi%2Fm6xbTircA7M1jtVzy%2F03bQuHse7D4G94bSQh4EDU%2B8Lj%2B%2FiJg%2BFXZkMaDMsQt1rFTdI3uOnDkJKagZnu5%2FIl%2FEMNR06zYehj6vDeZKJddF2mCszahBkS1%2Fy4SYAqMtV4qbkC4%2F5L%2BDbdcAybXEYGanDbew%2Ff1nJBK41RS3HUZn0zvwFsqf7wTb6OWSl2bw7rLEUBfKmMAAR5ND3uiHWOWVqBhqaHM%2BjwDlDcVGL0LJxSUXPb2tRU9m857JkZk8kCIQriT0x5trbaNJ52EwrRqp6i2HMfimALHA26529EAhiUmmW50NWybmHJPZitZIeJApkwScPD4kxNfIMyBuihgabuTw0qHo6ru3mQ96O8PZ41hbchsRuWDH%2FHJYXhodA7YWnb%2Fbj0ZhUrlNqVBncC309s%2FZBoad6ZtEwcircgWeSTE9EWhrqJGViyalRZK3FySm8YZyYmhRlHrLeoGVkbtMRj8bjjQIjMr3kvNKmIyStLR73g%2Fm2nSwTJ6KH9EpF8ctk5hLRXD8c%2FclIwDsVLSkdx5dssXS%2FnTAicefRMWKxTFWVKlU2O884vBJaAd4VfqVrFe8bRD8%2FwbRoMRBrR2gGWPoNIjy9pCNjpwra3%2BUfIe55uw%2BPNmDkxEHY7rk%2BTWT1BMJWMjNgGOqUBD3VMry%2FKg%2FiSHRDVmI%2Byx70sNgkhCkX%2FkjuM1cODx8dGsvRe6q88XhRESjBMsXK3xMtPqCakwK3Prxeili%2B%2B%2B4OITwuqhQ5cWwjjeeRvRnHzc3uth8NECVATFW4bhC1FaZYxYggqjKXyhZc2RPg5GSfqf4NNtMasCtgt%2BrvlfYkIFLscMYxKddd4RCm2Um%2FZ3vjw6dwjal0%2BmAWq%2FeDXq8gBzFaP&X-Amz-Signature=bcffa0d43c2de0d246ea46c704b88b6bac349759113e39bc6853b501289f3962&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662HPSYM5F%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC5HovqO%2FYQ2oQRhXqgBMJp5lDOzqPac4RFrS4grzvMzwIgScyNfPvwxfHpAvUMZH2fBWQhAdU2pwlXagrWbircsZYq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDJkVeTuO8qi%2Fm6xbTircA7M1jtVzy%2F03bQuHse7D4G94bSQh4EDU%2B8Lj%2B%2FiJg%2BFXZkMaDMsQt1rFTdI3uOnDkJKagZnu5%2FIl%2FEMNR06zYehj6vDeZKJddF2mCszahBkS1%2Fy4SYAqMtV4qbkC4%2F5L%2BDbdcAybXEYGanDbew%2Ff1nJBK41RS3HUZn0zvwFsqf7wTb6OWSl2bw7rLEUBfKmMAAR5ND3uiHWOWVqBhqaHM%2BjwDlDcVGL0LJxSUXPb2tRU9m857JkZk8kCIQriT0x5trbaNJ52EwrRqp6i2HMfimALHA26529EAhiUmmW50NWybmHJPZitZIeJApkwScPD4kxNfIMyBuihgabuTw0qHo6ru3mQ96O8PZ41hbchsRuWDH%2FHJYXhodA7YWnb%2Fbj0ZhUrlNqVBncC309s%2FZBoad6ZtEwcircgWeSTE9EWhrqJGViyalRZK3FySm8YZyYmhRlHrLeoGVkbtMRj8bjjQIjMr3kvNKmIyStLR73g%2Fm2nSwTJ6KH9EpF8ctk5hLRXD8c%2FclIwDsVLSkdx5dssXS%2FnTAicefRMWKxTFWVKlU2O884vBJaAd4VfqVrFe8bRD8%2FwbRoMRBrR2gGWPoNIjy9pCNjpwra3%2BUfIe55uw%2BPNmDkxEHY7rk%2BTWT1BMJWMjNgGOqUBD3VMry%2FKg%2FiSHRDVmI%2Byx70sNgkhCkX%2FkjuM1cODx8dGsvRe6q88XhRESjBMsXK3xMtPqCakwK3Prxeili%2B%2B%2B4OITwuqhQ5cWwjjeeRvRnHzc3uth8NECVATFW4bhC1FaZYxYggqjKXyhZc2RPg5GSfqf4NNtMasCtgt%2BrvlfYkIFLscMYxKddd4RCm2Um%2FZ3vjw6dwjal0%2BmAWq%2FeDXq8gBzFaP&X-Amz-Signature=71dfd18b23cdb44c32df366896ce149a99872fa3bc81578fd17548e22b383966&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXVBACJV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkZUNNZIa4qvSHx0UqsKvMOfmJ6FwgIGAa4NhlYLwjtAiB%2B3D3pN8TCZAhq8x8%2FrxQvA1qOEadLUAghx8CL9%2BrFWSr%2FAwhfEAAaDDYzNzQyMzE4MzgwNSIMPgY5adO1rV7wIQRXKtwDCrKLFIzqg%2BCVCWHEvdtDK9oIX6yj4xVv8faima7BR0hPDB7K34QkC36K42lBP1PIJPOf39CN3RkX2DQufQBTitaJXmcOTQemL3XQg1zoCMcIWMfRMKauC2AGEOU0pVB5lAbALsjwOqvGbC29O1eEGECTC382mXM0PnaYTJvS%2FkE7I%2B1xqn%2FSvuDsrNDVnHTPNyqMTdggFFksyt%2BQwIL786nxSnu79GHNeOFbhvO6aM0rUG8GRyKCEHqbywRIQGJHnS%2FyC8gUOyMee2NHCWK5WJ0GiPKoIL%2Bke20IMshpEwscoUBgX09EnKudWzc7xBAulFtzQS8x6wSz2NRBr%2BQvibp7PTr4tFWziJW5VRxNpyRtt48tnWzZOPPF5gZLph5enWTiVlY6WQ%2BEAhre12i57kjYWCJ58D5OYi0xYYpb4uBoXv97gg%2Bzs87FcuMteetgBuvQ%2F%2FP5RP8sM4XxAlppB%2BnU%2BvxtcumNbIW3lG14hmHIxwA0k1ing3lfeunrOZuYUx7HpWhzmtdqghtceG3L6af8PpMlhE34Ckc62794zs4yiMlwhmS9ReJJ%2FWoZdDbeiatZMs2PZd8ZnPtS54Jps4Q%2FaDqHDKQD8KarRCPH8meCAOM8WPaUpURHjVgw84uM2AY6pgEWbxQHOhqudXXb77l4HtUQfbQxRccjN2IqZGsX5%2BoxSGvEScBP%2F6AqYI3cCg%2BdH51pTs1GEKSvVKfOU%2BN6veleisrnGqZulVLu6ifhLXMXoksWxMrb%2BDZhh02i1QAIXs1BYEdh4BnX9hQO3Vc0L0KSNAIXEsShxONdpHsrPsgAxkLvlzEgQboNr69EcVs8uhX57d%2BOu3E7ce3o%2F3FEN1L%2BaWt%2F7FDp&X-Amz-Signature=bfb7a18ae9235b5081b8629db92e85782a01783d236dddab7dd84749312feeef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXVBACJV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkZUNNZIa4qvSHx0UqsKvMOfmJ6FwgIGAa4NhlYLwjtAiB%2B3D3pN8TCZAhq8x8%2FrxQvA1qOEadLUAghx8CL9%2BrFWSr%2FAwhfEAAaDDYzNzQyMzE4MzgwNSIMPgY5adO1rV7wIQRXKtwDCrKLFIzqg%2BCVCWHEvdtDK9oIX6yj4xVv8faima7BR0hPDB7K34QkC36K42lBP1PIJPOf39CN3RkX2DQufQBTitaJXmcOTQemL3XQg1zoCMcIWMfRMKauC2AGEOU0pVB5lAbALsjwOqvGbC29O1eEGECTC382mXM0PnaYTJvS%2FkE7I%2B1xqn%2FSvuDsrNDVnHTPNyqMTdggFFksyt%2BQwIL786nxSnu79GHNeOFbhvO6aM0rUG8GRyKCEHqbywRIQGJHnS%2FyC8gUOyMee2NHCWK5WJ0GiPKoIL%2Bke20IMshpEwscoUBgX09EnKudWzc7xBAulFtzQS8x6wSz2NRBr%2BQvibp7PTr4tFWziJW5VRxNpyRtt48tnWzZOPPF5gZLph5enWTiVlY6WQ%2BEAhre12i57kjYWCJ58D5OYi0xYYpb4uBoXv97gg%2Bzs87FcuMteetgBuvQ%2F%2FP5RP8sM4XxAlppB%2BnU%2BvxtcumNbIW3lG14hmHIxwA0k1ing3lfeunrOZuYUx7HpWhzmtdqghtceG3L6af8PpMlhE34Ckc62794zs4yiMlwhmS9ReJJ%2FWoZdDbeiatZMs2PZd8ZnPtS54Jps4Q%2FaDqHDKQD8KarRCPH8meCAOM8WPaUpURHjVgw84uM2AY6pgEWbxQHOhqudXXb77l4HtUQfbQxRccjN2IqZGsX5%2BoxSGvEScBP%2F6AqYI3cCg%2BdH51pTs1GEKSvVKfOU%2BN6veleisrnGqZulVLu6ifhLXMXoksWxMrb%2BDZhh02i1QAIXs1BYEdh4BnX9hQO3Vc0L0KSNAIXEsShxONdpHsrPsgAxkLvlzEgQboNr69EcVs8uhX57d%2BOu3E7ce3o%2F3FEN1L%2BaWt%2F7FDp&X-Amz-Signature=cc40014d72fbd565c141b7cbf1832e2f1df8ca9a5305b2d4afd6ef6f8c23f936&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXVBACJV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkZUNNZIa4qvSHx0UqsKvMOfmJ6FwgIGAa4NhlYLwjtAiB%2B3D3pN8TCZAhq8x8%2FrxQvA1qOEadLUAghx8CL9%2BrFWSr%2FAwhfEAAaDDYzNzQyMzE4MzgwNSIMPgY5adO1rV7wIQRXKtwDCrKLFIzqg%2BCVCWHEvdtDK9oIX6yj4xVv8faima7BR0hPDB7K34QkC36K42lBP1PIJPOf39CN3RkX2DQufQBTitaJXmcOTQemL3XQg1zoCMcIWMfRMKauC2AGEOU0pVB5lAbALsjwOqvGbC29O1eEGECTC382mXM0PnaYTJvS%2FkE7I%2B1xqn%2FSvuDsrNDVnHTPNyqMTdggFFksyt%2BQwIL786nxSnu79GHNeOFbhvO6aM0rUG8GRyKCEHqbywRIQGJHnS%2FyC8gUOyMee2NHCWK5WJ0GiPKoIL%2Bke20IMshpEwscoUBgX09EnKudWzc7xBAulFtzQS8x6wSz2NRBr%2BQvibp7PTr4tFWziJW5VRxNpyRtt48tnWzZOPPF5gZLph5enWTiVlY6WQ%2BEAhre12i57kjYWCJ58D5OYi0xYYpb4uBoXv97gg%2Bzs87FcuMteetgBuvQ%2F%2FP5RP8sM4XxAlppB%2BnU%2BvxtcumNbIW3lG14hmHIxwA0k1ing3lfeunrOZuYUx7HpWhzmtdqghtceG3L6af8PpMlhE34Ckc62794zs4yiMlwhmS9ReJJ%2FWoZdDbeiatZMs2PZd8ZnPtS54Jps4Q%2FaDqHDKQD8KarRCPH8meCAOM8WPaUpURHjVgw84uM2AY6pgEWbxQHOhqudXXb77l4HtUQfbQxRccjN2IqZGsX5%2BoxSGvEScBP%2F6AqYI3cCg%2BdH51pTs1GEKSvVKfOU%2BN6veleisrnGqZulVLu6ifhLXMXoksWxMrb%2BDZhh02i1QAIXs1BYEdh4BnX9hQO3Vc0L0KSNAIXEsShxONdpHsrPsgAxkLvlzEgQboNr69EcVs8uhX57d%2BOu3E7ce3o%2F3FEN1L%2BaWt%2F7FDp&X-Amz-Signature=e29703959eb4901b92c5013aa261141f21c69e4c3f1220651ca3004a331ba41b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXVBACJV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkZUNNZIa4qvSHx0UqsKvMOfmJ6FwgIGAa4NhlYLwjtAiB%2B3D3pN8TCZAhq8x8%2FrxQvA1qOEadLUAghx8CL9%2BrFWSr%2FAwhfEAAaDDYzNzQyMzE4MzgwNSIMPgY5adO1rV7wIQRXKtwDCrKLFIzqg%2BCVCWHEvdtDK9oIX6yj4xVv8faima7BR0hPDB7K34QkC36K42lBP1PIJPOf39CN3RkX2DQufQBTitaJXmcOTQemL3XQg1zoCMcIWMfRMKauC2AGEOU0pVB5lAbALsjwOqvGbC29O1eEGECTC382mXM0PnaYTJvS%2FkE7I%2B1xqn%2FSvuDsrNDVnHTPNyqMTdggFFksyt%2BQwIL786nxSnu79GHNeOFbhvO6aM0rUG8GRyKCEHqbywRIQGJHnS%2FyC8gUOyMee2NHCWK5WJ0GiPKoIL%2Bke20IMshpEwscoUBgX09EnKudWzc7xBAulFtzQS8x6wSz2NRBr%2BQvibp7PTr4tFWziJW5VRxNpyRtt48tnWzZOPPF5gZLph5enWTiVlY6WQ%2BEAhre12i57kjYWCJ58D5OYi0xYYpb4uBoXv97gg%2Bzs87FcuMteetgBuvQ%2F%2FP5RP8sM4XxAlppB%2BnU%2BvxtcumNbIW3lG14hmHIxwA0k1ing3lfeunrOZuYUx7HpWhzmtdqghtceG3L6af8PpMlhE34Ckc62794zs4yiMlwhmS9ReJJ%2FWoZdDbeiatZMs2PZd8ZnPtS54Jps4Q%2FaDqHDKQD8KarRCPH8meCAOM8WPaUpURHjVgw84uM2AY6pgEWbxQHOhqudXXb77l4HtUQfbQxRccjN2IqZGsX5%2BoxSGvEScBP%2F6AqYI3cCg%2BdH51pTs1GEKSvVKfOU%2BN6veleisrnGqZulVLu6ifhLXMXoksWxMrb%2BDZhh02i1QAIXs1BYEdh4BnX9hQO3Vc0L0KSNAIXEsShxONdpHsrPsgAxkLvlzEgQboNr69EcVs8uhX57d%2BOu3E7ce3o%2F3FEN1L%2BaWt%2F7FDp&X-Amz-Signature=ed0412851d90ecd69c03312eaba9d9b71d4e5e59e20993c4d00918ee9db57114&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHPPQO33%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD3FCQLCPPv%2BZMjGURA2Hhv09anbSzEgJis8E3lTrRXVAIgAbo6%2BCgrSQHzLJvoPOCOBvxoQaWvBe4hiiEvkiZDdRMq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDBmMLyK9cMyv0kQQzCrcA4iUbFXwD6VlEa%2BGob3G5Z5lkvuGTyqd5uq1CAOTq72tsk4Tp7JFviKi0V07BpAA3S6HCyX0B8wuxFFb%2FpQ7YCFz%2Bssj09cqBN1sst2g8e2Q8edFdjs45XloOJfcp6XnzYQYhuBz4OQN8sRbuTV2uPRde9I06sDtBQWJnQcoHdssxS7bpr5K0rOuioZq9%2BZ4z%2BiOMPdA6r8AAcO7y1khDTTl10Zqy%2FMxda2%2B6a6kjndvdl7uM6BEqufIKcCE1Nvor%2BhUGCXo1Epzwgus91o2w4lWcJon3eqoQO2vFkGqxst2c1oQfxrwIhhZ5TEmOhgYsUDyGx2sMSrckauIryd1jYGzfCGntTPALDctrEICq3fRaHmgOitobet8moydtpY%2Fpi1ondZ98ftdLaBnePCN2qPPHzVlDoc32qtJASS%2Bv1yQjpekOgF92oa%2BTyoN23nM3E6LMF2ng88ZaUB9yz3YmhvwbKdgG%2BDy0dJ5ROMYUUPa3Eeb1PyXqRKMRqqO2G%2B8Lvuq4YXxeSud2cYe6GoKnrvtidkZY0N5RwFY9jYtuHKTa%2FNcNq%2FxFKBbQOW30iltBlpcWBtx7gyrtzF%2BV2lzRSNRYZUCxnPYyDbWl%2BX4MaC1oVICtyjgVsfmqi5HMOSMjNgGOqUBbVNCVE%2FWmGzt3iGVsrhJ42%2Bnk1i8k6TSSkonpLFbFqzzvs8A2%2FY5uOoVUeW3r%2Bs4Y5OEF5k05O9eu24Gfoz6s8XyrO3yyUIf3ljLZbIS4vvQ46xTJGVrtib4qgLM8BGmRMwOGZbLK%2BqyEa3rDOqytUThLnB6qAfsH8fFCwwiJBwp4L19BnNkR3xT0MB9T%2BoYivrf36IBugSuf7pGzScJlMpfbzZb&X-Amz-Signature=02cd4fbf1320cfe0c66da82a67affa8c67bb0c2fff830f9b776e08657d8b5750&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CHLNBPV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDV%2FBh15Ee6fzWCjmnqwvTgR3324TSM%2BK20IWYbgvK96QIhAOREQOxx4T%2BTlr5BlEFBfr8I7hdXEwxP7KaPLuqXtz5nKv8DCF8QABoMNjM3NDIzMTgzODA1Igzkk%2FDnjA0%2FLN9ZI9gq3AN19PIongZgiZ6Tre9x9Rv0bGcvXEQOFIfduafgntDh6Cab6qFni3vBwPAUDVVk8gmllRUWMzsu%2FafOi6nhTHo4zMQePPdBf5f9yuwydDeCHZmUJ%2FlynwoHiV9A8sZyLHBeQb72Tnz7ak9tT4wl%2F%2F6hqbmylcEiWG5hLakyXmAtVkCxCS9f27UeZE4eQfqmMnGr70qd1jFPi93i0xSYyXmQLgwDiv5L0ufvJX5uwdFJCWfFSTopuQSbVaHU8nXCBvQhVGCVcDwLEwHVr9cuVXRyq07klFFoMhn30seDrHkpzmo%2FR%2B7ZqXRZ4pskY4uM2WCpuCYAv30Vx4zDyFJ%2FyQxRaU7AhM5mclxqo8yNFrAtpDm4KqPNPJGdO7xyhPZoHkhvPz7LCqoZxK3j4Qg%2Ft6yrMYtPi8iUdgYhMOBDxHVQ2Q%2BV1gixgoyU80ZxN7yHzUYwbOqZvHKgRBYq1vYjzxOT79aXvy7w%2Bj0Eai1TICRur4fiWnrKrxIBMGwSguAcBS07lU8Gyl3%2BL2LVbpemAbGJoda620qCCcg9rJXKrRnnhRoHLbZa6KNaAij%2F%2FSUrmIrr%2BOlSSk74tuwFmon6kgXVhx%2BFh8Tj205rHs7z9RbLCn2PUEJPoizWJFirkTChi4zYBjqkAdh6pg%2FbkixvGaPuQgyD1wr6BSHEgX1vSh0YxDmFdY5gmp8aHyrX6Dcvh3N0bxWdUbTc9Zdh1zsZKzfH8WmXOAMSoQUzjuYsDX9XVl9FUzn84xaL87qDqxhCbsxEZwFSmkg2ViK%2Bhpli%2FPr6cCMuUm8OFEazbP16DSFxDFkGA%2F4JzusPiiPOkT6Ym9RLK%2FUDVWEYDbbHsM%2Ff%2FNA4uW0roIyAOTp5&X-Amz-Signature=4a19c98c3b16f9d6c5b4ce36c23164bdeb1c9397324d651b0f2ca6ab03ff0dcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CHLNBPV%2F20261122%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261122T155550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDV%2FBh15Ee6fzWCjmnqwvTgR3324TSM%2BK20IWYbgvK96QIhAOREQOxx4T%2BTlr5BlEFBfr8I7hdXEwxP7KaPLuqXtz5nKv8DCF8QABoMNjM3NDIzMTgzODA1Igzkk%2FDnjA0%2FLN9ZI9gq3AN19PIongZgiZ6Tre9x9Rv0bGcvXEQOFIfduafgntDh6Cab6qFni3vBwPAUDVVk8gmllRUWMzsu%2FafOi6nhTHo4zMQePPdBf5f9yuwydDeCHZmUJ%2FlynwoHiV9A8sZyLHBeQb72Tnz7ak9tT4wl%2F%2F6hqbmylcEiWG5hLakyXmAtVkCxCS9f27UeZE4eQfqmMnGr70qd1jFPi93i0xSYyXmQLgwDiv5L0ufvJX5uwdFJCWfFSTopuQSbVaHU8nXCBvQhVGCVcDwLEwHVr9cuVXRyq07klFFoMhn30seDrHkpzmo%2FR%2B7ZqXRZ4pskY4uM2WCpuCYAv30Vx4zDyFJ%2FyQxRaU7AhM5mclxqo8yNFrAtpDm4KqPNPJGdO7xyhPZoHkhvPz7LCqoZxK3j4Qg%2Ft6yrMYtPi8iUdgYhMOBDxHVQ2Q%2BV1gixgoyU80ZxN7yHzUYwbOqZvHKgRBYq1vYjzxOT79aXvy7w%2Bj0Eai1TICRur4fiWnrKrxIBMGwSguAcBS07lU8Gyl3%2BL2LVbpemAbGJoda620qCCcg9rJXKrRnnhRoHLbZa6KNaAij%2F%2FSUrmIrr%2BOlSSk74tuwFmon6kgXVhx%2BFh8Tj205rHs7z9RbLCn2PUEJPoizWJFirkTChi4zYBjqkAdh6pg%2FbkixvGaPuQgyD1wr6BSHEgX1vSh0YxDmFdY5gmp8aHyrX6Dcvh3N0bxWdUbTc9Zdh1zsZKzfH8WmXOAMSoQUzjuYsDX9XVl9FUzn84xaL87qDqxhCbsxEZwFSmkg2ViK%2Bhpli%2FPr6cCMuUm8OFEazbP16DSFxDFkGA%2F4JzusPiiPOkT6Ym9RLK%2FUDVWEYDbbHsM%2Ff%2FNA4uW0roIyAOTp5&X-Amz-Signature=1933a12c72ce8c76ac6d7d11bdd7029bcc8d111fd22b94aee7e2158cc901a54e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
