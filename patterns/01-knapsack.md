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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PELJ6QS%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQCu%2B2CCsDPlDdXSzhlP3dJxL3fP3v6lFygtz58sk2wciQIgAcPPZIAzCRht6FqmKDWiLw%2BbX5k8amzQGS3EY5T8Bbcq%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDDdN%2BlmDflrcLobQeyrcA9lWOCoDAOYsiR2mdy4sriSQhb6o%2B0amWcYOgoZGNJGLd63fTXmpkvW15gpiLnipOaex2VYUh21ZNmdc%2FmWWPHAFXAL%2B9XIkVawX18e%2B1Cm1iUm1kCdn57kwd1ZAEoKCMX5DjA7StXqdxjY8QLV8KF7cUCJQeUYKXvUHJUTcGICEST8M%2Fqi0kQG0MYAmFIM8EjUgEUJm2GxPt97VliItv8IkavQsqhGTOKWfWrYdhfb2jqZ1meTgUBFuzMBqw2ZmQatT0CkL2nEwF0JeEomAbp360NDwr2DsmoIOW5Y%2FK7JJZitQpU5hKtvl82%2FDZXu5Cg6%2Bwnc3xL1wURErdbzF0T817izVY7hRU92tVsypYxfzXyRGy14MfwOEzDlIHwCfr%2FFgj8rzdhTV9V2%2F8FQgp0RdJWQ2n0wPkAiPpW1Lu0DYisBxCaMV9v4NzRB5%2FnOsMO%2BUgx8J2vQfF0k3oHzQz0RmNJuRh0%2FSm%2FAonudbIXd9DpfrxPXx0OckN%2BL1LYAuaVLk8iFXh81zwLSNlu0Q%2Bgue2d7HZslLkMpi5vu%2B8Nd7Lqr4Vjx%2FCRbAiExyQBdTiVQNxDuCzKcgCXhxM3lM5Frqoks9lrRthAdRBw2Jj11WY%2FXqQcvBX32q%2B%2B%2BdMN%2FAs9UGOqUB6I%2Bs8L4YkPxzpv1sCAZT%2BQc0xMYybEsNkBxsYn%2Fpalj35raT6HtDHHUHPGdKFcSDSZ3p64Nm%2BFx1uPi5bZnv0ihSgPrSXyEMkziPpKsihzh73vdsWroxv187%2FPgGqbqsObmNCuvXDjLRvczG2rUMHDDn91MCkDnF0zyQ5DPDxyqptSt3nlNRHKCOiQB82XBV199HwtM4srUcjvA453byURgf1GES&X-Amz-Signature=ee60fd390da25b9ca6d7dec2cd556fe00acb1917987af875ffd0af5b02c7c11f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PELJ6QS%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124332Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQCu%2B2CCsDPlDdXSzhlP3dJxL3fP3v6lFygtz58sk2wciQIgAcPPZIAzCRht6FqmKDWiLw%2BbX5k8amzQGS3EY5T8Bbcq%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDDdN%2BlmDflrcLobQeyrcA9lWOCoDAOYsiR2mdy4sriSQhb6o%2B0amWcYOgoZGNJGLd63fTXmpkvW15gpiLnipOaex2VYUh21ZNmdc%2FmWWPHAFXAL%2B9XIkVawX18e%2B1Cm1iUm1kCdn57kwd1ZAEoKCMX5DjA7StXqdxjY8QLV8KF7cUCJQeUYKXvUHJUTcGICEST8M%2Fqi0kQG0MYAmFIM8EjUgEUJm2GxPt97VliItv8IkavQsqhGTOKWfWrYdhfb2jqZ1meTgUBFuzMBqw2ZmQatT0CkL2nEwF0JeEomAbp360NDwr2DsmoIOW5Y%2FK7JJZitQpU5hKtvl82%2FDZXu5Cg6%2Bwnc3xL1wURErdbzF0T817izVY7hRU92tVsypYxfzXyRGy14MfwOEzDlIHwCfr%2FFgj8rzdhTV9V2%2F8FQgp0RdJWQ2n0wPkAiPpW1Lu0DYisBxCaMV9v4NzRB5%2FnOsMO%2BUgx8J2vQfF0k3oHzQz0RmNJuRh0%2FSm%2FAonudbIXd9DpfrxPXx0OckN%2BL1LYAuaVLk8iFXh81zwLSNlu0Q%2Bgue2d7HZslLkMpi5vu%2B8Nd7Lqr4Vjx%2FCRbAiExyQBdTiVQNxDuCzKcgCXhxM3lM5Frqoks9lrRthAdRBw2Jj11WY%2FXqQcvBX32q%2B%2B%2BdMN%2FAs9UGOqUB6I%2Bs8L4YkPxzpv1sCAZT%2BQc0xMYybEsNkBxsYn%2Fpalj35raT6HtDHHUHPGdKFcSDSZ3p64Nm%2BFx1uPi5bZnv0ihSgPrSXyEMkziPpKsihzh73vdsWroxv187%2FPgGqbqsObmNCuvXDjLRvczG2rUMHDDn91MCkDnF0zyQ5DPDxyqptSt3nlNRHKCOiQB82XBV199HwtM4srUcjvA453byURgf1GES&X-Amz-Signature=884724e84d7e125c94e969039d3e60659eec5306db15cdf0ee75993603bf293f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665PELJ6QS%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQCu%2B2CCsDPlDdXSzhlP3dJxL3fP3v6lFygtz58sk2wciQIgAcPPZIAzCRht6FqmKDWiLw%2BbX5k8amzQGS3EY5T8Bbcq%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDDdN%2BlmDflrcLobQeyrcA9lWOCoDAOYsiR2mdy4sriSQhb6o%2B0amWcYOgoZGNJGLd63fTXmpkvW15gpiLnipOaex2VYUh21ZNmdc%2FmWWPHAFXAL%2B9XIkVawX18e%2B1Cm1iUm1kCdn57kwd1ZAEoKCMX5DjA7StXqdxjY8QLV8KF7cUCJQeUYKXvUHJUTcGICEST8M%2Fqi0kQG0MYAmFIM8EjUgEUJm2GxPt97VliItv8IkavQsqhGTOKWfWrYdhfb2jqZ1meTgUBFuzMBqw2ZmQatT0CkL2nEwF0JeEomAbp360NDwr2DsmoIOW5Y%2FK7JJZitQpU5hKtvl82%2FDZXu5Cg6%2Bwnc3xL1wURErdbzF0T817izVY7hRU92tVsypYxfzXyRGy14MfwOEzDlIHwCfr%2FFgj8rzdhTV9V2%2F8FQgp0RdJWQ2n0wPkAiPpW1Lu0DYisBxCaMV9v4NzRB5%2FnOsMO%2BUgx8J2vQfF0k3oHzQz0RmNJuRh0%2FSm%2FAonudbIXd9DpfrxPXx0OckN%2BL1LYAuaVLk8iFXh81zwLSNlu0Q%2Bgue2d7HZslLkMpi5vu%2B8Nd7Lqr4Vjx%2FCRbAiExyQBdTiVQNxDuCzKcgCXhxM3lM5Frqoks9lrRthAdRBw2Jj11WY%2FXqQcvBX32q%2B%2B%2BdMN%2FAs9UGOqUB6I%2Bs8L4YkPxzpv1sCAZT%2BQc0xMYybEsNkBxsYn%2Fpalj35raT6HtDHHUHPGdKFcSDSZ3p64Nm%2BFx1uPi5bZnv0ihSgPrSXyEMkziPpKsihzh73vdsWroxv187%2FPgGqbqsObmNCuvXDjLRvczG2rUMHDDn91MCkDnF0zyQ5DPDxyqptSt3nlNRHKCOiQB82XBV199HwtM4srUcjvA453byURgf1GES&X-Amz-Signature=058c02708915bb822d2d63074c8835b29189831b5d6b9d02c549524e3deb9103&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBRGIUHF%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQD79OR%2Fqie0dvKrE2Tztg%2F%2Fa9EEbhBRXtOgVfseoDq1ngIgQ8UD8KI7FAjjJYii%2BUI81R01ilsd80iicnEsxCr3sT0q%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDMMt4QLxGs%2FNhLseRircAy%2BL6YJ7nmH6kVzw8KgFLqAzlcogktIdXeMuY4sN5LU3cggxhWqvLj1tsCG9dnGIxLQR1KeY8xCsU92JVs1lN4c%2BviENzpgvf5aXPBuRBn7vrPO4cwG%2FeiN8r8mLi5c4fr18QphTvHGMFyCJHdIsEFxaPOBx8MiFA62Nij9gA4KT2DAN%2BYo%2F8zRAj5Qyq%2B%2F6jRMsD6Wwo%2FFap2uW1YMo4%2BiNZVfE9XkvlkGEeMT5Squ5WiPWSTmTlxszmBrZTb3wqzUBIhO8HOk%2FIQJIrkYgyMfBkMtiw9AkBK%2Bz16%2Bp%2Ff5P1S89nFD8IyKl3M0%2FwpV97Fl4EeUg78I7F6yrsGiPgdhRdArRmCgX1WCOUu3GQts%2F6W48JewmUOl2v5zZ6pnuv9wTj9KjnibW%2F4O9sWV9N7rfsLZ8NCyH%2Fro8uGWid62afPx4XENVXJidrTjWwT6Oph0W6AW2MgH0NawKEqmTEU%2B6uw1aUjFiLomWOsiGHSdpP3Kq4gh8he%2BM5HXhP3OBY6YU5rSYcEuItYZ1uGR1wtrKT0mcu1i7wtp%2FQ4z0wkReT3OZll9cj1gmhQHNWsW9ZVNNY9Q4m6rmrbvcsMi1unndUaxgop%2BmCYwbX6N9bWP6KVbDSde9EL3N4X3hMNq%2Fs9UGOqUBxftq1s39AX%2F7zhkcccaEsssShUgxPiRgfnFV8kUeohK%2FwN0ZvPMJK6h5BPyDCBBx9ZhWDj46qlvjJUUJxFLaMMW8VSfwQy9drdsCzAG1vW19FGe5jw4ohS%2BaKJreJvUD6esRM6wry5OssxJXi4fQiJg%2FcUZMi9V6huo9%2FYjIE3spEX0lMxJSbpzgLw2prwNwuYnup0ZXv0LO3FhqeJSg%2Bg60SsqQ&X-Amz-Signature=83a542f6a96163f2ca77762ce1ea179b0307659c3567eb31275895737311ef8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBRGIUHF%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQD79OR%2Fqie0dvKrE2Tztg%2F%2Fa9EEbhBRXtOgVfseoDq1ngIgQ8UD8KI7FAjjJYii%2BUI81R01ilsd80iicnEsxCr3sT0q%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDMMt4QLxGs%2FNhLseRircAy%2BL6YJ7nmH6kVzw8KgFLqAzlcogktIdXeMuY4sN5LU3cggxhWqvLj1tsCG9dnGIxLQR1KeY8xCsU92JVs1lN4c%2BviENzpgvf5aXPBuRBn7vrPO4cwG%2FeiN8r8mLi5c4fr18QphTvHGMFyCJHdIsEFxaPOBx8MiFA62Nij9gA4KT2DAN%2BYo%2F8zRAj5Qyq%2B%2F6jRMsD6Wwo%2FFap2uW1YMo4%2BiNZVfE9XkvlkGEeMT5Squ5WiPWSTmTlxszmBrZTb3wqzUBIhO8HOk%2FIQJIrkYgyMfBkMtiw9AkBK%2Bz16%2Bp%2Ff5P1S89nFD8IyKl3M0%2FwpV97Fl4EeUg78I7F6yrsGiPgdhRdArRmCgX1WCOUu3GQts%2F6W48JewmUOl2v5zZ6pnuv9wTj9KjnibW%2F4O9sWV9N7rfsLZ8NCyH%2Fro8uGWid62afPx4XENVXJidrTjWwT6Oph0W6AW2MgH0NawKEqmTEU%2B6uw1aUjFiLomWOsiGHSdpP3Kq4gh8he%2BM5HXhP3OBY6YU5rSYcEuItYZ1uGR1wtrKT0mcu1i7wtp%2FQ4z0wkReT3OZll9cj1gmhQHNWsW9ZVNNY9Q4m6rmrbvcsMi1unndUaxgop%2BmCYwbX6N9bWP6KVbDSde9EL3N4X3hMNq%2Fs9UGOqUBxftq1s39AX%2F7zhkcccaEsssShUgxPiRgfnFV8kUeohK%2FwN0ZvPMJK6h5BPyDCBBx9ZhWDj46qlvjJUUJxFLaMMW8VSfwQy9drdsCzAG1vW19FGe5jw4ohS%2BaKJreJvUD6esRM6wry5OssxJXi4fQiJg%2FcUZMi9V6huo9%2FYjIE3spEX0lMxJSbpzgLw2prwNwuYnup0ZXv0LO3FhqeJSg%2Bg60SsqQ&X-Amz-Signature=1fcbc76eaf5619a1419589671cb8390c0512699e3a87aa727fcd95003ea63d8b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBRGIUHF%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQD79OR%2Fqie0dvKrE2Tztg%2F%2Fa9EEbhBRXtOgVfseoDq1ngIgQ8UD8KI7FAjjJYii%2BUI81R01ilsd80iicnEsxCr3sT0q%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDMMt4QLxGs%2FNhLseRircAy%2BL6YJ7nmH6kVzw8KgFLqAzlcogktIdXeMuY4sN5LU3cggxhWqvLj1tsCG9dnGIxLQR1KeY8xCsU92JVs1lN4c%2BviENzpgvf5aXPBuRBn7vrPO4cwG%2FeiN8r8mLi5c4fr18QphTvHGMFyCJHdIsEFxaPOBx8MiFA62Nij9gA4KT2DAN%2BYo%2F8zRAj5Qyq%2B%2F6jRMsD6Wwo%2FFap2uW1YMo4%2BiNZVfE9XkvlkGEeMT5Squ5WiPWSTmTlxszmBrZTb3wqzUBIhO8HOk%2FIQJIrkYgyMfBkMtiw9AkBK%2Bz16%2Bp%2Ff5P1S89nFD8IyKl3M0%2FwpV97Fl4EeUg78I7F6yrsGiPgdhRdArRmCgX1WCOUu3GQts%2F6W48JewmUOl2v5zZ6pnuv9wTj9KjnibW%2F4O9sWV9N7rfsLZ8NCyH%2Fro8uGWid62afPx4XENVXJidrTjWwT6Oph0W6AW2MgH0NawKEqmTEU%2B6uw1aUjFiLomWOsiGHSdpP3Kq4gh8he%2BM5HXhP3OBY6YU5rSYcEuItYZ1uGR1wtrKT0mcu1i7wtp%2FQ4z0wkReT3OZll9cj1gmhQHNWsW9ZVNNY9Q4m6rmrbvcsMi1unndUaxgop%2BmCYwbX6N9bWP6KVbDSde9EL3N4X3hMNq%2Fs9UGOqUBxftq1s39AX%2F7zhkcccaEsssShUgxPiRgfnFV8kUeohK%2FwN0ZvPMJK6h5BPyDCBBx9ZhWDj46qlvjJUUJxFLaMMW8VSfwQy9drdsCzAG1vW19FGe5jw4ohS%2BaKJreJvUD6esRM6wry5OssxJXi4fQiJg%2FcUZMi9V6huo9%2FYjIE3spEX0lMxJSbpzgLw2prwNwuYnup0ZXv0LO3FhqeJSg%2Bg60SsqQ&X-Amz-Signature=07e06931bf896be9f8c67e46a77995ef501b60b7a10be2bd26f8022364afea15&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBRGIUHF%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCIQD79OR%2Fqie0dvKrE2Tztg%2F%2Fa9EEbhBRXtOgVfseoDq1ngIgQ8UD8KI7FAjjJYii%2BUI81R01ilsd80iicnEsxCr3sT0q%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDMMt4QLxGs%2FNhLseRircAy%2BL6YJ7nmH6kVzw8KgFLqAzlcogktIdXeMuY4sN5LU3cggxhWqvLj1tsCG9dnGIxLQR1KeY8xCsU92JVs1lN4c%2BviENzpgvf5aXPBuRBn7vrPO4cwG%2FeiN8r8mLi5c4fr18QphTvHGMFyCJHdIsEFxaPOBx8MiFA62Nij9gA4KT2DAN%2BYo%2F8zRAj5Qyq%2B%2F6jRMsD6Wwo%2FFap2uW1YMo4%2BiNZVfE9XkvlkGEeMT5Squ5WiPWSTmTlxszmBrZTb3wqzUBIhO8HOk%2FIQJIrkYgyMfBkMtiw9AkBK%2Bz16%2Bp%2Ff5P1S89nFD8IyKl3M0%2FwpV97Fl4EeUg78I7F6yrsGiPgdhRdArRmCgX1WCOUu3GQts%2F6W48JewmUOl2v5zZ6pnuv9wTj9KjnibW%2F4O9sWV9N7rfsLZ8NCyH%2Fro8uGWid62afPx4XENVXJidrTjWwT6Oph0W6AW2MgH0NawKEqmTEU%2B6uw1aUjFiLomWOsiGHSdpP3Kq4gh8he%2BM5HXhP3OBY6YU5rSYcEuItYZ1uGR1wtrKT0mcu1i7wtp%2FQ4z0wkReT3OZll9cj1gmhQHNWsW9ZVNNY9Q4m6rmrbvcsMi1unndUaxgop%2BmCYwbX6N9bWP6KVbDSde9EL3N4X3hMNq%2Fs9UGOqUBxftq1s39AX%2F7zhkcccaEsssShUgxPiRgfnFV8kUeohK%2FwN0ZvPMJK6h5BPyDCBBx9ZhWDj46qlvjJUUJxFLaMMW8VSfwQy9drdsCzAG1vW19FGe5jw4ohS%2BaKJreJvUD6esRM6wry5OssxJXi4fQiJg%2FcUZMi9V6huo9%2FYjIE3spEX0lMxJSbpzgLw2prwNwuYnup0ZXv0LO3FhqeJSg%2Bg60SsqQ&X-Amz-Signature=09d5158f7fbf24ee76ab1e15655ff58fa3ec817307f4c0c5bb5c01680592cc2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RACR3FOS%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIQCcoNvnbI5K4eiv516r2qT6KWFq2N4Apvgky4Z1XLhjQQIgUk6j7ycQBH%2Fkj2oSd8rKNOq%2F5am6SyToHWDi6Fm2Gnsq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDO8XevZeXdFSl5cFhyrcA8qyUPBNszygFQwXOCzCe7ZsFG1UVmO4%2FARKq7tSxk7MD0jsdMWavQz269uZDT7hjS0lgwOrCtguTb9Qm%2B%2Ft1HPWa10dOOyVTtRxTXMZ5xTs%2FbC%2B4LGylimcmfXwgj8bW5cHQFtaV%2BK2Mektx8VBPlZQHDS8J%2BdDwMnDvrbIFL627BDTRtOK8RAcD1VdXvbE0CF%2B6q1mXOSmOuT7dyz4WHbpC79221iaEN8aP8OYaGx%2BBfsTJuuc5pLJdkIzqvbq%2FUwnq3i%2FSKjqrmQb72e5JhTSxleUsE5u%2Fo9GOU52ymIr8MPIa9yvLSxZDCxW%2Fg1YClsAC26tLgMaqUa0h100RmqflTiM5XwHE7%2FF7AnAQZoYkcxVBb5uH2X5jh7G%2BExKf1cEK8ed4VhJ4xAHuTYb%2F3sLOXcF6vN9hSPbl8SND7hdAb7QtRxH6snXJpHbmwmvZMOv7HxzX5GsjtVEAwdWGlU8tipGoAb9pHDZfaFY%2BH%2FV7G3cXJvS86ONik%2FW2sRsF5G4sT55D72PBQwJp2O29ZdMF177imBrFTR1td6PvJEtgBwAuoYjyE3ZEZDhdSvQQ%2BuxX03WHQlSxbbilH5VHJNwLU6TRdOW8eFsFm8jp1Z8Y83b0YwfJ7tRCLLuMNLrs9UGOqUBuURW6L49ZItjnpV3N4Bll56DxCHYDHyne3qOcJGRFSMFo1EyA9vF74nrvIlORT6%2BjVf9LDmag7RjHgJV4petwEQ6g%2FSc9XJwu1AtqSDUQhDc2d3PPe63vXBkOM6WQ0FU4m0nkS3r8OQ%2FQ5Q206XnBdMYYqUl9E63EXihabtZe5QTczmikR03t8aTG8CLfBcQy0PU5yMkp48AR0%2FMjyOE6S%2BEhgrn&X-Amz-Signature=feadce2e40d3e23a5ffab018d11ec882cb240f35920c7cf71698adad48ac49b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UWZYWUUJ%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJGMEQCIElFWJFSPIHIcbogmG7q9N8u9Z2mNYP9p7uE1fCWareWAiA0USAMiaGUfv55IaYa46uej9WXFGf1FG4U6RoMhNsB%2FSr%2FAwhAEAAaDDYzNzQyMzE4MzgwNSIMtto5%2FV5WNTwLwwHeKtwDnFNWBmA3i8EiSlKhUzecqs909wVP1966IpH2uDuDmtU0y29FFmPEIoY59ONarvDPyA44YDwxRr4GHZ4UeiJAGtFg%2FKmE3ORGj5pg%2BmivopHvQtPxmCuPip8dVBhfiErVyqBCZvs3Zn8BQcqe3IHfz1gsk9UXVfcejZjlOBrDqpmI%2FJQ82TOyDMMJ3vsyBDfn%2FKo%2B5CIosMCTQmh3o2%2Fk47nWaJVwnSFBO3%2BrVLImL4z7ID5yO%2BkFi4y3CjRj9aBx%2B5TYCgdYwbUCY3N3vV9Gbi2YyMyHpASaP8Bl4AAbiQBwwfFwLTw%2BOV3bbfRdkNyvQ%2Bb1Tg1IbC%2F1TEbxkaIVlJiXPtv8d%2FGdhsQJMyuZILo7YOThGcVRyF3gLTPMkkifgzkPjGbK77qvbz4eq6Ho5mmhYbp5hVHfV2fW2%2BYAGsZKGjXmWVWvi9N%2BAIVzMA4m38RJg2XPlOeNyq%2BGFsXfnN%2BE6Kjco6P9k5%2FDBQUgdRabEBg%2FMa2aXFjPeT6aZmD1MY62O3SE%2FT110ZH%2BKbc1ThiIz0eLFfZCDB1uyMyVXJAhitT2G%2FKfK%2Bii1lAAN4qObwTmSxm%2BUzXm4r%2Fw1Yr2qYQkEVHde2RTG1MzULPpeRcmxXXo630B6Co5x%2B0wxb%2Bz1QY6pgHWpDbDJiZgeXkoyZhuAPaNzW8vWZKnjq8nE9ZOsMAESJld5eWimCQcqYaElGlHBOZf0Xwdlw179kLjOhW7xzJsSoyLI4zeB1N21NqaXF0jkzG6vnWrLjfpmEof0RJuzGRR3LY5Vk3fbtMf%2BaKFoY6LXYPygY6lkN38arz6redu9%2BvRfw22T%2BMLEYhY2PYBPr5ohF5uts1knSehosJs6Y2mePJ%2FwH0r&X-Amz-Signature=0a838840c02b55d230f0d130f5a1e2d19f621e966d5bc3cf843a0f76d56e8ece&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UWZYWUUJ%2F20260918%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260918T124333Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJGMEQCIElFWJFSPIHIcbogmG7q9N8u9Z2mNYP9p7uE1fCWareWAiA0USAMiaGUfv55IaYa46uej9WXFGf1FG4U6RoMhNsB%2FSr%2FAwhAEAAaDDYzNzQyMzE4MzgwNSIMtto5%2FV5WNTwLwwHeKtwDnFNWBmA3i8EiSlKhUzecqs909wVP1966IpH2uDuDmtU0y29FFmPEIoY59ONarvDPyA44YDwxRr4GHZ4UeiJAGtFg%2FKmE3ORGj5pg%2BmivopHvQtPxmCuPip8dVBhfiErVyqBCZvs3Zn8BQcqe3IHfz1gsk9UXVfcejZjlOBrDqpmI%2FJQ82TOyDMMJ3vsyBDfn%2FKo%2B5CIosMCTQmh3o2%2Fk47nWaJVwnSFBO3%2BrVLImL4z7ID5yO%2BkFi4y3CjRj9aBx%2B5TYCgdYwbUCY3N3vV9Gbi2YyMyHpASaP8Bl4AAbiQBwwfFwLTw%2BOV3bbfRdkNyvQ%2Bb1Tg1IbC%2F1TEbxkaIVlJiXPtv8d%2FGdhsQJMyuZILo7YOThGcVRyF3gLTPMkkifgzkPjGbK77qvbz4eq6Ho5mmhYbp5hVHfV2fW2%2BYAGsZKGjXmWVWvi9N%2BAIVzMA4m38RJg2XPlOeNyq%2BGFsXfnN%2BE6Kjco6P9k5%2FDBQUgdRabEBg%2FMa2aXFjPeT6aZmD1MY62O3SE%2FT110ZH%2BKbc1ThiIz0eLFfZCDB1uyMyVXJAhitT2G%2FKfK%2Bii1lAAN4qObwTmSxm%2BUzXm4r%2Fw1Yr2qYQkEVHde2RTG1MzULPpeRcmxXXo630B6Co5x%2B0wxb%2Bz1QY6pgHWpDbDJiZgeXkoyZhuAPaNzW8vWZKnjq8nE9ZOsMAESJld5eWimCQcqYaElGlHBOZf0Xwdlw179kLjOhW7xzJsSoyLI4zeB1N21NqaXF0jkzG6vnWrLjfpmEof0RJuzGRR3LY5Vk3fbtMf%2BaKFoY6LXYPygY6lkN38arz6redu9%2BvRfw22T%2BMLEYhY2PYBPr5ohF5uts1knSehosJs6Y2mePJ%2FwH0r&X-Amz-Signature=65e5dea635f07e1ad968834c40029175e6c5ba66c18385a0fb0f894818826c4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
