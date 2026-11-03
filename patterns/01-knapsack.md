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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMES6BTV%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD7xuGykGdh5PLYE3l6kKkAuDPHdlffiOTnG%2FaD4xTv2wIgIOM1cTIF34FX60hjxcb43Foj1eiLuU%2Bc4SqxTpx5cp8qiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIJPykxfgdQOELhgeircAxwzo5hxXUmczGZzRfD9GvGpmmHl7QbvfViOe%2BNSaNwNvF46lgmBHOrTdJw36WFHh3qhhP3UBjI3vIJFwtmGBgA4ERIk4KBMcqbv3kJ5n%2FoOPikWoTqPcnYlbtnGQ7npiLl9MuVVoZHzl%2FbBWUo%2FcoRnJs5uvkpPd1AeWbTiynXaAy3VCEHKIKI64UYg4t9MBZEwlZS0EHrh0pg%2Bz0jNuE0gvUWoiR%2Fxe2Vey53QxL83LKjxxGMl9CeP3I2c%2BV2fHxsE1WE16Dr87mL0QQ3zP7VD23p0FD0C%2BRvnazqOVIYSogYbIv%2BVctLF1KunQinai5E84T%2FZ%2FO0bQ2lTbRgfz3uN4VY43Pe36vELsa4FSjxZAsqOmMBgHGQ4II2pZU4DFfOZ6wWeJSZFTQaVIkKZGtUoJnP93BXtY2rq%2FA8wcjS62WNC1VU1Kn5s4fZxvO%2F0NRxefbjSLdjYOC2w03JriAEZvdKqKCxsWAyhCkICNLZ%2FMRn0DpN5StVZS8o0xAw4zXGUpcyy3Oq%2FRD1Rs8rPePkTOtGieJf5gO1j3R6Y7drGITJ0Ta8CuR9%2BWYA7sV842CtY18e0Ah5M2ZcRZ2esVz1RsgH8ZBqTmvkWDMHGavbHk2I8CEIpyEjg5B5YMO2Fp9cGOqUBJDwT5G1vbcsBXTa1fRbquwfoA%2BIaPTES1LL%2FgzXeHV%2Fyf3vy0e%2FQzCJOYAu0LKD24uM3MfnjMaY9dSCBJC6kyK7srhfv8AmCqgkZ2s6abL5eowxLvWXF7PeWQutz0Bvj8lvpyA7THmSL5sGRf0i9PDcWbfadL%2FCw2muRGB5GtqWAaYRQ1r2Mx4CCL%2Bczi8arlzd2%2FWavcoiyu8UY51ksKrygGeu%2B&X-Amz-Signature=2ca794d5622d6e6e3cff91f1da3f07a9a74c13e2a4be67598e030ff09d0f3999&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMES6BTV%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD7xuGykGdh5PLYE3l6kKkAuDPHdlffiOTnG%2FaD4xTv2wIgIOM1cTIF34FX60hjxcb43Foj1eiLuU%2Bc4SqxTpx5cp8qiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIJPykxfgdQOELhgeircAxwzo5hxXUmczGZzRfD9GvGpmmHl7QbvfViOe%2BNSaNwNvF46lgmBHOrTdJw36WFHh3qhhP3UBjI3vIJFwtmGBgA4ERIk4KBMcqbv3kJ5n%2FoOPikWoTqPcnYlbtnGQ7npiLl9MuVVoZHzl%2FbBWUo%2FcoRnJs5uvkpPd1AeWbTiynXaAy3VCEHKIKI64UYg4t9MBZEwlZS0EHrh0pg%2Bz0jNuE0gvUWoiR%2Fxe2Vey53QxL83LKjxxGMl9CeP3I2c%2BV2fHxsE1WE16Dr87mL0QQ3zP7VD23p0FD0C%2BRvnazqOVIYSogYbIv%2BVctLF1KunQinai5E84T%2FZ%2FO0bQ2lTbRgfz3uN4VY43Pe36vELsa4FSjxZAsqOmMBgHGQ4II2pZU4DFfOZ6wWeJSZFTQaVIkKZGtUoJnP93BXtY2rq%2FA8wcjS62WNC1VU1Kn5s4fZxvO%2F0NRxefbjSLdjYOC2w03JriAEZvdKqKCxsWAyhCkICNLZ%2FMRn0DpN5StVZS8o0xAw4zXGUpcyy3Oq%2FRD1Rs8rPePkTOtGieJf5gO1j3R6Y7drGITJ0Ta8CuR9%2BWYA7sV842CtY18e0Ah5M2ZcRZ2esVz1RsgH8ZBqTmvkWDMHGavbHk2I8CEIpyEjg5B5YMO2Fp9cGOqUBJDwT5G1vbcsBXTa1fRbquwfoA%2BIaPTES1LL%2FgzXeHV%2Fyf3vy0e%2FQzCJOYAu0LKD24uM3MfnjMaY9dSCBJC6kyK7srhfv8AmCqgkZ2s6abL5eowxLvWXF7PeWQutz0Bvj8lvpyA7THmSL5sGRf0i9PDcWbfadL%2FCw2muRGB5GtqWAaYRQ1r2Mx4CCL%2Bczi8arlzd2%2FWavcoiyu8UY51ksKrygGeu%2B&X-Amz-Signature=5a347475a7be511150a5ded85bdac308a9532966647c29448fe27071afd75080&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMES6BTV%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD7xuGykGdh5PLYE3l6kKkAuDPHdlffiOTnG%2FaD4xTv2wIgIOM1cTIF34FX60hjxcb43Foj1eiLuU%2Bc4SqxTpx5cp8qiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIJPykxfgdQOELhgeircAxwzo5hxXUmczGZzRfD9GvGpmmHl7QbvfViOe%2BNSaNwNvF46lgmBHOrTdJw36WFHh3qhhP3UBjI3vIJFwtmGBgA4ERIk4KBMcqbv3kJ5n%2FoOPikWoTqPcnYlbtnGQ7npiLl9MuVVoZHzl%2FbBWUo%2FcoRnJs5uvkpPd1AeWbTiynXaAy3VCEHKIKI64UYg4t9MBZEwlZS0EHrh0pg%2Bz0jNuE0gvUWoiR%2Fxe2Vey53QxL83LKjxxGMl9CeP3I2c%2BV2fHxsE1WE16Dr87mL0QQ3zP7VD23p0FD0C%2BRvnazqOVIYSogYbIv%2BVctLF1KunQinai5E84T%2FZ%2FO0bQ2lTbRgfz3uN4VY43Pe36vELsa4FSjxZAsqOmMBgHGQ4II2pZU4DFfOZ6wWeJSZFTQaVIkKZGtUoJnP93BXtY2rq%2FA8wcjS62WNC1VU1Kn5s4fZxvO%2F0NRxefbjSLdjYOC2w03JriAEZvdKqKCxsWAyhCkICNLZ%2FMRn0DpN5StVZS8o0xAw4zXGUpcyy3Oq%2FRD1Rs8rPePkTOtGieJf5gO1j3R6Y7drGITJ0Ta8CuR9%2BWYA7sV842CtY18e0Ah5M2ZcRZ2esVz1RsgH8ZBqTmvkWDMHGavbHk2I8CEIpyEjg5B5YMO2Fp9cGOqUBJDwT5G1vbcsBXTa1fRbquwfoA%2BIaPTES1LL%2FgzXeHV%2Fyf3vy0e%2FQzCJOYAu0LKD24uM3MfnjMaY9dSCBJC6kyK7srhfv8AmCqgkZ2s6abL5eowxLvWXF7PeWQutz0Bvj8lvpyA7THmSL5sGRf0i9PDcWbfadL%2FCw2muRGB5GtqWAaYRQ1r2Mx4CCL%2Bczi8arlzd2%2FWavcoiyu8UY51ksKrygGeu%2B&X-Amz-Signature=e29d8e53d20d79e0bd294cdc7a3288a67b87e5bff01a6cb2601c11badc2f9209&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46645ZJLAII%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIA%2BEhP7zgWFBvFvO3%2F3fpujShfR3lbwmP7DT9GAO0jfpAiEA1hSIT7s1crJL22BbaeS%2Bp%2BjO%2FEP0d3sOrpxnqZ0aCzQqiAQIk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHuhU7jaATVpU8xjCyrcAw%2BwFzAlbIKCPwOp9sgEuhQsoO%2B560XIz7KIZlM%2FbABeDP2%2FcwMaLNU%2BcFFVaTghDQ1P8kNPZCUCmqmo21Mv%2BAj9MGGGqEuAvc71%2F7hV4tgO0mDCZycbrK5N5jsl14MnE%2BlK8g1yfn8bz7sflQeDfae2AT6FEYi1ms%2BmI%2BCK0hNj5SQ55BSHQLuP%2F8fsg9FOqsOvS4BPa31VNS7xmW1SYssYoPN5ojbGByx0PQqbzQj%2Fevn68yUmifR1EcC7ZnU2hBumHcbex5gv9DVebgpWI91oOkjmPCLyLi%2BqR9OrYv0Nt%2F4NgYcJBYGWGty0YOqGrwVnKeXTTiqW6nuYVBuiWB3jo92OYGGrDKieB300FFSS8ezS%2F%2FmTQQ2cTy%2BDHX1zwD5HaQvsKn1A6qKc%2F%2BRdgSfaqmRmUm%2F4MSjhFIe2Fr7p872lwxuHxewgLdOHlB35QlG%2FDcg0D0UFze30xx7p0iA9jUTpywe599BCXWtHCGG%2Bh97yLasyqXYjwcFlBLPpwZFtQV%2Bg0xH51oCznt1OGiSuDfQoE1o7EEXcct8y2Kehr3tQeKBBYbu3aOTjy64WsmQuYkc1n9%2By%2FSo3DjTH05bm0qu3TMsXiY8Eov%2Bd6CuaAXnYJGz8Pb1Ad25RMOyDp9cGOqUB0oMwdlCyjbldgA%2Fz9yZk2jeqUgfrTLaAheWD%2BLD8pwMWU6jH4W89Asoiy3%2FNyPkS3UCaUPqLho4cnvgq%2FPY3SDVcYr4wFqHmTii%2BJU6ImovPcIIcsky%2F9zDaJFHKUbftGlaQ%2F6DCArChRisSDAZ1OZibGTM4PfVqlIvmerpxgWUkJCUXPtKmyMEjXmfPJqr%2F5I1wX3UOtG83JcyPoEnts66sG0iy&X-Amz-Signature=c6e1974d6f2287a60dcde5ed7ff8e316b3a6def8cce09e923e201991bfd2982a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46645ZJLAII%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIA%2BEhP7zgWFBvFvO3%2F3fpujShfR3lbwmP7DT9GAO0jfpAiEA1hSIT7s1crJL22BbaeS%2Bp%2BjO%2FEP0d3sOrpxnqZ0aCzQqiAQIk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHuhU7jaATVpU8xjCyrcAw%2BwFzAlbIKCPwOp9sgEuhQsoO%2B560XIz7KIZlM%2FbABeDP2%2FcwMaLNU%2BcFFVaTghDQ1P8kNPZCUCmqmo21Mv%2BAj9MGGGqEuAvc71%2F7hV4tgO0mDCZycbrK5N5jsl14MnE%2BlK8g1yfn8bz7sflQeDfae2AT6FEYi1ms%2BmI%2BCK0hNj5SQ55BSHQLuP%2F8fsg9FOqsOvS4BPa31VNS7xmW1SYssYoPN5ojbGByx0PQqbzQj%2Fevn68yUmifR1EcC7ZnU2hBumHcbex5gv9DVebgpWI91oOkjmPCLyLi%2BqR9OrYv0Nt%2F4NgYcJBYGWGty0YOqGrwVnKeXTTiqW6nuYVBuiWB3jo92OYGGrDKieB300FFSS8ezS%2F%2FmTQQ2cTy%2BDHX1zwD5HaQvsKn1A6qKc%2F%2BRdgSfaqmRmUm%2F4MSjhFIe2Fr7p872lwxuHxewgLdOHlB35QlG%2FDcg0D0UFze30xx7p0iA9jUTpywe599BCXWtHCGG%2Bh97yLasyqXYjwcFlBLPpwZFtQV%2Bg0xH51oCznt1OGiSuDfQoE1o7EEXcct8y2Kehr3tQeKBBYbu3aOTjy64WsmQuYkc1n9%2By%2FSo3DjTH05bm0qu3TMsXiY8Eov%2Bd6CuaAXnYJGz8Pb1Ad25RMOyDp9cGOqUB0oMwdlCyjbldgA%2Fz9yZk2jeqUgfrTLaAheWD%2BLD8pwMWU6jH4W89Asoiy3%2FNyPkS3UCaUPqLho4cnvgq%2FPY3SDVcYr4wFqHmTii%2BJU6ImovPcIIcsky%2F9zDaJFHKUbftGlaQ%2F6DCArChRisSDAZ1OZibGTM4PfVqlIvmerpxgWUkJCUXPtKmyMEjXmfPJqr%2F5I1wX3UOtG83JcyPoEnts66sG0iy&X-Amz-Signature=7d02c1b2e6f1d638354e6c4f090c56d7e6cb7428506e0ff80f76ac77d90a0ded&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46645ZJLAII%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIA%2BEhP7zgWFBvFvO3%2F3fpujShfR3lbwmP7DT9GAO0jfpAiEA1hSIT7s1crJL22BbaeS%2Bp%2BjO%2FEP0d3sOrpxnqZ0aCzQqiAQIk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHuhU7jaATVpU8xjCyrcAw%2BwFzAlbIKCPwOp9sgEuhQsoO%2B560XIz7KIZlM%2FbABeDP2%2FcwMaLNU%2BcFFVaTghDQ1P8kNPZCUCmqmo21Mv%2BAj9MGGGqEuAvc71%2F7hV4tgO0mDCZycbrK5N5jsl14MnE%2BlK8g1yfn8bz7sflQeDfae2AT6FEYi1ms%2BmI%2BCK0hNj5SQ55BSHQLuP%2F8fsg9FOqsOvS4BPa31VNS7xmW1SYssYoPN5ojbGByx0PQqbzQj%2Fevn68yUmifR1EcC7ZnU2hBumHcbex5gv9DVebgpWI91oOkjmPCLyLi%2BqR9OrYv0Nt%2F4NgYcJBYGWGty0YOqGrwVnKeXTTiqW6nuYVBuiWB3jo92OYGGrDKieB300FFSS8ezS%2F%2FmTQQ2cTy%2BDHX1zwD5HaQvsKn1A6qKc%2F%2BRdgSfaqmRmUm%2F4MSjhFIe2Fr7p872lwxuHxewgLdOHlB35QlG%2FDcg0D0UFze30xx7p0iA9jUTpywe599BCXWtHCGG%2Bh97yLasyqXYjwcFlBLPpwZFtQV%2Bg0xH51oCznt1OGiSuDfQoE1o7EEXcct8y2Kehr3tQeKBBYbu3aOTjy64WsmQuYkc1n9%2By%2FSo3DjTH05bm0qu3TMsXiY8Eov%2Bd6CuaAXnYJGz8Pb1Ad25RMOyDp9cGOqUB0oMwdlCyjbldgA%2Fz9yZk2jeqUgfrTLaAheWD%2BLD8pwMWU6jH4W89Asoiy3%2FNyPkS3UCaUPqLho4cnvgq%2FPY3SDVcYr4wFqHmTii%2BJU6ImovPcIIcsky%2F9zDaJFHKUbftGlaQ%2F6DCArChRisSDAZ1OZibGTM4PfVqlIvmerpxgWUkJCUXPtKmyMEjXmfPJqr%2F5I1wX3UOtG83JcyPoEnts66sG0iy&X-Amz-Signature=89a46b8de693d292374667ca22b98efb1cafbd1335f77b2496415b0da453362a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46645ZJLAII%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIA%2BEhP7zgWFBvFvO3%2F3fpujShfR3lbwmP7DT9GAO0jfpAiEA1hSIT7s1crJL22BbaeS%2Bp%2BjO%2FEP0d3sOrpxnqZ0aCzQqiAQIk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHuhU7jaATVpU8xjCyrcAw%2BwFzAlbIKCPwOp9sgEuhQsoO%2B560XIz7KIZlM%2FbABeDP2%2FcwMaLNU%2BcFFVaTghDQ1P8kNPZCUCmqmo21Mv%2BAj9MGGGqEuAvc71%2F7hV4tgO0mDCZycbrK5N5jsl14MnE%2BlK8g1yfn8bz7sflQeDfae2AT6FEYi1ms%2BmI%2BCK0hNj5SQ55BSHQLuP%2F8fsg9FOqsOvS4BPa31VNS7xmW1SYssYoPN5ojbGByx0PQqbzQj%2Fevn68yUmifR1EcC7ZnU2hBumHcbex5gv9DVebgpWI91oOkjmPCLyLi%2BqR9OrYv0Nt%2F4NgYcJBYGWGty0YOqGrwVnKeXTTiqW6nuYVBuiWB3jo92OYGGrDKieB300FFSS8ezS%2F%2FmTQQ2cTy%2BDHX1zwD5HaQvsKn1A6qKc%2F%2BRdgSfaqmRmUm%2F4MSjhFIe2Fr7p872lwxuHxewgLdOHlB35QlG%2FDcg0D0UFze30xx7p0iA9jUTpywe599BCXWtHCGG%2Bh97yLasyqXYjwcFlBLPpwZFtQV%2Bg0xH51oCznt1OGiSuDfQoE1o7EEXcct8y2Kehr3tQeKBBYbu3aOTjy64WsmQuYkc1n9%2By%2FSo3DjTH05bm0qu3TMsXiY8Eov%2Bd6CuaAXnYJGz8Pb1Ad25RMOyDp9cGOqUB0oMwdlCyjbldgA%2Fz9yZk2jeqUgfrTLaAheWD%2BLD8pwMWU6jH4W89Asoiy3%2FNyPkS3UCaUPqLho4cnvgq%2FPY3SDVcYr4wFqHmTii%2BJU6ImovPcIIcsky%2F9zDaJFHKUbftGlaQ%2F6DCArChRisSDAZ1OZibGTM4PfVqlIvmerpxgWUkJCUXPtKmyMEjXmfPJqr%2F5I1wX3UOtG83JcyPoEnts66sG0iy&X-Amz-Signature=6af8327d07da0b6fc753f017d07fda5118191ee06642ff14511bb227701c4b47&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666B2SKXGB%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFIaVculV2kvEienjYCxewca2%2F1VSTBCKE8erFLl2L1zAiEAyflFidRdbWTdD67pJ%2BbV7lnzcGaKfvNbeQLV2JqjFYAqiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9UiJAAIT7VD96IJyrcA6J11uD8%2Fx%2F6a6mwE0fxLaUM%2BmnWB6bdcmJgPZYNrVNtTC%2FbXiPGuyubhTAxhMGRE1SR0dMbpTaDk0HvCF9XrZAaCN0RWL5Avvx%2FYdD08CucGcsICgYIr2TvxMEb1SzfZQgQE%2BmV37jB%2FnBWJU5d2YD%2FGDEkLu9BSASZRLf4mRz%2FfMiS1%2B%2BBv7MmIqCxzFf1G6UlvR7KayVRupg2k9Vb1F4MhvQ527IdqrV6WR67CpsyiLjcAQrn%2FQhmHJzGQZdxr%2BbzZNp%2FycnyJYh4FnhODwVz%2BBAC20SZLfXDDgnCI%2BpHcDmk4uTcV%2FZXh1wpTX8iRkSDBbzCCkaEfFJFrSGiK98yX35ws6UuzwG9cSg225D3snXPUb5Evnv1kXqIrpnAR%2B%2FNwN7Lmbto0j5ZF49zb9CI%2B1tZS1GTa2akKBfeq9PFIGU4aWOmUY6nO3R%2FnkoWuv0bEqxZbLdDJ33JEUScoqWd5QaRULZr%2BuGUedRgFNaKY1Gy12Apj6pSB5tvzdule%2FMlNlX5FL14jtUjePMvQPlHSRliM%2BA73RyhVcEDctpqYtuhSEM5SNXfcpzj3oFlqiJAR5YygpVeaCj%2F7mj%2BV%2B%2FNAI2fQzYi3XPlYIZKuDCYT8f2JEjP0aBwP0Y5MN2Dp9cGOqUBsSC5qRACtwr0CoxLWoOPLkr81zvubTLBmnfx%2B0Y6W%2BFH2on%2Fo1wVPfjiOZsCh%2BnS3WO%2BO%2F9Db6AHQSc%2BTuk29Ogh%2Fc1VaPJuQMhKFsfSnsQHaSTdXbY30bsk6u1uFmkG%2BF%2Fb8lrQuuzopcZZ3t2zbB9ux4AwBbGoEKSP4xiP2c2smKv62EFMVkLhwlzOmG7al70zbDirRYFpDsD5%2FewMHMarwq0%2B&X-Amz-Signature=6230e0caff63846152e905d5a44346d39aaa8b2e26e72a53c5b0ad5df64621f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5PJ5KGS%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyhjG9YGPe43vRRZ3%2FwKv0FP0A4p%2Fw9l0GnP8ir2%2F7wIgaLXXO4Nq3wuKg5ZJsNCKBpK5xBkxN95y2kyVsEoa07kqiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ%2FeldFYF%2BTixw38IircA%2FCvmF%2B7ImrWXzB0%2BlNE%2FnIFcwrIxjGXY1AOQPl5g4JgyAjr3f9DqkeUM3BJ2p6LMDh%2BdjDbnz9JKAUTCFjertvun3nOr017cB71v5k6LH7mhP6MrHJ1BQfAryUd%2Fl0ttO9udr6qTmIMGu36TmsIKCiY8X4HnAQpbvrwCsRjqqwezxi3R9GwoJQyDRYpzPrMPqLJ1cVIMA%2BZECcv0z4XnV3sZ8DD5f8O9bda3l6DlHNp2Vwm8LPxbl28Ur0PH4o2C4nuZ7LWIDFvKHRnnTtARAsLeDzC%2FJ7bTqn%2F0IlOsHOsEbOUzVKri2Eoug%2BcBEiWrCoK5Q0GDYt1YcxiTm6CEsbKjNmf5jZSSUVEvESyL6a8keuWYzaLXenZRq2JjioeuZ4ZmjqYJwmsCqwL30nCRe1z%2BdB89VwmYUfAyW%2BpXLG4ICjAueZsgkqnffpX5hM8sxXg42FFPARiskuqrCThwz9WYxhLYxhCbLxCu7lgepZTIXh7rArtGxlXj7JXogpCQxj5eRxUFv4X9lQsBuf%2B3pHhnM52kT3Heh%2FWnMw2s7lw%2FhHJ93R%2FeLhucecVEOBkdiuQwmO6fWfOAKGuGxN6ljHCH6P9XYzCS2MLEo2dIYosJ7tfr0EQlxaH3pVaMMuDp9cGOqUB%2FXSHgWGCX%2B6oPhdbSv86L1gasia0PnTtkg47GjPxCKcv8pcGFsKjluxjZbCucgnRtf50EsEzPhK%2FV4QZUK5B5BwQqQMsKJhSVqGFYNQ5cCLHxwSvuIUoJ3Huzg4PFD7frA63rH%2BJXoBJBXx%2Bl2PgGMyHKlTcKkJ0nwOl9U6ylyzVHefFOla74UQCjz6kB%2FECYn9T%2BZfBcNnTiI1xG5JEwGCntj5b&X-Amz-Signature=22a70d6633b36a67a226247b6ddd37f26a666672829a42f4de24d07040904c3f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5PJ5KGS%2F20261103%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261103T154941Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyhjG9YGPe43vRRZ3%2FwKv0FP0A4p%2Fw9l0GnP8ir2%2F7wIgaLXXO4Nq3wuKg5ZJsNCKBpK5xBkxN95y2kyVsEoa07kqiAQIlP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ%2FeldFYF%2BTixw38IircA%2FCvmF%2B7ImrWXzB0%2BlNE%2FnIFcwrIxjGXY1AOQPl5g4JgyAjr3f9DqkeUM3BJ2p6LMDh%2BdjDbnz9JKAUTCFjertvun3nOr017cB71v5k6LH7mhP6MrHJ1BQfAryUd%2Fl0ttO9udr6qTmIMGu36TmsIKCiY8X4HnAQpbvrwCsRjqqwezxi3R9GwoJQyDRYpzPrMPqLJ1cVIMA%2BZECcv0z4XnV3sZ8DD5f8O9bda3l6DlHNp2Vwm8LPxbl28Ur0PH4o2C4nuZ7LWIDFvKHRnnTtARAsLeDzC%2FJ7bTqn%2F0IlOsHOsEbOUzVKri2Eoug%2BcBEiWrCoK5Q0GDYt1YcxiTm6CEsbKjNmf5jZSSUVEvESyL6a8keuWYzaLXenZRq2JjioeuZ4ZmjqYJwmsCqwL30nCRe1z%2BdB89VwmYUfAyW%2BpXLG4ICjAueZsgkqnffpX5hM8sxXg42FFPARiskuqrCThwz9WYxhLYxhCbLxCu7lgepZTIXh7rArtGxlXj7JXogpCQxj5eRxUFv4X9lQsBuf%2B3pHhnM52kT3Heh%2FWnMw2s7lw%2FhHJ93R%2FeLhucecVEOBkdiuQwmO6fWfOAKGuGxN6ljHCH6P9XYzCS2MLEo2dIYosJ7tfr0EQlxaH3pVaMMuDp9cGOqUB%2FXSHgWGCX%2B6oPhdbSv86L1gasia0PnTtkg47GjPxCKcv8pcGFsKjluxjZbCucgnRtf50EsEzPhK%2FV4QZUK5B5BwQqQMsKJhSVqGFYNQ5cCLHxwSvuIUoJ3Huzg4PFD7frA63rH%2BJXoBJBXx%2Bl2PgGMyHKlTcKkJ0nwOl9U6ylyzVHefFOla74UQCjz6kB%2FECYn9T%2BZfBcNnTiI1xG5JEwGCntj5b&X-Amz-Signature=55ecd8937114cff8296b261f5b66189028a702028d3b64e2ed7304f5da2ad94f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
