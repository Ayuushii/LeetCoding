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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q4P4BO6S%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDESs2V0eAG%2BQq1zzIDpK89nKOn7FcW7KCEXtdfyjxwvAiEAiGYB4suf%2FXXmEL1VWeIIIsJ7z9uqyxZZkbnk34gFx5cqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9Ex8Yelij0wxBbzCrcA2LNP2rJwqiuJGY1SfkGcAPrhO3LC3zFf2ilvp8Zqb%2Brc2jiobAtZ6%2FehUA0E7i2waVG5NiPLVdCX%2BPy6SKUGlhcgZsf%2Fih5HB6X0p%2FI2XlmFJbp1Lykovt21wYtSHpmt9RUBgpGPS%2Bel4y2Ru3vsoP9%2Buu10h78yfzqDiwZQOwABNx4MSocCDCFZ5O2UbpP0J1oGsOIGNvNAYhnqxlQp5OzVlEjALUP7zLmrLZgxvFz26fEHVu5kCBzTHwkLEBVJIrWXIOAtwG7o31hEz9l0Kn9hDYYqjPmuxFhcznF3S57Ye2AmGVm7LWUNd5nRlDImpNCUao8kBXCpfaZcTC9MkOuPyQJruVMvgp%2B48VmdemgyuKDp2XrQUckpaP7tk2mnddtkPDMXEUShDN65ONiNI8ug%2Btl69SKa%2FXO94cHcWPUry0o47sZGJgZ2KydTSlt4cdYV891cWP31o5z6luHG3ZPGt2r4QOLmK2j54qrR0Hh8BCvrm8XwUiHU5bK6KQbBUF21KI%2BjfTv8gkR4rTaT6iMMq07VYn4ekWfOYWVI4Yg3DbBZ1iSb%2BtXNYX%2BLiGOxBjgHcGVjKPjatVUuEdKDEVNpew2Hw7QzzC%2BGjebI4bXXDyT2S2ZhuhdzeqZMO7umtQGOqUB1YWWwdv2%2F65EYSNG81X4mInGVIBwrT4aIdBMOycq8U5Mh5XDDQ65qf9t11%2BP2X6b8ZIVKd57mMLRRARvEgdYJeD4%2BpHZJazR3tlzkBtEyNy288wnAGCIn2LXeIQnUcth5TB1A%2FaeHw0qzLPUBLcBDr7J6kgEr4vnjxCwVQ0Yj64YRR40fsh7PdcYcdoCurtcJKObuyhlqme0rGeR9iIZThnRjCkd&X-Amz-Signature=1b2bea7bd5c6ffcdcd53af2f3f282b6eb173fe9e0387108d5443a02f873d510c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q4P4BO6S%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDESs2V0eAG%2BQq1zzIDpK89nKOn7FcW7KCEXtdfyjxwvAiEAiGYB4suf%2FXXmEL1VWeIIIsJ7z9uqyxZZkbnk34gFx5cqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9Ex8Yelij0wxBbzCrcA2LNP2rJwqiuJGY1SfkGcAPrhO3LC3zFf2ilvp8Zqb%2Brc2jiobAtZ6%2FehUA0E7i2waVG5NiPLVdCX%2BPy6SKUGlhcgZsf%2Fih5HB6X0p%2FI2XlmFJbp1Lykovt21wYtSHpmt9RUBgpGPS%2Bel4y2Ru3vsoP9%2Buu10h78yfzqDiwZQOwABNx4MSocCDCFZ5O2UbpP0J1oGsOIGNvNAYhnqxlQp5OzVlEjALUP7zLmrLZgxvFz26fEHVu5kCBzTHwkLEBVJIrWXIOAtwG7o31hEz9l0Kn9hDYYqjPmuxFhcznF3S57Ye2AmGVm7LWUNd5nRlDImpNCUao8kBXCpfaZcTC9MkOuPyQJruVMvgp%2B48VmdemgyuKDp2XrQUckpaP7tk2mnddtkPDMXEUShDN65ONiNI8ug%2Btl69SKa%2FXO94cHcWPUry0o47sZGJgZ2KydTSlt4cdYV891cWP31o5z6luHG3ZPGt2r4QOLmK2j54qrR0Hh8BCvrm8XwUiHU5bK6KQbBUF21KI%2BjfTv8gkR4rTaT6iMMq07VYn4ekWfOYWVI4Yg3DbBZ1iSb%2BtXNYX%2BLiGOxBjgHcGVjKPjatVUuEdKDEVNpew2Hw7QzzC%2BGjebI4bXXDyT2S2ZhuhdzeqZMO7umtQGOqUB1YWWwdv2%2F65EYSNG81X4mInGVIBwrT4aIdBMOycq8U5Mh5XDDQ65qf9t11%2BP2X6b8ZIVKd57mMLRRARvEgdYJeD4%2BpHZJazR3tlzkBtEyNy288wnAGCIn2LXeIQnUcth5TB1A%2FaeHw0qzLPUBLcBDr7J6kgEr4vnjxCwVQ0Yj64YRR40fsh7PdcYcdoCurtcJKObuyhlqme0rGeR9iIZThnRjCkd&X-Amz-Signature=345c530cfda852c8b4384cd2aede4801c477999856906a7dddae0c2f55584f14&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q4P4BO6S%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDESs2V0eAG%2BQq1zzIDpK89nKOn7FcW7KCEXtdfyjxwvAiEAiGYB4suf%2FXXmEL1VWeIIIsJ7z9uqyxZZkbnk34gFx5cqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9Ex8Yelij0wxBbzCrcA2LNP2rJwqiuJGY1SfkGcAPrhO3LC3zFf2ilvp8Zqb%2Brc2jiobAtZ6%2FehUA0E7i2waVG5NiPLVdCX%2BPy6SKUGlhcgZsf%2Fih5HB6X0p%2FI2XlmFJbp1Lykovt21wYtSHpmt9RUBgpGPS%2Bel4y2Ru3vsoP9%2Buu10h78yfzqDiwZQOwABNx4MSocCDCFZ5O2UbpP0J1oGsOIGNvNAYhnqxlQp5OzVlEjALUP7zLmrLZgxvFz26fEHVu5kCBzTHwkLEBVJIrWXIOAtwG7o31hEz9l0Kn9hDYYqjPmuxFhcznF3S57Ye2AmGVm7LWUNd5nRlDImpNCUao8kBXCpfaZcTC9MkOuPyQJruVMvgp%2B48VmdemgyuKDp2XrQUckpaP7tk2mnddtkPDMXEUShDN65ONiNI8ug%2Btl69SKa%2FXO94cHcWPUry0o47sZGJgZ2KydTSlt4cdYV891cWP31o5z6luHG3ZPGt2r4QOLmK2j54qrR0Hh8BCvrm8XwUiHU5bK6KQbBUF21KI%2BjfTv8gkR4rTaT6iMMq07VYn4ekWfOYWVI4Yg3DbBZ1iSb%2BtXNYX%2BLiGOxBjgHcGVjKPjatVUuEdKDEVNpew2Hw7QzzC%2BGjebI4bXXDyT2S2ZhuhdzeqZMO7umtQGOqUB1YWWwdv2%2F65EYSNG81X4mInGVIBwrT4aIdBMOycq8U5Mh5XDDQ65qf9t11%2BP2X6b8ZIVKd57mMLRRARvEgdYJeD4%2BpHZJazR3tlzkBtEyNy288wnAGCIn2LXeIQnUcth5TB1A%2FaeHw0qzLPUBLcBDr7J6kgEr4vnjxCwVQ0Yj64YRR40fsh7PdcYcdoCurtcJKObuyhlqme0rGeR9iIZThnRjCkd&X-Amz-Signature=3ed58d2c281f6c2222b6bff41bed671e59d8d79ef8f8228876373da4bd6cbf84&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDTY7QZ5%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTv1UnvVSoS2cqJskrkLSEa0DB45exJBWYrcfqymdjUQIgHmW7jnAunwgmHtp1jyaLhj55O1L%2Fye0Q7E5yxKW6taAqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK7MA71mJrcpk0yHDSrcA40QoDaN9jnGwnGg0%2FWAtwze5waE%2FBnrTsIPH8cy0jPUmLJ2l1r%2Be0PdFo27e%2FxWFlzZmAlFMCVW8oxDdH4eY5pGz5aRL9rUeYumsuY7bOzRhOLd1tIuxIXGT3TZW3U7MuFbA0Ts17FmpYsgiL50DUxyIwMNyyKEVrPM5vqFRYWeFhuz3CN5osYv%2BO7wXBtryKo43BgaxhXZ0z6FngKNQBh6BRQ8N3ODNKf%2FucIH02GmK1%2FmERgiK50UZY77b7TzxTLTOOk%2BcFPkg72%2BsjNRRtEh3GFMIa4xkT0W4zGa4mRs7daZSoBmrfQ8I5wtW8Pi8N1CL7waB1w3fjJYABOsPBXfM2DPG7w%2FJtNBpMIIDzHXXDKyz%2FLsBvIFvZw6PYu%2FXjGa73t%2BKw6%2Bo51V9CA8znKwFY0po3iYaJbPBfVyi4hoS5jFDMDLeUhVKfkwROae3fXzM7XK%2B7pUXPAg7Dg9nM3Ao6SOVCNZFHEYUhFcNLSKsWawsba%2F2lcJWGNLZkdpu4%2FefyiM4sWk%2BfXmjXzq8Apfhl53jfB1zjkrJHg9QxRs0UDTBglIV3B06R8Yk2tiQ5mOvH4ZY8PwrduQ5I4yZZc83IW6PQO3HvOIYrgN6ryOLYDv0cSv7q12hG6lMMXumtQGOqUB3NIuxybX%2FN2HCA%2BRE9A8dJO0U%2F9N%2FvxuT1uCg25lCeXGCog%2Bs3RXyzT2Zjkvq6VWOdc3Fxhwu8RWB9B8lWHXnGa5o6feJbhIb4NoYiHRT5M%2FoCuNK0EACfWbSgsgizb2nnLALdiJaSZ%2FoRNq63Y%2BwPbOO%2BoZJ26pFiynB2eAdeLfY3KIG0%2BoNFDbauer%2BO0oGwaTy4Mhr5k2%2FnzeAlJP645f%2FhfY&X-Amz-Signature=023a5b94299132901855296ea0b90f804afd0fdc757f4148d045ebceb22917ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDTY7QZ5%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTv1UnvVSoS2cqJskrkLSEa0DB45exJBWYrcfqymdjUQIgHmW7jnAunwgmHtp1jyaLhj55O1L%2Fye0Q7E5yxKW6taAqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK7MA71mJrcpk0yHDSrcA40QoDaN9jnGwnGg0%2FWAtwze5waE%2FBnrTsIPH8cy0jPUmLJ2l1r%2Be0PdFo27e%2FxWFlzZmAlFMCVW8oxDdH4eY5pGz5aRL9rUeYumsuY7bOzRhOLd1tIuxIXGT3TZW3U7MuFbA0Ts17FmpYsgiL50DUxyIwMNyyKEVrPM5vqFRYWeFhuz3CN5osYv%2BO7wXBtryKo43BgaxhXZ0z6FngKNQBh6BRQ8N3ODNKf%2FucIH02GmK1%2FmERgiK50UZY77b7TzxTLTOOk%2BcFPkg72%2BsjNRRtEh3GFMIa4xkT0W4zGa4mRs7daZSoBmrfQ8I5wtW8Pi8N1CL7waB1w3fjJYABOsPBXfM2DPG7w%2FJtNBpMIIDzHXXDKyz%2FLsBvIFvZw6PYu%2FXjGa73t%2BKw6%2Bo51V9CA8znKwFY0po3iYaJbPBfVyi4hoS5jFDMDLeUhVKfkwROae3fXzM7XK%2B7pUXPAg7Dg9nM3Ao6SOVCNZFHEYUhFcNLSKsWawsba%2F2lcJWGNLZkdpu4%2FefyiM4sWk%2BfXmjXzq8Apfhl53jfB1zjkrJHg9QxRs0UDTBglIV3B06R8Yk2tiQ5mOvH4ZY8PwrduQ5I4yZZc83IW6PQO3HvOIYrgN6ryOLYDv0cSv7q12hG6lMMXumtQGOqUB3NIuxybX%2FN2HCA%2BRE9A8dJO0U%2F9N%2FvxuT1uCg25lCeXGCog%2Bs3RXyzT2Zjkvq6VWOdc3Fxhwu8RWB9B8lWHXnGa5o6feJbhIb4NoYiHRT5M%2FoCuNK0EACfWbSgsgizb2nnLALdiJaSZ%2FoRNq63Y%2BwPbOO%2BoZJ26pFiynB2eAdeLfY3KIG0%2BoNFDbauer%2BO0oGwaTy4Mhr5k2%2FnzeAlJP645f%2FhfY&X-Amz-Signature=f33b65f11ebf207beb4bc385e48117b2a7ce82e34ade8b65be5e89fc081ee047&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDTY7QZ5%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTv1UnvVSoS2cqJskrkLSEa0DB45exJBWYrcfqymdjUQIgHmW7jnAunwgmHtp1jyaLhj55O1L%2Fye0Q7E5yxKW6taAqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK7MA71mJrcpk0yHDSrcA40QoDaN9jnGwnGg0%2FWAtwze5waE%2FBnrTsIPH8cy0jPUmLJ2l1r%2Be0PdFo27e%2FxWFlzZmAlFMCVW8oxDdH4eY5pGz5aRL9rUeYumsuY7bOzRhOLd1tIuxIXGT3TZW3U7MuFbA0Ts17FmpYsgiL50DUxyIwMNyyKEVrPM5vqFRYWeFhuz3CN5osYv%2BO7wXBtryKo43BgaxhXZ0z6FngKNQBh6BRQ8N3ODNKf%2FucIH02GmK1%2FmERgiK50UZY77b7TzxTLTOOk%2BcFPkg72%2BsjNRRtEh3GFMIa4xkT0W4zGa4mRs7daZSoBmrfQ8I5wtW8Pi8N1CL7waB1w3fjJYABOsPBXfM2DPG7w%2FJtNBpMIIDzHXXDKyz%2FLsBvIFvZw6PYu%2FXjGa73t%2BKw6%2Bo51V9CA8znKwFY0po3iYaJbPBfVyi4hoS5jFDMDLeUhVKfkwROae3fXzM7XK%2B7pUXPAg7Dg9nM3Ao6SOVCNZFHEYUhFcNLSKsWawsba%2F2lcJWGNLZkdpu4%2FefyiM4sWk%2BfXmjXzq8Apfhl53jfB1zjkrJHg9QxRs0UDTBglIV3B06R8Yk2tiQ5mOvH4ZY8PwrduQ5I4yZZc83IW6PQO3HvOIYrgN6ryOLYDv0cSv7q12hG6lMMXumtQGOqUB3NIuxybX%2FN2HCA%2BRE9A8dJO0U%2F9N%2FvxuT1uCg25lCeXGCog%2Bs3RXyzT2Zjkvq6VWOdc3Fxhwu8RWB9B8lWHXnGa5o6feJbhIb4NoYiHRT5M%2FoCuNK0EACfWbSgsgizb2nnLALdiJaSZ%2FoRNq63Y%2BwPbOO%2BoZJ26pFiynB2eAdeLfY3KIG0%2BoNFDbauer%2BO0oGwaTy4Mhr5k2%2FnzeAlJP645f%2FhfY&X-Amz-Signature=9d8691cff3f744b8f56c0e957d440cdb616f89f9ad82b3de58dabd2ff71c4889&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDTY7QZ5%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTv1UnvVSoS2cqJskrkLSEa0DB45exJBWYrcfqymdjUQIgHmW7jnAunwgmHtp1jyaLhj55O1L%2Fye0Q7E5yxKW6taAqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK7MA71mJrcpk0yHDSrcA40QoDaN9jnGwnGg0%2FWAtwze5waE%2FBnrTsIPH8cy0jPUmLJ2l1r%2Be0PdFo27e%2FxWFlzZmAlFMCVW8oxDdH4eY5pGz5aRL9rUeYumsuY7bOzRhOLd1tIuxIXGT3TZW3U7MuFbA0Ts17FmpYsgiL50DUxyIwMNyyKEVrPM5vqFRYWeFhuz3CN5osYv%2BO7wXBtryKo43BgaxhXZ0z6FngKNQBh6BRQ8N3ODNKf%2FucIH02GmK1%2FmERgiK50UZY77b7TzxTLTOOk%2BcFPkg72%2BsjNRRtEh3GFMIa4xkT0W4zGa4mRs7daZSoBmrfQ8I5wtW8Pi8N1CL7waB1w3fjJYABOsPBXfM2DPG7w%2FJtNBpMIIDzHXXDKyz%2FLsBvIFvZw6PYu%2FXjGa73t%2BKw6%2Bo51V9CA8znKwFY0po3iYaJbPBfVyi4hoS5jFDMDLeUhVKfkwROae3fXzM7XK%2B7pUXPAg7Dg9nM3Ao6SOVCNZFHEYUhFcNLSKsWawsba%2F2lcJWGNLZkdpu4%2FefyiM4sWk%2BfXmjXzq8Apfhl53jfB1zjkrJHg9QxRs0UDTBglIV3B06R8Yk2tiQ5mOvH4ZY8PwrduQ5I4yZZc83IW6PQO3HvOIYrgN6ryOLYDv0cSv7q12hG6lMMXumtQGOqUB3NIuxybX%2FN2HCA%2BRE9A8dJO0U%2F9N%2FvxuT1uCg25lCeXGCog%2Bs3RXyzT2Zjkvq6VWOdc3Fxhwu8RWB9B8lWHXnGa5o6feJbhIb4NoYiHRT5M%2FoCuNK0EACfWbSgsgizb2nnLALdiJaSZ%2FoRNq63Y%2BwPbOO%2BoZJ26pFiynB2eAdeLfY3KIG0%2BoNFDbauer%2BO0oGwaTy4Mhr5k2%2FnzeAlJP645f%2FhfY&X-Amz-Signature=28dfb0a44805d853f5942dc0c7a123221de2088e9b6b1b43d8021cab92a91d22&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46645FMAA4G%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDLj0i0e%2BrDvVtwRbSNA551XDBYe5pC9baUsB7WfS2K1AIgfgmikr%2BegeO9sDc%2B0KDLqUbPbyB89AScDUHXS51QHSsqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAtPzRz%2Fmty5c4dLayrcAzav3bb6MHa7Ma82E4RR37Q1U8OYbJPXkXNK2KB%2FlwA6kYp9vCvjqlQAcnGp%2Bcrs37c9KElt8Lg8B6XuCQfuXt7EuZJ%2B6lk%2FcgumkCW0WEskorzgeHisbBfMRANWiPSfso2RqJrrGrDTrOjSFGQeZHS4hL%2F%2FzmGr8pLgVn74aJJyfn0M0jqOxaK2wr3177LlNPDyRTJUpe3maoFmhs0fS7EQCN1B3WPjKDnvcbYHEjMNnb%2FWpple2HJMxke7KIdclHYwpRHxRFcaTudXsoqgV6yvEtEiY5tySbg%2BpPJGzzaUK4NOqOZMjcR17OWAJi0oPs5oEkoXd9tVvtqUg%2Bd1o3SPo1ONFEttHw4xJCPJqllOY9XPciClrx4E%2BBhb9hbHP4Biir0IEiX%2FM57XR9HkFwNxNrzOGJKqUTXLaFYQu4BxOSeKtIrrA%2Bp8eI61YHjQTiHR0x0suJEnHKUJnQ5tFvhl8OCRLA0vFcukXwv3llmohGpCrtbMnNB5swkEnROgalGKepq7%2BrUI6qs%2BZCxv4%2BkObv7S5WbHTJlEFigVomh3SYK2sefoa2R2bf2mlMiVa%2B85pMY2yz7kItJNeI92Nn4ZpVFFUmxVp8%2FCooe3zVQuHqoQy0i11etW1yIqMJzumtQGOqUBSYIYGy3apJK9Pta8doaFjFOJDjQZ0ek5WI00PJRwixPqQBmzo2H10bZVgFaxmRD5gU%2F42Ja3UwaHtwVqlnlaBbX9YuvKifYIEqLlW0pFHuJC144ybm0oK7RFFTBfOOYkU0UQIfdoRhaK4fOxXuLqPD7NvevHigY3ARMwE6JKidWTo5BI2gEs3SDhMWNGH6VDhjO1uix9XzMK3wsSMconr7F%2BgODB&X-Amz-Signature=ef1074823b2fde7111ea4e696a253ee567803b270034212adeacdbb279f1d160&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665WEI25YQ%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDzaewBCec%2BYDdqaLD%2FOV5ZS8Y9h5TrW%2BzsCzKj61vOWwIhAPHO1DO080tgZdT6autHT4lXNagg5Fz1q3QhkqmwVnwTKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzZOVZaGeXTNcxnOgIq3AMJmioHYIbYv7j1%2BATdzchJoOuo084G%2BPFzIR5dV2Vpq%2B0wCNohmW0xtV1FdoFchwDvK1gI7%2B0qTEPefo%2BAaArUoTuEJcpLqdwwOCiwii27AQKZeZInRqUedA%2Bvkv8OdStYjVsI70EORlWUmCAhf2Bg8sx%2Faw8TGLfRFPaVBmV%2FjdNgR%2BNUC%2BGgmiD5iNdw5uvpSPXQjlqxvDUksbtG1ncf8m9cl8vBTkfAfJ70YPJmWn%2BXD3vJNCafeMqKRhkfMllmN4aQNQtRiK4JhHbT41Sa8HYG9FoznoKioEe%2B1eUDa%2FDM8puncwW71fQWdw7ZYfr69q1mZGyjrCqYqPHwkRR%2FVkCJrjsW7cWKxYjovqUiIHsPBb9o1bKq5w4m5V6SZHdnFtOTbzzbrYkIs0C6MR0yLl2RS8KzBAepGZSiYDC1x8QY28U%2FuCJwd2O8rOE5jLpy%2BWOCAbyd1n8cXxWFXjkl2N9lMOcGqHNyO%2F4wCyWZ7PK%2BCgyKdY47mMpu8T9zuP9nvA03E3DBTQsCMCy%2FovBlJ3Uwo3yAECepUIN9ZDdU1HltwiS0po%2B258MDGqGAXR%2BnI8Adt4UjBT27Sj8gALonFyTdQusnPvy3N7usHVniE%2FcMc5njra%2FVUkc3AjDa7prUBjqkAfe94L0rFf4MDQWZmEVzaAuiLhm3U6NkmH1%2BYb30PeVzFxZjSmxrK0jlW6LUvap55vlbGkLDThoH8U0cZ4eQFrxzkoD6Dc9RIgZ0i6G30dS06rA48PbKQK24VzXUGW2IRkIEC0p5mU2xakDigigYn21Ad5leYAd0%2FIKjl82Sd9zMN1PH8XQxcMzQWe5WgcgvFTzG9Yr5xLySfdn7T%2BuRukQ5ZmvI&X-Amz-Signature=08a5db9069c438c7efc8676f25fe8bc18de18b6fa10c977a6af7c1536cb40aa6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665WEI25YQ%2F20260820%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260820T083559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDzaewBCec%2BYDdqaLD%2FOV5ZS8Y9h5TrW%2BzsCzKj61vOWwIhAPHO1DO080tgZdT6autHT4lXNagg5Fz1q3QhkqmwVnwTKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzZOVZaGeXTNcxnOgIq3AMJmioHYIbYv7j1%2BATdzchJoOuo084G%2BPFzIR5dV2Vpq%2B0wCNohmW0xtV1FdoFchwDvK1gI7%2B0qTEPefo%2BAaArUoTuEJcpLqdwwOCiwii27AQKZeZInRqUedA%2Bvkv8OdStYjVsI70EORlWUmCAhf2Bg8sx%2Faw8TGLfRFPaVBmV%2FjdNgR%2BNUC%2BGgmiD5iNdw5uvpSPXQjlqxvDUksbtG1ncf8m9cl8vBTkfAfJ70YPJmWn%2BXD3vJNCafeMqKRhkfMllmN4aQNQtRiK4JhHbT41Sa8HYG9FoznoKioEe%2B1eUDa%2FDM8puncwW71fQWdw7ZYfr69q1mZGyjrCqYqPHwkRR%2FVkCJrjsW7cWKxYjovqUiIHsPBb9o1bKq5w4m5V6SZHdnFtOTbzzbrYkIs0C6MR0yLl2RS8KzBAepGZSiYDC1x8QY28U%2FuCJwd2O8rOE5jLpy%2BWOCAbyd1n8cXxWFXjkl2N9lMOcGqHNyO%2F4wCyWZ7PK%2BCgyKdY47mMpu8T9zuP9nvA03E3DBTQsCMCy%2FovBlJ3Uwo3yAECepUIN9ZDdU1HltwiS0po%2B258MDGqGAXR%2BnI8Adt4UjBT27Sj8gALonFyTdQusnPvy3N7usHVniE%2FcMc5njra%2FVUkc3AjDa7prUBjqkAfe94L0rFf4MDQWZmEVzaAuiLhm3U6NkmH1%2BYb30PeVzFxZjSmxrK0jlW6LUvap55vlbGkLDThoH8U0cZ4eQFrxzkoD6Dc9RIgZ0i6G30dS06rA48PbKQK24VzXUGW2IRkIEC0p5mU2xakDigigYn21Ad5leYAd0%2FIKjl82Sd9zMN1PH8XQxcMzQWe5WgcgvFTzG9Yr5xLySfdn7T%2BuRukQ5ZmvI&X-Amz-Signature=dd4bb4a924b3f1bc836ef5347368fe883f89c8b76173f3df9c9b3b9ce6b1fb32&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
