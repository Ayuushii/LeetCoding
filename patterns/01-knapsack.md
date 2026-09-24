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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDV7VOWJ%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJGMEQCIGdefCZbmQIP7U8OnIQUxIIz7qY59Wi9TCmDU8uJPfJdAiB6kEIo7JAHAOcuMzNcB5BO4vJ72b%2B2tONLvrotEJH9LyqIBAjV%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMf2oaYHkoZA3j7PueKtwDpyM1prQhKrZTN%2FUy%2FO7FRO5hMLIa8X8xS8AjOGNbb7vYSwpOhSqQymljv1fEQVgOtomlvS5hV5BducBXu8X7m6W9qazV9TZ8RIdHCMWbH%2BsYtqdC6iA1aUz11OPUquBJRwjZRebQB9Qe%2BHGh0ZEbqSSRG37d1NZrahhJJI%2FDkKjY5rzaNVKIGxXm4ZxVLXHq1byHqRQKQ0mlSbGPSXiKkElJqQoUE6IfgzUk4Hj9%2Ftfxgq7ZAXM%2Fz9IPcmY%2FoAQpb%2F7PFOnKJlYHTPrhLWnSYFv9HKUrX5bJD6N4IaSkAlFs2LSl5n7CxJZf5s6XUx8fqmtAHGLszvD2HcXCIoCR%2BWY8Kv8fEz3HwzQFWg6b31SIkgKT8YTCI%2Ba6iyTM7kfFtHOiImupe9vUQrAJz8bFFZblh5GaqBKbwU60iVfeerIyWue2MrrUjKh2UIHRG31M4g4uq4IGSKn%2BssgtnJTPwzoui2%2B2gsPDedoSOVBLW%2FNho9aHo9yqXSai6AFPQRgRAx2A67FeDKy4lXXFsweFcTc5c2rBsCHPUEAd%2FoPHfwy%2BIguDQmMk8npeUURkvkNcmAta3hLD4qKDqmG3yBuGoesQqhtwg23CwNsZfNwWBnZsTu5egrbikFzCDZQwzJvU1QY6pgE7hDu2YMqHN1NoU%2FgPqLwLv3B67JivompyWPAq%2BUI%2FOiV9iJ85PPko3RITdNfekGC9qe28hUX97XmwZojozqE9cQrtWGJuBkadcmh8yc8IGhjiZQaQzOnC07HQTEWSQUitBS9hWhpCm9VvkYr3vvHPuNeHjYl6u00QMDrF3aHut%2B%2BZNU9XVV9YTyok2yxoB3q1nTkxgoXWASCjstaiONNN1JvVe%2FQD&X-Amz-Signature=f156f3dbb0db2adfa0bf4438e99767be2de0ce9f395ee3b2cf3f39788b407bc7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDV7VOWJ%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJGMEQCIGdefCZbmQIP7U8OnIQUxIIz7qY59Wi9TCmDU8uJPfJdAiB6kEIo7JAHAOcuMzNcB5BO4vJ72b%2B2tONLvrotEJH9LyqIBAjV%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMf2oaYHkoZA3j7PueKtwDpyM1prQhKrZTN%2FUy%2FO7FRO5hMLIa8X8xS8AjOGNbb7vYSwpOhSqQymljv1fEQVgOtomlvS5hV5BducBXu8X7m6W9qazV9TZ8RIdHCMWbH%2BsYtqdC6iA1aUz11OPUquBJRwjZRebQB9Qe%2BHGh0ZEbqSSRG37d1NZrahhJJI%2FDkKjY5rzaNVKIGxXm4ZxVLXHq1byHqRQKQ0mlSbGPSXiKkElJqQoUE6IfgzUk4Hj9%2Ftfxgq7ZAXM%2Fz9IPcmY%2FoAQpb%2F7PFOnKJlYHTPrhLWnSYFv9HKUrX5bJD6N4IaSkAlFs2LSl5n7CxJZf5s6XUx8fqmtAHGLszvD2HcXCIoCR%2BWY8Kv8fEz3HwzQFWg6b31SIkgKT8YTCI%2Ba6iyTM7kfFtHOiImupe9vUQrAJz8bFFZblh5GaqBKbwU60iVfeerIyWue2MrrUjKh2UIHRG31M4g4uq4IGSKn%2BssgtnJTPwzoui2%2B2gsPDedoSOVBLW%2FNho9aHo9yqXSai6AFPQRgRAx2A67FeDKy4lXXFsweFcTc5c2rBsCHPUEAd%2FoPHfwy%2BIguDQmMk8npeUURkvkNcmAta3hLD4qKDqmG3yBuGoesQqhtwg23CwNsZfNwWBnZsTu5egrbikFzCDZQwzJvU1QY6pgE7hDu2YMqHN1NoU%2FgPqLwLv3B67JivompyWPAq%2BUI%2FOiV9iJ85PPko3RITdNfekGC9qe28hUX97XmwZojozqE9cQrtWGJuBkadcmh8yc8IGhjiZQaQzOnC07HQTEWSQUitBS9hWhpCm9VvkYr3vvHPuNeHjYl6u00QMDrF3aHut%2B%2BZNU9XVV9YTyok2yxoB3q1nTkxgoXWASCjstaiONNN1JvVe%2FQD&X-Amz-Signature=2ab8e576c47413db4e37dfd44fc30434acbebc995286c2cf2c309edd14c2a3ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDV7VOWJ%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJGMEQCIGdefCZbmQIP7U8OnIQUxIIz7qY59Wi9TCmDU8uJPfJdAiB6kEIo7JAHAOcuMzNcB5BO4vJ72b%2B2tONLvrotEJH9LyqIBAjV%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMf2oaYHkoZA3j7PueKtwDpyM1prQhKrZTN%2FUy%2FO7FRO5hMLIa8X8xS8AjOGNbb7vYSwpOhSqQymljv1fEQVgOtomlvS5hV5BducBXu8X7m6W9qazV9TZ8RIdHCMWbH%2BsYtqdC6iA1aUz11OPUquBJRwjZRebQB9Qe%2BHGh0ZEbqSSRG37d1NZrahhJJI%2FDkKjY5rzaNVKIGxXm4ZxVLXHq1byHqRQKQ0mlSbGPSXiKkElJqQoUE6IfgzUk4Hj9%2Ftfxgq7ZAXM%2Fz9IPcmY%2FoAQpb%2F7PFOnKJlYHTPrhLWnSYFv9HKUrX5bJD6N4IaSkAlFs2LSl5n7CxJZf5s6XUx8fqmtAHGLszvD2HcXCIoCR%2BWY8Kv8fEz3HwzQFWg6b31SIkgKT8YTCI%2Ba6iyTM7kfFtHOiImupe9vUQrAJz8bFFZblh5GaqBKbwU60iVfeerIyWue2MrrUjKh2UIHRG31M4g4uq4IGSKn%2BssgtnJTPwzoui2%2B2gsPDedoSOVBLW%2FNho9aHo9yqXSai6AFPQRgRAx2A67FeDKy4lXXFsweFcTc5c2rBsCHPUEAd%2FoPHfwy%2BIguDQmMk8npeUURkvkNcmAta3hLD4qKDqmG3yBuGoesQqhtwg23CwNsZfNwWBnZsTu5egrbikFzCDZQwzJvU1QY6pgE7hDu2YMqHN1NoU%2FgPqLwLv3B67JivompyWPAq%2BUI%2FOiV9iJ85PPko3RITdNfekGC9qe28hUX97XmwZojozqE9cQrtWGJuBkadcmh8yc8IGhjiZQaQzOnC07HQTEWSQUitBS9hWhpCm9VvkYr3vvHPuNeHjYl6u00QMDrF3aHut%2B%2BZNU9XVV9YTyok2yxoB3q1nTkxgoXWASCjstaiONNN1JvVe%2FQD&X-Amz-Signature=e4e0ee94cc8835470c282e564e32c02d78fe5e36eae35f0b8d71ae07b122cb42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYVFWXQ5%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIDCUFgODQ8ZEwoDHwNOv4jziG4grnQoUXJSj0gCOJgijAiEA51hWtMegHy9IBgsBlrgqLDIhVQJSEdO9w%2BM%2FApxPRyMqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMDrh2OOtRKBNbYHNircA9jtK4vZK%2F8%2F%2FwEW%2F908AlmnJanZpptD%2FNhwahuE2zUQeYS1Srq9GxBMd38iLE%2Fsc%2BmTouLuOVJUc8k9HTuI0apI1ZOFfvf%2BO%2FTwN7UlMbSJXL9AyRASLF0LxTOXrU3vfTnK12CpheIaRi6O305Fj5Ea1jORfNVZ704AXmONocQgtqGhppWJo3xi3%2Fl7gpQ8s0kf4Rr8iZ%2BGz0Et6EiRHzADltbYIAkf5OiUCUmWJLP%2B4sIm%2FQxgok%2F1wG4rOBq2F8YEWu5jPcntgt5uSdCMKOdocN6DjlOQD6dsV1g7JwARxf1GRcSBMbtb7aj3WV4RNjW%2BZUflZG4Q%2B9HBLA0kKFLCev3rvdPIHpZCr6wF%2BGPXl9fzsro2R9dRScf1gFUM%2F%2B6%2BJDs%2FLxHAMZ2ok79b8py1Ol1Spu7U%2Fs%2Bm5bYGNmqVDlU8XOM0tLmBXuS1tuzVNH0%2F9GR%2F%2B5QplkKyKi7uQC5V062MZfWQJUajBKhgUTC2ySYs%2FJSVOFRmWHJvaQBmBe2kA6Y0mXFhg3bygGmWpZ8kvpyUJiRIYpuAghoGmrrnj3Oug1T0hiFfkihnU%2ByAefZVcoWzXtQde12qB5vDZUcwyu74n1wxchZhIt0IIq0qGjSFKKhOwlM41pcSMKqb1NUGOqUBXQJNF6hv%2FqYdmb39wz2BhelL9fXbPEmoXg6nY89rNI1XeF2CIzCRfXRLjduHesyf226TSMd15j2mUSB3rh0XBS8h8USIXBLRBut5Iy55mcIu1bdNfZ5tTpYFl%2FyCk1%2BQIbKQh2Fzng4vezhKDD0ZRrR4wf7FsW0TjaPlCi46D69QJ7GGeLFN70zXGsA8xQZdLB1pjx8Z5DlDTFm7Swy%2BZUe9KGau&X-Amz-Signature=57205e45fa23692c3076f941f56de180642540695f2a3546641f4ec7145f3393&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYVFWXQ5%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIDCUFgODQ8ZEwoDHwNOv4jziG4grnQoUXJSj0gCOJgijAiEA51hWtMegHy9IBgsBlrgqLDIhVQJSEdO9w%2BM%2FApxPRyMqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMDrh2OOtRKBNbYHNircA9jtK4vZK%2F8%2F%2FwEW%2F908AlmnJanZpptD%2FNhwahuE2zUQeYS1Srq9GxBMd38iLE%2Fsc%2BmTouLuOVJUc8k9HTuI0apI1ZOFfvf%2BO%2FTwN7UlMbSJXL9AyRASLF0LxTOXrU3vfTnK12CpheIaRi6O305Fj5Ea1jORfNVZ704AXmONocQgtqGhppWJo3xi3%2Fl7gpQ8s0kf4Rr8iZ%2BGz0Et6EiRHzADltbYIAkf5OiUCUmWJLP%2B4sIm%2FQxgok%2F1wG4rOBq2F8YEWu5jPcntgt5uSdCMKOdocN6DjlOQD6dsV1g7JwARxf1GRcSBMbtb7aj3WV4RNjW%2BZUflZG4Q%2B9HBLA0kKFLCev3rvdPIHpZCr6wF%2BGPXl9fzsro2R9dRScf1gFUM%2F%2B6%2BJDs%2FLxHAMZ2ok79b8py1Ol1Spu7U%2Fs%2Bm5bYGNmqVDlU8XOM0tLmBXuS1tuzVNH0%2F9GR%2F%2B5QplkKyKi7uQC5V062MZfWQJUajBKhgUTC2ySYs%2FJSVOFRmWHJvaQBmBe2kA6Y0mXFhg3bygGmWpZ8kvpyUJiRIYpuAghoGmrrnj3Oug1T0hiFfkihnU%2ByAefZVcoWzXtQde12qB5vDZUcwyu74n1wxchZhIt0IIq0qGjSFKKhOwlM41pcSMKqb1NUGOqUBXQJNF6hv%2FqYdmb39wz2BhelL9fXbPEmoXg6nY89rNI1XeF2CIzCRfXRLjduHesyf226TSMd15j2mUSB3rh0XBS8h8USIXBLRBut5Iy55mcIu1bdNfZ5tTpYFl%2FyCk1%2BQIbKQh2Fzng4vezhKDD0ZRrR4wf7FsW0TjaPlCi46D69QJ7GGeLFN70zXGsA8xQZdLB1pjx8Z5DlDTFm7Swy%2BZUe9KGau&X-Amz-Signature=97eade0dd94ca63f73d4b3bb8e3ee62d6597e3e1e3631e444563adc90a9cd1c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYVFWXQ5%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIDCUFgODQ8ZEwoDHwNOv4jziG4grnQoUXJSj0gCOJgijAiEA51hWtMegHy9IBgsBlrgqLDIhVQJSEdO9w%2BM%2FApxPRyMqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMDrh2OOtRKBNbYHNircA9jtK4vZK%2F8%2F%2FwEW%2F908AlmnJanZpptD%2FNhwahuE2zUQeYS1Srq9GxBMd38iLE%2Fsc%2BmTouLuOVJUc8k9HTuI0apI1ZOFfvf%2BO%2FTwN7UlMbSJXL9AyRASLF0LxTOXrU3vfTnK12CpheIaRi6O305Fj5Ea1jORfNVZ704AXmONocQgtqGhppWJo3xi3%2Fl7gpQ8s0kf4Rr8iZ%2BGz0Et6EiRHzADltbYIAkf5OiUCUmWJLP%2B4sIm%2FQxgok%2F1wG4rOBq2F8YEWu5jPcntgt5uSdCMKOdocN6DjlOQD6dsV1g7JwARxf1GRcSBMbtb7aj3WV4RNjW%2BZUflZG4Q%2B9HBLA0kKFLCev3rvdPIHpZCr6wF%2BGPXl9fzsro2R9dRScf1gFUM%2F%2B6%2BJDs%2FLxHAMZ2ok79b8py1Ol1Spu7U%2Fs%2Bm5bYGNmqVDlU8XOM0tLmBXuS1tuzVNH0%2F9GR%2F%2B5QplkKyKi7uQC5V062MZfWQJUajBKhgUTC2ySYs%2FJSVOFRmWHJvaQBmBe2kA6Y0mXFhg3bygGmWpZ8kvpyUJiRIYpuAghoGmrrnj3Oug1T0hiFfkihnU%2ByAefZVcoWzXtQde12qB5vDZUcwyu74n1wxchZhIt0IIq0qGjSFKKhOwlM41pcSMKqb1NUGOqUBXQJNF6hv%2FqYdmb39wz2BhelL9fXbPEmoXg6nY89rNI1XeF2CIzCRfXRLjduHesyf226TSMd15j2mUSB3rh0XBS8h8USIXBLRBut5Iy55mcIu1bdNfZ5tTpYFl%2FyCk1%2BQIbKQh2Fzng4vezhKDD0ZRrR4wf7FsW0TjaPlCi46D69QJ7GGeLFN70zXGsA8xQZdLB1pjx8Z5DlDTFm7Swy%2BZUe9KGau&X-Amz-Signature=e02c8818222d9f4328613025854b8534fe277b10aec50d7a03b48025ee75ce44&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYVFWXQ5%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIDCUFgODQ8ZEwoDHwNOv4jziG4grnQoUXJSj0gCOJgijAiEA51hWtMegHy9IBgsBlrgqLDIhVQJSEdO9w%2BM%2FApxPRyMqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMDrh2OOtRKBNbYHNircA9jtK4vZK%2F8%2F%2FwEW%2F908AlmnJanZpptD%2FNhwahuE2zUQeYS1Srq9GxBMd38iLE%2Fsc%2BmTouLuOVJUc8k9HTuI0apI1ZOFfvf%2BO%2FTwN7UlMbSJXL9AyRASLF0LxTOXrU3vfTnK12CpheIaRi6O305Fj5Ea1jORfNVZ704AXmONocQgtqGhppWJo3xi3%2Fl7gpQ8s0kf4Rr8iZ%2BGz0Et6EiRHzADltbYIAkf5OiUCUmWJLP%2B4sIm%2FQxgok%2F1wG4rOBq2F8YEWu5jPcntgt5uSdCMKOdocN6DjlOQD6dsV1g7JwARxf1GRcSBMbtb7aj3WV4RNjW%2BZUflZG4Q%2B9HBLA0kKFLCev3rvdPIHpZCr6wF%2BGPXl9fzsro2R9dRScf1gFUM%2F%2B6%2BJDs%2FLxHAMZ2ok79b8py1Ol1Spu7U%2Fs%2Bm5bYGNmqVDlU8XOM0tLmBXuS1tuzVNH0%2F9GR%2F%2B5QplkKyKi7uQC5V062MZfWQJUajBKhgUTC2ySYs%2FJSVOFRmWHJvaQBmBe2kA6Y0mXFhg3bygGmWpZ8kvpyUJiRIYpuAghoGmrrnj3Oug1T0hiFfkihnU%2ByAefZVcoWzXtQde12qB5vDZUcwyu74n1wxchZhIt0IIq0qGjSFKKhOwlM41pcSMKqb1NUGOqUBXQJNF6hv%2FqYdmb39wz2BhelL9fXbPEmoXg6nY89rNI1XeF2CIzCRfXRLjduHesyf226TSMd15j2mUSB3rh0XBS8h8USIXBLRBut5Iy55mcIu1bdNfZ5tTpYFl%2FyCk1%2BQIbKQh2Fzng4vezhKDD0ZRrR4wf7FsW0TjaPlCi46D69QJ7GGeLFN70zXGsA8xQZdLB1pjx8Z5DlDTFm7Swy%2BZUe9KGau&X-Amz-Signature=b9c91a7bf14cc2a8a3e7f6874ec9661a312081d70e25e48deff78891b9543cdd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZIKFCY3Y%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIQC0Igbf4GuDjFfIzc6xMOLCgWlmoWATkoskG6S8CJddKQIgSBv5XVAKo7BKyOsr5gUB7X%2FzW0ldsxbhPJtfX6hbTlkqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLe7Y4g0bndnedVDaSrcA4igcdj420JnZH325ooMGzKgRFWuSFSWotAHH6OcXYbABe6iCH0wFWErFHsF7ecKXEE7j1OkvA%2FcCgDl3eBNavRuB0dt0cbuxq%2BdfRLyw7hs0fNIJWbnKy2T7xPugcxfolGJcshZDM6cTzzugaiPz1BwQorf9lNNZRzK1hFA6kUsJvb6taYKwf1mRxg8WQaj8mQ5mhLv%2BBgbC0k6jcoPnzYpbmklsqpNxVA40C8FrD6tN0dEVizFNaBFEc2VaduCVtH0oGg1FlFaeIkXGxWHe9NuRTUUBenrXscOro5DfMKb3asv1snlKltd%2BfDF0GXN5xWpu8lUIbvXKKeCEOx9CJp51XxZk%2FstmxFZPvZRClHKiZdvuItQBHTZIqcl20O28SB4zFCmmMuRxDG8plIeEl0aTR4gbz1u5lavjFjcvPvZUE3O7SgAISHMWVCeowGnBEFsMvmIbEZUA5neWAh0DvR3JOb2K5J1ODIVeefl%2FngTuYDDRIXAJKn5si44bC1hu%2BXgkPz3aQGebZBRY%2Ft5DC%2FA7byuDHnfRDc4kaYqHnET5ukudcUpy7ZYDDQmDvi5xORciIRymRVpnis2daHQ4l92h6XacsW2K6rSj7u4CFBfM7dZZJQejwzmXDQYMOmb1NUGOqUBWl%2BT77YPwRt91yqaX6VFtcMonySGb%2FX9odf%2BA%2BFUhP9Axc9pD8yqq%2Bp3QoyBz%2FZ4fmMpAApq%2B9H097V8Xkw39CB2%2BsoE49xQ4hMbJWZhzr2i1xL0xzt0DGwbjX66QvibVEEJw6BnSvjHWeM0xc7RAhSLPiAGGYue1vKNMWdRoSx%2FdZxlksRgVK0F%2BunnXw%2FWVnu%2BsGDYF5GKMl7hijWsWOVIz06v&X-Amz-Signature=4ce26ef60f5c3b9b02b854c0f02b012c53657f6b3a78c7481ec809fbdc790e08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W35EDG4Q%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIQDdHK0z%2FDX8BuyuBmr0nXk3ZZ7uMZUrB6I%2B7amLG5fijwIgXnVeAPo%2Fk88QmfPyrPkuxctiHtaI4bWyRU%2F7E4tLmJYqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGamWXPRFjznsruzXCrcA4c8TFi3FZdR68rDXu1Vh18MMNIylQpVH8A7k5smDZ%2BvYK1oNz7ETNgvmMq0JdKZi7Jq%2BRle6qCOm1y%2FUijisHZ%2Bqxe5WNYMR6eK7yjT9PNdsy0r4PO2EF6pHUWg5GIDkerbhk48sHnCespAoiO7OeXkG29MGIW49M2a1PRzE6%2BWFrHPFNrZkgUJa%2FrL%2F%2BDSZO5oOBQcLI3f96tDXJ3%2BNlVXJ8byFakwu4gRviqRNU6Ac%2BStfVjXkT1n42BKNpPr1TyNgCF9UCfw6IFLZHDvfsf6%2FNTyg1V2XKDM%2FtTx1vzGMfzUK283tp1InSQlazuFPldV8t86xB1Mm2hL2lGuJukKlLcpCVuWg%2BdPjxbPt4pmugZvgZM5nmakYoGn02hwLJBUuOunNhIqyIeebsj3JePNdEtPt4VGLrVNBrV8ZFLSvr6XsiE6g8Lmxk2ac7pJ7KKhWpygT%2Bd51Sj7K6cLln6ilt7N1%2FhtqjAgJhZdAmcKdbkMCaXHRsxKs5FRR1k28FvJXd9f17aV32IXubEgLqIYQI09T1oY%2BItr03TBniyCoHpnUmwZSKlWtNKjaAC%2B3%2BpJ0brwaLE%2BAt4eEVnmLttvGauk4SdJ707MLIF1rPwm%2F7IWyQ2p4YApFcJWMI2e1NUGOqUBgcU74VwLEgyb8B4lMjW3VSIV0UVeRy3NwYUIpdFZb%2FAmL4NnhBZ4T1ZW9X5hzzRvyAzXw6dcOK7Dw5tcRaAsplN%2Bh65DmdD0bcfXzw0zJGtmeoH8a6Y%2BTx%2FMNe4MYKYl0NEGCunmqwCCN011RmHrH5h6auW8ZzehTEdfaky7au4GO9FkHu0KJ8HkJp5nxpwcYvvPMhxXHfHzVNg0oa9HUlB1krsl&X-Amz-Signature=3b4ba320e66d659f42633ad9c20c6ec1219c78d9917c1b9655b87edb747d7aac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W35EDG4Q%2F20260924%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260924T131401Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAwaCXVzLXdlc3QtMiJHMEUCIQDdHK0z%2FDX8BuyuBmr0nXk3ZZ7uMZUrB6I%2B7amLG5fijwIgXnVeAPo%2Fk88QmfPyrPkuxctiHtaI4bWyRU%2F7E4tLmJYqiAQI1f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGamWXPRFjznsruzXCrcA4c8TFi3FZdR68rDXu1Vh18MMNIylQpVH8A7k5smDZ%2BvYK1oNz7ETNgvmMq0JdKZi7Jq%2BRle6qCOm1y%2FUijisHZ%2Bqxe5WNYMR6eK7yjT9PNdsy0r4PO2EF6pHUWg5GIDkerbhk48sHnCespAoiO7OeXkG29MGIW49M2a1PRzE6%2BWFrHPFNrZkgUJa%2FrL%2F%2BDSZO5oOBQcLI3f96tDXJ3%2BNlVXJ8byFakwu4gRviqRNU6Ac%2BStfVjXkT1n42BKNpPr1TyNgCF9UCfw6IFLZHDvfsf6%2FNTyg1V2XKDM%2FtTx1vzGMfzUK283tp1InSQlazuFPldV8t86xB1Mm2hL2lGuJukKlLcpCVuWg%2BdPjxbPt4pmugZvgZM5nmakYoGn02hwLJBUuOunNhIqyIeebsj3JePNdEtPt4VGLrVNBrV8ZFLSvr6XsiE6g8Lmxk2ac7pJ7KKhWpygT%2Bd51Sj7K6cLln6ilt7N1%2FhtqjAgJhZdAmcKdbkMCaXHRsxKs5FRR1k28FvJXd9f17aV32IXubEgLqIYQI09T1oY%2BItr03TBniyCoHpnUmwZSKlWtNKjaAC%2B3%2BpJ0brwaLE%2BAt4eEVnmLttvGauk4SdJ707MLIF1rPwm%2F7IWyQ2p4YApFcJWMI2e1NUGOqUBgcU74VwLEgyb8B4lMjW3VSIV0UVeRy3NwYUIpdFZb%2FAmL4NnhBZ4T1ZW9X5hzzRvyAzXw6dcOK7Dw5tcRaAsplN%2Bh65DmdD0bcfXzw0zJGtmeoH8a6Y%2BTx%2FMNe4MYKYl0NEGCunmqwCCN011RmHrH5h6auW8ZzehTEdfaky7au4GO9FkHu0KJ8HkJp5nxpwcYvvPMhxXHfHzVNg0oa9HUlB1krsl&X-Amz-Signature=da76957d3572f286f876972428d8e003acb64f387af8986eacb0cd033740a723&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
