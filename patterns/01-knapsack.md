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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W7JNUBV4%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJGMEQCIAkSTwgy5JssEXtsYNN7EHYibmOJIXYWwabTByDNHx0aAiAGYiCR2Y7esYvXax3hQ9HBcBh3s5vXPn7UY2LJNpIGUir%2FAwgGEAAaDDYzNzQyMzE4MzgwNSIMxUtNlAWw132k%2FwFMKtwDj0HR2bWFdBcN%2BVjbCtc1%2BAsZTEHPDXaa00FlAfG0Cd2eMp0CwpnVGSe06GK%2FYWVsEsAXRFver3jo7lGdlEhKaDBY21hHd35jjKXr%2B2aITfBkJMLs%2F5wJh23QE3Lcm4zxZb6BHx6sEYTbC%2BY%2FTVpS9VQ%2FfQkwgBqMluAjucOQp3y7BAdkvBVGhXiHVU9IpeiOcguUOrLc8u5yjg%2FoJskV9jzPU6QvJuw1tpzctYx%2Ff6I0nn4mOB5FzguAe2rVwVeTQO1lyDNuQDmlGv8Qskp%2Bsjdz%2BoCDGhXCVX56MewL%2B0NZoYsFsNsXq%2BpDDfCSt0SubShOIE2JUxTrq0Cj31QY%2Bqx42N%2FjQAN76C%2Bj4S7R%2BN3eC3XJy3ZJ%2BnCjkTF9Lzvhc68HHyBwTCCE2c%2Bm8K5h2hHrBBsUdChRCE2tLy%2BNdJuuvnNDKF4rX0Y1lFp2Z42ge6fc%2FkQt%2FHmahlHfM0KdphNhD%2F9d9Rem3gpFDSdPOZXohdpGkid%2FkdPgcTCOG77%2F071z36rWMncyK4iN0t60e6ss6KXZ2XQCXXUF1PCZuqK92oRO1FIdLk8bnIdJWVfy4Qz%2ByYftS3PlMN%2F%2FxwQrBU6iOWkJebOsL0dZD3t%2FKQGERw%2FpHQK%2B4CXWi2QwhOCH1wY6pgHAL8oWYnnGHcgTRyaIj1NQhcAXVEfDn2do7lhSOnX%2FysQJJgw5QLqN8jLojCp1XExIC4NQyjQLPsOrm9te01ibvI93VtZspd9wXyIP1vuNxTQpOsiZNZXsqQI0UbiI41VEXwwPdJbJ5hAKBK3BBDYQV%2BsEvqhA81H4Vr2D7DgSg4q%2F5X98XLJXzA5X4FhPe4MXi0Elwew4XbFx2Vo%2BmMQMmarXD0mz&X-Amz-Signature=e3184ce0a018d2cb7dbbec713d96f31509eb6f62edb6cd4d140e78b1f757739d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W7JNUBV4%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJGMEQCIAkSTwgy5JssEXtsYNN7EHYibmOJIXYWwabTByDNHx0aAiAGYiCR2Y7esYvXax3hQ9HBcBh3s5vXPn7UY2LJNpIGUir%2FAwgGEAAaDDYzNzQyMzE4MzgwNSIMxUtNlAWw132k%2FwFMKtwDj0HR2bWFdBcN%2BVjbCtc1%2BAsZTEHPDXaa00FlAfG0Cd2eMp0CwpnVGSe06GK%2FYWVsEsAXRFver3jo7lGdlEhKaDBY21hHd35jjKXr%2B2aITfBkJMLs%2F5wJh23QE3Lcm4zxZb6BHx6sEYTbC%2BY%2FTVpS9VQ%2FfQkwgBqMluAjucOQp3y7BAdkvBVGhXiHVU9IpeiOcguUOrLc8u5yjg%2FoJskV9jzPU6QvJuw1tpzctYx%2Ff6I0nn4mOB5FzguAe2rVwVeTQO1lyDNuQDmlGv8Qskp%2Bsjdz%2BoCDGhXCVX56MewL%2B0NZoYsFsNsXq%2BpDDfCSt0SubShOIE2JUxTrq0Cj31QY%2Bqx42N%2FjQAN76C%2Bj4S7R%2BN3eC3XJy3ZJ%2BnCjkTF9Lzvhc68HHyBwTCCE2c%2Bm8K5h2hHrBBsUdChRCE2tLy%2BNdJuuvnNDKF4rX0Y1lFp2Z42ge6fc%2FkQt%2FHmahlHfM0KdphNhD%2F9d9Rem3gpFDSdPOZXohdpGkid%2FkdPgcTCOG77%2F071z36rWMncyK4iN0t60e6ss6KXZ2XQCXXUF1PCZuqK92oRO1FIdLk8bnIdJWVfy4Qz%2ByYftS3PlMN%2F%2FxwQrBU6iOWkJebOsL0dZD3t%2FKQGERw%2FpHQK%2B4CXWi2QwhOCH1wY6pgHAL8oWYnnGHcgTRyaIj1NQhcAXVEfDn2do7lhSOnX%2FysQJJgw5QLqN8jLojCp1XExIC4NQyjQLPsOrm9te01ibvI93VtZspd9wXyIP1vuNxTQpOsiZNZXsqQI0UbiI41VEXwwPdJbJ5hAKBK3BBDYQV%2BsEvqhA81H4Vr2D7DgSg4q%2F5X98XLJXzA5X4FhPe4MXi0Elwew4XbFx2Vo%2BmMQMmarXD0mz&X-Amz-Signature=5c70876c2b32b2fd4c99a2f9569aea6d17fd617c36271ea5eee3e83aa8db49ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W7JNUBV4%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJGMEQCIAkSTwgy5JssEXtsYNN7EHYibmOJIXYWwabTByDNHx0aAiAGYiCR2Y7esYvXax3hQ9HBcBh3s5vXPn7UY2LJNpIGUir%2FAwgGEAAaDDYzNzQyMzE4MzgwNSIMxUtNlAWw132k%2FwFMKtwDj0HR2bWFdBcN%2BVjbCtc1%2BAsZTEHPDXaa00FlAfG0Cd2eMp0CwpnVGSe06GK%2FYWVsEsAXRFver3jo7lGdlEhKaDBY21hHd35jjKXr%2B2aITfBkJMLs%2F5wJh23QE3Lcm4zxZb6BHx6sEYTbC%2BY%2FTVpS9VQ%2FfQkwgBqMluAjucOQp3y7BAdkvBVGhXiHVU9IpeiOcguUOrLc8u5yjg%2FoJskV9jzPU6QvJuw1tpzctYx%2Ff6I0nn4mOB5FzguAe2rVwVeTQO1lyDNuQDmlGv8Qskp%2Bsjdz%2BoCDGhXCVX56MewL%2B0NZoYsFsNsXq%2BpDDfCSt0SubShOIE2JUxTrq0Cj31QY%2Bqx42N%2FjQAN76C%2Bj4S7R%2BN3eC3XJy3ZJ%2BnCjkTF9Lzvhc68HHyBwTCCE2c%2Bm8K5h2hHrBBsUdChRCE2tLy%2BNdJuuvnNDKF4rX0Y1lFp2Z42ge6fc%2FkQt%2FHmahlHfM0KdphNhD%2F9d9Rem3gpFDSdPOZXohdpGkid%2FkdPgcTCOG77%2F071z36rWMncyK4iN0t60e6ss6KXZ2XQCXXUF1PCZuqK92oRO1FIdLk8bnIdJWVfy4Qz%2ByYftS3PlMN%2F%2FxwQrBU6iOWkJebOsL0dZD3t%2FKQGERw%2FpHQK%2B4CXWi2QwhOCH1wY6pgHAL8oWYnnGHcgTRyaIj1NQhcAXVEfDn2do7lhSOnX%2FysQJJgw5QLqN8jLojCp1XExIC4NQyjQLPsOrm9te01ibvI93VtZspd9wXyIP1vuNxTQpOsiZNZXsqQI0UbiI41VEXwwPdJbJ5hAKBK3BBDYQV%2BsEvqhA81H4Vr2D7DgSg4q%2F5X98XLJXzA5X4FhPe4MXi0Elwew4XbFx2Vo%2BmMQMmarXD0mz&X-Amz-Signature=fb26668e1a456870b05c74be1d6e19bb063aaad3e51a57da4d7976f5766987e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SU7DKASG%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQCu3jEfm4nRVe7bC0KFAvGYKml8OqOYxvneGGd4Z25PGQIgaswI4gzGbOBtKhTQpjKd4EY2cjRoBwYWlhBgTNIxsvQq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDBNjiGCNmf7TgwcnXCrcAxDRmiAdlXQ8%2BQWGVg5KGj4DkS9xPaJK2dYGZDVQKkqPfIm3xAVyc2iAHFcfDxogbUdR%2BA0n%2F%2BTivJ3b6k366WrK4cpufRxzMjl0Vs84JyH8a1Ly59Kiin74YAVg9UrKh9ZqaSbLcBRdp725d%2BmMGENYMYhTBzq1JvmTRX7L4JsgVdcaF1qzAaN0nFmRIhWEDNLZTKytV%2BsgqX7Icpak5kqSArTdDcz8v094V3cR1Iil2FSAFYS2jK1wTHaChaq5g4nHqhb%2FAwkMDhTFHVmRpwXqi43RhkeI%2BwtxV2yhv3iVuAbt01%2F%2FZ1OblVZMSdwEpsdBpmxUEzdeqOzOj4yjb2sS3ioEbaAqPTEFYUzN%2B43n6LwZHL2oMP%2Fp9A5MgHQwllM%2BFNIxH6t8HMD2%2FRqMFZE%2BfGtefmWM1HJCgpldqcWxlt0ZOOYd5jNtmQYP1qLKdNeEx9nqz1W9RjqHi%2FeqI5tgQ5uo4W4%2BF8Y68GaTQWwCR9Z6Z%2F%2FrY3uSwP9TjjDr6sfjYLIwnQmdP9Ajncug90EEmqej9x2RP00jcU9pyiZPvxfAJTUbQV%2FPWvVCYDjDHp0z4ufEJL4FcRbti8wxWGBJtssFU0bzKbJFd1v1TOgGkTHm%2B9yHBWFEi5wtMLvgh9cGOqUBwpdW2AsJ%2FA%2FtCMxAu2h2spyH9HpNT85b9D3HJ0nBbtsn4EgE6qXDAgbYLQFpyKkXizZv2nsWFF8GWrCUfPY%2BiKSYxn2svedCX6RjLulLuRt0eARJ0zozb3ehfzo%2B44tMfoPTPU4PqQjJQ1MDORSkjX226w%2FhjfJ3s8H8i7WOVWWz90QgxblzAicEU5HsINe1wKpMJwM8hp%2F%2F4vpVJwot29YmTdJw&X-Amz-Signature=3dea50fe7474aea80ff515b81659e5b65cd2f01000268e51cdde5bbaf0dff023&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SU7DKASG%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQCu3jEfm4nRVe7bC0KFAvGYKml8OqOYxvneGGd4Z25PGQIgaswI4gzGbOBtKhTQpjKd4EY2cjRoBwYWlhBgTNIxsvQq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDBNjiGCNmf7TgwcnXCrcAxDRmiAdlXQ8%2BQWGVg5KGj4DkS9xPaJK2dYGZDVQKkqPfIm3xAVyc2iAHFcfDxogbUdR%2BA0n%2F%2BTivJ3b6k366WrK4cpufRxzMjl0Vs84JyH8a1Ly59Kiin74YAVg9UrKh9ZqaSbLcBRdp725d%2BmMGENYMYhTBzq1JvmTRX7L4JsgVdcaF1qzAaN0nFmRIhWEDNLZTKytV%2BsgqX7Icpak5kqSArTdDcz8v094V3cR1Iil2FSAFYS2jK1wTHaChaq5g4nHqhb%2FAwkMDhTFHVmRpwXqi43RhkeI%2BwtxV2yhv3iVuAbt01%2F%2FZ1OblVZMSdwEpsdBpmxUEzdeqOzOj4yjb2sS3ioEbaAqPTEFYUzN%2B43n6LwZHL2oMP%2Fp9A5MgHQwllM%2BFNIxH6t8HMD2%2FRqMFZE%2BfGtefmWM1HJCgpldqcWxlt0ZOOYd5jNtmQYP1qLKdNeEx9nqz1W9RjqHi%2FeqI5tgQ5uo4W4%2BF8Y68GaTQWwCR9Z6Z%2F%2FrY3uSwP9TjjDr6sfjYLIwnQmdP9Ajncug90EEmqej9x2RP00jcU9pyiZPvxfAJTUbQV%2FPWvVCYDjDHp0z4ufEJL4FcRbti8wxWGBJtssFU0bzKbJFd1v1TOgGkTHm%2B9yHBWFEi5wtMLvgh9cGOqUBwpdW2AsJ%2FA%2FtCMxAu2h2spyH9HpNT85b9D3HJ0nBbtsn4EgE6qXDAgbYLQFpyKkXizZv2nsWFF8GWrCUfPY%2BiKSYxn2svedCX6RjLulLuRt0eARJ0zozb3ehfzo%2B44tMfoPTPU4PqQjJQ1MDORSkjX226w%2FhjfJ3s8H8i7WOVWWz90QgxblzAicEU5HsINe1wKpMJwM8hp%2F%2F4vpVJwot29YmTdJw&X-Amz-Signature=b5189a9cda6836d5248eb6e2276494efe00832554e96777fbfc629cb401ed60c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SU7DKASG%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQCu3jEfm4nRVe7bC0KFAvGYKml8OqOYxvneGGd4Z25PGQIgaswI4gzGbOBtKhTQpjKd4EY2cjRoBwYWlhBgTNIxsvQq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDBNjiGCNmf7TgwcnXCrcAxDRmiAdlXQ8%2BQWGVg5KGj4DkS9xPaJK2dYGZDVQKkqPfIm3xAVyc2iAHFcfDxogbUdR%2BA0n%2F%2BTivJ3b6k366WrK4cpufRxzMjl0Vs84JyH8a1Ly59Kiin74YAVg9UrKh9ZqaSbLcBRdp725d%2BmMGENYMYhTBzq1JvmTRX7L4JsgVdcaF1qzAaN0nFmRIhWEDNLZTKytV%2BsgqX7Icpak5kqSArTdDcz8v094V3cR1Iil2FSAFYS2jK1wTHaChaq5g4nHqhb%2FAwkMDhTFHVmRpwXqi43RhkeI%2BwtxV2yhv3iVuAbt01%2F%2FZ1OblVZMSdwEpsdBpmxUEzdeqOzOj4yjb2sS3ioEbaAqPTEFYUzN%2B43n6LwZHL2oMP%2Fp9A5MgHQwllM%2BFNIxH6t8HMD2%2FRqMFZE%2BfGtefmWM1HJCgpldqcWxlt0ZOOYd5jNtmQYP1qLKdNeEx9nqz1W9RjqHi%2FeqI5tgQ5uo4W4%2BF8Y68GaTQWwCR9Z6Z%2F%2FrY3uSwP9TjjDr6sfjYLIwnQmdP9Ajncug90EEmqej9x2RP00jcU9pyiZPvxfAJTUbQV%2FPWvVCYDjDHp0z4ufEJL4FcRbti8wxWGBJtssFU0bzKbJFd1v1TOgGkTHm%2B9yHBWFEi5wtMLvgh9cGOqUBwpdW2AsJ%2FA%2FtCMxAu2h2spyH9HpNT85b9D3HJ0nBbtsn4EgE6qXDAgbYLQFpyKkXizZv2nsWFF8GWrCUfPY%2BiKSYxn2svedCX6RjLulLuRt0eARJ0zozb3ehfzo%2B44tMfoPTPU4PqQjJQ1MDORSkjX226w%2FhjfJ3s8H8i7WOVWWz90QgxblzAicEU5HsINe1wKpMJwM8hp%2F%2F4vpVJwot29YmTdJw&X-Amz-Signature=bbeacc51da8c97275a70ea93fbb5b6e7f02c25eff30da4892c2b652fead32d2c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SU7DKASG%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQCu3jEfm4nRVe7bC0KFAvGYKml8OqOYxvneGGd4Z25PGQIgaswI4gzGbOBtKhTQpjKd4EY2cjRoBwYWlhBgTNIxsvQq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDBNjiGCNmf7TgwcnXCrcAxDRmiAdlXQ8%2BQWGVg5KGj4DkS9xPaJK2dYGZDVQKkqPfIm3xAVyc2iAHFcfDxogbUdR%2BA0n%2F%2BTivJ3b6k366WrK4cpufRxzMjl0Vs84JyH8a1Ly59Kiin74YAVg9UrKh9ZqaSbLcBRdp725d%2BmMGENYMYhTBzq1JvmTRX7L4JsgVdcaF1qzAaN0nFmRIhWEDNLZTKytV%2BsgqX7Icpak5kqSArTdDcz8v094V3cR1Iil2FSAFYS2jK1wTHaChaq5g4nHqhb%2FAwkMDhTFHVmRpwXqi43RhkeI%2BwtxV2yhv3iVuAbt01%2F%2FZ1OblVZMSdwEpsdBpmxUEzdeqOzOj4yjb2sS3ioEbaAqPTEFYUzN%2B43n6LwZHL2oMP%2Fp9A5MgHQwllM%2BFNIxH6t8HMD2%2FRqMFZE%2BfGtefmWM1HJCgpldqcWxlt0ZOOYd5jNtmQYP1qLKdNeEx9nqz1W9RjqHi%2FeqI5tgQ5uo4W4%2BF8Y68GaTQWwCR9Z6Z%2F%2FrY3uSwP9TjjDr6sfjYLIwnQmdP9Ajncug90EEmqej9x2RP00jcU9pyiZPvxfAJTUbQV%2FPWvVCYDjDHp0z4ufEJL4FcRbti8wxWGBJtssFU0bzKbJFd1v1TOgGkTHm%2B9yHBWFEi5wtMLvgh9cGOqUBwpdW2AsJ%2FA%2FtCMxAu2h2spyH9HpNT85b9D3HJ0nBbtsn4EgE6qXDAgbYLQFpyKkXizZv2nsWFF8GWrCUfPY%2BiKSYxn2svedCX6RjLulLuRt0eARJ0zozb3ehfzo%2B44tMfoPTPU4PqQjJQ1MDORSkjX226w%2FhjfJ3s8H8i7WOVWWz90QgxblzAicEU5HsINe1wKpMJwM8hp%2F%2F4vpVJwot29YmTdJw&X-Amz-Signature=8bc6fe27395ba4ab35abef8a36c0cb6a192fd02cfa5b84de462eb6691caa0a6e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WHXMYQTI%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIG2U0XbMf7k0Zu6rllNeBxwdqzj%2FpmS9y6q4F6ESSv6WAiEAogQhDuNIZm6Z6xof9gjdvibtFeJA51WGnOmGjqbOR68q%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDLzV05Ucm1DV6VzoSircA99yr45NjjyuHNT7%2BfE7obVz4BWodvusTDSWPOSbCeBgt4DEeuVoiRO6JYVjiEoKemQl43nQPi1dF9%2BeVzPMzOVypk90caA6gmRDJocTBW0j6sVcHWRA6znmy5Oo1rD8yDxSlgV%2BeGg7RgSamYNfh7GZW5kZhfjBUIrs2X4JFzP%2FJMoj%2FjRGAIkLSbT4H9ujZdkZyXz2C6XLpT2UX1Qk3k3V%2FniowesoFGxxjMlH5K2TLPJ1ghDvJInPfFn2oxJkMbqutEFgs7rdEA1hQ4ukjmA7Ui1m0mD%2F7T4b4alnS9Tf2g6z52bLXAJ0yEY91vz4onO4UtHLrPZhM4SVUxYXxBV0FFKLQ3imiILYVecCamJmrR6GZwB526m3RdqaAQDggwIzUc7J2FtbII3UGAGXw%2F9sZX0MgdMdL%2FBQcRpCtk7GcwsNaubvQZS2bp6P6o9ScNmfXWej9wq04XOD5aKRT6jr7kHdrVhhYS9xPqjerpc%2Fs82stoYzh773ZNzKsANXdB%2BbF7fEqURJ9MA0V%2BlzeDCn8tOvHIM8np%2BUQMxzUgL%2F%2B1E5wO9gsrQkO9i3DzvLa4bnG8SrJ6%2FSBAfwaKbl6gaS0%2FOTMjXfBI7JQcdYzKEVsXskPrYWNrxhGy%2FmMN3ih9cGOqUBDjTVp5V6lJS9CDOZp7jPTSMW06jrOkMHzgFDHE4HucKwIX0e68sQ%2Fmkrgdt8qtjcP%2FRQ2rT0bciRUS%2Fo71oJDTlqy3s2fi3k4EtM%2BQ9sD9SjCDHwLwMQLvpfFG8OOynF9AnXH8D8HEpEog35mThDlow7DRYPBb1brdRkKSyOzo3ECfeGwu3zO8DfONiSWV1wsbadTrbgq8WpDosCkjZ39QyoZG7M&X-Amz-Signature=5245bb14827e6adc820659bd692952eb3ef69653befaf161d63d84d1787908fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VKFXK32Q%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQDIjK%2Fia2K63uEaXB62AE4MXujTBFdYypzpWWuEtXdxgwIgWv7pcSBQFUCevugIb8ZeleC%2Bm7QIaSppALG8i5Aa36oq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDJ39U5O47B4x3brx0ircAytn9bZy7UKC6YrqiD5r6iwp%2Bvis6H%2B71HT%2BtuRjXjv8FM2AbUpddcoHOzmm9UjnZG0tQZe5ewGuSCDZz%2B6%2BSJl6fGCYlwKHqt9gvsQiykJZhxcTZp0DXg0jiLX5VWQlcYZO3WxuuXafcMlpH03ZKFrQcFHNMqWgrh3G7Nfk7lvuX%2BxvCLSC0YzEUYDDCJHAvh1i2VoGZfuf%2FaSRWiZe5lW81JxkMWsdNFyRjg6cAwAqNH1YBZBzPKAkA0Ln2WPgJTkpwUeyEcyIgJFY4uZL0yp2kixpYP927OfqNUb88F%2FymFovSsndO%2BMB9A26Td9B6lrqY3%2BEacVuh%2Bvax1sxwpo6F8y1L7Po0bASAMjHFMku4PN2X4fiV1UG%2FbLWxzSBawrF9mmNVJsJNS6TVGsTLJOmCKGNo98cqhTAhhfaa50PrUOci3D8nGUr2zln86Tm%2FUVYiC4TIDvUjpfSvkWHQOzlY560QgrjvDpdTbynxh0np9HZxCRiYU9LO%2Bfkdn28YaRJwtJA0msqzZWCuX8S21RyYK4WmCbqiR%2FbZvJkJxlQp7BcDWwoItLqRcTu2J9B4I7jWOV6EWcxCxDnb%2FFk1f1BkCshHQSk1l%2BRNSbRkEOfLock2xlsQ5oIRT%2B6MJrih9cGOqUBLx0t%2BO6S0V1EenKLd6O8k6rPEhn%2BGrzpzNGTT2aU22%2Fbvoa11lRd6dJ2UQh%2F3Hz1r7aJrZ6MQze7zGz%2BNsSrSpW1fvlg%2BOCpCLcO5pObZEODUws0BC1Ix6wfns%2BmyInpCaQldm1J4FMT22vBDD%2FeA0oKquGHeWSOQ450nfzymwiqpUjlTaaIu4x5mQ5Nb5gKiDYY%2FBfFIZhZ%2FK8hg%2F5EcSmDQtM3&X-Amz-Signature=ae5e9a30a7cbbe611780ff48f38db7a78acc1954f798d9a1e1d5bbd7e4624285&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VKFXK32Q%2F20261028%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261028T145137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjED0aCXVzLXdlc3QtMiJHMEUCIQDIjK%2Fia2K63uEaXB62AE4MXujTBFdYypzpWWuEtXdxgwIgWv7pcSBQFUCevugIb8ZeleC%2Bm7QIaSppALG8i5Aa36oq%2FwMIBRAAGgw2Mzc0MjMxODM4MDUiDJ39U5O47B4x3brx0ircAytn9bZy7UKC6YrqiD5r6iwp%2Bvis6H%2B71HT%2BtuRjXjv8FM2AbUpddcoHOzmm9UjnZG0tQZe5ewGuSCDZz%2B6%2BSJl6fGCYlwKHqt9gvsQiykJZhxcTZp0DXg0jiLX5VWQlcYZO3WxuuXafcMlpH03ZKFrQcFHNMqWgrh3G7Nfk7lvuX%2BxvCLSC0YzEUYDDCJHAvh1i2VoGZfuf%2FaSRWiZe5lW81JxkMWsdNFyRjg6cAwAqNH1YBZBzPKAkA0Ln2WPgJTkpwUeyEcyIgJFY4uZL0yp2kixpYP927OfqNUb88F%2FymFovSsndO%2BMB9A26Td9B6lrqY3%2BEacVuh%2Bvax1sxwpo6F8y1L7Po0bASAMjHFMku4PN2X4fiV1UG%2FbLWxzSBawrF9mmNVJsJNS6TVGsTLJOmCKGNo98cqhTAhhfaa50PrUOci3D8nGUr2zln86Tm%2FUVYiC4TIDvUjpfSvkWHQOzlY560QgrjvDpdTbynxh0np9HZxCRiYU9LO%2Bfkdn28YaRJwtJA0msqzZWCuX8S21RyYK4WmCbqiR%2FbZvJkJxlQp7BcDWwoItLqRcTu2J9B4I7jWOV6EWcxCxDnb%2FFk1f1BkCshHQSk1l%2BRNSbRkEOfLock2xlsQ5oIRT%2B6MJrih9cGOqUBLx0t%2BO6S0V1EenKLd6O8k6rPEhn%2BGrzpzNGTT2aU22%2Fbvoa11lRd6dJ2UQh%2F3Hz1r7aJrZ6MQze7zGz%2BNsSrSpW1fvlg%2BOCpCLcO5pObZEODUws0BC1Ix6wfns%2BmyInpCaQldm1J4FMT22vBDD%2FeA0oKquGHeWSOQ450nfzymwiqpUjlTaaIu4x5mQ5Nb5gKiDYY%2FBfFIZhZ%2FK8hg%2F5EcSmDQtM3&X-Amz-Signature=543782c2f21e41312c908da34908e7b01b8bf9eba8766c4fea93fab0ba4c42b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
