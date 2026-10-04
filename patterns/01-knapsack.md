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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIXU2AF3%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDmTXS%2BmWpx88UDIQb263CbEeKuZXKWdzyUyXTlVH0qWwIhAMZIe%2Bk9ZrT1BUWfZLlqYtmo%2FAx1wYBPPgna1iKOx5LdKogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwl28wgUTe7fm4rB0kq3AO3WnXxYXrC12Ay5aYpnHNncVemXXB7hKnQTKTe4NO5XhpaTBi8fTm3Jjgm0JprxLui8bd7F%2Fp6tjkMOa21QlARlW7P9PL3K5dj1hovpRFIkzbOss7LSyhWj7dvCOIA34c%2Fgk3u6GZBcD%2Fxugf%2BQRO8uF9ZFfk2i2dOksnWbQ4RRRLfOJHX4beQkL%2FSUs9eE0m%2F%2FZF4ZAE8ZJTbh8J69kN1d1AqMaH%2F7RGUo%2FWM%2FqmoKicRMeT%2BEMTdTPXyJjp3xxTA%2B6ZLot93TiRg2kOxXomZZbECTP7aXarzJwb5Y%2Fqquv0YzyAr6hNt%2Bd0nTMhJ4dJrAqbzMWx3RBRlMsUi7F8EinSCRtdIKhWC7zPlop3HIloLAj3UJ5OA7dcHZwc6kVICGBLHfEpFlN9NJljb8MSqUOZ6VfU5oyu762OL5DPX%2B2QKUPkUA%2FffvzpmKErZtfr3t3%2FS2OhCUoWVtnAvDeGddiDcusjPCs0IzESqPt5HbwrB8dNBqPqFGsia3O%2BZ8RXcyeaayktBP426EfCuFMfRcxN7uKo1xZQjaSfmCYKxoqetMEB9dJB3YwtPzYZ%2BQBLy%2FWkGzkgL6OS6NgN0XiRGGHO%2Fe9geU1hMZDKlWJdeKJhFCn6ZEsTgNu76UjDXmIjWBjqkAWoJQMZCR9n0TZrFUvnGRMUzX1BGIer4i7m%2Fx9gLuQwhqgfWj9v0WMpWgien3Z1VjyWANSzQel0iHXOjzBwbuAVJWGvUXBe280gD%2FQg42AxZTU7GWWWKL9Z2eglRFaaqof9OPdEBmg%2FF2PP2GLlS37rNBmogMwgSkA9ONOLAY4yLeSaNuN%2BaC2v8A9rb3Pl2fV%2B%2B5NTWaxxeHPGRInImD7C9Z8vM&X-Amz-Signature=4ca76103a9d3e3d7751ad5f9c9d6f90bdb185f34b246b7a2a2fa3a424c098d1b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIXU2AF3%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDmTXS%2BmWpx88UDIQb263CbEeKuZXKWdzyUyXTlVH0qWwIhAMZIe%2Bk9ZrT1BUWfZLlqYtmo%2FAx1wYBPPgna1iKOx5LdKogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwl28wgUTe7fm4rB0kq3AO3WnXxYXrC12Ay5aYpnHNncVemXXB7hKnQTKTe4NO5XhpaTBi8fTm3Jjgm0JprxLui8bd7F%2Fp6tjkMOa21QlARlW7P9PL3K5dj1hovpRFIkzbOss7LSyhWj7dvCOIA34c%2Fgk3u6GZBcD%2Fxugf%2BQRO8uF9ZFfk2i2dOksnWbQ4RRRLfOJHX4beQkL%2FSUs9eE0m%2F%2FZF4ZAE8ZJTbh8J69kN1d1AqMaH%2F7RGUo%2FWM%2FqmoKicRMeT%2BEMTdTPXyJjp3xxTA%2B6ZLot93TiRg2kOxXomZZbECTP7aXarzJwb5Y%2Fqquv0YzyAr6hNt%2Bd0nTMhJ4dJrAqbzMWx3RBRlMsUi7F8EinSCRtdIKhWC7zPlop3HIloLAj3UJ5OA7dcHZwc6kVICGBLHfEpFlN9NJljb8MSqUOZ6VfU5oyu762OL5DPX%2B2QKUPkUA%2FffvzpmKErZtfr3t3%2FS2OhCUoWVtnAvDeGddiDcusjPCs0IzESqPt5HbwrB8dNBqPqFGsia3O%2BZ8RXcyeaayktBP426EfCuFMfRcxN7uKo1xZQjaSfmCYKxoqetMEB9dJB3YwtPzYZ%2BQBLy%2FWkGzkgL6OS6NgN0XiRGGHO%2Fe9geU1hMZDKlWJdeKJhFCn6ZEsTgNu76UjDXmIjWBjqkAWoJQMZCR9n0TZrFUvnGRMUzX1BGIer4i7m%2Fx9gLuQwhqgfWj9v0WMpWgien3Z1VjyWANSzQel0iHXOjzBwbuAVJWGvUXBe280gD%2FQg42AxZTU7GWWWKL9Z2eglRFaaqof9OPdEBmg%2FF2PP2GLlS37rNBmogMwgSkA9ONOLAY4yLeSaNuN%2BaC2v8A9rb3Pl2fV%2B%2B5NTWaxxeHPGRInImD7C9Z8vM&X-Amz-Signature=45b0e4fa8040ac040b97493b920bdb901134846ec2289859b4ba3064d531487e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIXU2AF3%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDmTXS%2BmWpx88UDIQb263CbEeKuZXKWdzyUyXTlVH0qWwIhAMZIe%2Bk9ZrT1BUWfZLlqYtmo%2FAx1wYBPPgna1iKOx5LdKogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwl28wgUTe7fm4rB0kq3AO3WnXxYXrC12Ay5aYpnHNncVemXXB7hKnQTKTe4NO5XhpaTBi8fTm3Jjgm0JprxLui8bd7F%2Fp6tjkMOa21QlARlW7P9PL3K5dj1hovpRFIkzbOss7LSyhWj7dvCOIA34c%2Fgk3u6GZBcD%2Fxugf%2BQRO8uF9ZFfk2i2dOksnWbQ4RRRLfOJHX4beQkL%2FSUs9eE0m%2F%2FZF4ZAE8ZJTbh8J69kN1d1AqMaH%2F7RGUo%2FWM%2FqmoKicRMeT%2BEMTdTPXyJjp3xxTA%2B6ZLot93TiRg2kOxXomZZbECTP7aXarzJwb5Y%2Fqquv0YzyAr6hNt%2Bd0nTMhJ4dJrAqbzMWx3RBRlMsUi7F8EinSCRtdIKhWC7zPlop3HIloLAj3UJ5OA7dcHZwc6kVICGBLHfEpFlN9NJljb8MSqUOZ6VfU5oyu762OL5DPX%2B2QKUPkUA%2FffvzpmKErZtfr3t3%2FS2OhCUoWVtnAvDeGddiDcusjPCs0IzESqPt5HbwrB8dNBqPqFGsia3O%2BZ8RXcyeaayktBP426EfCuFMfRcxN7uKo1xZQjaSfmCYKxoqetMEB9dJB3YwtPzYZ%2BQBLy%2FWkGzkgL6OS6NgN0XiRGGHO%2Fe9geU1hMZDKlWJdeKJhFCn6ZEsTgNu76UjDXmIjWBjqkAWoJQMZCR9n0TZrFUvnGRMUzX1BGIer4i7m%2Fx9gLuQwhqgfWj9v0WMpWgien3Z1VjyWANSzQel0iHXOjzBwbuAVJWGvUXBe280gD%2FQg42AxZTU7GWWWKL9Z2eglRFaaqof9OPdEBmg%2FF2PP2GLlS37rNBmogMwgSkA9ONOLAY4yLeSaNuN%2BaC2v8A9rb3Pl2fV%2B%2B5NTWaxxeHPGRInImD7C9Z8vM&X-Amz-Signature=0e6feadd45d195053ded4810c8371f6e179b6d5a7d359f0cc5f04be8931f0824&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SNSF3EBA%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICYl90feMWya8L0ckjDNNMNiRe5UApQhyGS0XwDbncrDAiBFspAdA83Vx6nz%2FqsvWM4ZfEYctaPHYxXNcC%2BG2DEBSiqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuH5lPJuAG0R9ZjycKtwD4GGwL%2B3E%2B3kU3XAU7iIb%2BM7H6KGY6n12wm52lBYHeg0PhDjdD9YKGt9zC6v6hC15EOOU36e7afp%2Bv5H%2FCTfr7G91UgSxGfgh8g%2F05%2B6HrD8XgwMiEf8%2FRv%2Bu4iB4xnGaZ6Vj8obONLRBbuT%2F0tu13m%2BBjvUvdbgq9tdqZ07Q%2Bc2D%2FFCB3229fpwWgt93Dko1xQYtjhmmnJmWUjrSkDmtn3TT7jlYW4Ulv12fqEamHxyjR2LJ5VhnUDHPqfkVewxT4swm7EJdqcm15yeYU8%2B8%2BvB9n0Z9hAvHcmh5XFjxyL9iiG5mzFEdhh62GPcT1sUALRAFv7N0RNYgFr2MMi51TClJymaWQgdoUOmF5k9X5ti188nrAixwmBHXVmYgqvHUyV1Pa3I%2FjloH14h%2BKy6ksbETjCIKGTqJQGqhNS7xzolqfAj8BOBYdVzs%2BSE1dCShNziahs4KkgxsePC4I%2FuSPsdFan9bnAjGknIzDAgQiXY%2BQBTTFJaIMop8VXXCm%2FutIKd5zB5sbJTfNP1N1HDIaeRsYqHBFmIOn8CbjVigmhJW58pddQhUkzal2gH0ilb%2FakdRPmMi8ipfJiZwB3tgnPPUA0JLS90ktXMctDNtJv8iv3VS2FnxD1YZeSgws5eI1gY6pgEhyBG2q5u3KeCf1NzkjUJ8HzdJbmg%2FHFMSL75j6IBAEAEchq%2Bk5sBAOetIEds8yQPqgtkpQPrVp821ZPvtpGJkrSecMZxcZenQn%2Fc%2BtIY%2Fya14Bi42kxy4VFhqqXBKThLKs9pdc4UdfFhtr7wJAG8vMU5KgrI7RDxsdN2n7G6Jk9KmaylT7sPk1oCm38E63lAjPs4WoHwttnKc5KKl1%2Fa3KEAtrUA7&X-Amz-Signature=8248dba6e327a0e17cdf8809173be8662c20c3b683624cf8686ca3745d4176cf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SNSF3EBA%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICYl90feMWya8L0ckjDNNMNiRe5UApQhyGS0XwDbncrDAiBFspAdA83Vx6nz%2FqsvWM4ZfEYctaPHYxXNcC%2BG2DEBSiqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuH5lPJuAG0R9ZjycKtwD4GGwL%2B3E%2B3kU3XAU7iIb%2BM7H6KGY6n12wm52lBYHeg0PhDjdD9YKGt9zC6v6hC15EOOU36e7afp%2Bv5H%2FCTfr7G91UgSxGfgh8g%2F05%2B6HrD8XgwMiEf8%2FRv%2Bu4iB4xnGaZ6Vj8obONLRBbuT%2F0tu13m%2BBjvUvdbgq9tdqZ07Q%2Bc2D%2FFCB3229fpwWgt93Dko1xQYtjhmmnJmWUjrSkDmtn3TT7jlYW4Ulv12fqEamHxyjR2LJ5VhnUDHPqfkVewxT4swm7EJdqcm15yeYU8%2B8%2BvB9n0Z9hAvHcmh5XFjxyL9iiG5mzFEdhh62GPcT1sUALRAFv7N0RNYgFr2MMi51TClJymaWQgdoUOmF5k9X5ti188nrAixwmBHXVmYgqvHUyV1Pa3I%2FjloH14h%2BKy6ksbETjCIKGTqJQGqhNS7xzolqfAj8BOBYdVzs%2BSE1dCShNziahs4KkgxsePC4I%2FuSPsdFan9bnAjGknIzDAgQiXY%2BQBTTFJaIMop8VXXCm%2FutIKd5zB5sbJTfNP1N1HDIaeRsYqHBFmIOn8CbjVigmhJW58pddQhUkzal2gH0ilb%2FakdRPmMi8ipfJiZwB3tgnPPUA0JLS90ktXMctDNtJv8iv3VS2FnxD1YZeSgws5eI1gY6pgEhyBG2q5u3KeCf1NzkjUJ8HzdJbmg%2FHFMSL75j6IBAEAEchq%2Bk5sBAOetIEds8yQPqgtkpQPrVp821ZPvtpGJkrSecMZxcZenQn%2Fc%2BtIY%2Fya14Bi42kxy4VFhqqXBKThLKs9pdc4UdfFhtr7wJAG8vMU5KgrI7RDxsdN2n7G6Jk9KmaylT7sPk1oCm38E63lAjPs4WoHwttnKc5KKl1%2Fa3KEAtrUA7&X-Amz-Signature=c2c201616ea6f920a3b65ecea2278904d8e869e5fd2e8c244d5c0111ef8a4669&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SNSF3EBA%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICYl90feMWya8L0ckjDNNMNiRe5UApQhyGS0XwDbncrDAiBFspAdA83Vx6nz%2FqsvWM4ZfEYctaPHYxXNcC%2BG2DEBSiqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuH5lPJuAG0R9ZjycKtwD4GGwL%2B3E%2B3kU3XAU7iIb%2BM7H6KGY6n12wm52lBYHeg0PhDjdD9YKGt9zC6v6hC15EOOU36e7afp%2Bv5H%2FCTfr7G91UgSxGfgh8g%2F05%2B6HrD8XgwMiEf8%2FRv%2Bu4iB4xnGaZ6Vj8obONLRBbuT%2F0tu13m%2BBjvUvdbgq9tdqZ07Q%2Bc2D%2FFCB3229fpwWgt93Dko1xQYtjhmmnJmWUjrSkDmtn3TT7jlYW4Ulv12fqEamHxyjR2LJ5VhnUDHPqfkVewxT4swm7EJdqcm15yeYU8%2B8%2BvB9n0Z9hAvHcmh5XFjxyL9iiG5mzFEdhh62GPcT1sUALRAFv7N0RNYgFr2MMi51TClJymaWQgdoUOmF5k9X5ti188nrAixwmBHXVmYgqvHUyV1Pa3I%2FjloH14h%2BKy6ksbETjCIKGTqJQGqhNS7xzolqfAj8BOBYdVzs%2BSE1dCShNziahs4KkgxsePC4I%2FuSPsdFan9bnAjGknIzDAgQiXY%2BQBTTFJaIMop8VXXCm%2FutIKd5zB5sbJTfNP1N1HDIaeRsYqHBFmIOn8CbjVigmhJW58pddQhUkzal2gH0ilb%2FakdRPmMi8ipfJiZwB3tgnPPUA0JLS90ktXMctDNtJv8iv3VS2FnxD1YZeSgws5eI1gY6pgEhyBG2q5u3KeCf1NzkjUJ8HzdJbmg%2FHFMSL75j6IBAEAEchq%2Bk5sBAOetIEds8yQPqgtkpQPrVp821ZPvtpGJkrSecMZxcZenQn%2Fc%2BtIY%2Fya14Bi42kxy4VFhqqXBKThLKs9pdc4UdfFhtr7wJAG8vMU5KgrI7RDxsdN2n7G6Jk9KmaylT7sPk1oCm38E63lAjPs4WoHwttnKc5KKl1%2Fa3KEAtrUA7&X-Amz-Signature=dc82574ae4e85c4e7661db547fe4147f28ce3c839a2c717cd5b91bcdb6721c1d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SNSF3EBA%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICYl90feMWya8L0ckjDNNMNiRe5UApQhyGS0XwDbncrDAiBFspAdA83Vx6nz%2FqsvWM4ZfEYctaPHYxXNcC%2BG2DEBSiqIBAjB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuH5lPJuAG0R9ZjycKtwD4GGwL%2B3E%2B3kU3XAU7iIb%2BM7H6KGY6n12wm52lBYHeg0PhDjdD9YKGt9zC6v6hC15EOOU36e7afp%2Bv5H%2FCTfr7G91UgSxGfgh8g%2F05%2B6HrD8XgwMiEf8%2FRv%2Bu4iB4xnGaZ6Vj8obONLRBbuT%2F0tu13m%2BBjvUvdbgq9tdqZ07Q%2Bc2D%2FFCB3229fpwWgt93Dko1xQYtjhmmnJmWUjrSkDmtn3TT7jlYW4Ulv12fqEamHxyjR2LJ5VhnUDHPqfkVewxT4swm7EJdqcm15yeYU8%2B8%2BvB9n0Z9hAvHcmh5XFjxyL9iiG5mzFEdhh62GPcT1sUALRAFv7N0RNYgFr2MMi51TClJymaWQgdoUOmF5k9X5ti188nrAixwmBHXVmYgqvHUyV1Pa3I%2FjloH14h%2BKy6ksbETjCIKGTqJQGqhNS7xzolqfAj8BOBYdVzs%2BSE1dCShNziahs4KkgxsePC4I%2FuSPsdFan9bnAjGknIzDAgQiXY%2BQBTTFJaIMop8VXXCm%2FutIKd5zB5sbJTfNP1N1HDIaeRsYqHBFmIOn8CbjVigmhJW58pddQhUkzal2gH0ilb%2FakdRPmMi8ipfJiZwB3tgnPPUA0JLS90ktXMctDNtJv8iv3VS2FnxD1YZeSgws5eI1gY6pgEhyBG2q5u3KeCf1NzkjUJ8HzdJbmg%2FHFMSL75j6IBAEAEchq%2Bk5sBAOetIEds8yQPqgtkpQPrVp821ZPvtpGJkrSecMZxcZenQn%2Fc%2BtIY%2Fya14Bi42kxy4VFhqqXBKThLKs9pdc4UdfFhtr7wJAG8vMU5KgrI7RDxsdN2n7G6Jk9KmaylT7sPk1oCm38E63lAjPs4WoHwttnKc5KKl1%2Fa3KEAtrUA7&X-Amz-Signature=965d0c9864c25d8f72e3bfcc965e102b6c3fbc1ec0436553854bcc7a750540cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z7LQ5QCL%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134249Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDFPDJdjXLebF%2BdU08%2BORQrEM%2BDRNxkZCdenHNPntsfsAIgLDQgLQNCoaHfkqhU6OQ1AHyyldm9XrUwh3kpjAlLLh0qiAQIwf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIDZPz0%2BISQCo9bP9SrcA0pZH1McoRmXOSD0BbjgehxYSjetg3%2BsT9fIBmBVOz6knRa4rTMGRcqD5uq7i37T2Si2rj686ReMp6OXxEOeJ5nwU14y5rG27lojW4KKc6UBMtIsGA%2BaDBXnIVPPT5bHoDEEY8%2B94Ct25ERQL7eqCS2ne757AcMpgenCvL%2BVstyW8NdQ7lTbiZBxGUuq6hBrgSx6x7V4oSLLC6O7y%2BX0dlhjfkTxBxOG9yd5vtreu1%2Be4w341vwwLL1Dg3Zt0PN2S1vwfhvms%2FE9Z0Ej19IWsfUVi7RYfpBhGrYwDFEGa5aRXqaZMwLbPrwbEiiKU8e8nCWuOajmIE4bxAiwl8dJZAOr9vOh4k6vWEuX8CQZk8%2BPQWq0iaBlWxnI5pQbwZ9Y93CZmARTehbHf2IiYC0Ic3nGydgUhTQLnfCcedX3gRbMxmP4XerecxJIYX%2FVf8pJ6XktN2jHxH5UlNzr7i4YkKVkMTky8ts566cL5%2F6OH9EeGp9ZPDm91HUnIOipNp0BCKvUMvpbsIJBdO7CUpUBNAQvKkXe2HS0IGZYAy%2B6RGqpJ0s9d1RV7dWOICZRPGlvmwzj2gT%2BsW3p6nBkxHEQECQYmPWFYpBDRb7DdLH9FOZdaEbViUXML%2FLQTDBOMJyXiNYGOqUBkChbPVs6zxNFtMMr9Vu9SM67WqPKhoVJFbmkvmywAfyHdFSFuuRTQCAccj5RxrDMjF7W9lF5hQTxa%2BU9J30KuQPY8bOT8z4JEmTBH4T3AMriw8YgmOqO4fWQshlEcAGQVD%2Foif5DX6kHPiaP9L5uVRMi8QZU%2FY3SputHsgn8q9mD3AakOgO6MehLGiaCWbVmcj3LkpYZKpV6PIolfo5CRa4f6ETO&X-Amz-Signature=8379669bebfcc93e9ee799a7a513afadba9dae8c97918f73cfddc768e0d5818a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663GBUKVOM%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134250Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCKK5TUCKpJRZK1eUPwtG84xfEEhuOKDNXVWJJ2xkl%2BqwIhAOx%2FSklEvbGAu4RsjvVmUYd1Vr0JiYBek%2F6VZXr7jYl2KogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAI1rPWWhQ6Mn9FoUq3AP2dTePVWt3XPJjOSg%2B4fMsPFjmQULFzVU9u8svCucUvfAb%2F%2F7Po4Edi1fF%2FdTgKjPEWm1xXPbOjwNDUz%2FhIw5nU8Gzi5n1gkwQsCZJHCtAxjsIy9f7YUrMblv2Wd7GFVT6soAarg48C%2Fikb4%2FGJAcxcmL%2BtqPzJ2ZFahQYKDzkidHHH%2BrXOXySwEGl%2FpLM0aOcYmHLKhiU80suKdUNuGqo%2FGkDX7y6NMAewHaE1ZIT3u7aIPNH0VOyB0%2B%2BnP4OVuORGZpv508Z%2F7JvHtiQNmjvd3HPfswCGH8PDiV07ErYXC3jeINV29nWSnwUMn1irivyXf1Kf5asEj%2For2dydYfvlxdCTdqPnyH93sjLo9YyU1R3RTHCk9xk61mOSMHmeIHiGghh4Rubdo1xUWgVXSGUZx19maoBBUYBWf8sn8SznDj9xVZ3oGqnO37tc1SqjHTIS2x2ocGlEYw9IspUkq9W3mz3TvmFeGmM7PhWZ1SPD10%2B1NikN1iBDvc6RdDgRn5xsTDdrIG2zBp2m5fVrH77PK4oiFHxf9FL8mw7a65G0MQEb3T2GoxHx%2BYntR1xROybB%2BXj4R269J%2Bb8Aew2O7sjrzBR%2B2%2FwMP%2BGZg5gbGUB4ymUzSKwUWRcFPAGjDIm4jWBjqkAdS3kvd2MxcI%2F26MGPe0LmiY9wq9G8E%2B5csvUqpZsqg89mEpy9LrHiV9wyZjzXcIifFBfOx7p%2BHljMVfQI8TlDRjeblysjuFSagw8Qp5A3gADBLVo6UpbvaBZj8aj35R3rCUF4MNDnRy%2FDcWHjWku%2BiiF6%2FzlHwGdtZWooJW%2BRPtlOi89DansJ3y%2B8jAZGxtfSurO%2BUXDGsBBNvikTzvZOvPYaqu&X-Amz-Signature=49489303ed8630f1126effce9c066246ea1b0de81ab162b90680ce01926f0f98&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663GBUKVOM%2F20261004%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261004T134250Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCKK5TUCKpJRZK1eUPwtG84xfEEhuOKDNXVWJJ2xkl%2BqwIhAOx%2FSklEvbGAu4RsjvVmUYd1Vr0JiYBek%2F6VZXr7jYl2KogECMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAI1rPWWhQ6Mn9FoUq3AP2dTePVWt3XPJjOSg%2B4fMsPFjmQULFzVU9u8svCucUvfAb%2F%2F7Po4Edi1fF%2FdTgKjPEWm1xXPbOjwNDUz%2FhIw5nU8Gzi5n1gkwQsCZJHCtAxjsIy9f7YUrMblv2Wd7GFVT6soAarg48C%2Fikb4%2FGJAcxcmL%2BtqPzJ2ZFahQYKDzkidHHH%2BrXOXySwEGl%2FpLM0aOcYmHLKhiU80suKdUNuGqo%2FGkDX7y6NMAewHaE1ZIT3u7aIPNH0VOyB0%2B%2BnP4OVuORGZpv508Z%2F7JvHtiQNmjvd3HPfswCGH8PDiV07ErYXC3jeINV29nWSnwUMn1irivyXf1Kf5asEj%2For2dydYfvlxdCTdqPnyH93sjLo9YyU1R3RTHCk9xk61mOSMHmeIHiGghh4Rubdo1xUWgVXSGUZx19maoBBUYBWf8sn8SznDj9xVZ3oGqnO37tc1SqjHTIS2x2ocGlEYw9IspUkq9W3mz3TvmFeGmM7PhWZ1SPD10%2B1NikN1iBDvc6RdDgRn5xsTDdrIG2zBp2m5fVrH77PK4oiFHxf9FL8mw7a65G0MQEb3T2GoxHx%2BYntR1xROybB%2BXj4R269J%2Bb8Aew2O7sjrzBR%2B2%2FwMP%2BGZg5gbGUB4ymUzSKwUWRcFPAGjDIm4jWBjqkAdS3kvd2MxcI%2F26MGPe0LmiY9wq9G8E%2B5csvUqpZsqg89mEpy9LrHiV9wyZjzXcIifFBfOx7p%2BHljMVfQI8TlDRjeblysjuFSagw8Qp5A3gADBLVo6UpbvaBZj8aj35R3rCUF4MNDnRy%2FDcWHjWku%2BiiF6%2FzlHwGdtZWooJW%2BRPtlOi89DansJ3y%2B8jAZGxtfSurO%2BUXDGsBBNvikTzvZOvPYaqu&X-Amz-Signature=84c6fe245e55a8b61d9003276fa371a20890a63fa341bc651b2b3975bce1ac14&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
