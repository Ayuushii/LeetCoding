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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664AO6ZQSD%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCsGH%2FsfNzS%2Fq8YriHOkZOZ%2BNqLPSNqkTd5YwEDqqpZaQIgH5PEAWxULaS9c9f2dsqrYjob1Xk93IPOetlJrmZRzxcqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBVSwXk0q2VNo5X%2B0yrcA7PLBQCL851y4UgAKKi5nK0m200Zreb2Oxi8i03H9%2FmIRuD%2Bo9EylZfE63t3icpprCEa3DfGV98eCB5%2BENs8W2ghq3Lj6oHetR0fwoSb1FwVjQwB%2F7GUcoNtczhpZDdKlzRCDNjrE8N3UpvYZdnN16F6ayPrrEXkOz%2Ff6To4Jr0VYgqGB4OquOQQ1WMfwf2Giezm88yHQkZjR%2BYiFIX0fN%2F%2BOFboAQCDL%2FGzgTHswQmXgUsoHhdj%2BytupnPqu%2FCiwzWrvsLV524lIjbcG1SMZIh3uzAunP7kyhx0e5Ou8iW7NsY7tsQye8JFZRAfjDVAVhyjBE53QMFEIoR8k5BZW3hPLlnBVKoIHUsXdLdPF5abbSeYkHi%2F9jWV0w8IABFZj4%2BuB772snAS4jPuStIrhydsLmyQ87N1nyja%2BOlGljYXIRpIrBlBjGoadEBdNAFi6pFebngDJgs5N3epBmf%2FrjPP6t0ZDWfQc7%2BmcXBoZqAeuq%2Bbig8jKlzATcL4aGsOSYCUK2MzlKyyNjDWjdNxU94ayDc14kp2U5PeczyoNn26yRzocAenWnT%2FD8jYQApFokf%2BYvELJiI0R0Hzf%2FHIuZDnpU1Z%2BkHHN1w9g3S2iGwdHjBBrtJVQw779SkPMPDC2dEGOqUBuUwedgjBGxkEnU52W97xljVlw6VBqwQl15gtSz1OJKpWmpZK%2FBxkNrXzN%2FNnYY%2BnPZaUDY9X7rTOrB6zCG537lb3feZA2OU36y%2FMkMnCpLbCYO5R2upTSXsHW2JOCacd7CCTmUycX9ZSnETYUUe%2BVuVGWElKqlwJh9mxzgp3fOoblI3op1MXORQKpDmshczCUS4Ey1kXdTLyo8sIJBBTkJHq0EFq&X-Amz-Signature=6a7a83aee29d6b6d69af21aa53a8f40216fdc7a05e74d07ebbb2b61f75e6547f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664AO6ZQSD%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCsGH%2FsfNzS%2Fq8YriHOkZOZ%2BNqLPSNqkTd5YwEDqqpZaQIgH5PEAWxULaS9c9f2dsqrYjob1Xk93IPOetlJrmZRzxcqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBVSwXk0q2VNo5X%2B0yrcA7PLBQCL851y4UgAKKi5nK0m200Zreb2Oxi8i03H9%2FmIRuD%2Bo9EylZfE63t3icpprCEa3DfGV98eCB5%2BENs8W2ghq3Lj6oHetR0fwoSb1FwVjQwB%2F7GUcoNtczhpZDdKlzRCDNjrE8N3UpvYZdnN16F6ayPrrEXkOz%2Ff6To4Jr0VYgqGB4OquOQQ1WMfwf2Giezm88yHQkZjR%2BYiFIX0fN%2F%2BOFboAQCDL%2FGzgTHswQmXgUsoHhdj%2BytupnPqu%2FCiwzWrvsLV524lIjbcG1SMZIh3uzAunP7kyhx0e5Ou8iW7NsY7tsQye8JFZRAfjDVAVhyjBE53QMFEIoR8k5BZW3hPLlnBVKoIHUsXdLdPF5abbSeYkHi%2F9jWV0w8IABFZj4%2BuB772snAS4jPuStIrhydsLmyQ87N1nyja%2BOlGljYXIRpIrBlBjGoadEBdNAFi6pFebngDJgs5N3epBmf%2FrjPP6t0ZDWfQc7%2BmcXBoZqAeuq%2Bbig8jKlzATcL4aGsOSYCUK2MzlKyyNjDWjdNxU94ayDc14kp2U5PeczyoNn26yRzocAenWnT%2FD8jYQApFokf%2BYvELJiI0R0Hzf%2FHIuZDnpU1Z%2BkHHN1w9g3S2iGwdHjBBrtJVQw779SkPMPDC2dEGOqUBuUwedgjBGxkEnU52W97xljVlw6VBqwQl15gtSz1OJKpWmpZK%2FBxkNrXzN%2FNnYY%2BnPZaUDY9X7rTOrB6zCG537lb3feZA2OU36y%2FMkMnCpLbCYO5R2upTSXsHW2JOCacd7CCTmUycX9ZSnETYUUe%2BVuVGWElKqlwJh9mxzgp3fOoblI3op1MXORQKpDmshczCUS4Ey1kXdTLyo8sIJBBTkJHq0EFq&X-Amz-Signature=ebd792b003f6c15ccd915eb5011aa07cb591fa5fafb72b8fdcbde141daea1613&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664AO6ZQSD%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCsGH%2FsfNzS%2Fq8YriHOkZOZ%2BNqLPSNqkTd5YwEDqqpZaQIgH5PEAWxULaS9c9f2dsqrYjob1Xk93IPOetlJrmZRzxcqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBVSwXk0q2VNo5X%2B0yrcA7PLBQCL851y4UgAKKi5nK0m200Zreb2Oxi8i03H9%2FmIRuD%2Bo9EylZfE63t3icpprCEa3DfGV98eCB5%2BENs8W2ghq3Lj6oHetR0fwoSb1FwVjQwB%2F7GUcoNtczhpZDdKlzRCDNjrE8N3UpvYZdnN16F6ayPrrEXkOz%2Ff6To4Jr0VYgqGB4OquOQQ1WMfwf2Giezm88yHQkZjR%2BYiFIX0fN%2F%2BOFboAQCDL%2FGzgTHswQmXgUsoHhdj%2BytupnPqu%2FCiwzWrvsLV524lIjbcG1SMZIh3uzAunP7kyhx0e5Ou8iW7NsY7tsQye8JFZRAfjDVAVhyjBE53QMFEIoR8k5BZW3hPLlnBVKoIHUsXdLdPF5abbSeYkHi%2F9jWV0w8IABFZj4%2BuB772snAS4jPuStIrhydsLmyQ87N1nyja%2BOlGljYXIRpIrBlBjGoadEBdNAFi6pFebngDJgs5N3epBmf%2FrjPP6t0ZDWfQc7%2BmcXBoZqAeuq%2Bbig8jKlzATcL4aGsOSYCUK2MzlKyyNjDWjdNxU94ayDc14kp2U5PeczyoNn26yRzocAenWnT%2FD8jYQApFokf%2BYvELJiI0R0Hzf%2FHIuZDnpU1Z%2BkHHN1w9g3S2iGwdHjBBrtJVQw779SkPMPDC2dEGOqUBuUwedgjBGxkEnU52W97xljVlw6VBqwQl15gtSz1OJKpWmpZK%2FBxkNrXzN%2FNnYY%2BnPZaUDY9X7rTOrB6zCG537lb3feZA2OU36y%2FMkMnCpLbCYO5R2upTSXsHW2JOCacd7CCTmUycX9ZSnETYUUe%2BVuVGWElKqlwJh9mxzgp3fOoblI3op1MXORQKpDmshczCUS4Ey1kXdTLyo8sIJBBTkJHq0EFq&X-Amz-Signature=2558438a0a18a890883a81db08fc219f2245fd768e727045ebc6e31de7b1688f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665C3MVDXI%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCFflczPVP1Nfy4KKnccFWd6H%2B5P58jNAgLOhRETTjTzQIgHelWFIjuK7mSj%2FCmBJRVVfGIX6VGccICoBrc2FYGcOwqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA9uQThS48J3lxPcOSrcA5KLtFMkoI2%2FuyDGd35SGDu9oAjdNvfWmyWhav9QsTuya8Ubkt8QBqSxIJIHtI74IiIQM5deB8gg54Q919dBFWxAu3SB29sxD0PSNqgkR6UQjnNmmZv%2BBoCwbLNbhOQk9RwHT1QqnztlmczJg6qe7ziLFGBTlrKvjpPZTw4V0bjdiV6r6kN7H4AKXC8rkxYWrioF6%2B%2F5KMUrTfUiaG5i%2FAfB689rccGfS2fRrlIHZ%2BKs7WCbFEM3ZZOO1%2BSyxawuKxj%2FCLKjPVWri%2BdGMsPiSwycdfywHjQbPn4o2H7aSrTbvPEE9X%2F6RF1oae32Kf7l8WnUHecv8L99POAst1BGpV001Bbjg4WLRF%2BBKkv0X6NskM3Dzhg65Y%2BV1rppKs7LotIrzuSTmoeKODM4PlNe32dZGbMaQN21VlqZ%2F1ZztJH02xOrxSm0qR9PovbKk1Oqi8X3AVDOxYINeQc8uMsAabNlfC4Mh21Iqq4nuPOYBgx5Ay4vrMgf2W0GAqZh1p4T8Za8feZSKaRNvt6Mc5pTDhL3SfOyRcCOtNjZRTXcdTANCub9ykfSBgKPJv9r7SFuKYK511IpYlW%2B5x%2BfqRnmresW1MMrbCnLCsE5lC3ZdhTuucrqfnyS90O9uhRHMIzD2dEGOqUB6wgIPy6ZvqMN6hgWBwWookJJX5IvCGDlqncbPqTFEH71TqbzIVJUL%2F7SpfmzMvSM73HgHrpLwaTKmEfA920XqT8K%2FaIsRYpZnEtgCnUeAnNSlsa2R53fsItDrpRwfMRcFrW4B1%2FUDqc45l9N4KWIpeZyOizoxbBaY8lYjd52F%2Fdn2DtGs%2FkziQR0eKuH0UYUxIpGyjZ4O0boEUD1baS0Ruw7RSZm&X-Amz-Signature=dfbf4e062133b68b31e1729e19aa5690e937440075f1ea6acc69873f38a97a42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665C3MVDXI%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCFflczPVP1Nfy4KKnccFWd6H%2B5P58jNAgLOhRETTjTzQIgHelWFIjuK7mSj%2FCmBJRVVfGIX6VGccICoBrc2FYGcOwqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA9uQThS48J3lxPcOSrcA5KLtFMkoI2%2FuyDGd35SGDu9oAjdNvfWmyWhav9QsTuya8Ubkt8QBqSxIJIHtI74IiIQM5deB8gg54Q919dBFWxAu3SB29sxD0PSNqgkR6UQjnNmmZv%2BBoCwbLNbhOQk9RwHT1QqnztlmczJg6qe7ziLFGBTlrKvjpPZTw4V0bjdiV6r6kN7H4AKXC8rkxYWrioF6%2B%2F5KMUrTfUiaG5i%2FAfB689rccGfS2fRrlIHZ%2BKs7WCbFEM3ZZOO1%2BSyxawuKxj%2FCLKjPVWri%2BdGMsPiSwycdfywHjQbPn4o2H7aSrTbvPEE9X%2F6RF1oae32Kf7l8WnUHecv8L99POAst1BGpV001Bbjg4WLRF%2BBKkv0X6NskM3Dzhg65Y%2BV1rppKs7LotIrzuSTmoeKODM4PlNe32dZGbMaQN21VlqZ%2F1ZztJH02xOrxSm0qR9PovbKk1Oqi8X3AVDOxYINeQc8uMsAabNlfC4Mh21Iqq4nuPOYBgx5Ay4vrMgf2W0GAqZh1p4T8Za8feZSKaRNvt6Mc5pTDhL3SfOyRcCOtNjZRTXcdTANCub9ykfSBgKPJv9r7SFuKYK511IpYlW%2B5x%2BfqRnmresW1MMrbCnLCsE5lC3ZdhTuucrqfnyS90O9uhRHMIzD2dEGOqUB6wgIPy6ZvqMN6hgWBwWookJJX5IvCGDlqncbPqTFEH71TqbzIVJUL%2F7SpfmzMvSM73HgHrpLwaTKmEfA920XqT8K%2FaIsRYpZnEtgCnUeAnNSlsa2R53fsItDrpRwfMRcFrW4B1%2FUDqc45l9N4KWIpeZyOizoxbBaY8lYjd52F%2Fdn2DtGs%2FkziQR0eKuH0UYUxIpGyjZ4O0boEUD1baS0Ruw7RSZm&X-Amz-Signature=e9b28301058bef41150226a95db4b8f0016d1d265f1488baf56f6169e111ae36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665C3MVDXI%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCFflczPVP1Nfy4KKnccFWd6H%2B5P58jNAgLOhRETTjTzQIgHelWFIjuK7mSj%2FCmBJRVVfGIX6VGccICoBrc2FYGcOwqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA9uQThS48J3lxPcOSrcA5KLtFMkoI2%2FuyDGd35SGDu9oAjdNvfWmyWhav9QsTuya8Ubkt8QBqSxIJIHtI74IiIQM5deB8gg54Q919dBFWxAu3SB29sxD0PSNqgkR6UQjnNmmZv%2BBoCwbLNbhOQk9RwHT1QqnztlmczJg6qe7ziLFGBTlrKvjpPZTw4V0bjdiV6r6kN7H4AKXC8rkxYWrioF6%2B%2F5KMUrTfUiaG5i%2FAfB689rccGfS2fRrlIHZ%2BKs7WCbFEM3ZZOO1%2BSyxawuKxj%2FCLKjPVWri%2BdGMsPiSwycdfywHjQbPn4o2H7aSrTbvPEE9X%2F6RF1oae32Kf7l8WnUHecv8L99POAst1BGpV001Bbjg4WLRF%2BBKkv0X6NskM3Dzhg65Y%2BV1rppKs7LotIrzuSTmoeKODM4PlNe32dZGbMaQN21VlqZ%2F1ZztJH02xOrxSm0qR9PovbKk1Oqi8X3AVDOxYINeQc8uMsAabNlfC4Mh21Iqq4nuPOYBgx5Ay4vrMgf2W0GAqZh1p4T8Za8feZSKaRNvt6Mc5pTDhL3SfOyRcCOtNjZRTXcdTANCub9ykfSBgKPJv9r7SFuKYK511IpYlW%2B5x%2BfqRnmresW1MMrbCnLCsE5lC3ZdhTuucrqfnyS90O9uhRHMIzD2dEGOqUB6wgIPy6ZvqMN6hgWBwWookJJX5IvCGDlqncbPqTFEH71TqbzIVJUL%2F7SpfmzMvSM73HgHrpLwaTKmEfA920XqT8K%2FaIsRYpZnEtgCnUeAnNSlsa2R53fsItDrpRwfMRcFrW4B1%2FUDqc45l9N4KWIpeZyOizoxbBaY8lYjd52F%2Fdn2DtGs%2FkziQR0eKuH0UYUxIpGyjZ4O0boEUD1baS0Ruw7RSZm&X-Amz-Signature=81a8d3e49db6a552f33288d1c3c261401122d4f433ea0cf50002f51a89bed96c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665C3MVDXI%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQCFflczPVP1Nfy4KKnccFWd6H%2B5P58jNAgLOhRETTjTzQIgHelWFIjuK7mSj%2FCmBJRVVfGIX6VGccICoBrc2FYGcOwqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA9uQThS48J3lxPcOSrcA5KLtFMkoI2%2FuyDGd35SGDu9oAjdNvfWmyWhav9QsTuya8Ubkt8QBqSxIJIHtI74IiIQM5deB8gg54Q919dBFWxAu3SB29sxD0PSNqgkR6UQjnNmmZv%2BBoCwbLNbhOQk9RwHT1QqnztlmczJg6qe7ziLFGBTlrKvjpPZTw4V0bjdiV6r6kN7H4AKXC8rkxYWrioF6%2B%2F5KMUrTfUiaG5i%2FAfB689rccGfS2fRrlIHZ%2BKs7WCbFEM3ZZOO1%2BSyxawuKxj%2FCLKjPVWri%2BdGMsPiSwycdfywHjQbPn4o2H7aSrTbvPEE9X%2F6RF1oae32Kf7l8WnUHecv8L99POAst1BGpV001Bbjg4WLRF%2BBKkv0X6NskM3Dzhg65Y%2BV1rppKs7LotIrzuSTmoeKODM4PlNe32dZGbMaQN21VlqZ%2F1ZztJH02xOrxSm0qR9PovbKk1Oqi8X3AVDOxYINeQc8uMsAabNlfC4Mh21Iqq4nuPOYBgx5Ay4vrMgf2W0GAqZh1p4T8Za8feZSKaRNvt6Mc5pTDhL3SfOyRcCOtNjZRTXcdTANCub9ykfSBgKPJv9r7SFuKYK511IpYlW%2B5x%2BfqRnmresW1MMrbCnLCsE5lC3ZdhTuucrqfnyS90O9uhRHMIzD2dEGOqUB6wgIPy6ZvqMN6hgWBwWookJJX5IvCGDlqncbPqTFEH71TqbzIVJUL%2F7SpfmzMvSM73HgHrpLwaTKmEfA920XqT8K%2FaIsRYpZnEtgCnUeAnNSlsa2R53fsItDrpRwfMRcFrW4B1%2FUDqc45l9N4KWIpeZyOizoxbBaY8lYjd52F%2Fdn2DtGs%2FkziQR0eKuH0UYUxIpGyjZ4O0boEUD1baS0Ruw7RSZm&X-Amz-Signature=9023cc986e43827d31b071cf64fe6ea6468d58f38cfc8befa17303f28826578f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XDALIWHU%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIDtuhIYK%2F4a4KtIIMkt%2FG1jKdLQN0RBajk8xhNmW0Ao7AiEA6JZRI24DJ879zEF14FqCTOpve%2Bp55U7MDSJh71VUepoqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOxnRaXDfdbPrk9m7ircA7B5gHEvBhmcX6C%2B6vsW2P8GKSwPrP3%2BpKlJYAatnQZyziixKZFmoMsay63Sy0eeWlQJpyztr85QXJRHyE%2B9rtxOF9kl%2FQCvKyw972lHNHhu3SloUoHTnY9FbvbDU17VdWmexRzKt9MMHbnWwjWy4y7VJJmL8YFSWHHidnDYiF5%2FdIQOGjgqKB3ZBagWh0G6lAk1fAOD%2Fe%2Bp74HbYgVcdHb3L7AH42saNbI5CBQjmB%2BUq653OnGQoo7FFGgOQ7evi18YxTDOwQJHnsSkswAtuBLF5nTc8mOhjLTUJgJt8wYKYfQEK90jMuknPfJcBNw%2B4By6P8kkXRg00QE6iMGted3IDRWtr8WakE8dTlPaXkNnE%2FzLpoLd5S3LrhPMpd%2B3Kh3CGEz361sPK05kjFJRHd5CQseV1HNbafhoAsVhxBJGxMh1OIw10NC5sDTol9kfs2JFPsKRz9m2ikDtQfnCcmYeZ5uA3eZ1qtH%2FUtAgpEzwLRpRPxWuS3dRagRmghKFIY7jGol6HJRlhB9L8XmvA6hZ%2FOV5bcQF8iy4ZNkxeX6p5gtnIXpBvVasUEGcRsCioom%2BRR7WIUZij3qbnAJH%2FusdOyYzNkh4CaRtJRWRcO96DAWAOCn2wACSJSf2MN7B2dEGOqUBsbwPMAT0Z%2FvhzTS%2Ftmv%2F3chfnXNuqSCt1M3ilYAaNLvFlESBCnJmSmAq8nvLuWDybPnAO3MdjVUufqqR4XVG6oRTDo9gJRwZ7l7UhWn6uoMcZnwjBEzv28OCtdu6lTePQVrqhpz4pO6MCKNR3jowFfi4YjnmlwHRLcts7AtM58hM5v5V9AwMwOubbYcefgfQ6q90f8akZT005h05wOletLyQKitz&X-Amz-Signature=def3dd17df4b6865fffbb43c5eb6456dd9a6ec2eaed7f8a2df0cd0461b006eeb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667Y2GAZY%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJIMEYCIQDGHv0Ipc3TPSRNc9a4XMcGmBa2W9mQJHwZx47p7FrTnAIhAKmT6UyPPsLwgNsctgZCfNiegvu5MrbHMpfuQONfxQvdKogECNP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igxp%2FukVkgjNfUQ5TJQq3APyz9gExx5J4BwUFLnaNk83uHvoU%2BxRop8EwjKvb%2BqirNUqsdVwp%2FM%2BiQVcdB04LmD6EpjRQWUpyejkOjCUBy9EWRkzZXbbjBKoNZptGafKYsXYNl2%2BLXknqVY2L%2Fw4h8qkhC1Xt1hzyaf0Pgkk0SfQrf%2FRe32m9%2F8WAbF%2BqOaNlPMG90y3gXsBqjrdrRGe%2Bsbo1lBLQCea6DlGsMhdRPjTAdWDQkozd0AnBrpTP58no19aZG4qrPQU%2BwUA8QsiTNyNDbcX1tJY77T3AOufT6eJaa42UBrhMEo0m8Xdy%2BLytIPFCoi%2Bm%2F1LqmikmqH364JPQNoLvH%2BEybzDRAOexVHHTqtB4sVRDbN43ktqVfTrzNUzPSK6q0UgmRF2el8aQmS5mtIIyGh%2F4DPyyfw56UyOTa2QToukBLJp8%2FPNQbVp4prUn46o3wh%2BDzp76Vgbe2Styx58sjMc9MeADD8%2BqvM5CarhUBrHDn%2B4SoKyWW9VeBuxWE%2BG%2FeKiHqDNA462rUw2girSF81vjO22%2FhTW7Ur7fvgKgygbnhSI00YQ7t5xYUZL%2Bxoy17lve9DarczFiJxBrqW7QtpDawWFwmFUAiyBQrIzNYcnHdExbInPEvHeDwC%2FarRFq2WgiYP9wjDuwdnRBjqkAb22%2BPxCunjo3s63BlvX8yQzTqxk7wkjtUog%2F6vBXWUL2OILS6bttBtyzgUM4iu6RVeg0jp3PW6vdHlC6Lz130AkqoiYvWNwft%2BqyPS6WI4PE3Hh6oprcUvGwxmrrska%2Bo%2Bvf8J1KwmKx4wH1HXDPoEqPpk673ofz5EVQ9KAJpSsWl8nrMPAVQa7hm4tEfyBtRjtd2h6Vw9gl11Af%2F%2FRJvtdJ3IQ&X-Amz-Signature=6e1b4fdeefc6bbe393d441be5b2f9ceb05be1103e49fb2fda91a63f61a2bf438&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667Y2GAZY%2F20260620%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260620T103136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJIMEYCIQDGHv0Ipc3TPSRNc9a4XMcGmBa2W9mQJHwZx47p7FrTnAIhAKmT6UyPPsLwgNsctgZCfNiegvu5MrbHMpfuQONfxQvdKogECNP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igxp%2FukVkgjNfUQ5TJQq3APyz9gExx5J4BwUFLnaNk83uHvoU%2BxRop8EwjKvb%2BqirNUqsdVwp%2FM%2BiQVcdB04LmD6EpjRQWUpyejkOjCUBy9EWRkzZXbbjBKoNZptGafKYsXYNl2%2BLXknqVY2L%2Fw4h8qkhC1Xt1hzyaf0Pgkk0SfQrf%2FRe32m9%2F8WAbF%2BqOaNlPMG90y3gXsBqjrdrRGe%2Bsbo1lBLQCea6DlGsMhdRPjTAdWDQkozd0AnBrpTP58no19aZG4qrPQU%2BwUA8QsiTNyNDbcX1tJY77T3AOufT6eJaa42UBrhMEo0m8Xdy%2BLytIPFCoi%2Bm%2F1LqmikmqH364JPQNoLvH%2BEybzDRAOexVHHTqtB4sVRDbN43ktqVfTrzNUzPSK6q0UgmRF2el8aQmS5mtIIyGh%2F4DPyyfw56UyOTa2QToukBLJp8%2FPNQbVp4prUn46o3wh%2BDzp76Vgbe2Styx58sjMc9MeADD8%2BqvM5CarhUBrHDn%2B4SoKyWW9VeBuxWE%2BG%2FeKiHqDNA462rUw2girSF81vjO22%2FhTW7Ur7fvgKgygbnhSI00YQ7t5xYUZL%2Bxoy17lve9DarczFiJxBrqW7QtpDawWFwmFUAiyBQrIzNYcnHdExbInPEvHeDwC%2FarRFq2WgiYP9wjDuwdnRBjqkAb22%2BPxCunjo3s63BlvX8yQzTqxk7wkjtUog%2F6vBXWUL2OILS6bttBtyzgUM4iu6RVeg0jp3PW6vdHlC6Lz130AkqoiYvWNwft%2BqyPS6WI4PE3Hh6oprcUvGwxmrrska%2Bo%2Bvf8J1KwmKx4wH1HXDPoEqPpk673ofz5EVQ9KAJpSsWl8nrMPAVQa7hm4tEfyBtRjtd2h6Vw9gl11Af%2F%2FRJvtdJ3IQ&X-Amz-Signature=cd786e2c54cbe266c4f0b41aaef747900820c9eaa63688b390f9cdf0192dfce5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
