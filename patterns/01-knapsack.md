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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466255OURZW%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAVXVQncGfhkxy0dC2vwvc%2BvhK4CdTBNKVsBJXkZMCoAAiEA%2BKAGXZ4eH%2FCVzy2fD9XG6RtbPwOsPO1MYqOzyVVAcFoqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPFRt7%2BRxs9uWC1QFircA2TP8l94cjGKot7qBdkmQflCN4LxMV3vWinCXTpO4q5z6oj%2BF9LPHX6ha8cJHGzUFoeEjpq%2BQRJSfvK7ngQ23asvThSjj6tn3M9FTW%2FCAAuGuwfR%2FyZgUE0zG4NZRdZqIQRU1vrf29x%2Fjeqsg4DzE4e1RM95hwP6rZCv93Mpyi8LxmE0SFsZmATspyt1z2GJmfHTN%2B4ohFRqVb4hEbxkMeE5majmF%2BbReFeK%2FTAEW1FRxEjhlQX8xGMUU6gXrfGDia5pKMflobstFKmStw35CvSWkFm1sHXMpsy%2BTZ5wMyxzDTgZhF7dqmFFQkWRHVdZMZ32m6O%2BcdALjx9gav%2FgdoBiscLxr40c7x1BcFz7acGOe0LjZjXRmrtPMZ%2BMbq6xzIyW%2FjteEGlvHSbTb2Cq5TqBmNf32uNE3Z%2B4b2g1zgsalC25AAcGb2062iQPV%2B%2FauuqTB7yQIPqQ14ckvymTRwJw%2FEteHQKIxQIu%2BVWLc9Q9q95TrOVpefmV%2FUHUgZsAj17iRGM%2BVhr9jupy0Oklk1ufKIJEsLTgCRMS0KEmBbiG%2BitOupgJtrVfQMF1p8FzLhPs6Bg0bvZAeeteBGPJQ72DjY7B%2BBbqy%2BlEx0qhgI%2BpyBSyQZmFPkMZBBL5MJH0vc4GOqUBv9iv1tB5SRQdXekvCDqZZEFoWtNTo5Yc1OsioUJtcCGwahRhEwC8jzJZcJr3XnUQHQQUQUq7Qkufmp38qdMYW8unoiDYLK2ZuDbsrG0HmpPWMvdMANywpVCWLV139ibxcmnhy3bQNYkV0F7XBf%2BZlhlMevuJnadLjHUS4klass4bCCl5OQxjDU7E19PPeGd%2FlMgIzIGKVikKwxcFg2qU0FTFp8ID&X-Amz-Signature=d7d39e2ad1f2bf1e23ab9391ae01db024d18738259522039cced420a8fbc317f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466255OURZW%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAVXVQncGfhkxy0dC2vwvc%2BvhK4CdTBNKVsBJXkZMCoAAiEA%2BKAGXZ4eH%2FCVzy2fD9XG6RtbPwOsPO1MYqOzyVVAcFoqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPFRt7%2BRxs9uWC1QFircA2TP8l94cjGKot7qBdkmQflCN4LxMV3vWinCXTpO4q5z6oj%2BF9LPHX6ha8cJHGzUFoeEjpq%2BQRJSfvK7ngQ23asvThSjj6tn3M9FTW%2FCAAuGuwfR%2FyZgUE0zG4NZRdZqIQRU1vrf29x%2Fjeqsg4DzE4e1RM95hwP6rZCv93Mpyi8LxmE0SFsZmATspyt1z2GJmfHTN%2B4ohFRqVb4hEbxkMeE5majmF%2BbReFeK%2FTAEW1FRxEjhlQX8xGMUU6gXrfGDia5pKMflobstFKmStw35CvSWkFm1sHXMpsy%2BTZ5wMyxzDTgZhF7dqmFFQkWRHVdZMZ32m6O%2BcdALjx9gav%2FgdoBiscLxr40c7x1BcFz7acGOe0LjZjXRmrtPMZ%2BMbq6xzIyW%2FjteEGlvHSbTb2Cq5TqBmNf32uNE3Z%2B4b2g1zgsalC25AAcGb2062iQPV%2B%2FauuqTB7yQIPqQ14ckvymTRwJw%2FEteHQKIxQIu%2BVWLc9Q9q95TrOVpefmV%2FUHUgZsAj17iRGM%2BVhr9jupy0Oklk1ufKIJEsLTgCRMS0KEmBbiG%2BitOupgJtrVfQMF1p8FzLhPs6Bg0bvZAeeteBGPJQ72DjY7B%2BBbqy%2BlEx0qhgI%2BpyBSyQZmFPkMZBBL5MJH0vc4GOqUBv9iv1tB5SRQdXekvCDqZZEFoWtNTo5Yc1OsioUJtcCGwahRhEwC8jzJZcJr3XnUQHQQUQUq7Qkufmp38qdMYW8unoiDYLK2ZuDbsrG0HmpPWMvdMANywpVCWLV139ibxcmnhy3bQNYkV0F7XBf%2BZlhlMevuJnadLjHUS4klass4bCCl5OQxjDU7E19PPeGd%2FlMgIzIGKVikKwxcFg2qU0FTFp8ID&X-Amz-Signature=83b9d2b8a941c3bcf2c5930130113560de239e390dbc1aea7e664ad85276279d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466255OURZW%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAVXVQncGfhkxy0dC2vwvc%2BvhK4CdTBNKVsBJXkZMCoAAiEA%2BKAGXZ4eH%2FCVzy2fD9XG6RtbPwOsPO1MYqOzyVVAcFoqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPFRt7%2BRxs9uWC1QFircA2TP8l94cjGKot7qBdkmQflCN4LxMV3vWinCXTpO4q5z6oj%2BF9LPHX6ha8cJHGzUFoeEjpq%2BQRJSfvK7ngQ23asvThSjj6tn3M9FTW%2FCAAuGuwfR%2FyZgUE0zG4NZRdZqIQRU1vrf29x%2Fjeqsg4DzE4e1RM95hwP6rZCv93Mpyi8LxmE0SFsZmATspyt1z2GJmfHTN%2B4ohFRqVb4hEbxkMeE5majmF%2BbReFeK%2FTAEW1FRxEjhlQX8xGMUU6gXrfGDia5pKMflobstFKmStw35CvSWkFm1sHXMpsy%2BTZ5wMyxzDTgZhF7dqmFFQkWRHVdZMZ32m6O%2BcdALjx9gav%2FgdoBiscLxr40c7x1BcFz7acGOe0LjZjXRmrtPMZ%2BMbq6xzIyW%2FjteEGlvHSbTb2Cq5TqBmNf32uNE3Z%2B4b2g1zgsalC25AAcGb2062iQPV%2B%2FauuqTB7yQIPqQ14ckvymTRwJw%2FEteHQKIxQIu%2BVWLc9Q9q95TrOVpefmV%2FUHUgZsAj17iRGM%2BVhr9jupy0Oklk1ufKIJEsLTgCRMS0KEmBbiG%2BitOupgJtrVfQMF1p8FzLhPs6Bg0bvZAeeteBGPJQ72DjY7B%2BBbqy%2BlEx0qhgI%2BpyBSyQZmFPkMZBBL5MJH0vc4GOqUBv9iv1tB5SRQdXekvCDqZZEFoWtNTo5Yc1OsioUJtcCGwahRhEwC8jzJZcJr3XnUQHQQUQUq7Qkufmp38qdMYW8unoiDYLK2ZuDbsrG0HmpPWMvdMANywpVCWLV139ibxcmnhy3bQNYkV0F7XBf%2BZlhlMevuJnadLjHUS4klass4bCCl5OQxjDU7E19PPeGd%2FlMgIzIGKVikKwxcFg2qU0FTFp8ID&X-Amz-Signature=c1cd11341ad88a35b0d4f4ccd370aa7a74d4e7ef3bbf3dcb234b4214e22305a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEM5CZGY%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085344Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnTGUy3T5hrT00ovaLYBAlqzxkUR7bp1BaPBrpBACUqQIgBDwm%2Bx5M4xiVYT6Zxdgx9Zw3PxgC1thOPsD5X2Nq9AEqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFqOIqjnACJZ1ZgwsircAwGbytuj%2B5aiowkH%2BKayN5c%2Buo8mWoosgLGnyVXg4Ue2tCcPNOTssqdIWJj0OiuMEw%2B6Z3hpj8yoElk9DJLzRmrfadLYT4ky3cZUfkF0eh10MiJy1oGuqMaeEbWP6rgC8ZdXHR1iYdrgMYOc%2FIAHKt0siaMXgi31g%2B3iAEmcyeTIEBAVCRwsUO8GOlHqPeRQb11epjdWxcVjrWl17awZUmuRbRNIsxeIxUaYHbR86lVw2vABwNTYYfV8m6FPawHqEV9dR%2FyicS6MRxtH2%2Fou%2B3Xx3NeN78wWIQ97aLKAMoDmT0YElenLN6uT9Oruuc4iAXu64HfOLXEtPvvTfcKh3F5zRKqRZJuByOs1b%2FgupfX4Oayx1vyK7QtbAFSnvfW10qV6bbCo%2BLCxMEhtVMFUFNR3n7rcCEjN2Ncz2%2FFtaK%2F3T%2BZvWXPh5xyk3m%2Bjjt0ZFoVXFUCFp6491kP3fMU95im%2F8IFCqIuC9QjJLYmNYelHigGbjdmYN8vO297V%2BOKQzsKmdU4Oj9CU8bj4JvL3KmBNT6j%2BTM2y0dOYCgKIDvnkJwO0Ktw78VqoHfXB5CeBS4CU5tvlIm0Btha6%2BBFgrbcuVnx5y3qHDObBU5zLmuVojS8fJqY5F97imcG5MOryvc4GOqUBT21FG4Gd0R7IXLZVneNq7gSUrNdeJgPqInIVdFl8cBwD7ZkKia8ZPp5RO0gMnwD%2BzSX8vyFHdNRbzWuleuBEBpVHBaeYRRFEBvbguZs0mFXWylLBBV59m%2FF%2FNQkyjNeqKtYv9iosWjL2EL2QyxjIXGKn5%2BFI0yWzqhQ2Eg3kk3m%2BTGc%2FO0GIGaJ7u8P6R%2Bc9%2BJJTU7KYJx1yv%2Bf06%2F1HRt2RS1aS&X-Amz-Signature=34cb120e83eb455fe0ab4e37411823cc936d6d879a4618b613e673768bb92641&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEM5CZGY%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085344Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnTGUy3T5hrT00ovaLYBAlqzxkUR7bp1BaPBrpBACUqQIgBDwm%2Bx5M4xiVYT6Zxdgx9Zw3PxgC1thOPsD5X2Nq9AEqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFqOIqjnACJZ1ZgwsircAwGbytuj%2B5aiowkH%2BKayN5c%2Buo8mWoosgLGnyVXg4Ue2tCcPNOTssqdIWJj0OiuMEw%2B6Z3hpj8yoElk9DJLzRmrfadLYT4ky3cZUfkF0eh10MiJy1oGuqMaeEbWP6rgC8ZdXHR1iYdrgMYOc%2FIAHKt0siaMXgi31g%2B3iAEmcyeTIEBAVCRwsUO8GOlHqPeRQb11epjdWxcVjrWl17awZUmuRbRNIsxeIxUaYHbR86lVw2vABwNTYYfV8m6FPawHqEV9dR%2FyicS6MRxtH2%2Fou%2B3Xx3NeN78wWIQ97aLKAMoDmT0YElenLN6uT9Oruuc4iAXu64HfOLXEtPvvTfcKh3F5zRKqRZJuByOs1b%2FgupfX4Oayx1vyK7QtbAFSnvfW10qV6bbCo%2BLCxMEhtVMFUFNR3n7rcCEjN2Ncz2%2FFtaK%2F3T%2BZvWXPh5xyk3m%2Bjjt0ZFoVXFUCFp6491kP3fMU95im%2F8IFCqIuC9QjJLYmNYelHigGbjdmYN8vO297V%2BOKQzsKmdU4Oj9CU8bj4JvL3KmBNT6j%2BTM2y0dOYCgKIDvnkJwO0Ktw78VqoHfXB5CeBS4CU5tvlIm0Btha6%2BBFgrbcuVnx5y3qHDObBU5zLmuVojS8fJqY5F97imcG5MOryvc4GOqUBT21FG4Gd0R7IXLZVneNq7gSUrNdeJgPqInIVdFl8cBwD7ZkKia8ZPp5RO0gMnwD%2BzSX8vyFHdNRbzWuleuBEBpVHBaeYRRFEBvbguZs0mFXWylLBBV59m%2FF%2FNQkyjNeqKtYv9iosWjL2EL2QyxjIXGKn5%2BFI0yWzqhQ2Eg3kk3m%2BTGc%2FO0GIGaJ7u8P6R%2Bc9%2BJJTU7KYJx1yv%2Bf06%2F1HRt2RS1aS&X-Amz-Signature=ca62b68dff0c44ec827c4999f12dc18917603ab7b24d95c9dbdbd5d5608e7125&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEM5CZGY%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085344Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnTGUy3T5hrT00ovaLYBAlqzxkUR7bp1BaPBrpBACUqQIgBDwm%2Bx5M4xiVYT6Zxdgx9Zw3PxgC1thOPsD5X2Nq9AEqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFqOIqjnACJZ1ZgwsircAwGbytuj%2B5aiowkH%2BKayN5c%2Buo8mWoosgLGnyVXg4Ue2tCcPNOTssqdIWJj0OiuMEw%2B6Z3hpj8yoElk9DJLzRmrfadLYT4ky3cZUfkF0eh10MiJy1oGuqMaeEbWP6rgC8ZdXHR1iYdrgMYOc%2FIAHKt0siaMXgi31g%2B3iAEmcyeTIEBAVCRwsUO8GOlHqPeRQb11epjdWxcVjrWl17awZUmuRbRNIsxeIxUaYHbR86lVw2vABwNTYYfV8m6FPawHqEV9dR%2FyicS6MRxtH2%2Fou%2B3Xx3NeN78wWIQ97aLKAMoDmT0YElenLN6uT9Oruuc4iAXu64HfOLXEtPvvTfcKh3F5zRKqRZJuByOs1b%2FgupfX4Oayx1vyK7QtbAFSnvfW10qV6bbCo%2BLCxMEhtVMFUFNR3n7rcCEjN2Ncz2%2FFtaK%2F3T%2BZvWXPh5xyk3m%2Bjjt0ZFoVXFUCFp6491kP3fMU95im%2F8IFCqIuC9QjJLYmNYelHigGbjdmYN8vO297V%2BOKQzsKmdU4Oj9CU8bj4JvL3KmBNT6j%2BTM2y0dOYCgKIDvnkJwO0Ktw78VqoHfXB5CeBS4CU5tvlIm0Btha6%2BBFgrbcuVnx5y3qHDObBU5zLmuVojS8fJqY5F97imcG5MOryvc4GOqUBT21FG4Gd0R7IXLZVneNq7gSUrNdeJgPqInIVdFl8cBwD7ZkKia8ZPp5RO0gMnwD%2BzSX8vyFHdNRbzWuleuBEBpVHBaeYRRFEBvbguZs0mFXWylLBBV59m%2FF%2FNQkyjNeqKtYv9iosWjL2EL2QyxjIXGKn5%2BFI0yWzqhQ2Eg3kk3m%2BTGc%2FO0GIGaJ7u8P6R%2Bc9%2BJJTU7KYJx1yv%2Bf06%2F1HRt2RS1aS&X-Amz-Signature=582feb96b61fdb4c33855f19c961088f590ce1d38dece67a867236b1a420658c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEM5CZGY%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085344Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnTGUy3T5hrT00ovaLYBAlqzxkUR7bp1BaPBrpBACUqQIgBDwm%2Bx5M4xiVYT6Zxdgx9Zw3PxgC1thOPsD5X2Nq9AEqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFqOIqjnACJZ1ZgwsircAwGbytuj%2B5aiowkH%2BKayN5c%2Buo8mWoosgLGnyVXg4Ue2tCcPNOTssqdIWJj0OiuMEw%2B6Z3hpj8yoElk9DJLzRmrfadLYT4ky3cZUfkF0eh10MiJy1oGuqMaeEbWP6rgC8ZdXHR1iYdrgMYOc%2FIAHKt0siaMXgi31g%2B3iAEmcyeTIEBAVCRwsUO8GOlHqPeRQb11epjdWxcVjrWl17awZUmuRbRNIsxeIxUaYHbR86lVw2vABwNTYYfV8m6FPawHqEV9dR%2FyicS6MRxtH2%2Fou%2B3Xx3NeN78wWIQ97aLKAMoDmT0YElenLN6uT9Oruuc4iAXu64HfOLXEtPvvTfcKh3F5zRKqRZJuByOs1b%2FgupfX4Oayx1vyK7QtbAFSnvfW10qV6bbCo%2BLCxMEhtVMFUFNR3n7rcCEjN2Ncz2%2FFtaK%2F3T%2BZvWXPh5xyk3m%2Bjjt0ZFoVXFUCFp6491kP3fMU95im%2F8IFCqIuC9QjJLYmNYelHigGbjdmYN8vO297V%2BOKQzsKmdU4Oj9CU8bj4JvL3KmBNT6j%2BTM2y0dOYCgKIDvnkJwO0Ktw78VqoHfXB5CeBS4CU5tvlIm0Btha6%2BBFgrbcuVnx5y3qHDObBU5zLmuVojS8fJqY5F97imcG5MOryvc4GOqUBT21FG4Gd0R7IXLZVneNq7gSUrNdeJgPqInIVdFl8cBwD7ZkKia8ZPp5RO0gMnwD%2BzSX8vyFHdNRbzWuleuBEBpVHBaeYRRFEBvbguZs0mFXWylLBBV59m%2FF%2FNQkyjNeqKtYv9iosWjL2EL2QyxjIXGKn5%2BFI0yWzqhQ2Eg3kk3m%2BTGc%2FO0GIGaJ7u8P6R%2Bc9%2BJJTU7KYJx1yv%2Bf06%2F1HRt2RS1aS&X-Amz-Signature=e1d72b01233faa223fa8479bfd4a6174dd38fa8da728d4da47f76ef6908e7a48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663GFW3MZU%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085345Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBsl9RX0rFXLDPkMwEu%2BrWn%2BfZb6D28Hhuh457rnOeg%2BAiAV%2BOoCxXRgzXy%2BSH%2FupEfwAehMgNAUDSkstsB5%2Fo%2FhsSqIBAiC%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMf8%2FV8K6AdCD24gNQKtwDugIO7aoBQj%2FoCsNx8v5r8Yx6d2Okp3cUJp9vkAFlK%2FXRwdDtDousNrntq9yY7ant4qQ2iQEsrhvumOiSSga0kpFShAsaio0rJw0mtoEajixl5HUJylWHAlfJdQ9eqg301X5B6M7k2%2FZJeMwblyoZLViw6RccRy%2FwC3ck7xI%2FMavwX%2BE%2FLoI%2Fn7fsK58GK%2BuI9LPdBYxUpBIYqE%2Fpfz3D%2Bv5sl8t4QTXM6KudS4MM5DKv6T4ZM9Hwf0iyc%2FFd5YkuIo9DPJvysqtn2ylj%2FqM%2B4b0fJbTbhKyphRKWiCxMqDD0ln6a%2Bbp8MySsxe3%2BJEArYDKzcyYLD1w2e9s66i4ISPV05r%2FM2uVxBHHICOe5NuybTS2xRBVvUnUrJMVX9tcaOjlqGIiw2uzOXqBnQXLmwH3ZxSR5ss0tWziknP6MXdBUCGw34Ofz5REUHQpj1trU7%2B8ENOm87sbiPgPbf0jz%2FQ%2FtVdwhHRByKPtf2zTEQrNeTM4MAXLS5a9o9Xjmu6RYDYeLO3rSljHBrlAsnAs9dx2JHjZ9%2FZNF1euoO6qFs28RNhGvqmYqRML977h3wG16uHyaNCFkoKvoCe4XactF41ORv7ch0KwjJwvSQ2qbeQ78urGVhnOT8Q8dzU4wqPS9zgY6pgEtGsJk1GIi3jUHB7%2FHS9Ns5owsOdy56oKSZCejUbhY5cSh%2FVnNTQm6Hn0PESloCjzsRy5UGOWbj6rD1Qa9zB1lgOKr%2FTKnWnsWXz0C1cNPOumRVRc%2Bcm2U%2BFcXEA9WDTH1qhVyIpqyaTURoMx%2F7WV0UrHI8b7OUYec%2BNLuWZ%2B8Jm75nRMN1DyEk6xqEOiznpi1XgrthCG8c4eM8YvidPmWfPFhMAdj&X-Amz-Signature=aa0d99a86ee94f43537b6f0769470c71da4f7448fc65ca4c2a5f6264cf01bf25&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BCZP5V2%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085345Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDDQMrmUqgzc5adnE2QamxKiHsulOC76OPBIaRoM5AzgAIhAPi7uz3be2efP6zZo6cq3ET4pMakpjMzo%2FBnARTz9z9CKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyTftNCbuEANZwHucq3AMM73gM%2B7Tl3F9RDxrWYaqr%2FZ%2B%2FyPAlquMODHJENL%2BkknyAiFm%2FbcwJsRRP5woDMwjg6HUq0yZ37VzlHu1R5DR%2FaTjYrBF3zcRZhqDyjGBauR%2BMog2%2FGRDNYimJXNz5CP1IicpV6ZHPDd2YID%2BUKl9LqS3QoGwdf%2FO9CJfqQV7q9m4mDnuR%2FwgUyA2h9T62OUlpxcpg2jBcEMyPqtlauenRXHUR7u6Jj4riycbIhcjFZRZR3X9HuhrpLobBl96b7RA5Umcs97FbM2upIak7NcnsPB5h4BI5F3gZ1o%2B0FfWUUl2KBl3n%2FasmWFABMj%2FKTkYR4bmsm27YqlAa5d3PuENbHLi%2FAhQz0tcZrSPNxCsUNF0suQiM6C93WL1ynt8eVgQqI3z27tL0Ta2%2Bw3iscBNcMlrkovMZiIi4O67Kpl3Oyo%2B1XSZHwEvzU8%2FqND3DN3K5uYdB1wzZNOo3aywP0kiPskb8k51xHz791wAnuEugrMkpBeo7ut44qqCbPlyA%2BikSi3eLeni%2B1k8Afk2Z0fBZz1kgwUbTHTlUycYAqQRnkgtjBy8fHcKMVdiVYgzAsNVSJ73fDLzbDd6W84jA0PPgasD2sWoQDoXd8JCrZnqPkxiyOV0e1BHn8%2BT4nTCX8r3OBjqkAV5TdxHiyDwG1R64znIIo2rVP4w5rjnEtMquXre%2FXPDaXIVVuvODJlIQKhApxd9cWQ0MALMUuQa%2BZgzv1KNQgWdUuoUVqkKIRdAOYC68vxrMraomzhuZQeK1drp8p27E68%2BWHw4TiexRZ2iqU%2BhyCMsRuXUM0BsRT2LXH%2F1UDHQjqbhQ%2BlJtzW1wW1s6BrXAbsOspB9KO%2FwgtMNgEYm02iNTrScm&X-Amz-Signature=addaea0e4732b012f0f3b6ad733b2f67c52ce077ffe9688a354b89eabee017b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BCZP5V2%2F20260403%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260403T085345Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDDQMrmUqgzc5adnE2QamxKiHsulOC76OPBIaRoM5AzgAIhAPi7uz3be2efP6zZo6cq3ET4pMakpjMzo%2FBnARTz9z9CKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyTftNCbuEANZwHucq3AMM73gM%2B7Tl3F9RDxrWYaqr%2FZ%2B%2FyPAlquMODHJENL%2BkknyAiFm%2FbcwJsRRP5woDMwjg6HUq0yZ37VzlHu1R5DR%2FaTjYrBF3zcRZhqDyjGBauR%2BMog2%2FGRDNYimJXNz5CP1IicpV6ZHPDd2YID%2BUKl9LqS3QoGwdf%2FO9CJfqQV7q9m4mDnuR%2FwgUyA2h9T62OUlpxcpg2jBcEMyPqtlauenRXHUR7u6Jj4riycbIhcjFZRZR3X9HuhrpLobBl96b7RA5Umcs97FbM2upIak7NcnsPB5h4BI5F3gZ1o%2B0FfWUUl2KBl3n%2FasmWFABMj%2FKTkYR4bmsm27YqlAa5d3PuENbHLi%2FAhQz0tcZrSPNxCsUNF0suQiM6C93WL1ynt8eVgQqI3z27tL0Ta2%2Bw3iscBNcMlrkovMZiIi4O67Kpl3Oyo%2B1XSZHwEvzU8%2FqND3DN3K5uYdB1wzZNOo3aywP0kiPskb8k51xHz791wAnuEugrMkpBeo7ut44qqCbPlyA%2BikSi3eLeni%2B1k8Afk2Z0fBZz1kgwUbTHTlUycYAqQRnkgtjBy8fHcKMVdiVYgzAsNVSJ73fDLzbDd6W84jA0PPgasD2sWoQDoXd8JCrZnqPkxiyOV0e1BHn8%2BT4nTCX8r3OBjqkAV5TdxHiyDwG1R64znIIo2rVP4w5rjnEtMquXre%2FXPDaXIVVuvODJlIQKhApxd9cWQ0MALMUuQa%2BZgzv1KNQgWdUuoUVqkKIRdAOYC68vxrMraomzhuZQeK1drp8p27E68%2BWHw4TiexRZ2iqU%2BhyCMsRuXUM0BsRT2LXH%2F1UDHQjqbhQ%2BlJtzW1wW1s6BrXAbsOspB9KO%2FwgtMNgEYm02iNTrScm&X-Amz-Signature=ecf36c4bc85c0747903b121b97131b21e4ad5799a75b496358f1997169c7b720&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
