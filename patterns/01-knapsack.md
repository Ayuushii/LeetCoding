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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YB74LNRY%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083634Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDOrMWUJDtXNaTWb13iNQWoKBjjnij36s1R4nAM1rmB4AIgSykm%2FVA2qQbLiAAVNuOU4395Y4DL0L7bUnPoI6QgRF4qiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPaABNCO1T7yLtB%2BtircAwBG7EfU6VtDZOMZlzUSNJ2Gxx5pjfykw8vFpXfhXltjP6VG6Xo%2Fwr1tu5Xgd31M3z%2FvL201FRyAIodrPXrI3ZZilaXoSQ%2BWNP8KEoJNexNNseigQPbA7P5SHaEhoMWyQgLqRTPx8aqZPSW2FkDTWD6oGoxbJUP5S4kxtlPUMcdWDQmKuU9AXLo7DzX85eSWxjSBmP4Gkpt2yoRRIoFfhm701VgYmnDvxbI65l5mr%2B9b45DPaMYPDyVXkJ40deh2iQS2MGkGV8jPXIaj%2BI2%2BjhINQBMZscugVkQPNssKuXHL%2BcWJ0tewQsU9Rd9WU1fpbRiSfNg0C24AS4TOS5Vm2aRvOWNN3mL12ywSD25yzTLa1mQIF9173mw%2Fs%2F8MJzOFGuB%2Ft5xRG%2BjJSEgn337FtJ0y0zGSPpN6nynnt8egcSwEPEbrSoo1eUbLwwx6Nq8zw4t3JRlC9kY%2BBQCJqKX0uyr7q2db8M5mKWHKDpiudHUwaCxcSEivImtdXhOXa0FtF0Dd0%2B8arlj6t1HBNk3Xup%2BKf7qbyKMgtLvXFv4NJGvXA%2BtHSOJgYH5IC26cLkzSr9vnrICfQcwuMHVquZxYytrbYmwWoqzzNJUZMkWUSUHaI7N6hlislSPmVijqMM2z2c0GOqUBsx%2FsMzI2ZZvn6p2ZW102GHYINuAwZ%2ByCSfUMAbmAoD1rOu0Fzm5Jzm%2FBwnwoOtwMIw%2FhuIxIXAHtemTzCXgv8Ym0936kBt5gHAsmtmuI28CvS%2FSkdswxjT2GFYT8e968z5SilygS7gTMEwuEKS%2BtRUm9eX90FCyo7hdVASSV%2FKevfxNbNI2Zjv3R3PDVyeXtr6%2BgzwbOKUn4GSNOXhgyT%2Br1Jt4s&X-Amz-Signature=e60cfe4d7e93c1f452570cac9c7f867e888d59e9bcfb9b719e9d99b42c7b1e08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YB74LNRY%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083634Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDOrMWUJDtXNaTWb13iNQWoKBjjnij36s1R4nAM1rmB4AIgSykm%2FVA2qQbLiAAVNuOU4395Y4DL0L7bUnPoI6QgRF4qiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPaABNCO1T7yLtB%2BtircAwBG7EfU6VtDZOMZlzUSNJ2Gxx5pjfykw8vFpXfhXltjP6VG6Xo%2Fwr1tu5Xgd31M3z%2FvL201FRyAIodrPXrI3ZZilaXoSQ%2BWNP8KEoJNexNNseigQPbA7P5SHaEhoMWyQgLqRTPx8aqZPSW2FkDTWD6oGoxbJUP5S4kxtlPUMcdWDQmKuU9AXLo7DzX85eSWxjSBmP4Gkpt2yoRRIoFfhm701VgYmnDvxbI65l5mr%2B9b45DPaMYPDyVXkJ40deh2iQS2MGkGV8jPXIaj%2BI2%2BjhINQBMZscugVkQPNssKuXHL%2BcWJ0tewQsU9Rd9WU1fpbRiSfNg0C24AS4TOS5Vm2aRvOWNN3mL12ywSD25yzTLa1mQIF9173mw%2Fs%2F8MJzOFGuB%2Ft5xRG%2BjJSEgn337FtJ0y0zGSPpN6nynnt8egcSwEPEbrSoo1eUbLwwx6Nq8zw4t3JRlC9kY%2BBQCJqKX0uyr7q2db8M5mKWHKDpiudHUwaCxcSEivImtdXhOXa0FtF0Dd0%2B8arlj6t1HBNk3Xup%2BKf7qbyKMgtLvXFv4NJGvXA%2BtHSOJgYH5IC26cLkzSr9vnrICfQcwuMHVquZxYytrbYmwWoqzzNJUZMkWUSUHaI7N6hlislSPmVijqMM2z2c0GOqUBsx%2FsMzI2ZZvn6p2ZW102GHYINuAwZ%2ByCSfUMAbmAoD1rOu0Fzm5Jzm%2FBwnwoOtwMIw%2FhuIxIXAHtemTzCXgv8Ym0936kBt5gHAsmtmuI28CvS%2FSkdswxjT2GFYT8e968z5SilygS7gTMEwuEKS%2BtRUm9eX90FCyo7hdVASSV%2FKevfxNbNI2Zjv3R3PDVyeXtr6%2BgzwbOKUn4GSNOXhgyT%2Br1Jt4s&X-Amz-Signature=5e8173be7e71c19d920474e32df1efeeb824dc0974f81b959b20fbae2a77c0f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YB74LNRY%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083634Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDOrMWUJDtXNaTWb13iNQWoKBjjnij36s1R4nAM1rmB4AIgSykm%2FVA2qQbLiAAVNuOU4395Y4DL0L7bUnPoI6QgRF4qiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPaABNCO1T7yLtB%2BtircAwBG7EfU6VtDZOMZlzUSNJ2Gxx5pjfykw8vFpXfhXltjP6VG6Xo%2Fwr1tu5Xgd31M3z%2FvL201FRyAIodrPXrI3ZZilaXoSQ%2BWNP8KEoJNexNNseigQPbA7P5SHaEhoMWyQgLqRTPx8aqZPSW2FkDTWD6oGoxbJUP5S4kxtlPUMcdWDQmKuU9AXLo7DzX85eSWxjSBmP4Gkpt2yoRRIoFfhm701VgYmnDvxbI65l5mr%2B9b45DPaMYPDyVXkJ40deh2iQS2MGkGV8jPXIaj%2BI2%2BjhINQBMZscugVkQPNssKuXHL%2BcWJ0tewQsU9Rd9WU1fpbRiSfNg0C24AS4TOS5Vm2aRvOWNN3mL12ywSD25yzTLa1mQIF9173mw%2Fs%2F8MJzOFGuB%2Ft5xRG%2BjJSEgn337FtJ0y0zGSPpN6nynnt8egcSwEPEbrSoo1eUbLwwx6Nq8zw4t3JRlC9kY%2BBQCJqKX0uyr7q2db8M5mKWHKDpiudHUwaCxcSEivImtdXhOXa0FtF0Dd0%2B8arlj6t1HBNk3Xup%2BKf7qbyKMgtLvXFv4NJGvXA%2BtHSOJgYH5IC26cLkzSr9vnrICfQcwuMHVquZxYytrbYmwWoqzzNJUZMkWUSUHaI7N6hlislSPmVijqMM2z2c0GOqUBsx%2FsMzI2ZZvn6p2ZW102GHYINuAwZ%2ByCSfUMAbmAoD1rOu0Fzm5Jzm%2FBwnwoOtwMIw%2FhuIxIXAHtemTzCXgv8Ym0936kBt5gHAsmtmuI28CvS%2FSkdswxjT2GFYT8e968z5SilygS7gTMEwuEKS%2BtRUm9eX90FCyo7hdVASSV%2FKevfxNbNI2Zjv3R3PDVyeXtr6%2BgzwbOKUn4GSNOXhgyT%2Br1Jt4s&X-Amz-Signature=69ea6903ed5a261622172bb08f5b2a3b3518725a7fd2b36862db93c870959ad5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWNAULXT%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083635Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH6zSJNqitmWk6wdvxV6xXvoMfi7As3k3V4fh%2B7SIfyKAiEAn7eVzLfnqwItMhRsdpGU5p2Kzecci6OgHeC7E5Lt3J4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIBL2Z5cDn%2BvtvC7CCrcA5XERPmXsxKPfnJNjIwqXsaFOu2ltmHFm8gh07eVkMgwV%2BmId23y9cN%2FYpkG3qHzQ55KYshc7GJbF1PWO%2FqfFuy1Egm4u5ZiXVJ5pQPxZUaCjdTK2N6LTLZFliHfR8i9Zmc4bH9fEVAGmH%2BYEC8ngnstFsK3sA1LBE4L71147mbvSqHrV1pyMvqpLYbGcxXIFTFvsi4Fs5Zhdpx6jz4MIiI%2FCgabtgN064S33O4CdcE0y2UcbbZovEI9tW4Ad4uWDxOHShECmY39AonV4IUwdrGxPKAhLmtbxz6NXI%2FVa7924HVVdZYu3GrSQuNCxWFNT%2B1swVxtCAHlUFxnwKI3RwR3XEffJ4UGNEr6kAlEJCDhLL4ZgVXuctfxKo7gBNReRTLuWfRbotPUtP0JWsII5OvmnCQQ1%2B8kJmZDjT%2FWW9uVWH%2Bvqv6V4Urh9gCKGOIeP%2Be5IdRRzJJVDqXkea0Jhqe0eTRrQzkLh%2Fwngf24OPev9ZQEHbc72UCiAdPmIts9lEqlpq2DMMueWXeUaxJSyhK1r3OaWrx%2BurJcWBftUfbRN8jkban%2BVBS6H37onpcrh9RrgiTWPpHe5FI9f7ioJDuJW2lF4CSgqhUzCJS3JAffo3SbLc4mGrWegnhqMMrd2c0GOqUBm0QWZJEHt8uygvmbtziG7tnlP8tPzfIsAcBuoZfHatGS4ZSlqmIO4Rj1zStz5abjaFNfVF%2FHRYer9c%2FDOwjIOUkEuKE%2BKcE14SlU1hl9dzJWvGOhC7E52Ke2zsXLfx6hh6NoZdwgejHpoeCcQP69CBsG0ipskOV%2FEAjH1cjPdE5e7%2B8zY%2FpHQ9FKYWEVxInP1FUZheIiArSm7vHpP9jVjqduuJJk&X-Amz-Signature=06d32a7823893ca8f11138dd2aef68305f42538c0600190abc1ccfb6a65ece48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWNAULXT%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083635Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH6zSJNqitmWk6wdvxV6xXvoMfi7As3k3V4fh%2B7SIfyKAiEAn7eVzLfnqwItMhRsdpGU5p2Kzecci6OgHeC7E5Lt3J4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIBL2Z5cDn%2BvtvC7CCrcA5XERPmXsxKPfnJNjIwqXsaFOu2ltmHFm8gh07eVkMgwV%2BmId23y9cN%2FYpkG3qHzQ55KYshc7GJbF1PWO%2FqfFuy1Egm4u5ZiXVJ5pQPxZUaCjdTK2N6LTLZFliHfR8i9Zmc4bH9fEVAGmH%2BYEC8ngnstFsK3sA1LBE4L71147mbvSqHrV1pyMvqpLYbGcxXIFTFvsi4Fs5Zhdpx6jz4MIiI%2FCgabtgN064S33O4CdcE0y2UcbbZovEI9tW4Ad4uWDxOHShECmY39AonV4IUwdrGxPKAhLmtbxz6NXI%2FVa7924HVVdZYu3GrSQuNCxWFNT%2B1swVxtCAHlUFxnwKI3RwR3XEffJ4UGNEr6kAlEJCDhLL4ZgVXuctfxKo7gBNReRTLuWfRbotPUtP0JWsII5OvmnCQQ1%2B8kJmZDjT%2FWW9uVWH%2Bvqv6V4Urh9gCKGOIeP%2Be5IdRRzJJVDqXkea0Jhqe0eTRrQzkLh%2Fwngf24OPev9ZQEHbc72UCiAdPmIts9lEqlpq2DMMueWXeUaxJSyhK1r3OaWrx%2BurJcWBftUfbRN8jkban%2BVBS6H37onpcrh9RrgiTWPpHe5FI9f7ioJDuJW2lF4CSgqhUzCJS3JAffo3SbLc4mGrWegnhqMMrd2c0GOqUBm0QWZJEHt8uygvmbtziG7tnlP8tPzfIsAcBuoZfHatGS4ZSlqmIO4Rj1zStz5abjaFNfVF%2FHRYer9c%2FDOwjIOUkEuKE%2BKcE14SlU1hl9dzJWvGOhC7E52Ke2zsXLfx6hh6NoZdwgejHpoeCcQP69CBsG0ipskOV%2FEAjH1cjPdE5e7%2B8zY%2FpHQ9FKYWEVxInP1FUZheIiArSm7vHpP9jVjqduuJJk&X-Amz-Signature=77d39748d61ec76421d3167cd791e87806868488641a82c5e9b983bccb824c00&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWNAULXT%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083635Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH6zSJNqitmWk6wdvxV6xXvoMfi7As3k3V4fh%2B7SIfyKAiEAn7eVzLfnqwItMhRsdpGU5p2Kzecci6OgHeC7E5Lt3J4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIBL2Z5cDn%2BvtvC7CCrcA5XERPmXsxKPfnJNjIwqXsaFOu2ltmHFm8gh07eVkMgwV%2BmId23y9cN%2FYpkG3qHzQ55KYshc7GJbF1PWO%2FqfFuy1Egm4u5ZiXVJ5pQPxZUaCjdTK2N6LTLZFliHfR8i9Zmc4bH9fEVAGmH%2BYEC8ngnstFsK3sA1LBE4L71147mbvSqHrV1pyMvqpLYbGcxXIFTFvsi4Fs5Zhdpx6jz4MIiI%2FCgabtgN064S33O4CdcE0y2UcbbZovEI9tW4Ad4uWDxOHShECmY39AonV4IUwdrGxPKAhLmtbxz6NXI%2FVa7924HVVdZYu3GrSQuNCxWFNT%2B1swVxtCAHlUFxnwKI3RwR3XEffJ4UGNEr6kAlEJCDhLL4ZgVXuctfxKo7gBNReRTLuWfRbotPUtP0JWsII5OvmnCQQ1%2B8kJmZDjT%2FWW9uVWH%2Bvqv6V4Urh9gCKGOIeP%2Be5IdRRzJJVDqXkea0Jhqe0eTRrQzkLh%2Fwngf24OPev9ZQEHbc72UCiAdPmIts9lEqlpq2DMMueWXeUaxJSyhK1r3OaWrx%2BurJcWBftUfbRN8jkban%2BVBS6H37onpcrh9RrgiTWPpHe5FI9f7ioJDuJW2lF4CSgqhUzCJS3JAffo3SbLc4mGrWegnhqMMrd2c0GOqUBm0QWZJEHt8uygvmbtziG7tnlP8tPzfIsAcBuoZfHatGS4ZSlqmIO4Rj1zStz5abjaFNfVF%2FHRYer9c%2FDOwjIOUkEuKE%2BKcE14SlU1hl9dzJWvGOhC7E52Ke2zsXLfx6hh6NoZdwgejHpoeCcQP69CBsG0ipskOV%2FEAjH1cjPdE5e7%2B8zY%2FpHQ9FKYWEVxInP1FUZheIiArSm7vHpP9jVjqduuJJk&X-Amz-Signature=2ae448715e442f061159ede5d54b151513452bd136a6bb7a57d7baa3b986da21&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWNAULXT%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083635Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH6zSJNqitmWk6wdvxV6xXvoMfi7As3k3V4fh%2B7SIfyKAiEAn7eVzLfnqwItMhRsdpGU5p2Kzecci6OgHeC7E5Lt3J4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIBL2Z5cDn%2BvtvC7CCrcA5XERPmXsxKPfnJNjIwqXsaFOu2ltmHFm8gh07eVkMgwV%2BmId23y9cN%2FYpkG3qHzQ55KYshc7GJbF1PWO%2FqfFuy1Egm4u5ZiXVJ5pQPxZUaCjdTK2N6LTLZFliHfR8i9Zmc4bH9fEVAGmH%2BYEC8ngnstFsK3sA1LBE4L71147mbvSqHrV1pyMvqpLYbGcxXIFTFvsi4Fs5Zhdpx6jz4MIiI%2FCgabtgN064S33O4CdcE0y2UcbbZovEI9tW4Ad4uWDxOHShECmY39AonV4IUwdrGxPKAhLmtbxz6NXI%2FVa7924HVVdZYu3GrSQuNCxWFNT%2B1swVxtCAHlUFxnwKI3RwR3XEffJ4UGNEr6kAlEJCDhLL4ZgVXuctfxKo7gBNReRTLuWfRbotPUtP0JWsII5OvmnCQQ1%2B8kJmZDjT%2FWW9uVWH%2Bvqv6V4Urh9gCKGOIeP%2Be5IdRRzJJVDqXkea0Jhqe0eTRrQzkLh%2Fwngf24OPev9ZQEHbc72UCiAdPmIts9lEqlpq2DMMueWXeUaxJSyhK1r3OaWrx%2BurJcWBftUfbRN8jkban%2BVBS6H37onpcrh9RrgiTWPpHe5FI9f7ioJDuJW2lF4CSgqhUzCJS3JAffo3SbLc4mGrWegnhqMMrd2c0GOqUBm0QWZJEHt8uygvmbtziG7tnlP8tPzfIsAcBuoZfHatGS4ZSlqmIO4Rj1zStz5abjaFNfVF%2FHRYer9c%2FDOwjIOUkEuKE%2BKcE14SlU1hl9dzJWvGOhC7E52Ke2zsXLfx6hh6NoZdwgejHpoeCcQP69CBsG0ipskOV%2FEAjH1cjPdE5e7%2B8zY%2FpHQ9FKYWEVxInP1FUZheIiArSm7vHpP9jVjqduuJJk&X-Amz-Signature=11fdd782f31d33e3b78e3414765cd76e10d515bfba3b67cbb9d8953e54409fbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QL57RIR%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGrlC%2FV9bxT06NyPzkokFjJ%2B4LkU%2FSQLQ89gEIo46P4fAiADJjQ9o%2BNAhSdtId7nH%2Fdy8mszVuOSDCobFLPVxalWxSqIBAi6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM9auUCKa4rt68t0YbKtwDh5qxrC74%2FQAi2FYxUL09cyXC0YbwBS8YBNG3ACg9BtaJzh9vHy9aM%2Bz%2Fp8QDBIF3zim%2BRuoV%2B%2Bdw2s0xPr4g0xY1FdkmOroDq3eOnoJK5Qa0MACF%2BPzK0JRLjToH0c%2FZTqNLRx%2FKV9FYpVQY5yX0JlTKG5d2IBjFSjWCZOG%2Bq298UiiQDiVjiDQxuihkJZmcRzZgQaoOqN8Qlig66rGD9qpO6%2FUugyBHHbFfqOOxfvPsfs9CvQHdh2dUSoWAs4UXDPDB3c0%2B%2B9MYdSkpOZwq4T4iuXeaz43VsnN%2FnVLPGfHTIEtSdVDwOBBMope7VlSnOPJ%2Fx6dgG6Hd99fETjCmyX%2FJnh0%2Bj4GmFt1qfK45R9rxNVCu1B%2B1H%2BizFI77zCa9w8giSbq0yZ8vgLAot3dp8pBxiw2sNld%2Bq6XbhBFA%2F4pdiVBoErxba5nZGWgosMcGP7wrUO931s21QkajUEfGCuTEQJnpsz0CxnK11OnFCII6ovWxYcNQ0Gdy3ge6VHxlYguQEfzi06fElGvOjHqsRR91m%2B6c388usmeL2OdnSEOYLwEX8TAajNwzPSmEnOMCzjVsL2nebCMwA9ToQFXjMHF2EuJjnPrkDE7Q%2Fkd7nVaQyOp1lgzeAeNM1Q8wr97ZzQY6pgE%2Fp7Pl9xaiUOpzIBPpCDC6WlHJ2VEvgcmzb1LEzvmYh%2BtMkBkNsf%2BQdzVGJNlVVJVqcDjxENftHDs0I5BHvQxih6ibHtSDvXjvuUXUTFNFM7EtjiJAJOtL%2B8nRLzO9zf9meAi9dXsSF%2BjEgTEbLtDIe0lK5a4CwWSimgShNpWeho31calFrkrjV7CPe6LlBd0eT3TBNO7lEwDYhREQW%2BWGP2w2ZOLV&X-Amz-Signature=716d024e8d29822c0e35006ce8bf13ced6b7fb0319d9499f6e665d1dca8eaeb1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667OXXQSGQ%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcjv9tMn%2Bp%2B022Az71WPlk3neskWf66ac8wLQuxvle%2BAiEAw9Fv2gWI1eENMLRFABJYIWBOpGEgEfglCtUpJKBGsGMqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOl83PldI92gLnNp1CrcA07JWGmVcpGu9Zct23ujDmlrYVY%2BLV0p1pIycgEvYdcY%2B7kXJ%2BjSnY2CJM%2B1zE4lSg4uMuxukrmg%2FdqME%2BAiGGT6lkqd9Hul6SBm%2Fe1R8rCKYAvlrxf%2BMHbFWYhLzUxqiJ2TcNaSqD7FjmzQYE1vIoFlFVrMom7l2lnbGxjGXS9z48yGu2b0N%2F0VqufyfnOMZdaUXMZhQt8l%2BaDXHOnEamsDfgpHpLX%2FLd1yY3%2FzUAwovU15J9qjc1xbc6vR6LdLMs0iDkvyNBAcVxDiyRz2h00v7ohqSTSTPL5fbIwdXPf19p8zVW2QC%2FScK%2FTdX2Tmymu2jhBABrByijy8jw2DDbTHjzuNaueAJrVIEBmj%2F6kYoVYk5rU96%2F%2FfzdIhj%2BdL%2FpATGiLR5crn4l98cUk8%2F7eeSZNwtWD6v%2FxVztyxuDB81y8wcjBoJG4Zf2G7zMi%2FObl%2BHOR5RMjvkfILiHT%2FiKMzYCNAPGFsudXeQNrEzqD8BL2vhpVZtUycPZx%2B%2F23hiqwILKOKS2uB%2Fcq1sY5vyuiGC3GuVRX0h2c4nzCFWP2PhdXzjZjrn0OWjw%2B%2Fe%2FhLyX%2F1B1VLqzT99QY%2FV5M%2FlsBGrKUB6Xx6a61CmIOhxafxQJdp0FM5eBUXkltGMK3e2c0GOqUBn13BI0TndGy27%2FJAC401Y0gOr66NIkuYMgK6zaXl7RFkpeDT%2BmgIo3OQWbxmZqkLk48IOhWuQXRD680WsQZ987XT9GDc70AOzFzZdQhbkAbc4pf5ZRehBPbqqu1YCzXQyjHealesUXTTOZOmM6jFhQi%2B4pqMD0zTmOvaIcq%2FNImVD2%2FERaQfFazWc4AiqYMIQRqyXPgBFvuXkKL6OUhR%2BXg9ysiG&X-Amz-Signature=75de046cbe00036454363fd6215c5e2974d63fec22cd461323210f625d963536&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667OXXQSGQ%2F20260315%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260315T083636Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHcjv9tMn%2Bp%2B022Az71WPlk3neskWf66ac8wLQuxvle%2BAiEAw9Fv2gWI1eENMLRFABJYIWBOpGEgEfglCtUpJKBGsGMqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOl83PldI92gLnNp1CrcA07JWGmVcpGu9Zct23ujDmlrYVY%2BLV0p1pIycgEvYdcY%2B7kXJ%2BjSnY2CJM%2B1zE4lSg4uMuxukrmg%2FdqME%2BAiGGT6lkqd9Hul6SBm%2Fe1R8rCKYAvlrxf%2BMHbFWYhLzUxqiJ2TcNaSqD7FjmzQYE1vIoFlFVrMom7l2lnbGxjGXS9z48yGu2b0N%2F0VqufyfnOMZdaUXMZhQt8l%2BaDXHOnEamsDfgpHpLX%2FLd1yY3%2FzUAwovU15J9qjc1xbc6vR6LdLMs0iDkvyNBAcVxDiyRz2h00v7ohqSTSTPL5fbIwdXPf19p8zVW2QC%2FScK%2FTdX2Tmymu2jhBABrByijy8jw2DDbTHjzuNaueAJrVIEBmj%2F6kYoVYk5rU96%2F%2FfzdIhj%2BdL%2FpATGiLR5crn4l98cUk8%2F7eeSZNwtWD6v%2FxVztyxuDB81y8wcjBoJG4Zf2G7zMi%2FObl%2BHOR5RMjvkfILiHT%2FiKMzYCNAPGFsudXeQNrEzqD8BL2vhpVZtUycPZx%2B%2F23hiqwILKOKS2uB%2Fcq1sY5vyuiGC3GuVRX0h2c4nzCFWP2PhdXzjZjrn0OWjw%2B%2Fe%2FhLyX%2F1B1VLqzT99QY%2FV5M%2FlsBGrKUB6Xx6a61CmIOhxafxQJdp0FM5eBUXkltGMK3e2c0GOqUBn13BI0TndGy27%2FJAC401Y0gOr66NIkuYMgK6zaXl7RFkpeDT%2BmgIo3OQWbxmZqkLk48IOhWuQXRD680WsQZ987XT9GDc70AOzFzZdQhbkAbc4pf5ZRehBPbqqu1YCzXQyjHealesUXTTOZOmM6jFhQi%2B4pqMD0zTmOvaIcq%2FNImVD2%2FERaQfFazWc4AiqYMIQRqyXPgBFvuXkKL6OUhR%2BXg9ysiG&X-Amz-Signature=84a51bfc3638a12440d7cadb79ff53d9444faa5c86b6ddce19fbd082d8b17342&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
