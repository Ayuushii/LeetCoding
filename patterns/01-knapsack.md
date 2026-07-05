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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466243WTPMH%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCIDeSoxgKPdv8XROMzMrI4Opj5GXHKRM7eFo4rpGldgUEAiEA0E9XCv%2F8O%2FBmnU9BpXh%2ByLM%2BNXBaBQRQ7RZ%2FBzLzPPwq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJQ1VzqEqZ549xjgkircA%2FbdG8NijPxJTi9dTDW5kzck990pBAjfFqbQheUWbz%2FTmIJyR5rEQ4vyOmCcBdVVb8tw7IiqQAErER1%2Fivgnj%2FQPewOxwnZGAUVENW7%2BU5nAmHx29V4%2BzphMWt2bIRL%2F5SzZEGkCxbwp4eAk%2FSup3m1F5Tgn7Utrym5Uh5YAqy0D7GyjbScUO4%2FQ6f812oA1A%2FvZ78S2jCp0eyXDsVp%2BUNChUIWcu1ZNSJr72eF4Go3%2BZFt%2Bec0swWK%2BSYdfES4cFF5DWT5GpeyNhBad8ZL1z03C0jpCSg8lF9rwjW5AuLgi5ApuBc%2Bg%2B4JHkCdUWFbU72fTfT3S5ygwvkZG0a1ErrzfgIdveKW7gw%2BpZ5Brzd5dSth6LM%2F86cXKmHa7TdKaThchs0Hy0Ul9DR19k18pVFPVlzWY7FVwSbmgusMOX4fzH5su2IeHDo%2F60qQovxrrbiG%2Bzg5OcGLnXhngGJ7b87MR0uEgk3UJzsXZzPVTqPGhftGO1zohxLfi0jfnbTOCZ%2FMVZKJOd87SAu6QC%2BgaisuLRTiF%2Bl%2FnmJaf4atItPVPG0ojhWPitc2fJzwB7vePsmuhuUOMyWJnkeYkzLmDv4TSW49UhGYvnwGcTj934Rvg43fw2JdAYTMKZbmMMMD8p9IGOqUBrszC94vMVIJCjdDZTZilolKIrsDT2OpE%2BezW3IdK9Qi6u4oCvHWdGcwEEhG8TnnvZy75m8K7lbODTtOx038a4tGMg2ic3VPE1EpNhl0mGEs7cJweax9N0%2BWEspiGvK6GPUSNXLVLRDVWBXaLhwtwbmWrhNGcRL2kZ7Fu0p8mMdladJBTbUhj9g5NPquCaNAW6CQ9cMvu%2F42XUj9xipZbTNx94P9p&X-Amz-Signature=7009e06a0ce357b8ddfa0d21a8ff535888cec4621d8508f13288e572b7086b4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466243WTPMH%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCIDeSoxgKPdv8XROMzMrI4Opj5GXHKRM7eFo4rpGldgUEAiEA0E9XCv%2F8O%2FBmnU9BpXh%2ByLM%2BNXBaBQRQ7RZ%2FBzLzPPwq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJQ1VzqEqZ549xjgkircA%2FbdG8NijPxJTi9dTDW5kzck990pBAjfFqbQheUWbz%2FTmIJyR5rEQ4vyOmCcBdVVb8tw7IiqQAErER1%2Fivgnj%2FQPewOxwnZGAUVENW7%2BU5nAmHx29V4%2BzphMWt2bIRL%2F5SzZEGkCxbwp4eAk%2FSup3m1F5Tgn7Utrym5Uh5YAqy0D7GyjbScUO4%2FQ6f812oA1A%2FvZ78S2jCp0eyXDsVp%2BUNChUIWcu1ZNSJr72eF4Go3%2BZFt%2Bec0swWK%2BSYdfES4cFF5DWT5GpeyNhBad8ZL1z03C0jpCSg8lF9rwjW5AuLgi5ApuBc%2Bg%2B4JHkCdUWFbU72fTfT3S5ygwvkZG0a1ErrzfgIdveKW7gw%2BpZ5Brzd5dSth6LM%2F86cXKmHa7TdKaThchs0Hy0Ul9DR19k18pVFPVlzWY7FVwSbmgusMOX4fzH5su2IeHDo%2F60qQovxrrbiG%2Bzg5OcGLnXhngGJ7b87MR0uEgk3UJzsXZzPVTqPGhftGO1zohxLfi0jfnbTOCZ%2FMVZKJOd87SAu6QC%2BgaisuLRTiF%2Bl%2FnmJaf4atItPVPG0ojhWPitc2fJzwB7vePsmuhuUOMyWJnkeYkzLmDv4TSW49UhGYvnwGcTj934Rvg43fw2JdAYTMKZbmMMMD8p9IGOqUBrszC94vMVIJCjdDZTZilolKIrsDT2OpE%2BezW3IdK9Qi6u4oCvHWdGcwEEhG8TnnvZy75m8K7lbODTtOx038a4tGMg2ic3VPE1EpNhl0mGEs7cJweax9N0%2BWEspiGvK6GPUSNXLVLRDVWBXaLhwtwbmWrhNGcRL2kZ7Fu0p8mMdladJBTbUhj9g5NPquCaNAW6CQ9cMvu%2F42XUj9xipZbTNx94P9p&X-Amz-Signature=c4eabc418fe3d590f759cb0c9ea477cb4b226a5a4ad3acb526d8d85eed138643&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466243WTPMH%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCIDeSoxgKPdv8XROMzMrI4Opj5GXHKRM7eFo4rpGldgUEAiEA0E9XCv%2F8O%2FBmnU9BpXh%2ByLM%2BNXBaBQRQ7RZ%2FBzLzPPwq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJQ1VzqEqZ549xjgkircA%2FbdG8NijPxJTi9dTDW5kzck990pBAjfFqbQheUWbz%2FTmIJyR5rEQ4vyOmCcBdVVb8tw7IiqQAErER1%2Fivgnj%2FQPewOxwnZGAUVENW7%2BU5nAmHx29V4%2BzphMWt2bIRL%2F5SzZEGkCxbwp4eAk%2FSup3m1F5Tgn7Utrym5Uh5YAqy0D7GyjbScUO4%2FQ6f812oA1A%2FvZ78S2jCp0eyXDsVp%2BUNChUIWcu1ZNSJr72eF4Go3%2BZFt%2Bec0swWK%2BSYdfES4cFF5DWT5GpeyNhBad8ZL1z03C0jpCSg8lF9rwjW5AuLgi5ApuBc%2Bg%2B4JHkCdUWFbU72fTfT3S5ygwvkZG0a1ErrzfgIdveKW7gw%2BpZ5Brzd5dSth6LM%2F86cXKmHa7TdKaThchs0Hy0Ul9DR19k18pVFPVlzWY7FVwSbmgusMOX4fzH5su2IeHDo%2F60qQovxrrbiG%2Bzg5OcGLnXhngGJ7b87MR0uEgk3UJzsXZzPVTqPGhftGO1zohxLfi0jfnbTOCZ%2FMVZKJOd87SAu6QC%2BgaisuLRTiF%2Bl%2FnmJaf4atItPVPG0ojhWPitc2fJzwB7vePsmuhuUOMyWJnkeYkzLmDv4TSW49UhGYvnwGcTj934Rvg43fw2JdAYTMKZbmMMMD8p9IGOqUBrszC94vMVIJCjdDZTZilolKIrsDT2OpE%2BezW3IdK9Qi6u4oCvHWdGcwEEhG8TnnvZy75m8K7lbODTtOx038a4tGMg2ic3VPE1EpNhl0mGEs7cJweax9N0%2BWEspiGvK6GPUSNXLVLRDVWBXaLhwtwbmWrhNGcRL2kZ7Fu0p8mMdladJBTbUhj9g5NPquCaNAW6CQ9cMvu%2F42XUj9xipZbTNx94P9p&X-Amz-Signature=cb11e9e8619da22d2a0967884c15c82468f2f6eb96f9f25eee1f7ec82c6a860a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665DWONE4E%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCICL1ZWm93rkZWqYWuqowLhm%2B7nuZOaHWPoVy8NtKwoQkAiEAi%2Bq%2FdDEvDv4RRKrAqheiGYz8r%2BLRU90IAfgPsrSndRkq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJ17e2QFBpKY4gRAlircA8CKeaB7uT%2FPiYba93CZK6qRYs5VvH78zZoUsUQ5XTcbAehGm9rocZMu5HAZ9doU9iNWb%2FXLOVP9WGiFBA8ZJqg7DFw%2BOMEP6hYB0CsqXC4rplPay9REtqA8skWUVm%2B0%2FbHMxjmb6ucFY5POzLU4NiBolU2c03W2XSDYGt%2Fy0UMRjFnIirIwfkPo2pFJn%2Fmkh5Gxa2Wi4ElmZ7klQRysxTLl5zEMgttG87RqgsG44bSeQ2Mh05U02msmRDHa1zAytlkIN31cEaElemGVSxo36FgYf5AddoMTB1xniAFLIIRgRUwNf6wjDUmiA5Jq9FsKfXAjLhgy0qBMiiwBRitD2hZNoFWujG8k%2Bf4lRVPlzGfg%2FwCVEFnpJuhtW6y%2B0Uy1JZuZpPn91%2F9uU4re%2BORI%2B69bE%2FLxTdtauDbTrSf484iIzBNXYs%2FKxZFC%2FTie1ELZtBBMNHmaQm3hyb3wXKGF4CsD%2FbikQPvaDO7cfrPiZpRrVJSnMg5bhihHRq7eRjOp2mcAaRdATe2%2B1dPpbO%2BJrDwhbzLYN2doN%2BMNfee1V7BL6NxKsryFqGty9%2BSkSNZ%2FqCszTWEJpyXWWOJRQR7BuVaUyo08cRkNYPcc2%2BgH2Ezj5ntqxvTC5w7kNNarMMT3p9IGOqUBc12NGYbG0BeNVCSbUwAlFheRXVZmMEZE46it%2Badhm5xWWTGQ3hjCAr%2BWCJogfYsrTizl6H5vCoBj4PGzpfw6VHF%2BoYoT3MDHUiNFoYxVOGb0kv3RrxFoEttnON2LdCG8LIzy%2FTQpCxq7XKW8bFb6oc%2Fe2GIv%2FBZpiW%2BwsxxBLPvSb1ImXVOREqpDMk2H8IlNlmRVU5MFKIlpTZFRDnUmKS7v1lBr&X-Amz-Signature=332f77ddc899353eaea59b010528039fdad33cc66388b421e36641ed5c0edfad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665DWONE4E%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCICL1ZWm93rkZWqYWuqowLhm%2B7nuZOaHWPoVy8NtKwoQkAiEAi%2Bq%2FdDEvDv4RRKrAqheiGYz8r%2BLRU90IAfgPsrSndRkq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJ17e2QFBpKY4gRAlircA8CKeaB7uT%2FPiYba93CZK6qRYs5VvH78zZoUsUQ5XTcbAehGm9rocZMu5HAZ9doU9iNWb%2FXLOVP9WGiFBA8ZJqg7DFw%2BOMEP6hYB0CsqXC4rplPay9REtqA8skWUVm%2B0%2FbHMxjmb6ucFY5POzLU4NiBolU2c03W2XSDYGt%2Fy0UMRjFnIirIwfkPo2pFJn%2Fmkh5Gxa2Wi4ElmZ7klQRysxTLl5zEMgttG87RqgsG44bSeQ2Mh05U02msmRDHa1zAytlkIN31cEaElemGVSxo36FgYf5AddoMTB1xniAFLIIRgRUwNf6wjDUmiA5Jq9FsKfXAjLhgy0qBMiiwBRitD2hZNoFWujG8k%2Bf4lRVPlzGfg%2FwCVEFnpJuhtW6y%2B0Uy1JZuZpPn91%2F9uU4re%2BORI%2B69bE%2FLxTdtauDbTrSf484iIzBNXYs%2FKxZFC%2FTie1ELZtBBMNHmaQm3hyb3wXKGF4CsD%2FbikQPvaDO7cfrPiZpRrVJSnMg5bhihHRq7eRjOp2mcAaRdATe2%2B1dPpbO%2BJrDwhbzLYN2doN%2BMNfee1V7BL6NxKsryFqGty9%2BSkSNZ%2FqCszTWEJpyXWWOJRQR7BuVaUyo08cRkNYPcc2%2BgH2Ezj5ntqxvTC5w7kNNarMMT3p9IGOqUBc12NGYbG0BeNVCSbUwAlFheRXVZmMEZE46it%2Badhm5xWWTGQ3hjCAr%2BWCJogfYsrTizl6H5vCoBj4PGzpfw6VHF%2BoYoT3MDHUiNFoYxVOGb0kv3RrxFoEttnON2LdCG8LIzy%2FTQpCxq7XKW8bFb6oc%2Fe2GIv%2FBZpiW%2BwsxxBLPvSb1ImXVOREqpDMk2H8IlNlmRVU5MFKIlpTZFRDnUmKS7v1lBr&X-Amz-Signature=8bfd363adc98791620920c421189d0bb7273e73b553d85ee216dff17552e21e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665DWONE4E%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCICL1ZWm93rkZWqYWuqowLhm%2B7nuZOaHWPoVy8NtKwoQkAiEAi%2Bq%2FdDEvDv4RRKrAqheiGYz8r%2BLRU90IAfgPsrSndRkq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJ17e2QFBpKY4gRAlircA8CKeaB7uT%2FPiYba93CZK6qRYs5VvH78zZoUsUQ5XTcbAehGm9rocZMu5HAZ9doU9iNWb%2FXLOVP9WGiFBA8ZJqg7DFw%2BOMEP6hYB0CsqXC4rplPay9REtqA8skWUVm%2B0%2FbHMxjmb6ucFY5POzLU4NiBolU2c03W2XSDYGt%2Fy0UMRjFnIirIwfkPo2pFJn%2Fmkh5Gxa2Wi4ElmZ7klQRysxTLl5zEMgttG87RqgsG44bSeQ2Mh05U02msmRDHa1zAytlkIN31cEaElemGVSxo36FgYf5AddoMTB1xniAFLIIRgRUwNf6wjDUmiA5Jq9FsKfXAjLhgy0qBMiiwBRitD2hZNoFWujG8k%2Bf4lRVPlzGfg%2FwCVEFnpJuhtW6y%2B0Uy1JZuZpPn91%2F9uU4re%2BORI%2B69bE%2FLxTdtauDbTrSf484iIzBNXYs%2FKxZFC%2FTie1ELZtBBMNHmaQm3hyb3wXKGF4CsD%2FbikQPvaDO7cfrPiZpRrVJSnMg5bhihHRq7eRjOp2mcAaRdATe2%2B1dPpbO%2BJrDwhbzLYN2doN%2BMNfee1V7BL6NxKsryFqGty9%2BSkSNZ%2FqCszTWEJpyXWWOJRQR7BuVaUyo08cRkNYPcc2%2BgH2Ezj5ntqxvTC5w7kNNarMMT3p9IGOqUBc12NGYbG0BeNVCSbUwAlFheRXVZmMEZE46it%2Badhm5xWWTGQ3hjCAr%2BWCJogfYsrTizl6H5vCoBj4PGzpfw6VHF%2BoYoT3MDHUiNFoYxVOGb0kv3RrxFoEttnON2LdCG8LIzy%2FTQpCxq7XKW8bFb6oc%2Fe2GIv%2FBZpiW%2BwsxxBLPvSb1ImXVOREqpDMk2H8IlNlmRVU5MFKIlpTZFRDnUmKS7v1lBr&X-Amz-Signature=735b260758caebf78cfaf89cc204f650547c948da32037b78996045afeeeac68&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665DWONE4E%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCICL1ZWm93rkZWqYWuqowLhm%2B7nuZOaHWPoVy8NtKwoQkAiEAi%2Bq%2FdDEvDv4RRKrAqheiGYz8r%2BLRU90IAfgPsrSndRkq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDJ17e2QFBpKY4gRAlircA8CKeaB7uT%2FPiYba93CZK6qRYs5VvH78zZoUsUQ5XTcbAehGm9rocZMu5HAZ9doU9iNWb%2FXLOVP9WGiFBA8ZJqg7DFw%2BOMEP6hYB0CsqXC4rplPay9REtqA8skWUVm%2B0%2FbHMxjmb6ucFY5POzLU4NiBolU2c03W2XSDYGt%2Fy0UMRjFnIirIwfkPo2pFJn%2Fmkh5Gxa2Wi4ElmZ7klQRysxTLl5zEMgttG87RqgsG44bSeQ2Mh05U02msmRDHa1zAytlkIN31cEaElemGVSxo36FgYf5AddoMTB1xniAFLIIRgRUwNf6wjDUmiA5Jq9FsKfXAjLhgy0qBMiiwBRitD2hZNoFWujG8k%2Bf4lRVPlzGfg%2FwCVEFnpJuhtW6y%2B0Uy1JZuZpPn91%2F9uU4re%2BORI%2B69bE%2FLxTdtauDbTrSf484iIzBNXYs%2FKxZFC%2FTie1ELZtBBMNHmaQm3hyb3wXKGF4CsD%2FbikQPvaDO7cfrPiZpRrVJSnMg5bhihHRq7eRjOp2mcAaRdATe2%2B1dPpbO%2BJrDwhbzLYN2doN%2BMNfee1V7BL6NxKsryFqGty9%2BSkSNZ%2FqCszTWEJpyXWWOJRQR7BuVaUyo08cRkNYPcc2%2BgH2Ezj5ntqxvTC5w7kNNarMMT3p9IGOqUBc12NGYbG0BeNVCSbUwAlFheRXVZmMEZE46it%2Badhm5xWWTGQ3hjCAr%2BWCJogfYsrTizl6H5vCoBj4PGzpfw6VHF%2BoYoT3MDHUiNFoYxVOGb0kv3RrxFoEttnON2LdCG8LIzy%2FTQpCxq7XKW8bFb6oc%2Fe2GIv%2FBZpiW%2BwsxxBLPvSb1ImXVOREqpDMk2H8IlNlmRVU5MFKIlpTZFRDnUmKS7v1lBr&X-Amz-Signature=284e2cea37925bb0d4fb2c2d9157305658c2982b9ceaa2b4e4ccdf2d1eb7bd1b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643I7JQR3%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101130Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJHMEUCIBuKPdpMvgq9cM%2Bl4gQS8%2B1P18V4xr3GLY16%2FoHSN%2B%2FHAiEAtHmKBTwODpsb0jyfEJowG64PZM8MRVWjZjUpgPOCSzUq%2FwMIOBAAGgw2Mzc0MjMxODM4MDUiDLpoKwKxPj9gwafTPCrcA7NYJpsP05ftgU5zSaq46wy6iKefGIfc3HPeY34vcqopE7Pzz%2BTTumChi9E8VAEFzwdhZqLd%2Brr0teePyNResEhVfwUA9xvKyTvU382AMrRcsPc2hg7Qi93hcLCIgBYrhpmnsSNXApC1MwnKzwsKKka0MMLlN80y6Djh9QkLl17nMdh7KmEJawLYLXcvG2GGEPwCX%2FSPQLbUjDrGZIVN9%2FvDADq%2BycsX6V4XqJiMY%2Bsy7ampR%2B5NA5mdz0VH2CDj5EK8nyd1Yx8Yo66qqgd%2BIMQva%2FM8lzq3IAtT2iZZ4cZ1MRFU1%2BEqrqUItezIGGIzkzRprDvN5ccTr3pUquzUv2tOZFJjRvZV6IO27CsbuvmX19I8wKTFgSWf05fEjbonQHUO5OVXvsfWCa0MMPTkEcogl1CWHZTFISLzD4fM27kjZrjwSuTlSlJq%2B0RY26I%2FK9pFP0V6GlEu6t%2FrO%2BHhzjTKRG1vQPaQDgU2Udrdls%2B0egI5Qs2f1uqEZWhQmIjVGz6sD%2BibUVcPWmRhwD0k%2FHyqIjjRzGRA3MQFBCv1qtBOF%2FOD%2FMGxreu5W6f0E%2B68a9YeuptENPXURe75IbA%2FjR%2BjESBSw4k1mzzG3XDXbk9aLxYjUxqhHVcft%2FnEMOT%2Fp9IGOqUB8QugM5kPUuS0dRJ48AnaFVIDNQYRtWmGuks%2FfB9rfWIo1J5m3sKHFhpIgZDp5oJ4AkU1lFtndC4rwBF1d9xhZ4pRJY4pl2W7Sll8xjiI%2B%2FUKSWjwn2U9MYxZjknQrAVe%2F10PyUeoUOR7t3qcpMdhaQXn8pMeTvy7lYpG5V7rKfN%2FahpIakZZJ5YN7nBBOIkWIQiVM6xBsfv0PInT2Kut3cbXB8k2&X-Amz-Signature=e9d7e6c8fd0a369a1ae9e69997c8ea6e8579360c628f384def23c064a06ffb87&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646B43VJE%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101130Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJIMEYCIQDGPZUp1cR%2FPgj72g3HjcgoDuOSYpTKQmjmBuUcVETnqgIhAKLJ51a0fOAJrbJ2IKegP3M9yDYUOr%2BVuOeCfVJj7sKHKv8DCDgQABoMNjM3NDIzMTgzODA1IgzYptXA%2FqoFZJpIyaIq3AOeX6Syw5ItvuOxmuGVnd47eyjH4p2FW5XOGttb%2B3rEUmXG7HG6b3hO8r0JXNlcKwbQFXBW1jOhxNYn5TVs8buAciX65196U86iDuTWQOroOaM1Mx5cg%2BnOPoqU5asgYD5qw9VPoMR5eKYl5aVvoyqfRJhHfxkQYUruu5lWKkZke%2FAU7jgcRDxqf93oNJFg4emIdkAXHRucNkYlm31GD%2FXCDFDGowtYp6CMyNkE%2BEDjcvv0j7u4NzE9Kk6JP3Q3n9bb5FSWa3C5VedWudjpBNaBhFXOdSGLrZbUuJ6xAv54HgnWc9lPs3MWd4zucbN82qGn%2FGaz9%2FsU2vurzF9b95N9%2Fd8j0Qyq7%2FJd7x9%2Bjg7d9QuPVucmRIqLYnrlQ6BL6VQLz1oV4AbM93ktmmQw8vvL3TIgRqdwE4iZQvqsUiYE02ohBcQB%2Fk6EMYE390NCvOz6ZZ7D3hX9mkAb4Zrfz1dQomJYyqTydmx4iIGVRYIeUdkUikdYtPfh02lTcYFAA5xXdngfSN%2FH6NESVuWSvrykhYBzt0yl0AB1eYTDqlBD5ZTCikm1rC4wwBfpBf%2BhyXivtKz7l0p77Zj1JgiLgN5g%2BrfHPKnKdQL%2BULGJFajJTeHMbDO%2BjEDU5dpxfTC%2F%2FafSBjqkAQcsOMOEhZOcIHZFRDgfAo7GVMQ3YK%2FR%2F%2FjPLjDrubWjEOLOaaysQdmttCcc11I65OtsstgoBhH0x361HpqEsOc2dEkLyswmubkbjMVve72vN%2BO%2FKb%2BZntxysvq6GBJ00oFYflhzmJhVEghGyelZRym4qX9rRkUKWHZZ8fRq2FtmU99VNf49c1u3xi7NOkuq1j8%2FhaNnzGmikHNfn70yyOT3ZFTo&X-Amz-Signature=eea7f0ec81241214e21d030b409bcdd425d1fd3788bac57831077f49715b5e7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646B43VJE%2F20260705%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260705T101130Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG8aCXVzLXdlc3QtMiJIMEYCIQDGPZUp1cR%2FPgj72g3HjcgoDuOSYpTKQmjmBuUcVETnqgIhAKLJ51a0fOAJrbJ2IKegP3M9yDYUOr%2BVuOeCfVJj7sKHKv8DCDgQABoMNjM3NDIzMTgzODA1IgzYptXA%2FqoFZJpIyaIq3AOeX6Syw5ItvuOxmuGVnd47eyjH4p2FW5XOGttb%2B3rEUmXG7HG6b3hO8r0JXNlcKwbQFXBW1jOhxNYn5TVs8buAciX65196U86iDuTWQOroOaM1Mx5cg%2BnOPoqU5asgYD5qw9VPoMR5eKYl5aVvoyqfRJhHfxkQYUruu5lWKkZke%2FAU7jgcRDxqf93oNJFg4emIdkAXHRucNkYlm31GD%2FXCDFDGowtYp6CMyNkE%2BEDjcvv0j7u4NzE9Kk6JP3Q3n9bb5FSWa3C5VedWudjpBNaBhFXOdSGLrZbUuJ6xAv54HgnWc9lPs3MWd4zucbN82qGn%2FGaz9%2FsU2vurzF9b95N9%2Fd8j0Qyq7%2FJd7x9%2Bjg7d9QuPVucmRIqLYnrlQ6BL6VQLz1oV4AbM93ktmmQw8vvL3TIgRqdwE4iZQvqsUiYE02ohBcQB%2Fk6EMYE390NCvOz6ZZ7D3hX9mkAb4Zrfz1dQomJYyqTydmx4iIGVRYIeUdkUikdYtPfh02lTcYFAA5xXdngfSN%2FH6NESVuWSvrykhYBzt0yl0AB1eYTDqlBD5ZTCikm1rC4wwBfpBf%2BhyXivtKz7l0p77Zj1JgiLgN5g%2BrfHPKnKdQL%2BULGJFajJTeHMbDO%2BjEDU5dpxfTC%2F%2FafSBjqkAQcsOMOEhZOcIHZFRDgfAo7GVMQ3YK%2FR%2F%2FjPLjDrubWjEOLOaaysQdmttCcc11I65OtsstgoBhH0x361HpqEsOc2dEkLyswmubkbjMVve72vN%2BO%2FKb%2BZntxysvq6GBJ00oFYflhzmJhVEghGyelZRym4qX9rRkUKWHZZ8fRq2FtmU99VNf49c1u3xi7NOkuq1j8%2FhaNnzGmikHNfn70yyOT3ZFTo&X-Amz-Signature=d6a04179ecc3ea37cd0e0482a88eca4599c426e2af126a7b70ec31e402720325&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
