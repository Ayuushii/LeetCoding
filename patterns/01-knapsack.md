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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JG5SHKR%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEsBr7HgTM1tq7Z3rynZEg%2BwIygZlieYNv3r0%2Bow4SHnAiEAk2wiLUgc3%2FQJTy0aPGB5%2FktcRAgtW524VCZ0cXajiskq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDNYW52bGBQb5QzoH5yrcA0dVJ18iiToAVoWGVbYNzgQqFnC%2BSAKYlVTY36k623zcb73126O51KWgjPkwk7CT7d8kVpdDkwreHrQUCWer2kW7qep1lz%2BORPwnMSZvgmQb0gQNIn6qQRLzUJBj8iT9%2FN2b8pW5yS9QzkUMEp1Ib5jEP7Btc8QnX4v4ssKL%2FCEu%2BZ8v2Ix9BZ2VEvgFIoCU78k6Q3kntwPJlDEak1KA5%2FhzvIVY9OQNaOz%2FGaZ3yulDSrfDF07176tXANyHqAdncphg8Qld5%2FBWrDsOr7SAL3O3aWGUyoZpOIgCO1MZTWkjBySDwv7vyUFSJLCk0Gvdhj789whM2XELj79X7UdwM4L8tpcec2nmCNcWOMioeRyvxlvor2ydDhEcvHWq8zy7iqzwd2MfdI0Le40wRjrdwuXYpX5JakbGq%2FBPwkHaKqC5bTLbeDe6uOpHfqT7miDaWWY3s1qMjemOS4z3AYtzKOF9mY5a3fOeQkL7l6cj%2B%2BCh4YFJ%2F2YtHHjkuzZZnBy4pCj4Se8iXT44fQ8OB2rL8la7I1%2FsZq3yL6q%2FeWTIYNlcL%2BN1B%2FFRCFbA7IKTjUY210VWDqYc7lPAlaMK8xTbdY0g1q9agJK16GzzZe3Ds9YzHB8fHEYLTLAn5d0mMP7Xm9AGOqUBXjhK4pqHWOmCGWx%2BbI3%2BQGYUuEGz7jz7S3o7P29LEAhgkG1T9Im%2BCRC0rJmbEfihGvuby%2FcVRfZuWJRnarmSPQyiRSlunYmUJi41FaIrDfh93T05DcFdkpgpeGaMiAxYw%2F%2FNBvVYdn4YtgjXdHQeeFVwVdb7iCcz8iqqrGd6DSZsLb5ET4imiLVli55%2Fy0GHrRD22HdIjqDbEn7Fpg35ijPf9FuT&X-Amz-Signature=6b1a6150f85c91a962597898ac02b3562036efb3fa26d64b53e8176fc80e3a0b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JG5SHKR%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEsBr7HgTM1tq7Z3rynZEg%2BwIygZlieYNv3r0%2Bow4SHnAiEAk2wiLUgc3%2FQJTy0aPGB5%2FktcRAgtW524VCZ0cXajiskq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDNYW52bGBQb5QzoH5yrcA0dVJ18iiToAVoWGVbYNzgQqFnC%2BSAKYlVTY36k623zcb73126O51KWgjPkwk7CT7d8kVpdDkwreHrQUCWer2kW7qep1lz%2BORPwnMSZvgmQb0gQNIn6qQRLzUJBj8iT9%2FN2b8pW5yS9QzkUMEp1Ib5jEP7Btc8QnX4v4ssKL%2FCEu%2BZ8v2Ix9BZ2VEvgFIoCU78k6Q3kntwPJlDEak1KA5%2FhzvIVY9OQNaOz%2FGaZ3yulDSrfDF07176tXANyHqAdncphg8Qld5%2FBWrDsOr7SAL3O3aWGUyoZpOIgCO1MZTWkjBySDwv7vyUFSJLCk0Gvdhj789whM2XELj79X7UdwM4L8tpcec2nmCNcWOMioeRyvxlvor2ydDhEcvHWq8zy7iqzwd2MfdI0Le40wRjrdwuXYpX5JakbGq%2FBPwkHaKqC5bTLbeDe6uOpHfqT7miDaWWY3s1qMjemOS4z3AYtzKOF9mY5a3fOeQkL7l6cj%2B%2BCh4YFJ%2F2YtHHjkuzZZnBy4pCj4Se8iXT44fQ8OB2rL8la7I1%2FsZq3yL6q%2FeWTIYNlcL%2BN1B%2FFRCFbA7IKTjUY210VWDqYc7lPAlaMK8xTbdY0g1q9agJK16GzzZe3Ds9YzHB8fHEYLTLAn5d0mMP7Xm9AGOqUBXjhK4pqHWOmCGWx%2BbI3%2BQGYUuEGz7jz7S3o7P29LEAhgkG1T9Im%2BCRC0rJmbEfihGvuby%2FcVRfZuWJRnarmSPQyiRSlunYmUJi41FaIrDfh93T05DcFdkpgpeGaMiAxYw%2F%2FNBvVYdn4YtgjXdHQeeFVwVdb7iCcz8iqqrGd6DSZsLb5ET4imiLVli55%2Fy0GHrRD22HdIjqDbEn7Fpg35ijPf9FuT&X-Amz-Signature=784b6078de82261dfad084b75a0f292725077ffaf3f2f8b5c31cc68793201782&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JG5SHKR%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102148Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEsBr7HgTM1tq7Z3rynZEg%2BwIygZlieYNv3r0%2Bow4SHnAiEAk2wiLUgc3%2FQJTy0aPGB5%2FktcRAgtW524VCZ0cXajiskq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDNYW52bGBQb5QzoH5yrcA0dVJ18iiToAVoWGVbYNzgQqFnC%2BSAKYlVTY36k623zcb73126O51KWgjPkwk7CT7d8kVpdDkwreHrQUCWer2kW7qep1lz%2BORPwnMSZvgmQb0gQNIn6qQRLzUJBj8iT9%2FN2b8pW5yS9QzkUMEp1Ib5jEP7Btc8QnX4v4ssKL%2FCEu%2BZ8v2Ix9BZ2VEvgFIoCU78k6Q3kntwPJlDEak1KA5%2FhzvIVY9OQNaOz%2FGaZ3yulDSrfDF07176tXANyHqAdncphg8Qld5%2FBWrDsOr7SAL3O3aWGUyoZpOIgCO1MZTWkjBySDwv7vyUFSJLCk0Gvdhj789whM2XELj79X7UdwM4L8tpcec2nmCNcWOMioeRyvxlvor2ydDhEcvHWq8zy7iqzwd2MfdI0Le40wRjrdwuXYpX5JakbGq%2FBPwkHaKqC5bTLbeDe6uOpHfqT7miDaWWY3s1qMjemOS4z3AYtzKOF9mY5a3fOeQkL7l6cj%2B%2BCh4YFJ%2F2YtHHjkuzZZnBy4pCj4Se8iXT44fQ8OB2rL8la7I1%2FsZq3yL6q%2FeWTIYNlcL%2BN1B%2FFRCFbA7IKTjUY210VWDqYc7lPAlaMK8xTbdY0g1q9agJK16GzzZe3Ds9YzHB8fHEYLTLAn5d0mMP7Xm9AGOqUBXjhK4pqHWOmCGWx%2BbI3%2BQGYUuEGz7jz7S3o7P29LEAhgkG1T9Im%2BCRC0rJmbEfihGvuby%2FcVRfZuWJRnarmSPQyiRSlunYmUJi41FaIrDfh93T05DcFdkpgpeGaMiAxYw%2F%2FNBvVYdn4YtgjXdHQeeFVwVdb7iCcz8iqqrGd6DSZsLb5ET4imiLVli55%2Fy0GHrRD22HdIjqDbEn7Fpg35ijPf9FuT&X-Amz-Signature=56adce9e5689381fda4d014d6fedff3330463fb2807f9ea919f51bce375ca715&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VVDZ46SU%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102149Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIErsot7S%2Bd3%2Bd0L8EnQKdJ%2FUO3ecu51CuOeL0D4gzh%2F7AiEA%2ByabFzzC8pUTN5DQHL6Ml2IBruVMRy8opx%2BxtzXa35gq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDFfHf97xCdSXYUueDCrcA64zvWzIuor6SCDifwqAR8SMTSTw5%2B0I2khIsbN3WaKfzSY2643UQAf1RSBxcUA3TUunnhxvKA6Mmb11Ny7mTvkxPFOPSgQTUu5%2FL9MhEl%2Fr8001EfGCdu7l%2B%2F1MRWsGNyiZHeP4LDRv4iR%2B3VXzIB0uN94oBpt2BHeayuk3xtCeMe%2BmEJhleeU7fkvgu4UY1kVWba5%2FycC4xErm2H5Bjg0CLYZX%2B2EeLJqLyUrUuMCDHPPy7Y9Mi3qC%2FHTE60pvcDpzUE%2FCeRDgMZBWGkQdI5e7ZoGb6Z2%2B5hFRxhtNvb9kvK3AugxbUVR2ZRqmb13SX9FkEULbm%2FzsQDr2C8YxJhNJeevrD0ma8fA4lTki%2FTza79LgqKQziwjFe%2FSCmi75s1l4soQWB1nMV0BHAOe8TjND1f2EOaqNm3KXAP8OH%2BwtRbOjUWntec2pohNhkeZa7FiuxJ0GYyaJuK6DSMAy9aEWjEtjcasY5lEgT%2BmXw1vRObnfDs2L7Szfj7ykKeZ4iO90DtuT5yD8%2BKvlrVeQekRM%2BUJZd7H6AZI5kdYsZXMU0PIa1rKjB6ySVsvOiO85YazJ%2FMLne8O3ES30yaF7fktzIOkpvWvuAHNsrAf8y9VDKdy%2BJ9dylsYkw%2Bt9MOzZm9AGOqUBfFIqabFll5L6LfaIarevZetO7d9F2%2BmWrHCeaq%2BmlD5pFjdWwGtF3UA1TJcvG1Th03etHX8Flc7jg1giDlrOH4tEIAJEugQzt%2Fj%2FRMyACibhJEZYNh7s5JvqTdoDkCYVG4MgyQbf3TWneGJJ4%2BmZYnIynJC3xZl0OEHhdFOgcGZybQUt1smBF5xXzQnZ7mJieBo9JSd%2FxeYw3S%2BLn36vB5vgsi7r&X-Amz-Signature=44e2c56cb4d32709a3b43a9c115e1545a9c63bd3597f0d8c1d8132c1fcf2e71c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VVDZ46SU%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102149Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIErsot7S%2Bd3%2Bd0L8EnQKdJ%2FUO3ecu51CuOeL0D4gzh%2F7AiEA%2ByabFzzC8pUTN5DQHL6Ml2IBruVMRy8opx%2BxtzXa35gq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDFfHf97xCdSXYUueDCrcA64zvWzIuor6SCDifwqAR8SMTSTw5%2B0I2khIsbN3WaKfzSY2643UQAf1RSBxcUA3TUunnhxvKA6Mmb11Ny7mTvkxPFOPSgQTUu5%2FL9MhEl%2Fr8001EfGCdu7l%2B%2F1MRWsGNyiZHeP4LDRv4iR%2B3VXzIB0uN94oBpt2BHeayuk3xtCeMe%2BmEJhleeU7fkvgu4UY1kVWba5%2FycC4xErm2H5Bjg0CLYZX%2B2EeLJqLyUrUuMCDHPPy7Y9Mi3qC%2FHTE60pvcDpzUE%2FCeRDgMZBWGkQdI5e7ZoGb6Z2%2B5hFRxhtNvb9kvK3AugxbUVR2ZRqmb13SX9FkEULbm%2FzsQDr2C8YxJhNJeevrD0ma8fA4lTki%2FTza79LgqKQziwjFe%2FSCmi75s1l4soQWB1nMV0BHAOe8TjND1f2EOaqNm3KXAP8OH%2BwtRbOjUWntec2pohNhkeZa7FiuxJ0GYyaJuK6DSMAy9aEWjEtjcasY5lEgT%2BmXw1vRObnfDs2L7Szfj7ykKeZ4iO90DtuT5yD8%2BKvlrVeQekRM%2BUJZd7H6AZI5kdYsZXMU0PIa1rKjB6ySVsvOiO85YazJ%2FMLne8O3ES30yaF7fktzIOkpvWvuAHNsrAf8y9VDKdy%2BJ9dylsYkw%2Bt9MOzZm9AGOqUBfFIqabFll5L6LfaIarevZetO7d9F2%2BmWrHCeaq%2BmlD5pFjdWwGtF3UA1TJcvG1Th03etHX8Flc7jg1giDlrOH4tEIAJEugQzt%2Fj%2FRMyACibhJEZYNh7s5JvqTdoDkCYVG4MgyQbf3TWneGJJ4%2BmZYnIynJC3xZl0OEHhdFOgcGZybQUt1smBF5xXzQnZ7mJieBo9JSd%2FxeYw3S%2BLn36vB5vgsi7r&X-Amz-Signature=39019e1617dfe68bda7d6c164eda5fe08d834a83c5c64c225b38aab9f75db41e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VVDZ46SU%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102149Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIErsot7S%2Bd3%2Bd0L8EnQKdJ%2FUO3ecu51CuOeL0D4gzh%2F7AiEA%2ByabFzzC8pUTN5DQHL6Ml2IBruVMRy8opx%2BxtzXa35gq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDFfHf97xCdSXYUueDCrcA64zvWzIuor6SCDifwqAR8SMTSTw5%2B0I2khIsbN3WaKfzSY2643UQAf1RSBxcUA3TUunnhxvKA6Mmb11Ny7mTvkxPFOPSgQTUu5%2FL9MhEl%2Fr8001EfGCdu7l%2B%2F1MRWsGNyiZHeP4LDRv4iR%2B3VXzIB0uN94oBpt2BHeayuk3xtCeMe%2BmEJhleeU7fkvgu4UY1kVWba5%2FycC4xErm2H5Bjg0CLYZX%2B2EeLJqLyUrUuMCDHPPy7Y9Mi3qC%2FHTE60pvcDpzUE%2FCeRDgMZBWGkQdI5e7ZoGb6Z2%2B5hFRxhtNvb9kvK3AugxbUVR2ZRqmb13SX9FkEULbm%2FzsQDr2C8YxJhNJeevrD0ma8fA4lTki%2FTza79LgqKQziwjFe%2FSCmi75s1l4soQWB1nMV0BHAOe8TjND1f2EOaqNm3KXAP8OH%2BwtRbOjUWntec2pohNhkeZa7FiuxJ0GYyaJuK6DSMAy9aEWjEtjcasY5lEgT%2BmXw1vRObnfDs2L7Szfj7ykKeZ4iO90DtuT5yD8%2BKvlrVeQekRM%2BUJZd7H6AZI5kdYsZXMU0PIa1rKjB6ySVsvOiO85YazJ%2FMLne8O3ES30yaF7fktzIOkpvWvuAHNsrAf8y9VDKdy%2BJ9dylsYkw%2Bt9MOzZm9AGOqUBfFIqabFll5L6LfaIarevZetO7d9F2%2BmWrHCeaq%2BmlD5pFjdWwGtF3UA1TJcvG1Th03etHX8Flc7jg1giDlrOH4tEIAJEugQzt%2Fj%2FRMyACibhJEZYNh7s5JvqTdoDkCYVG4MgyQbf3TWneGJJ4%2BmZYnIynJC3xZl0OEHhdFOgcGZybQUt1smBF5xXzQnZ7mJieBo9JSd%2FxeYw3S%2BLn36vB5vgsi7r&X-Amz-Signature=c988a9059b81a6c32e209e2ec7cb301168c1cb2cb626681726703fed5d628802&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VVDZ46SU%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102149Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIErsot7S%2Bd3%2Bd0L8EnQKdJ%2FUO3ecu51CuOeL0D4gzh%2F7AiEA%2ByabFzzC8pUTN5DQHL6Ml2IBruVMRy8opx%2BxtzXa35gq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDFfHf97xCdSXYUueDCrcA64zvWzIuor6SCDifwqAR8SMTSTw5%2B0I2khIsbN3WaKfzSY2643UQAf1RSBxcUA3TUunnhxvKA6Mmb11Ny7mTvkxPFOPSgQTUu5%2FL9MhEl%2Fr8001EfGCdu7l%2B%2F1MRWsGNyiZHeP4LDRv4iR%2B3VXzIB0uN94oBpt2BHeayuk3xtCeMe%2BmEJhleeU7fkvgu4UY1kVWba5%2FycC4xErm2H5Bjg0CLYZX%2B2EeLJqLyUrUuMCDHPPy7Y9Mi3qC%2FHTE60pvcDpzUE%2FCeRDgMZBWGkQdI5e7ZoGb6Z2%2B5hFRxhtNvb9kvK3AugxbUVR2ZRqmb13SX9FkEULbm%2FzsQDr2C8YxJhNJeevrD0ma8fA4lTki%2FTza79LgqKQziwjFe%2FSCmi75s1l4soQWB1nMV0BHAOe8TjND1f2EOaqNm3KXAP8OH%2BwtRbOjUWntec2pohNhkeZa7FiuxJ0GYyaJuK6DSMAy9aEWjEtjcasY5lEgT%2BmXw1vRObnfDs2L7Szfj7ykKeZ4iO90DtuT5yD8%2BKvlrVeQekRM%2BUJZd7H6AZI5kdYsZXMU0PIa1rKjB6ySVsvOiO85YazJ%2FMLne8O3ES30yaF7fktzIOkpvWvuAHNsrAf8y9VDKdy%2BJ9dylsYkw%2Bt9MOzZm9AGOqUBfFIqabFll5L6LfaIarevZetO7d9F2%2BmWrHCeaq%2BmlD5pFjdWwGtF3UA1TJcvG1Th03etHX8Flc7jg1giDlrOH4tEIAJEugQzt%2Fj%2FRMyACibhJEZYNh7s5JvqTdoDkCYVG4MgyQbf3TWneGJJ4%2BmZYnIynJC3xZl0OEHhdFOgcGZybQUt1smBF5xXzQnZ7mJieBo9JSd%2FxeYw3S%2BLn36vB5vgsi7r&X-Amz-Signature=a62f3952c5fc3d3b1cdb106754c4cc5f46747f1e7b21491e818c94ea9da96932&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RLWUXQK6%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102149Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCvcstsNLVTwZBcEzrbunrFUHHymgNSg6HugnF4tA%2ByLgIhANGZeRXf272HkwhZUcbqY%2FhiB9zqzX3GludIh4Q9TQPPKv8DCHMQABoMNjM3NDIzMTgzODA1IgwdylCLHMuFctvBfNsq3AMN2wwKVPt0uIXLLKqlzINkvA4KgzqAPGBaTN5gnDDcXsvdM9kLdfEJ4k7OwNmIr0T1iZK3sAxtfqoYLIAqVradURr%2F4nVpD1vAQWvjY02KsmyyY93xcxk8VYb1pQymp7qE5dq4QIaUlwyQysOSUZBIbUimYr%2F2fVXFI0wdOo7KG3kNAB5k4itEOgVS%2FreS%2BBmiw3MwAAhqUm3W5yTiwxf5K7ev4HiX%2BwO4bAcxstj8h701MEpK4VX9Wg%2B7lUN2eU4bFmRFlNYGzhs0MKQSrqiT4iujI2YWUIh5TZATw6lDxtZj8gsg5DyR0Nij1Z0mO6IHsHB8kTcqZeLDV1f24pVW4qeJA7u%2ByBwfhSc9QN1mS%2FbMV82Xab50OI%2BelJZiAamuu1mw5UIMnGYuCLSt7%2FfgmiASGBp9rJxtF4TCAt9yTuwBbxgfQfQDH3iIIlm7dyHPOVoOlj9syRRm1TkQcL8QHyCyyyy%2FYCyGnFfgmwsWheq657kQM9F3uMCvh8EcnRd1WA8iXe%2BFOh5oKtOaVBp1YiM%2FwBtCIz1n3d8navKVqLLpm57oR1Ty6pSX1x0kJ4rDrPaN3Vxdc2S2mGStbfY8In3NxFVUMPHh%2BmZWct7Z%2BeQu%2FT0huxcVnGY%2BPDDF2JvQBjqkAZMdK57YM3QyCDl9nxsbdTGK9ggqV29F26FqhpCaFPLfCDmcbsn1vj0fnb%2FBzAJKrOYNFGEa%2FUhRCJ1hotgwNGIt7p3uTgX2kfzzcriz2DZ2o6Vgux%2FHxvG%2BOjdEONA%2BkF10fMje0Xhgp1HYuupeeskjeM%2BGloSXejd4DF9qzWD8rCHEVlBX59pmINXvvJ7TAX8nL63vAgo3j%2FuqT5JK9ULlEpB6&X-Amz-Signature=9e295b62ce52bb696862c42348e9b24aaafb57e7d52c5285ea3c49c9d8dd5f86&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RM2XH3YZ%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102150Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCV72k4e59LdsmfGC7UbhkDh68t%2FrRFOQo5gKGpnm6tHAIgQwA2GAh4Egre%2F9iOcGLtl8IUwEGYilWfAdkIr8eAZtsq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDLdgpipRfdUHbZ6wnCrcA1xQeqN5pQ9fSnZb%2FnbKdN1Xjx%2FXk7bBnSB%2B%2BpzoBW%2BYN%2Bj8vxDjRw6CvzZxS0cyz%2BRYxKpmQX1%2FQiyh0LZCGw%2FYv2aGhJ%2FC3nWiZs7ejwt%2FcPGzCI%2FTUPOSWZ8leb67JgVlL0O%2FRlcN7O72%2F3sPW6AbXH1j7pUuuDjYBmsDPf1pX6BeUFp0jO5dNFx1U%2BbODyEkEB4X6ocek7ZGYQFNnEIGK%2FIZ2lUamEBwM%2Fh6F6qAA9uU5CgjpoyCWv16w7iPbo7M6xDjZ4dAeFLf3Q8sue7k79QuobdLuU00GpyqCmMBHNuImWN0tGbBH0uiN198TLxsJ%2Fm6MDzPuKUHHOmeJ7HVI8HoSQnjIPAVeVXNLpFdtMO5b4SMG5zVTw2zukgmptt4jPi6j5BE3JlL1Ewp7v9DvytPSqw%2Fx%2BJeYVSNAxevvv36Sz3Gu2bdm3IWDCyWQBsiNh4RJts%2Bebk1bp0Eo1rXpJgbjhtSTkvd3N8OyBTT4SfD3H7H6E7fZCEeZpzp2S2piXPcbl59r4OlHHO6E9RKwYeomaYX56MudBNXBiYBl2FEi1vIuDCbjZ1%2Fp5RkGSwc%2FfVqRYXlWwL72iSB5SGKrLjyVaqZxKZ0xUAsWcVMugeGVzOq886wx%2BWMMK7Zm9AGOqUBPRT%2FmpiiSyo%2FEbh7VkaKm0dvbuj%2F2%2FQ6kHQc24b%2FU6pHu61%2FPQYl3quMygl3qeKSA%2BUqlcZEHhzoF7YeeFdZVTsv9KsnyTAtnOToA2GNNccGWSTlMmakGACKxDBspFdFj7EPLnOT1%2FK53EkuPUy%2F9pSHhkylzJ%2BFv1k0kxUNi7b7JFIbmRYgeuK1ls7Q8P55ZU6mt2ulASOlqt1Q8jA1A2bSDtl2&X-Amz-Signature=366c0b82b75f1ffd3bc6a59f50fd7d20872c68a2fe5fecb3ef039f127dfe216b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RM2XH3YZ%2F20260515%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260515T102150Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCV72k4e59LdsmfGC7UbhkDh68t%2FrRFOQo5gKGpnm6tHAIgQwA2GAh4Egre%2F9iOcGLtl8IUwEGYilWfAdkIr8eAZtsq%2FwMIcxAAGgw2Mzc0MjMxODM4MDUiDLdgpipRfdUHbZ6wnCrcA1xQeqN5pQ9fSnZb%2FnbKdN1Xjx%2FXk7bBnSB%2B%2BpzoBW%2BYN%2Bj8vxDjRw6CvzZxS0cyz%2BRYxKpmQX1%2FQiyh0LZCGw%2FYv2aGhJ%2FC3nWiZs7ejwt%2FcPGzCI%2FTUPOSWZ8leb67JgVlL0O%2FRlcN7O72%2F3sPW6AbXH1j7pUuuDjYBmsDPf1pX6BeUFp0jO5dNFx1U%2BbODyEkEB4X6ocek7ZGYQFNnEIGK%2FIZ2lUamEBwM%2Fh6F6qAA9uU5CgjpoyCWv16w7iPbo7M6xDjZ4dAeFLf3Q8sue7k79QuobdLuU00GpyqCmMBHNuImWN0tGbBH0uiN198TLxsJ%2Fm6MDzPuKUHHOmeJ7HVI8HoSQnjIPAVeVXNLpFdtMO5b4SMG5zVTw2zukgmptt4jPi6j5BE3JlL1Ewp7v9DvytPSqw%2Fx%2BJeYVSNAxevvv36Sz3Gu2bdm3IWDCyWQBsiNh4RJts%2Bebk1bp0Eo1rXpJgbjhtSTkvd3N8OyBTT4SfD3H7H6E7fZCEeZpzp2S2piXPcbl59r4OlHHO6E9RKwYeomaYX56MudBNXBiYBl2FEi1vIuDCbjZ1%2Fp5RkGSwc%2FfVqRYXlWwL72iSB5SGKrLjyVaqZxKZ0xUAsWcVMugeGVzOq886wx%2BWMMK7Zm9AGOqUBPRT%2FmpiiSyo%2FEbh7VkaKm0dvbuj%2F2%2FQ6kHQc24b%2FU6pHu61%2FPQYl3quMygl3qeKSA%2BUqlcZEHhzoF7YeeFdZVTsv9KsnyTAtnOToA2GNNccGWSTlMmakGACKxDBspFdFj7EPLnOT1%2FK53EkuPUy%2F9pSHhkylzJ%2BFv1k0kxUNi7b7JFIbmRYgeuK1ls7Q8P55ZU6mt2ulASOlqt1Q8jA1A2bSDtl2&X-Amz-Signature=08832c63a3bdcef05fa73ca083154b66b74b3f909627eb2835a7da714b6b4527&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
