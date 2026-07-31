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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662YNCCCRK%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICZOTb%2FKXOJdKxJTO6OvQ9qlmYbdBGQxwKoV%2Blv%2F3kBNAiA8C9HpxRqcuYTLioaY3Xpd0HZNGI99xn09r45GoFaPPSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTZXFvF0OU0plsjMOKtwDWmWvQMRlQT4qfxwRHAyTpA6dO%2BEI%2F9nthP4eDwU7UoTRbWzQ%2FHD5OfOZWij9IrF%2BOADMPay7abFCDlSu2SAIHXwF%2Bim9Vo7LE1c%2BLid0S%2BOOZ0%2FIV1Tmq3%2B%2BOh9%2FxcP07DoC229UOAAEvVyNNk1eG%2B5AIoj%2B7gFpY5yuYu2G21jAj9vpvmRgIiPSOzaPHgr4kLTX6dXnSK6RWWHsapjJkwtATT8sUKSFN7UgHao%2FPjd%2BhMDaH7YL0uNZOxB8Ofz703PjroaOUHcfZJHSijsGiALHMvQB%2Fw4RD7xegH6e1HHx8se2rr2ltlD3XofXIRLWsIuNIRpZEYjJZ0hKvXBTq%2BwFlRzptF0dbLCK3NDRUQA7UccpTtT2Ta2ghbotEVhhrjvX4g5n9EvM2wqn0KBFIgilBQzpZik2Li3pohtslHqCkv8BKBtEvWnCI61nD0htvTI%2BcV90JKth3Fufji1r6zy1FrO2xfYLPl13Pa%2FDcltx7FoqO7c2%2FTP2AkkgsQ9yFleDEkg8qSA%2FBK7VpiRyV%2BmkWOQyS%2F3vxcvya%2FOxItLZh8Hp%2Fq8kb7XjeocWLBwdz1tgQ5hPUXhPUJqp%2BLD6%2BgUFtbjxP4sJjHS1xZ2PNK6g87lhymbtSo%2BF6IQwl92x0wY6pgG5ATrAA4KbjxVv3DjrgEhixCPibbl3MtFja04aEz1IWlw6LqOHHRgRH1TB6XKsuN3BNH3ZpFpiU3TXD5aIBmIyVHpuq%2Bzsj78Ncn64a%2F5Zf0UplG0Rdjryy4Su2yEwXhGUv4lnud4fknHqIH%2F1DRw1COCzq3QTcaAdU4g%2Fr7%2FpEAWNgrjiMzXUsklAXZSv6rs0wiY4HrGqABsVgH2mBgHI0mLGR5D%2F&X-Amz-Signature=9667f3876377b74803a0fe98ef6428cc82e5c8b78f5da573f2c28b655ba9e60d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662YNCCCRK%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICZOTb%2FKXOJdKxJTO6OvQ9qlmYbdBGQxwKoV%2Blv%2F3kBNAiA8C9HpxRqcuYTLioaY3Xpd0HZNGI99xn09r45GoFaPPSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTZXFvF0OU0plsjMOKtwDWmWvQMRlQT4qfxwRHAyTpA6dO%2BEI%2F9nthP4eDwU7UoTRbWzQ%2FHD5OfOZWij9IrF%2BOADMPay7abFCDlSu2SAIHXwF%2Bim9Vo7LE1c%2BLid0S%2BOOZ0%2FIV1Tmq3%2B%2BOh9%2FxcP07DoC229UOAAEvVyNNk1eG%2B5AIoj%2B7gFpY5yuYu2G21jAj9vpvmRgIiPSOzaPHgr4kLTX6dXnSK6RWWHsapjJkwtATT8sUKSFN7UgHao%2FPjd%2BhMDaH7YL0uNZOxB8Ofz703PjroaOUHcfZJHSijsGiALHMvQB%2Fw4RD7xegH6e1HHx8se2rr2ltlD3XofXIRLWsIuNIRpZEYjJZ0hKvXBTq%2BwFlRzptF0dbLCK3NDRUQA7UccpTtT2Ta2ghbotEVhhrjvX4g5n9EvM2wqn0KBFIgilBQzpZik2Li3pohtslHqCkv8BKBtEvWnCI61nD0htvTI%2BcV90JKth3Fufji1r6zy1FrO2xfYLPl13Pa%2FDcltx7FoqO7c2%2FTP2AkkgsQ9yFleDEkg8qSA%2FBK7VpiRyV%2BmkWOQyS%2F3vxcvya%2FOxItLZh8Hp%2Fq8kb7XjeocWLBwdz1tgQ5hPUXhPUJqp%2BLD6%2BgUFtbjxP4sJjHS1xZ2PNK6g87lhymbtSo%2BF6IQwl92x0wY6pgG5ATrAA4KbjxVv3DjrgEhixCPibbl3MtFja04aEz1IWlw6LqOHHRgRH1TB6XKsuN3BNH3ZpFpiU3TXD5aIBmIyVHpuq%2Bzsj78Ncn64a%2F5Zf0UplG0Rdjryy4Su2yEwXhGUv4lnud4fknHqIH%2F1DRw1COCzq3QTcaAdU4g%2Fr7%2FpEAWNgrjiMzXUsklAXZSv6rs0wiY4HrGqABsVgH2mBgHI0mLGR5D%2F&X-Amz-Signature=1bc0f568022ece89db0ea8ea24a0b78713c770012b8e6f0b5538a10dbf830d14&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662YNCCCRK%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICZOTb%2FKXOJdKxJTO6OvQ9qlmYbdBGQxwKoV%2Blv%2F3kBNAiA8C9HpxRqcuYTLioaY3Xpd0HZNGI99xn09r45GoFaPPSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTZXFvF0OU0plsjMOKtwDWmWvQMRlQT4qfxwRHAyTpA6dO%2BEI%2F9nthP4eDwU7UoTRbWzQ%2FHD5OfOZWij9IrF%2BOADMPay7abFCDlSu2SAIHXwF%2Bim9Vo7LE1c%2BLid0S%2BOOZ0%2FIV1Tmq3%2B%2BOh9%2FxcP07DoC229UOAAEvVyNNk1eG%2B5AIoj%2B7gFpY5yuYu2G21jAj9vpvmRgIiPSOzaPHgr4kLTX6dXnSK6RWWHsapjJkwtATT8sUKSFN7UgHao%2FPjd%2BhMDaH7YL0uNZOxB8Ofz703PjroaOUHcfZJHSijsGiALHMvQB%2Fw4RD7xegH6e1HHx8se2rr2ltlD3XofXIRLWsIuNIRpZEYjJZ0hKvXBTq%2BwFlRzptF0dbLCK3NDRUQA7UccpTtT2Ta2ghbotEVhhrjvX4g5n9EvM2wqn0KBFIgilBQzpZik2Li3pohtslHqCkv8BKBtEvWnCI61nD0htvTI%2BcV90JKth3Fufji1r6zy1FrO2xfYLPl13Pa%2FDcltx7FoqO7c2%2FTP2AkkgsQ9yFleDEkg8qSA%2FBK7VpiRyV%2BmkWOQyS%2F3vxcvya%2FOxItLZh8Hp%2Fq8kb7XjeocWLBwdz1tgQ5hPUXhPUJqp%2BLD6%2BgUFtbjxP4sJjHS1xZ2PNK6g87lhymbtSo%2BF6IQwl92x0wY6pgG5ATrAA4KbjxVv3DjrgEhixCPibbl3MtFja04aEz1IWlw6LqOHHRgRH1TB6XKsuN3BNH3ZpFpiU3TXD5aIBmIyVHpuq%2Bzsj78Ncn64a%2F5Zf0UplG0Rdjryy4Su2yEwXhGUv4lnud4fknHqIH%2F1DRw1COCzq3QTcaAdU4g%2Fr7%2FpEAWNgrjiMzXUsklAXZSv6rs0wiY4HrGqABsVgH2mBgHI0mLGR5D%2F&X-Amz-Signature=c2b29fdefe191451040aef051fa36bffb7251d211f3c934686be527ec8bbd551&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYGN4BAC%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDX9Y7%2B49WD%2FjgzD4z1GaQpHsonPFMvMxBCShokneojUwIgBsNbyIMwbcYCrUF6UOWx4gUjwxlUgPTPebK4ityuxbkqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHcVZyYfGPBmzKDdTCrcA%2Fy2qcmautPvXfDIAkXW6ZYSZ9h4yPZYcNTirxIExzwHYCpBKO0YK4MlSw0cKjuQ2vbEHePVy5Lbra3zC0f7X9O2en9xj3Wljl3cavgfyCSN9LBg5lIYK6H%2FD7nWwRySd2KzJn2nJHQ9bcpUXuTjcgtXEP%2FDAh%2BVXjNZfDgjD6llCm9VGlOaU2l193ZtkIW2dp6jtAWVzjCf1piH6FVQepZuyeYGiBl0cRNnOPO%2BKHzEi9OwmnONjCxkfeVRP1uXEM6%2F9au62nco1Z91lWgo8N09rbSaRDbNJi1LOMhmtIKgDzVH620g0MSSpoD2rtj31So4TmPHvvQKTqDifDGdqxwLfKIjlIK5MHFKQ%2Bl4P%2BEg5vxGru%2BAgtoL3DL044P3z1rhriho1nltIZFODvnEX0ekwprPzk82840ZbzTFTRY2u5lfET2dsX3aEwDOUAc9e4uqMMvwIHzfIDtIyIXt%2Fgl2UVNRQTSbG88Y41iBTH9yYd%2FAI1acQGziAP9c%2FhlLsN0OHs%2BiDD29SiJlT91byEi5nnEDKVOMeB5ghQUMWSGiI%2BsCHCb9zBRCMlfyJcLvh4aLb4y7XM6tFJL%2FYYxEYFFrshV6p4hPlK%2FqmyVdBKrhHcR0TSm%2FBdI9f4xbMJffsdMGOqUBQtCMA5lpo6D%2B2hE9wvnh4pVFsYQH9CcVx6a8BI3AWgal0fHQHbKsEvJj6Lk%2FnKF5SIEbMKc9AybulDuaK824l5wzTuT1ZtinNdJscUlzcCCMvOvL%2BqpJHhnu8SBnER6pgkb%2BrhrFa3sqKzpljB%2Bk%2BSSCWjCd3ub4FwBAI0skENebYhXFCh8SM%2BEX%2Bb1mCeTD7jiOXET3Y%2Bh2SuSs6zPoHYkoTqj%2F&X-Amz-Signature=7d7dcaa56709e73d1e44bd2a8e562926208b75292bda9df32c92ee416e553410&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYGN4BAC%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDX9Y7%2B49WD%2FjgzD4z1GaQpHsonPFMvMxBCShokneojUwIgBsNbyIMwbcYCrUF6UOWx4gUjwxlUgPTPebK4ityuxbkqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHcVZyYfGPBmzKDdTCrcA%2Fy2qcmautPvXfDIAkXW6ZYSZ9h4yPZYcNTirxIExzwHYCpBKO0YK4MlSw0cKjuQ2vbEHePVy5Lbra3zC0f7X9O2en9xj3Wljl3cavgfyCSN9LBg5lIYK6H%2FD7nWwRySd2KzJn2nJHQ9bcpUXuTjcgtXEP%2FDAh%2BVXjNZfDgjD6llCm9VGlOaU2l193ZtkIW2dp6jtAWVzjCf1piH6FVQepZuyeYGiBl0cRNnOPO%2BKHzEi9OwmnONjCxkfeVRP1uXEM6%2F9au62nco1Z91lWgo8N09rbSaRDbNJi1LOMhmtIKgDzVH620g0MSSpoD2rtj31So4TmPHvvQKTqDifDGdqxwLfKIjlIK5MHFKQ%2Bl4P%2BEg5vxGru%2BAgtoL3DL044P3z1rhriho1nltIZFODvnEX0ekwprPzk82840ZbzTFTRY2u5lfET2dsX3aEwDOUAc9e4uqMMvwIHzfIDtIyIXt%2Fgl2UVNRQTSbG88Y41iBTH9yYd%2FAI1acQGziAP9c%2FhlLsN0OHs%2BiDD29SiJlT91byEi5nnEDKVOMeB5ghQUMWSGiI%2BsCHCb9zBRCMlfyJcLvh4aLb4y7XM6tFJL%2FYYxEYFFrshV6p4hPlK%2FqmyVdBKrhHcR0TSm%2FBdI9f4xbMJffsdMGOqUBQtCMA5lpo6D%2B2hE9wvnh4pVFsYQH9CcVx6a8BI3AWgal0fHQHbKsEvJj6Lk%2FnKF5SIEbMKc9AybulDuaK824l5wzTuT1ZtinNdJscUlzcCCMvOvL%2BqpJHhnu8SBnER6pgkb%2BrhrFa3sqKzpljB%2Bk%2BSSCWjCd3ub4FwBAI0skENebYhXFCh8SM%2BEX%2Bb1mCeTD7jiOXET3Y%2Bh2SuSs6zPoHYkoTqj%2F&X-Amz-Signature=e664ea9c6cf7da7666dd2f0186296fdcb4bfaa4811c2d56b67a18563374d83f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYGN4BAC%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDX9Y7%2B49WD%2FjgzD4z1GaQpHsonPFMvMxBCShokneojUwIgBsNbyIMwbcYCrUF6UOWx4gUjwxlUgPTPebK4ityuxbkqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHcVZyYfGPBmzKDdTCrcA%2Fy2qcmautPvXfDIAkXW6ZYSZ9h4yPZYcNTirxIExzwHYCpBKO0YK4MlSw0cKjuQ2vbEHePVy5Lbra3zC0f7X9O2en9xj3Wljl3cavgfyCSN9LBg5lIYK6H%2FD7nWwRySd2KzJn2nJHQ9bcpUXuTjcgtXEP%2FDAh%2BVXjNZfDgjD6llCm9VGlOaU2l193ZtkIW2dp6jtAWVzjCf1piH6FVQepZuyeYGiBl0cRNnOPO%2BKHzEi9OwmnONjCxkfeVRP1uXEM6%2F9au62nco1Z91lWgo8N09rbSaRDbNJi1LOMhmtIKgDzVH620g0MSSpoD2rtj31So4TmPHvvQKTqDifDGdqxwLfKIjlIK5MHFKQ%2Bl4P%2BEg5vxGru%2BAgtoL3DL044P3z1rhriho1nltIZFODvnEX0ekwprPzk82840ZbzTFTRY2u5lfET2dsX3aEwDOUAc9e4uqMMvwIHzfIDtIyIXt%2Fgl2UVNRQTSbG88Y41iBTH9yYd%2FAI1acQGziAP9c%2FhlLsN0OHs%2BiDD29SiJlT91byEi5nnEDKVOMeB5ghQUMWSGiI%2BsCHCb9zBRCMlfyJcLvh4aLb4y7XM6tFJL%2FYYxEYFFrshV6p4hPlK%2FqmyVdBKrhHcR0TSm%2FBdI9f4xbMJffsdMGOqUBQtCMA5lpo6D%2B2hE9wvnh4pVFsYQH9CcVx6a8BI3AWgal0fHQHbKsEvJj6Lk%2FnKF5SIEbMKc9AybulDuaK824l5wzTuT1ZtinNdJscUlzcCCMvOvL%2BqpJHhnu8SBnER6pgkb%2BrhrFa3sqKzpljB%2Bk%2BSSCWjCd3ub4FwBAI0skENebYhXFCh8SM%2BEX%2Bb1mCeTD7jiOXET3Y%2Bh2SuSs6zPoHYkoTqj%2F&X-Amz-Signature=32d79348987e93c6554e20f4d10b65c4c025de6cefca77cd9e3214131c14d9f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYGN4BAC%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDX9Y7%2B49WD%2FjgzD4z1GaQpHsonPFMvMxBCShokneojUwIgBsNbyIMwbcYCrUF6UOWx4gUjwxlUgPTPebK4ityuxbkqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHcVZyYfGPBmzKDdTCrcA%2Fy2qcmautPvXfDIAkXW6ZYSZ9h4yPZYcNTirxIExzwHYCpBKO0YK4MlSw0cKjuQ2vbEHePVy5Lbra3zC0f7X9O2en9xj3Wljl3cavgfyCSN9LBg5lIYK6H%2FD7nWwRySd2KzJn2nJHQ9bcpUXuTjcgtXEP%2FDAh%2BVXjNZfDgjD6llCm9VGlOaU2l193ZtkIW2dp6jtAWVzjCf1piH6FVQepZuyeYGiBl0cRNnOPO%2BKHzEi9OwmnONjCxkfeVRP1uXEM6%2F9au62nco1Z91lWgo8N09rbSaRDbNJi1LOMhmtIKgDzVH620g0MSSpoD2rtj31So4TmPHvvQKTqDifDGdqxwLfKIjlIK5MHFKQ%2Bl4P%2BEg5vxGru%2BAgtoL3DL044P3z1rhriho1nltIZFODvnEX0ekwprPzk82840ZbzTFTRY2u5lfET2dsX3aEwDOUAc9e4uqMMvwIHzfIDtIyIXt%2Fgl2UVNRQTSbG88Y41iBTH9yYd%2FAI1acQGziAP9c%2FhlLsN0OHs%2BiDD29SiJlT91byEi5nnEDKVOMeB5ghQUMWSGiI%2BsCHCb9zBRCMlfyJcLvh4aLb4y7XM6tFJL%2FYYxEYFFrshV6p4hPlK%2FqmyVdBKrhHcR0TSm%2FBdI9f4xbMJffsdMGOqUBQtCMA5lpo6D%2B2hE9wvnh4pVFsYQH9CcVx6a8BI3AWgal0fHQHbKsEvJj6Lk%2FnKF5SIEbMKc9AybulDuaK824l5wzTuT1ZtinNdJscUlzcCCMvOvL%2BqpJHhnu8SBnER6pgkb%2BrhrFa3sqKzpljB%2Bk%2BSSCWjCd3ub4FwBAI0skENebYhXFCh8SM%2BEX%2Bb1mCeTD7jiOXET3Y%2Bh2SuSs6zPoHYkoTqj%2F&X-Amz-Signature=5abc5eb2012772fb2460e1302d2e374470f630a9332290da734e0041b59cf78c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XNHU7TC%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFJOGygpcNxak%2FoQizGQ2SPaI8vHwcXirtX55tACVnHBAiEAzgiz8%2BYZbr45oJn731t2otb4abZ7pbur8J5MnV6UBM4qiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGJ3QCgfQFF%2BVwnrMCrcA0knVPeBZLebrX1PTUOVTJ42H2X%2FElDN8KjKj9yBLcTKjeqjVmJiNEQ8uP6ObzW559TF52S9abuE%2BHtVy5WMu%2FCo60UNseXJclXs676vc9ccAN2NhFCx0MV4j%2Fg9B0SdW2BH0vVG7AtHHY0wMBIm1dEnfwvMRt025bQ20Emr5wA7YfNtKy3lv4qCdmsuXxdSoBwVeh0dpPRkydgN7lXvsRIkeI62lNzgPq2Mw8o9zd3nrf13KBaAtfVC0t%2BjkAvPj345mzLNw6taGsbLxTxDmNaDcC5vzSVHcn8KVTAdYx3F%2FNqHHA31aML3mHEqfOoxKfbwuv82%2BKyfF2Ld59Iqdujq758kKT9r5IsA7NIAEq45hhAXCvEYKsoWeKOG3fJZ4Cy5sPH9SGn6SThvXR5gN3Fbh4bYlpzfLTAo7uc7lbL4lJus59o2Zd%2BAIYRD1qW9x0WRXeToqUUiHMvlxU5sZ%2FX7EWfd4l%2B3N81AnZhQAp4M4AxL2Q%2BNd60R%2BzzbcOnyhRR9yC1FxJkCogxlKuItXeuA62D6ncUalO6eFZjNGVEWPyJUBEBXTMJt1UrEWJhf4ZiETkVL4S5tCYau6HwAsmvsvt90Wd6K3k6kikTE7bbIk6KspvZjHzl0iz4tMPXesdMGOqUBj6VU7K%2Fl%2FoBLzkeTweXVAKjx808sTeAOH9Uh6q1%2FS%2F4odyBbakkOYUyWzC1KJhrpXWqGSnvTX%2Fw4iG%2FCp8KLn0tyPo9RHzL22XdLnFQ40ksnG2czCWWYc3DpojvmaLi43e94T4f8k1XicHuBwXfK0A8DGa771Y2ladJ8aY242G1mkwlY6QwELqLXHiLLOMNIZboVPqUcecfT%2BRr8%2BsnepGBpx2vP&X-Amz-Signature=5df9651d7c9a3cda7a38734e3b640c00f257ebdf72db0b6840952249a2c4a32a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QOU4DHCU%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG8kmg5l5b4M3os2jxLhedkXZMlqxKap2ykr8ndH9hXRAiEAkA4i2NgbUqcuO8TWp7qzDFHvCi9xtCa6lw0vPmk1Jb8qiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHSGV%2BFihaKWveRH0CrcA0eBFJOaXLvNFp3KMsMXIYzc94lJW0P4wIH2sSX3XhdQY1s6xNzDRPBbYnitN2NnojnJ2CDyBTmVCLkUANOf0sq1NtuzUR6ZhetaDbLiNX5XrGpRXtMgWH18Bl9iqaIK9VlM9qR7Ec7FxVAR2GK1g3b%2BA%2FcrCDzvtlE9mZpGu3LxdLwqXsgkksEp3yv2C2U8h%2BVA3Tdx2v%2BsSxxNXewkTm%2BXH0bNsOn5wpr4knQMG1mOhbhU1MBzTUSgFR72cOTSjBjLVDFOUiExcGsy5%2Bfusz9WSerQgy0jP3z%2BCSiejuLyXtDxY4gTdYEGAjLmsGfzObYyE%2BFF0spDcvX7w4xxGO7NZRpKPANOI3jiGT0S8oKw19Lq0%2BH%2BrGYCptZ7GaPL%2FTQDK%2BYMWmmWKdwwdgx%2B97jsNeJl97r%2FDxcEFIF4XgxNVsczN4ra7S70F8To0sUBcBWLbxskM1qfK6W0ODwH1WSrcgTAM5AdrL4sDGC7uHGXN965UBJ7opr4NTWSjNLnpvqsa0GhhOIaGCVg%2BHktU37nezjb7TjGzgW59dVnkRh7r18rBvnp7YJTJGLI0xSyfqAujikpSegLrIZJW2lFbilf4bv7D%2FWwh%2BBiXOyILEK0%2BjT73ZpW2%2BoM1%2FAeMKrdsdMGOqUBQstxyTMhx669%2BlBOZm9R%2BNQ5mAbxu0cVPHxMfhqqS%2BLxUEwfPHllKHX08CaOS0b1LKbC324Q3L110hn%2B5q7T1%2F2PxM8p1A5q9KTCEKTNVM0Ap54LnN%2Fb6AHcf7OHIfWgjFeD6CKtm49PBwwYQSeAtLiDC9gunOifpjw%2BOQPehoMTKm5KNri2biKxby3AveGoMeGUjMOhTPTtWcXvD5XP1h1IxRLV&X-Amz-Signature=7f996821a9285f68f81d8733ae828192611900166a1faf1145c06de1f28d637d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QOU4DHCU%2F20260731%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260731T103710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG8kmg5l5b4M3os2jxLhedkXZMlqxKap2ykr8ndH9hXRAiEAkA4i2NgbUqcuO8TWp7qzDFHvCi9xtCa6lw0vPmk1Jb8qiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHSGV%2BFihaKWveRH0CrcA0eBFJOaXLvNFp3KMsMXIYzc94lJW0P4wIH2sSX3XhdQY1s6xNzDRPBbYnitN2NnojnJ2CDyBTmVCLkUANOf0sq1NtuzUR6ZhetaDbLiNX5XrGpRXtMgWH18Bl9iqaIK9VlM9qR7Ec7FxVAR2GK1g3b%2BA%2FcrCDzvtlE9mZpGu3LxdLwqXsgkksEp3yv2C2U8h%2BVA3Tdx2v%2BsSxxNXewkTm%2BXH0bNsOn5wpr4knQMG1mOhbhU1MBzTUSgFR72cOTSjBjLVDFOUiExcGsy5%2Bfusz9WSerQgy0jP3z%2BCSiejuLyXtDxY4gTdYEGAjLmsGfzObYyE%2BFF0spDcvX7w4xxGO7NZRpKPANOI3jiGT0S8oKw19Lq0%2BH%2BrGYCptZ7GaPL%2FTQDK%2BYMWmmWKdwwdgx%2B97jsNeJl97r%2FDxcEFIF4XgxNVsczN4ra7S70F8To0sUBcBWLbxskM1qfK6W0ODwH1WSrcgTAM5AdrL4sDGC7uHGXN965UBJ7opr4NTWSjNLnpvqsa0GhhOIaGCVg%2BHktU37nezjb7TjGzgW59dVnkRh7r18rBvnp7YJTJGLI0xSyfqAujikpSegLrIZJW2lFbilf4bv7D%2FWwh%2BBiXOyILEK0%2BjT73ZpW2%2BoM1%2FAeMKrdsdMGOqUBQstxyTMhx669%2BlBOZm9R%2BNQ5mAbxu0cVPHxMfhqqS%2BLxUEwfPHllKHX08CaOS0b1LKbC324Q3L110hn%2B5q7T1%2F2PxM8p1A5q9KTCEKTNVM0Ap54LnN%2Fb6AHcf7OHIfWgjFeD6CKtm49PBwwYQSeAtLiDC9gunOifpjw%2BOQPehoMTKm5KNri2biKxby3AveGoMeGUjMOhTPTtWcXvD5XP1h1IxRLV&X-Amz-Signature=28137ac41828671a448a6570ef320ea8362ed7c87adc2cc1784f7c139cadcd82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
