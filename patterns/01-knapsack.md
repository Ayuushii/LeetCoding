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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SGWJOMS7%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC8KeXK%2B3SYxHgfrFXkx4zuVDcCY5P8GEs6wvzhuc6TyAIhAI2iOs%2FxJzqepfkvw8jFFik5zxz4t334fxoG%2FNTt2MXBKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwCPU91yfd%2BFmCUB2Yq3APoYz59aEYLYGerjHf%2Fl5h%2F69mwamfpAuDvn%2BEMYzho%2B7%2FB%2FQ%2BB7KRuaghxC%2FXrBQbpR%2F6xNmf%2BkOo%2Baw1vFUUgcu%2FsG86IFiVFvFms1w9V1C6u3QH%2F87VLHlIK2%2BNLYf03T8k3yW0VZRfhWuoIZhrnOo8Y2%2Fgiyy%2BsPL0q1fs8Z28RIUzPnJsssqcZlz4yo0NCxMbX6%2BuRdui67tDTLUJrCbyI10mazg4kaeL1Z4OFTC%2FDeJ%2FO3041xz95lC8%2FUmSIMVPIlKmfII6khhFNB2fJdUEFuJUjw%2BVVPfXdF%2FxxyOtp4%2BwbWIFxBiW5G7u1Msuxo5PdLfquWPggim7zwHRAiClwrt8YcZdbrx5hFkUGggLJQ19u8gp%2FK%2B8wkLQEJIPOsvfiJqc2FfsjfRnAKM%2BIFUyx12e%2F0rnxjH%2BLIko%2FBKBatLZkKsnAyxR%2Bt2xVicGU%2BxYPWCjjBaQi4UdpRSkL06uKJfL0QnEEHTzG8OfduKeBzk8fUXgtkOCTr2gXGv4G8Jvh2yu5utjpdmU64x6MKr3OrnUFVMDj3IMcQphZMTSjzBN%2B%2F29nC1zxgzb%2F%2FOfp7TVskQeLOq5TCKVtuOnIkV%2FDkc8niSu%2Fd4HeitfPtWA2vO7Jk7JbNHWe9TC8uY%2FVBjqkATF3%2FZEqCDt2MeeACcilCn27hutgtQnKgtTXjtfHFPRH%2FG9SLRUd2b4xMfdUqspxVDioodUXroROlgPJQwEJZJsY7uzO0lA%2BC5SUJ3yp5w3diTfaeTGfAc%2Fhq3%2B2fN4ORkUFJDqjkFxGee7pgODmKoIsAbdOBTe3gQJhWj%2BWtfQWzDVpnzLn4bet3D%2FUg1z%2Fp%2FYpwU6hM%2BByT3A8lYo7XbAExJy1&X-Amz-Signature=48dd558e24c9c96f8063b3d75c98ab50aa30fd0f855ad78300ea88b17a2fb951&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SGWJOMS7%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC8KeXK%2B3SYxHgfrFXkx4zuVDcCY5P8GEs6wvzhuc6TyAIhAI2iOs%2FxJzqepfkvw8jFFik5zxz4t334fxoG%2FNTt2MXBKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwCPU91yfd%2BFmCUB2Yq3APoYz59aEYLYGerjHf%2Fl5h%2F69mwamfpAuDvn%2BEMYzho%2B7%2FB%2FQ%2BB7KRuaghxC%2FXrBQbpR%2F6xNmf%2BkOo%2Baw1vFUUgcu%2FsG86IFiVFvFms1w9V1C6u3QH%2F87VLHlIK2%2BNLYf03T8k3yW0VZRfhWuoIZhrnOo8Y2%2Fgiyy%2BsPL0q1fs8Z28RIUzPnJsssqcZlz4yo0NCxMbX6%2BuRdui67tDTLUJrCbyI10mazg4kaeL1Z4OFTC%2FDeJ%2FO3041xz95lC8%2FUmSIMVPIlKmfII6khhFNB2fJdUEFuJUjw%2BVVPfXdF%2FxxyOtp4%2BwbWIFxBiW5G7u1Msuxo5PdLfquWPggim7zwHRAiClwrt8YcZdbrx5hFkUGggLJQ19u8gp%2FK%2B8wkLQEJIPOsvfiJqc2FfsjfRnAKM%2BIFUyx12e%2F0rnxjH%2BLIko%2FBKBatLZkKsnAyxR%2Bt2xVicGU%2BxYPWCjjBaQi4UdpRSkL06uKJfL0QnEEHTzG8OfduKeBzk8fUXgtkOCTr2gXGv4G8Jvh2yu5utjpdmU64x6MKr3OrnUFVMDj3IMcQphZMTSjzBN%2B%2F29nC1zxgzb%2F%2FOfp7TVskQeLOq5TCKVtuOnIkV%2FDkc8niSu%2Fd4HeitfPtWA2vO7Jk7JbNHWe9TC8uY%2FVBjqkATF3%2FZEqCDt2MeeACcilCn27hutgtQnKgtTXjtfHFPRH%2FG9SLRUd2b4xMfdUqspxVDioodUXroROlgPJQwEJZJsY7uzO0lA%2BC5SUJ3yp5w3diTfaeTGfAc%2Fhq3%2B2fN4ORkUFJDqjkFxGee7pgODmKoIsAbdOBTe3gQJhWj%2BWtfQWzDVpnzLn4bet3D%2FUg1z%2Fp%2FYpwU6hM%2BByT3A8lYo7XbAExJy1&X-Amz-Signature=35e37579dfa87b6ac069ced131336335e874139f7a67c927a191b45f783df9e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SGWJOMS7%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC8KeXK%2B3SYxHgfrFXkx4zuVDcCY5P8GEs6wvzhuc6TyAIhAI2iOs%2FxJzqepfkvw8jFFik5zxz4t334fxoG%2FNTt2MXBKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwCPU91yfd%2BFmCUB2Yq3APoYz59aEYLYGerjHf%2Fl5h%2F69mwamfpAuDvn%2BEMYzho%2B7%2FB%2FQ%2BB7KRuaghxC%2FXrBQbpR%2F6xNmf%2BkOo%2Baw1vFUUgcu%2FsG86IFiVFvFms1w9V1C6u3QH%2F87VLHlIK2%2BNLYf03T8k3yW0VZRfhWuoIZhrnOo8Y2%2Fgiyy%2BsPL0q1fs8Z28RIUzPnJsssqcZlz4yo0NCxMbX6%2BuRdui67tDTLUJrCbyI10mazg4kaeL1Z4OFTC%2FDeJ%2FO3041xz95lC8%2FUmSIMVPIlKmfII6khhFNB2fJdUEFuJUjw%2BVVPfXdF%2FxxyOtp4%2BwbWIFxBiW5G7u1Msuxo5PdLfquWPggim7zwHRAiClwrt8YcZdbrx5hFkUGggLJQ19u8gp%2FK%2B8wkLQEJIPOsvfiJqc2FfsjfRnAKM%2BIFUyx12e%2F0rnxjH%2BLIko%2FBKBatLZkKsnAyxR%2Bt2xVicGU%2BxYPWCjjBaQi4UdpRSkL06uKJfL0QnEEHTzG8OfduKeBzk8fUXgtkOCTr2gXGv4G8Jvh2yu5utjpdmU64x6MKr3OrnUFVMDj3IMcQphZMTSjzBN%2B%2F29nC1zxgzb%2F%2FOfp7TVskQeLOq5TCKVtuOnIkV%2FDkc8niSu%2Fd4HeitfPtWA2vO7Jk7JbNHWe9TC8uY%2FVBjqkATF3%2FZEqCDt2MeeACcilCn27hutgtQnKgtTXjtfHFPRH%2FG9SLRUd2b4xMfdUqspxVDioodUXroROlgPJQwEJZJsY7uzO0lA%2BC5SUJ3yp5w3diTfaeTGfAc%2Fhq3%2B2fN4ORkUFJDqjkFxGee7pgODmKoIsAbdOBTe3gQJhWj%2BWtfQWzDVpnzLn4bet3D%2FUg1z%2Fp%2FYpwU6hM%2BByT3A8lYo7XbAExJy1&X-Amz-Signature=15bf17370920f25ccc2f267c45ee4b7ab3a24273be22d6b9ab30014f159d4ec1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652YJF5ES%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCGUCW8LX4TpoQKbENnj8aOHK1XCWNy%2Fl%2Bnu5NwgYP0cQIhAOowVzliwxuV5wQzq0XWk9hMI%2BmFgqDPHeK6el8pFDryKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwsh7RYzOveqFPUPdIq3ANBLoRYU03u2Ti0oEkNTkNZKg%2BTJGSN2jVYI9tQwKk%2B4g0HNPjARLonFr8HypDKf2yeH04RH6ggTtXS08BimvGwVqlRQoQzkLzQBcVNSbZ2bSX3qFAyyCx7DO%2Bv2HEKGDqwLHqCnoUGySvBiLLOjpTKzZizQ6XbOkfzBSioCPJ%2B6Ak6FXtEhs24tXv0QlUVPyzLR1Cx76Cm16VcuFI3%2Bs%2FLHdjfrd2lPKSpBG2OeU0S19ap%2FEXmYpLIPPjusWwJWdkUsmlV4imsdrprJ3d22eF6%2Fzd%2BmxQOCXwUOBF2FKslornT6fRPQFHFLgv6E98uqW12PlNTdRiRQldM%2FyAlD0aLclnzpUqNDRaieWOBAP2wcoh4%2FiQmsVW9A3NqUlY3OehrBKBluDXnY5%2BUpAlYG2TVuiJcax7y0CotBu%2FNKWtofIId4vroQe1jK%2BKoofISkB6VLoW07fFzKsOB1v7aNQwckiJz6rSvDLn0pLVHa4wOsAOLF4TGzj5JB8sUDcdYf0L5FldbKaWuTuoHUhUyEUAiLeWptNHMiGURciYVRUf1cTaYJ2wMOlvuM5zvwFtznhy4t0povdsp%2BqLeP9Me5oxkDtdx%2F2LCOqcdtf9c7d3c2BKxlZ3v5qI85v2X2DDJsI%2FVBjqkAXiiKU9K%2FHNzKZNHmCl89oBD8aEjwXsOJSm2aTuKXbyBBh%2FcrwBKXR1qDQrEjtAuVL%2BBgnIm1VJxF%2FUUoKev2p3V0t9S%2FcbLAovdwGJqx%2Btu8dEW6NKtCLAKZzaooCirFrgqODdvMfLK2DxM3U8TqrRBjrCeSWGxsF8bb%2B8i2YaaC%2Bvi6A2WBrXe%2Bj9bhIB2ubAeLBHwGaCIyM%2BoP%2BnpE0IJbFOy&X-Amz-Signature=1ea21acdb3cac278a3fe45a3c52e1d2183a6db578f839477e41bac95dfab49aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652YJF5ES%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCGUCW8LX4TpoQKbENnj8aOHK1XCWNy%2Fl%2Bnu5NwgYP0cQIhAOowVzliwxuV5wQzq0XWk9hMI%2BmFgqDPHeK6el8pFDryKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwsh7RYzOveqFPUPdIq3ANBLoRYU03u2Ti0oEkNTkNZKg%2BTJGSN2jVYI9tQwKk%2B4g0HNPjARLonFr8HypDKf2yeH04RH6ggTtXS08BimvGwVqlRQoQzkLzQBcVNSbZ2bSX3qFAyyCx7DO%2Bv2HEKGDqwLHqCnoUGySvBiLLOjpTKzZizQ6XbOkfzBSioCPJ%2B6Ak6FXtEhs24tXv0QlUVPyzLR1Cx76Cm16VcuFI3%2Bs%2FLHdjfrd2lPKSpBG2OeU0S19ap%2FEXmYpLIPPjusWwJWdkUsmlV4imsdrprJ3d22eF6%2Fzd%2BmxQOCXwUOBF2FKslornT6fRPQFHFLgv6E98uqW12PlNTdRiRQldM%2FyAlD0aLclnzpUqNDRaieWOBAP2wcoh4%2FiQmsVW9A3NqUlY3OehrBKBluDXnY5%2BUpAlYG2TVuiJcax7y0CotBu%2FNKWtofIId4vroQe1jK%2BKoofISkB6VLoW07fFzKsOB1v7aNQwckiJz6rSvDLn0pLVHa4wOsAOLF4TGzj5JB8sUDcdYf0L5FldbKaWuTuoHUhUyEUAiLeWptNHMiGURciYVRUf1cTaYJ2wMOlvuM5zvwFtznhy4t0povdsp%2BqLeP9Me5oxkDtdx%2F2LCOqcdtf9c7d3c2BKxlZ3v5qI85v2X2DDJsI%2FVBjqkAXiiKU9K%2FHNzKZNHmCl89oBD8aEjwXsOJSm2aTuKXbyBBh%2FcrwBKXR1qDQrEjtAuVL%2BBgnIm1VJxF%2FUUoKev2p3V0t9S%2FcbLAovdwGJqx%2Btu8dEW6NKtCLAKZzaooCirFrgqODdvMfLK2DxM3U8TqrRBjrCeSWGxsF8bb%2B8i2YaaC%2Bvi6A2WBrXe%2Bj9bhIB2ubAeLBHwGaCIyM%2BoP%2BnpE0IJbFOy&X-Amz-Signature=114b4b54231889f6e12a25ecaed7d2e9fa9f7b73ab786aaeb042644159c828e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652YJF5ES%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCGUCW8LX4TpoQKbENnj8aOHK1XCWNy%2Fl%2Bnu5NwgYP0cQIhAOowVzliwxuV5wQzq0XWk9hMI%2BmFgqDPHeK6el8pFDryKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwsh7RYzOveqFPUPdIq3ANBLoRYU03u2Ti0oEkNTkNZKg%2BTJGSN2jVYI9tQwKk%2B4g0HNPjARLonFr8HypDKf2yeH04RH6ggTtXS08BimvGwVqlRQoQzkLzQBcVNSbZ2bSX3qFAyyCx7DO%2Bv2HEKGDqwLHqCnoUGySvBiLLOjpTKzZizQ6XbOkfzBSioCPJ%2B6Ak6FXtEhs24tXv0QlUVPyzLR1Cx76Cm16VcuFI3%2Bs%2FLHdjfrd2lPKSpBG2OeU0S19ap%2FEXmYpLIPPjusWwJWdkUsmlV4imsdrprJ3d22eF6%2Fzd%2BmxQOCXwUOBF2FKslornT6fRPQFHFLgv6E98uqW12PlNTdRiRQldM%2FyAlD0aLclnzpUqNDRaieWOBAP2wcoh4%2FiQmsVW9A3NqUlY3OehrBKBluDXnY5%2BUpAlYG2TVuiJcax7y0CotBu%2FNKWtofIId4vroQe1jK%2BKoofISkB6VLoW07fFzKsOB1v7aNQwckiJz6rSvDLn0pLVHa4wOsAOLF4TGzj5JB8sUDcdYf0L5FldbKaWuTuoHUhUyEUAiLeWptNHMiGURciYVRUf1cTaYJ2wMOlvuM5zvwFtznhy4t0povdsp%2BqLeP9Me5oxkDtdx%2F2LCOqcdtf9c7d3c2BKxlZ3v5qI85v2X2DDJsI%2FVBjqkAXiiKU9K%2FHNzKZNHmCl89oBD8aEjwXsOJSm2aTuKXbyBBh%2FcrwBKXR1qDQrEjtAuVL%2BBgnIm1VJxF%2FUUoKev2p3V0t9S%2FcbLAovdwGJqx%2Btu8dEW6NKtCLAKZzaooCirFrgqODdvMfLK2DxM3U8TqrRBjrCeSWGxsF8bb%2B8i2YaaC%2Bvi6A2WBrXe%2Bj9bhIB2ubAeLBHwGaCIyM%2BoP%2BnpE0IJbFOy&X-Amz-Signature=3fc2711467d2e143812eb2940e7f0b236db87208df49b27622e4aac3037d2e90&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652YJF5ES%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123659Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCGUCW8LX4TpoQKbENnj8aOHK1XCWNy%2Fl%2Bnu5NwgYP0cQIhAOowVzliwxuV5wQzq0XWk9hMI%2BmFgqDPHeK6el8pFDryKogECJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwsh7RYzOveqFPUPdIq3ANBLoRYU03u2Ti0oEkNTkNZKg%2BTJGSN2jVYI9tQwKk%2B4g0HNPjARLonFr8HypDKf2yeH04RH6ggTtXS08BimvGwVqlRQoQzkLzQBcVNSbZ2bSX3qFAyyCx7DO%2Bv2HEKGDqwLHqCnoUGySvBiLLOjpTKzZizQ6XbOkfzBSioCPJ%2B6Ak6FXtEhs24tXv0QlUVPyzLR1Cx76Cm16VcuFI3%2Bs%2FLHdjfrd2lPKSpBG2OeU0S19ap%2FEXmYpLIPPjusWwJWdkUsmlV4imsdrprJ3d22eF6%2Fzd%2BmxQOCXwUOBF2FKslornT6fRPQFHFLgv6E98uqW12PlNTdRiRQldM%2FyAlD0aLclnzpUqNDRaieWOBAP2wcoh4%2FiQmsVW9A3NqUlY3OehrBKBluDXnY5%2BUpAlYG2TVuiJcax7y0CotBu%2FNKWtofIId4vroQe1jK%2BKoofISkB6VLoW07fFzKsOB1v7aNQwckiJz6rSvDLn0pLVHa4wOsAOLF4TGzj5JB8sUDcdYf0L5FldbKaWuTuoHUhUyEUAiLeWptNHMiGURciYVRUf1cTaYJ2wMOlvuM5zvwFtznhy4t0povdsp%2BqLeP9Me5oxkDtdx%2F2LCOqcdtf9c7d3c2BKxlZ3v5qI85v2X2DDJsI%2FVBjqkAXiiKU9K%2FHNzKZNHmCl89oBD8aEjwXsOJSm2aTuKXbyBBh%2FcrwBKXR1qDQrEjtAuVL%2BBgnIm1VJxF%2FUUoKev2p3V0t9S%2FcbLAovdwGJqx%2Btu8dEW6NKtCLAKZzaooCirFrgqODdvMfLK2DxM3U8TqrRBjrCeSWGxsF8bb%2B8i2YaaC%2Bvi6A2WBrXe%2Bj9bhIB2ubAeLBHwGaCIyM%2BoP%2BnpE0IJbFOy&X-Amz-Signature=667dc7d858e1cafa94d5362b3556c40e3586393bf62c7a9b8d8306369abf8eb3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T45LTIUZ%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBLHDcNR53TP0x2SVCNumjjQb7pFAROgXbsoeGtSObnFAiEA%2FN2X2hvAcNLctISXhLIraGsdvTVDJFPkb%2BteUgft858qiAQInP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCNmWYAGKZEWxVrCfyrcA5nano%2FCdgKMyYIiYy1BDtVPZQZjHjjQvDRNDv45cW0GAQrk6qjqYohVZG003wTa6kzN4lbT3brM01aWuFw9WRxdPBodIgQk5Y%2FnbBz4sqfBOZk5AwH49EPXJl9agRrB0dJFw59MRU5AgqaGFc%2FfzpDTbBf0Ud06qP5HJFczhEhYv3EI4euQIgB7ZGuh8ugkjuUNV1K8gQBHc9h0pSzgKuwqS3Gl6zScDw7eFJcq%2BQSM8%2F3nP9pZR4gR2Vq%2BOu3gz%2F%2BcHCnlhNAFDxWF22FqTiW8%2FiOa3Vu3g3z29GNk08rK95mlCMU7XKWjF3d45jEKpjI4kbp3ks6MpBqPDHiJng%2BJEZJvrFHelmqGO6FZH2SXCNHwRyAXorB6cv6Fq6csIpzuVsVU4VJFJ%2FnnP31Or1WdfIGsSgq4v32LLgpqov4BbrQdiziUZsx8L5b%2B%2FncOc1NJiMfx0EV%2Ft9QgyEFNVGVODHSZXt1sFzGQI54JtgSInaOVPF8F6YFFOGBmVSpVhzn55mIJ2RE1Pg%2FfPqU%2BXuh5xvz6M7ZWJ3Tr75r1skRT3a3tyBN82JPlthov%2F8NYhQEfE%2FFeD5GGcWRq8LzbvyAbaEIpV8bu8Xi6d6rK6eYhiKUk2Tc6JCVpiCQvMOu7j9UGOqUBsG93JG0g%2Fo9QRa2YvbpvNaMIbgdmVo5ZCQozJXQcD66ln5BZATL2RHAnuV3NDgnkYFpQMI%2FXIcDASUv4bpiWo2S%2BvynIoErYiiupY2dIj2PWTGTw7Wk%2BffK5QQtdA1bIt1BOh3HkgoIrFj%2FJVZvfjWuSSiCytCLkEFaUJVXK97ogRK2wmMJ92bAgHYBi7s3%2BJWn%2FryhYoDYALVctJTYnJ0%2BnXne2&X-Amz-Signature=75f9c09aec01c14d28f31950b193453575b3bca909ec603f33ddd9fc6f648d2f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667RBNGVJ%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBoGY0NhAi1fdvEMUCQsmWmrYoXc1FnlvpZ%2BlMs2mpaxAiB7kQkEIhZ8WEUqJuvfiR9T0zNy04UHn2Jzob%2FMnsQ97CqIBAic%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMugHUa2cu7%2Bg5UTxCKtwDsYXWS4TIZ4bRfvjJ%2F8yhKsQRMzqufkzLlx%2BUyF1HQOPuh%2FPHJ7Y53qvdLmQcqi4dYE5iUoSP1p7Fij%2FrbYRGzKWLd1XZkTVKV%2FYMhqY%2BotHy5jBGlND8P80e7%2B21x8i83RPkfOU48vmQn29bUUjNw1vT315GkeT7kJSoIxE2KAHQlj123MBrH1hpDNN%2FO4t5GeA4m0aNxIhOO8b8SGpTqazG3C1cvZv8j1eynlc%2BefuuSs0t9j0QlIvqPiMykgq88tp1Qb1iTQTvmko%2FOlmqhhPB%2B8%2FLFUU17q81GmmNrLyuv%2FJbJnRX0rmnQ2sIGF6pWyiUfILQD4PQz0B52a0xLcy4IByIrwQwzWV2UtwrHCWJ%2B6DskE9iJYZiUhWPcnRmtpX%2BVYC85YGMOu8T0C1u6Uk1y5oLF6JxscHfJKZw1ypC5ULn5QYVpapkcOvJe00YFCiPeyPhBJMCCiWoJy%2BwjLfwzOINI4s3NdqQL%2FxBsQV0qqxe%2BrBUTr3i%2B4AP500s9jXQaiIwRpQnfVAriKU3%2BpznZ8eGoK09YJ1p3xL1swy4OdsV4tisH9WLcD6Syf29EtQs0jWBiAm%2FacfLmiTW2mzgrYcHaQYKsBzEvkU04AUU0pAQh1lTtCnRKq4wrbGP1QY6pgHuizFmBeNtCHgeDGZBwCQGWAcfyawHAjL6EQ62R%2BMNs1DFNzC5pzai2VYxGH0qTG%2BK%2FhBiYgkip80UHsbmJ7FMI0eDOkYaOoBhrvynh8EeY8jsr6kv9qdy9%2FvbHP754LDhuXWkgs7SW2HH65ksLDFRtlssbUhjH975SRQa5KOqMqysYoJLgQ8xJCD1CpECNwx5P5ojOiRm9R5dl%2BUuBQDHB%2FdYfnRJ&X-Amz-Signature=f661caf716f573ed31373a3a0f632b327009420f228f1d4ea6d7c5e8ea920bd9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667RBNGVJ%2F20260911%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260911T123700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBoGY0NhAi1fdvEMUCQsmWmrYoXc1FnlvpZ%2BlMs2mpaxAiB7kQkEIhZ8WEUqJuvfiR9T0zNy04UHn2Jzob%2FMnsQ97CqIBAic%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMugHUa2cu7%2Bg5UTxCKtwDsYXWS4TIZ4bRfvjJ%2F8yhKsQRMzqufkzLlx%2BUyF1HQOPuh%2FPHJ7Y53qvdLmQcqi4dYE5iUoSP1p7Fij%2FrbYRGzKWLd1XZkTVKV%2FYMhqY%2BotHy5jBGlND8P80e7%2B21x8i83RPkfOU48vmQn29bUUjNw1vT315GkeT7kJSoIxE2KAHQlj123MBrH1hpDNN%2FO4t5GeA4m0aNxIhOO8b8SGpTqazG3C1cvZv8j1eynlc%2BefuuSs0t9j0QlIvqPiMykgq88tp1Qb1iTQTvmko%2FOlmqhhPB%2B8%2FLFUU17q81GmmNrLyuv%2FJbJnRX0rmnQ2sIGF6pWyiUfILQD4PQz0B52a0xLcy4IByIrwQwzWV2UtwrHCWJ%2B6DskE9iJYZiUhWPcnRmtpX%2BVYC85YGMOu8T0C1u6Uk1y5oLF6JxscHfJKZw1ypC5ULn5QYVpapkcOvJe00YFCiPeyPhBJMCCiWoJy%2BwjLfwzOINI4s3NdqQL%2FxBsQV0qqxe%2BrBUTr3i%2B4AP500s9jXQaiIwRpQnfVAriKU3%2BpznZ8eGoK09YJ1p3xL1swy4OdsV4tisH9WLcD6Syf29EtQs0jWBiAm%2FacfLmiTW2mzgrYcHaQYKsBzEvkU04AUU0pAQh1lTtCnRKq4wrbGP1QY6pgHuizFmBeNtCHgeDGZBwCQGWAcfyawHAjL6EQ62R%2BMNs1DFNzC5pzai2VYxGH0qTG%2BK%2FhBiYgkip80UHsbmJ7FMI0eDOkYaOoBhrvynh8EeY8jsr6kv9qdy9%2FvbHP754LDhuXWkgs7SW2HH65ksLDFRtlssbUhjH975SRQa5KOqMqysYoJLgQ8xJCD1CpECNwx5P5ojOiRm9R5dl%2BUuBQDHB%2FdYfnRJ&X-Amz-Signature=c4aea09b93e560edf114d4486dec13c87d9b91799aa13238d7e466852b2a3bce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
